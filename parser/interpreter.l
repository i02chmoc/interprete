/*! 
  \file interpreter.l
  \brief Lexical or scanner file
*/
%{
#include <iostream>

/*********************/
/* NEW in example 4 */
/* atof */
#include <stdlib.h>
/*********************/

/* Macros for the screen */
#include "../includes/macros.hpp"

/*********************/
/* 
  NEW in example 16 
  AST class
  IMPORTANT: must be written before interpreter.tab.h
*/
#include "../ast/ast.hpp"
/*********************/

/*  interpreter.tab.h contains the numeric values of the tokens produced by the parser */
#include "interpreter.tab.h"

/********************/
/* NEW in example 3 */
#include "../error/error.hpp"
/********************/


/*********************************************/
/* NEW in example 7 */
/* Table of symbols */
#include "../table/table.hpp"

#include "../table/numericVariable.hpp"

extern lp::Table table; //!< External Table of Symbols
/*********************************************/

extern int lineNumber; //!< External line counter

/* uso de strdup */
#include <string.h>


%}


/*! \name REGULAR DEFINITIONS  */

DIGIT  [0-9] 

LETTER [a-zA-Z]

NUMBER1 {DIGIT}+\.?

NUMBER2 {DIGIT}*\.{DIGIT}+

 /* NEW in version 0.1 */
NUMBER3	{DIGIT}+(\.{DIGIT}+)?((e|E)[+\-]?{DIGIT}+)?

 /* NEW in version 0.1 */
IDENTIFIER  {LETTER}({LETTER}|{DIGIT}|_({LETTER}|{DIGIT}))* 

 /* NEW in version 0.6 */
CADENA1	"'"([^'])*"'"
CADENA2	\"[^"]*\"

 /* NEW in version 0.5 */
SEPARADOR [ \t\n;]

/* NEW in example 3 */
/* STATE  */
%x ERROR
%option case-insensitive

/*! \name REGULAR EXPRESSIONS  */
%%

[ \t] 	{ ; }    /* skip white space and tabular */

\n      { 
			/* Line counter */
           	lineNumber++; 
	
			/* MODIFIED in example 3 */
			/* COMMENTED in example 5 */
        	/* return NEWLINE; */
        }

";"		{
			/* NEW in example 5 */
			return SEMICOLON;
		}


","		{
			/* NEW in example 14 */
			return COMMA;
		}

{NUMBER1}|{NUMBER2}|{NUMBER3}  {
					  /* MODIFIED in version 0.1 */
					  /* Conversion of type and sending of the numerical value to the parser */
					   yylval.number = atof(yytext); 

                       return NUMBER; 
                      }

 /* NEW in version 0.6 */
 /*! \name STRINGS */
{CADENA1}|{CADENA2}			{	
							memmove(yytext, yytext + 1, yyleng);
							yytext[yyleng - 2] = '\0';

							yylval.variable =  strdup(yytext); 
							return STRING;
						}	


{IDENTIFIER}   		 {
						 /* NEW in example 7 */
						 std::string variable(yytext);

						/* 
                          strdup() function returns a pointer to a new string 
                          which  is a duplicate of the string yytext
                        */
						  yylval.string =  strdup(yytext);

						/* If the identifier is not in the table of symbols then it is inserted */	
						 if (table.lookupSymbol(variable) == false)
							{
								/* 
								 The identifier is inserted into the symbol table 
								 as undefined Variable with value 0.0
								*/
								lp::NumericVariable *n = new lp::NumericVariable(variable,VARIABLE,UNDEFINED,0.0);

								/* A pointer to the new NumericVariable is inserted into the table of symbols */
								table.installSymbol(n);

								return VARIABLE;
							}

						/* MODIFIED in example 11 */
						/* 
							If the identifier is in the table of symbols then its token is returned 
								The identifier can be a variable or a numeric constant
						*/
						else 
							{
								lp::Symbol	*s = table.getSymbol(variable);

/*
								std::cout << "lex: "<< s->getName() 
										  << "token " << s->getToken()
  										  << std::endl; 
*/

								/*  If the identifier is in the table then its token is returned  */
								return s->getToken();
							}
                     }

"-"		{ return MINUS;  } 			/* NEW in example 3 */
"+"		{ return PLUS;   } 			/* NEW in example 3 */
"++"	{ 	return INCREMENT; } 		/* NEW in version 0.2 */
"--"	{ 	return DECREMENT; } 		/* NEW in version 0.2 */
"+:="					{ 	return PLUS_ASSIGN;  } 	    /* New in version 0.5 */
"-:="					{ 	return MINUS_ASSIGN; } 	    /* New in version 0.5 */

"*"	    { return MULTIPLICATION; } 	/* NEW in example 3 */
"/"     { return DIVISION; } 		/* NEW in example 3 */
"//"    { return COCIENTE_DIVISION_ENTERA; } /* NEW in version 0.5 */

"("     { return LPAREN; } 			/* NEW in example 3 */
")"	    { return RPAREN; } 			/* NEW in example 3 */

"%"     { return MODULO; }			/* NEW in example 5 */
"^"	    { return POWER; }			/* NEW in example 5 */
":=" 	{ return ASSIGNMENT; }		/* NEW in version 0.1 */


"=="	{ return EQUAL; }			/* NEW in example 15 */
"<>"	{ return NOT_EQUAL; }		/* NEW in example 15 */
">="	{ return GREATER_OR_EQUAL; }/* NEW in example 15 */
"<="	{ return LESS_OR_EQUAL; }	/* NEW in example 15 */
">"		{ return GREATER_THAN; }	/* NEW in example 15 */
"<"		{ return LESS_THAN; }		/* NEW in example 15 */


"{"		{ return LETFCURLYBRACKET; } 	/* NEW in example 17 */
"}"		{ return RIGHTCURLYBRACKET; }	/* NEW in example 17 */
":"     { return DOS_PUNTOS; }
['"]		{ return COMILLAS;  } 			/* NEW in example 3 */

"||"    { return CONCATENATION;  } 			/* NEW in version 0.6 */

 /* NEW in version 0.1 */
 /*! \name RESERVED WORDS */
{SEPARADOR}"or" { return OR; }
{SEPARADOR}"and" { return AND; }
{SEPARADOR}"not"	{ return NOT; } 

{SEPARADOR}"true" { yylval.logic = true; return BOOL; }
{SEPARADOR}"false" { yylval.logic = false; return BOOL; }

{SEPARADOR}"read" { return READ; }
{SEPARADOR}"read_string" { return READ_STRING; }
{SEPARADOR}"print" { return PRINT; }
{SEPARADOR}"print_string" { return PRINT_STRING; }

{SEPARADOR}"if" { return IF; }
{SEPARADOR}"then" { return THEN; }
{SEPARADOR}"else" { return ELSE; }
{SEPARADOR}"end_if" { return END_IF; }

{SEPARADOR}"while" { return WHILE; }
{SEPARADOR}"do" { return DO; }
{SEPARADOR}"end_while" { return END_WHILE; }

{SEPARADOR}"repeat" { return REPEAT; }
{SEPARADOR}"until" { return UNTIL; }

{SEPARADOR}"for" { return FOR; }
{SEPARADOR}"from" { return FROM; }
{SEPARADOR}"to" { return TO; }
{SEPARADOR}"step" { return STEP; }
{SEPARADOR}"end_for" { return END_FOR; }

{SEPARADOR}"case" { return CASE; }
{SEPARADOR}"value" { return VALUE; }
{SEPARADOR}"default" { return DEFAULT ; }
{SEPARADOR}"end_case" { return END_CASE; }

{SEPARADOR}"clear_screen" { return CLEAR_SCREEN_TOKEN; }
{SEPARADOR}"place" { return PLACE; }


<<EOF>> { /* The interpreter finishes when finds the end of file character */
		/*  PLACE(24,10);
	  	  std::cout <<  BICYAN;
	   	  std::cout <<  ">>>>>>> End of program <<<<<<<";
	 	  std::cout << std::endl;
	   	  std::cout << RESET;
		  PLACE(25,1);
		*/
	  	  return 0;
	}


.								{ 	
									/* Any other character */
									/* MODIFIIED in example 3 */
									/* Change to error state */
									BEGIN(ERROR); 

									/* 
										The current value of yytext 
										will be concatenated with the next character
									*/
									yymore();  
								}

<ERROR>[^0-9+\-*/()\^% \t\n\;a-zA-Z=<>!&]	{ /* MODIFIED in examples 5, 7, 15 */
								  /* NEW in example 3 */
								  /* 
									The current value of yytext 
									will be concatenated with the next character
								  */
									yymore(); 
								}

<ERROR>(.|\n)                { 
								/* NEW in example 3 */
								/* Rewind one position */
								yyless(yyleng-1); 

								/* Display the error message */
								warning("Lexical error", yytext);

								/* Restore the initial state */
   								BEGIN(INITIAL);
							}
%%

