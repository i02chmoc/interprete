/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_INTERPRETER_TAB_H_INCLUDED
# define YY_YY_INTERPRETER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    PRINT = 259,
    READ = 260,
    IF = 261,
    ELSE = 262,
    WHILE = 263,
    LETFCURLYBRACKET = 264,
    RIGHTCURLYBRACKET = 265,
    ASSIGNMENT = 266,
    COMMA = 267,
    DOS_PUNTOS = 268,
    PRINT_STRING = 269,
    READ_STRING = 270,
    THEN = 271,
    END_IF = 272,
    DO = 273,
    END_WHILE = 274,
    REPEAT = 275,
    UNTIL = 276,
    FOR = 277,
    FROM = 278,
    TO = 279,
    STEP = 280,
    END_FOR = 281,
    CASE = 282,
    VALUE = 283,
    DEFAULT = 284,
    END_CASE = 285,
    CLEAR_SCREEN_TOKEN = 286,
    PLACE = 287,
    STRING = 288,
    NUMBER = 289,
    BOOL = 290,
    VARIABLE = 291,
    UNDEFINED = 292,
    CONSTANT = 293,
    BUILTIN = 294,
    OR = 295,
    AND = 296,
    GREATER_OR_EQUAL = 297,
    LESS_OR_EQUAL = 298,
    GREATER_THAN = 299,
    LESS_THAN = 300,
    EQUAL = 301,
    NOT_EQUAL = 302,
    NOT = 303,
    PLUS = 304,
    MINUS = 305,
    MULTIPLICATION = 306,
    DIVISION = 307,
    MODULO = 308,
    PLUS_ASSIGN = 309,
    MINUS_ASSIGN = 310,
    COCIENTE_DIVISION_ENTERA = 311,
    LPAREN = 312,
    RPAREN = 313,
    COMILLAS = 314,
    CONCATENATION = 315,
    UNARY = 316,
    INCREMENT = 317,
    DECREMENT = 318,
    POWER = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 141 "interpreter.y"

char * variable; 			/* NEW in version 0.1 */
  double number;
  char * string; 				 /* NEW in example 7 */
  bool logic;						 /* NEW in example 15 */
  lp::ExpNode *expNode;  			 /* NEW in example 16 */
  std::list<lp::ExpNode *>  *parameters;    // New in example 16; NOTE: #include<list> must be in interpreter.l, init.cpp, interpreter.cpp
  std::list<lp::Statement *> *stmts; /* NEW in example 16 */
  lp::Statement *st;				 /* NEW in example 16 */
  lp::AST *prog;					 /* NEW in example 16 */
  
  lp::OperatorAssignmentNode *opAssignNode; 			/* New in version 0.2 */
  std::list<lp::ValueNode *> *values;  					/* NEW in v. 0.0.5 */  
  lp::ValueNode *individualValue;							/* New in v. 0.0.5 */
  lp::BlockCaseNode *blockCase; 					/* NEW in v. 0.0.5 */

#line 139 "interpreter.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */
