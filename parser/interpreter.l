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

 /* NEW in version 0.1 */
CADENA	"'"([^'\\]|"\\\'"|\\n|\\t)*"'"

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


{IDENTIFIER}   		 {
						 /* NEW in example 7 */
						 std::string identifier(yytext);

						/* 
                          strdup() function returns a pointer to a new string 
                          which  is a duplicate of the string yytext
                        */
						  yylval.string =  strdup(yytext);

						/* If the identifier is not in the table of symbols then it is inserted */	
						 if (table.lookupSymbol(identifier) == false)
							{
								/* 
								 The identifier is inserted into the symbol table 
								 as undefined Variable with value 0.0
								*/
								lp::NumericVariable *n = new lp::NumericVariable(identifier,VARIABLE,UNDEFINED,0.0);

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
								lp::Symbol	*s = table.getSymbol(identifier);

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

"*"	    { return MULTIPLICATION; } 	/* NEW in example 3 */
"/"     { return DIVISION; } 		/* NEW in example 3 */
   /* "//"    { return COCIENTE_DIVISION_ENTERA; }  NEW in version 0.2 */

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

"!"		{ return NOT; }				/* NEW in example 15 */

"||"	{ return OR; }				/* NEW in example 15 */

"&&"	{ return AND; }				/* NEW in example 15 */

"{"		{ return LETFCURLYBRACKET; } 	/* NEW in example 17 */

"}"		{ return RIGHTCURLYBRACKET; }	/* NEW in example 17 */

 /* NEW in version 0.1 */
 /*! \name STRINGS */
{CADENA}				{	
							memmove(yytext, yytext + 1, yyleng);
							yytext[yyleng - 2] = '\0';

							yylval.identifier =  strdup(yytext); 
							return STRING;
						}	

 /* NEW in version 0.1 */
 /*! \name RESERVED WORDS */
"or"[ \t\n] { return OR; }
"and"[ \t\n] { return AND; }
"not"[ \t\n]	{ return NOT; } 

"true"[ \t\n] { yylval.logic = true; return BOOL; }
"false"[ \t\n] { yylval.logic = false; return BOOL; }

"read"[ \t\n] { return READ; }
"read_string"[ \t\n] { return READ_STRING; }
"print"[ \t\n] { return PRINT; }
"print_string"[ \t\n] { return PRINT_STRING; }

"if"[ \t\n] { return IF; }
"then"[ \t\n] { return THEN; }
"else"[ \t\n] { return ELSE; }
"end_if"[ \t\n] { return END_IF; }

"while"[ \t\n] { return WHILE; }
"do"[ \t\n] { return DO; }
"end_while"[ \t\n] { return END_WHILE; }

"repeat"[ \t\n] { return REPEAT; }
"until"[ \t\n] { return UNTIL; }

"for"[ \t\n] { return FOR; }
"from"[ \t\n] { return FROM; }
"to"[ \t\n] { return TO; }
"step"[ \t\n] { return STEP; }
"end_for"[ \t\n] { return END_FOR; }

"case"[ \t\n] { return CASE; }
"value"[ \t\n] { return VALUE; }
"default"[ \t\n] { return DEFAULT ; }
"end_case"[ \t\n] { return END_CASE; }

"clear_screen"[ \t\n] { return CLEAR_SCREEN_TOKEN; }
"place"[ \t\n] { return PLACE; }


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

