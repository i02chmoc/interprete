/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "interpreter.y"

#include <iostream>
#include <string>

/*******************************************/
/* NEW in example 5 */
/* pow */
#include <math.h>
/*******************************************/

/*******************************************/
/* NEW in example 6 */
/* Use for recovery of runtime errors */
#include <setjmp.h>
#include <signal.h>
/*******************************************/

/* Error recovery functions */
#include "../error/error.hpp"

/* Macros for the screen */
#include "../includes/macros.hpp"


/*******************************************/
/* 
  NEW in example 16
  AST class
  IMPORTANT: this file must be before init.hpp
*/
#include "../ast/ast.hpp"


/*******************************************/
/* NEW in example 7 */
/* Table of symbol */
#include "../table/table.hpp"
/*******************************************/

/*******************************************/
#include "../table/numericVariable.hpp"
/*******************************************/

/* NEW in example 15 */
#include "../table/logicalVariable.hpp"

/*******************************************/
/* NEW in example 11 */
#include "../table/numericConstant.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 15 */
#include "../table/logicalConstant.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 13 */
#include "../table/builtinParameter1.hpp"
/*******************************************/

/*******************************************/
/* NEW in example 14 */
#include "../table/builtinParameter0.hpp"
#include "../table/builtinParameter2.hpp"
/*******************************************/


/*******************************************/
/* NEW in example 10 */
#include "../table/init.hpp"
/*******************************************/

/*! 
	\brief  Lexical or scanner function
	\return int
	\note   C++ requires that yylex returns an int value
	\sa     yyparser
*/
int yylex();


extern int lineNumber; //!< External line counter


/* NEW in example 15 */
extern bool interactiveMode; //!< Control the interactive mode of execution of the interpreter

/* New in example 17 */
extern int control; //!< External: to control the interactive mode in "if" and "while" sentences 




/***********************************************************/
/* NEW in example 2 */
extern std::string progname; //!<  Program name
/***********************************************************/

/*******************************************/
/* NEW in example 6 */
/*
 jhmp_buf
    This is an array type capable of storing the information of a calling environment to be restored later.
   This information is filled by calling macro setjmp and can be restored by calling function longjmp.
*/
jmp_buf begin; //!<  It enables recovery of runtime errors 
/*******************************************/


/*******************************************/
/* NEW in example 7 */
extern lp::Table table; //!< Extern Table of Symbols

/*******************************************/
/* NEW in example 16 */
extern lp::AST *root; //!< External root of the abstract syntax tree AST


#line 190 "interpreter.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 324 "interpreter.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_INTERPRETER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   886

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

#define YYUNDEFTOK  2
#define YYMAXUTOK   319


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   262,   262,   276,   281,   304,   315,   320,   325,   330,
     336,   342,   348,   354,   360,   366,   372,   378,   384,   390,
     396,   405,   412,   417,   425,   430,   435,   440,   446,   452,
     459,   467,   476,   486,   497,   508,   519,   528,   540,   549,
     561,   565,   573,   578,   591,   599,   606,   614,   620,   625,
     631,   636,   642,   649,   656,   663,   669,   675,   681,   687,
     693,   700,   706,   712,   718,   724,   731,   737,   743,   750,
     797,   803,   809,   815,   821,   827,   833,   839,   845,   851,
     863,   868,   879,   884
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "PRINT", "READ", "IF",
  "ELSE", "WHILE", "LETFCURLYBRACKET", "RIGHTCURLYBRACKET", "ASSIGNMENT",
  "COMMA", "DOS_PUNTOS", "PRINT_STRING", "READ_STRING", "THEN", "END_IF",
  "DO", "END_WHILE", "REPEAT", "UNTIL", "FOR", "FROM", "TO", "STEP",
  "END_FOR", "CASE", "VALUE", "DEFAULT", "END_CASE", "CLEAR_SCREEN_TOKEN",
  "PLACE", "STRING", "NUMBER", "BOOL", "VARIABLE", "UNDEFINED", "CONSTANT",
  "BUILTIN", "OR", "AND", "GREATER_OR_EQUAL", "LESS_OR_EQUAL",
  "GREATER_THAN", "LESS_THAN", "EQUAL", "NOT_EQUAL", "NOT", "PLUS",
  "MINUS", "MULTIPLICATION", "DIVISION", "MODULO", "PLUS_ASSIGN",
  "MINUS_ASSIGN", "COCIENTE_DIVISION_ENTERA", "LPAREN", "RPAREN",
  "COMILLAS", "CONCATENATION", "UNARY", "INCREMENT", "DECREMENT", "POWER",
  "$accept", "program", "stmtlist", "stmt", "print_string", "read_string",
  "inc", "block", "controlSymbol", "if", "while", "repeat", "for", "case",
  "valuelist", "value", "defaultvalue", "cond", "clear_screen", "place",
  "asgn", "print", "read", "exp", "listOfExp", "restOfListOfExp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -52,     3,    82,   -52,   -52,   -52,   -29,   -51,   -52,   -52,
     -52,   -29,   -41,   -52,   -52,   -52,   -52,   -40,    -3,    12,
     -12,     2,   -52,    43,    54,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,    61,    62,    98,   -52,   -52,   -52,
     -52,    48,   -29,   -29,   -29,   -29,   752,    70,    58,    58,
     282,   752,    74,   -52,    80,    60,   -29,     6,   -29,   -29,
     -52,   -52,     6,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -29,   -38,    55,    55,   652,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,    63,    64,   -29,   109,   108,   -52,    69,    72,   320,
     105,   -29,   511,   122,    12,   -52,   752,   752,   752,   -52,
     752,   537,    76,   -52,   776,   799,   822,   822,   822,   822,
     822,   822,    47,    47,   -23,   -23,   -23,   -23,    55,    55,
     -52,   -52,   677,   -52,   -52,   -52,   -52,    58,   -29,   702,
     -29,   -29,   -52,   -52,   -52,   244,   358,   132,   627,   -52,
     727,   537,   -52,   -52,   -52,   -52,   -29,    65,   -52,   -52,
     396,   567,    24,   123,   -52,   -52,   107,   -52,   -52,   -29,
     125,   126,   -52,   -52,   434,   597,   -52,   -52,   472,   -52,
     -52,   168,   206,   510,   -52
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     1,     5,     6,     0,     0,    31,    31,
       3,     0,     0,    31,    31,    31,    46,     0,     0,     0,
       0,     0,     4,     0,     0,    13,    12,    10,    11,    14,
      15,    16,    17,    18,     0,     0,     0,    56,    55,    67,
      68,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,    21,     0,     3,     0,     0,     0,     0,     0,     0,
      24,    26,     0,    25,    27,    19,    20,     7,     8,     9,
      80,    78,    63,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,     0,    67,    68,    49,    48,    28,    29,    51,
      50,    82,     0,    62,    77,    76,    71,    73,    70,    72,
      74,    75,    57,    58,    59,    60,    65,    61,    79,    66,
      53,    54,     0,     3,     3,    22,    23,     0,     0,     0,
       0,     0,    81,    69,    45,     0,     0,     0,     0,    40,
       0,    82,     3,    32,    34,    35,     0,     0,    47,    83,
       0,     0,     0,     0,    38,    41,     0,    33,     3,     0,
       0,     0,     3,    39,     0,     0,     3,     3,     0,    36,
       3,     0,     0,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -10,   -52,   -52,   -52,   -52,   -52,    16,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -48,   -52,   -52,
     -30,   -52,   -52,    -9,   -52,   -11
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    22,    23,    24,    25,    26,    48,    27,
      28,    29,    30,    31,   157,   165,   166,    94,    32,    33,
      34,    35,    36,    46,   112,   142
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    95,    51,     3,    37,    38,    47,    39,    57,    40,
      41,    83,    84,    85,    86,    87,    52,    56,    88,    42,
      43,    44,    89,    62,    63,    49,    90,   105,    45,    53,
      54,    55,   109,    71,    72,    73,    74,    89,    64,    37,
      38,    90,   103,    99,   104,    41,    65,   102,   106,   107,
     108,    58,    59,   110,    42,    43,    44,    66,   170,    60,
      61,   111,   171,    45,    67,    68,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    -2,     4,   132,     5,     6,     7,     8,   147,
       9,    10,   139,   162,   163,   164,    11,    12,    85,    86,
      87,    69,    13,    88,    14,    70,    91,    89,    92,    15,
      97,    90,    98,    16,    17,    93,   100,   101,    18,    90,
      19,   130,   131,   145,   146,   133,   134,   135,   138,   148,
     136,   150,   151,    57,   143,   155,   172,   173,   176,   177,
     159,     0,   160,     0,    20,    21,     0,   161,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   174,     0,
     175,     0,   178,     0,     0,     0,   181,   182,     0,     4,
     183,     5,     6,     7,     8,     0,     9,    10,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,     0,     0,     0,     0,    15,   -42,   -42,   -42,    16,
      17,     0,     0,     0,    18,     0,    19,     4,     0,     5,
       6,     7,     8,     0,     9,    10,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,     0,
      20,    21,     0,    15,   -43,   -43,   -43,    16,    17,     0,
       0,     0,    18,     0,    19,     4,     0,     5,     6,     7,
       8,   152,     9,    10,     0,     0,     0,     0,    11,    12,
       0,   153,     0,     0,    13,     0,    14,     0,    20,    21,
       0,    15,     0,     0,     0,    16,    17,     0,     0,     0,
      18,     0,    19,     4,     0,     5,     6,     7,     8,     0,
       9,    10,    96,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,     0,    20,    21,     0,    15,
       0,     0,     0,    16,    17,     0,     0,     0,    18,     0,
      19,     4,     0,     5,     6,     7,     8,     0,     9,    10,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,   137,    14,     0,    20,    21,     0,    15,     0,     0,
       0,    16,    17,     0,     0,     0,    18,     0,    19,     4,
       0,     5,     6,     7,     8,     0,     9,    10,     0,     0,
       0,     0,    11,    12,     0,     0,     0,   154,    13,     0,
      14,     0,    20,    21,     0,    15,     0,     0,     0,    16,
      17,     0,     0,     0,    18,     0,    19,     4,     0,     5,
       6,     7,     8,     0,     9,    10,     0,     0,     0,     0,
      11,    12,     0,   167,     0,     0,    13,     0,    14,     0,
      20,    21,     0,    15,     0,     0,     0,    16,    17,     0,
       0,     0,    18,     0,    19,     4,     0,     5,     6,     7,
       8,     0,     9,    10,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,     0,    20,    21,
     179,    15,     0,     0,     0,    16,    17,     0,     0,     0,
      18,     0,    19,     4,     0,     5,     6,     7,     8,     0,
       9,    10,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,     0,    20,    21,     0,    15,
       0,     0,   -44,    16,    17,     0,     0,     0,    18,     0,
      19,     4,     0,     5,     6,     7,     8,     0,     9,    10,
       0,     0,     0,   140,    11,    12,     0,     0,     0,     0,
      13,     0,    14,     0,    20,    21,   184,    15,     0,     0,
       0,    16,    17,     0,     0,     0,    18,     0,    19,   141,
       0,    75,    76,    77,    78,    79,    80,    81,    82,     0,
      83,    84,    85,    86,    87,     0,     0,    88,     0,     0,
       0,    89,    20,    21,     0,    90,     0,    75,    76,    77,
      78,    79,    80,    81,    82,   168,    83,    84,    85,    86,
      87,     0,   169,    88,     0,     0,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,   180,    83,    84,    85,    86,
      87,     0,     0,    88,     0,     0,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    85,    86,
      87,   156,     0,    88,     0,     0,     0,    89,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    85,    86,
      87,     0,     0,    88,     0,     0,     0,    89,     0,     0,
       0,    90,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,     0,     0,    88,     0,
     113,     0,    89,     0,     0,     0,    90,    75,    76,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    85,    86,
      87,     0,     0,    88,     0,   144,     0,    89,     0,     0,
       0,    90,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,     0,     0,    88,     0,
     149,     0,    89,     0,     0,     0,    90,    75,    76,    77,
      78,    79,    80,    81,    82,     0,    83,    84,    85,    86,
      87,     0,     0,    88,     0,   158,     0,    89,     0,     0,
       0,    90,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    86,    87,     0,     0,    88,     0,
       0,     0,    89,     0,     0,     0,    90,    76,    77,    78,
      79,    80,    81,    82,     0,    83,    84,    85,    86,    87,
       0,     0,    88,     0,     0,     0,    89,     0,     0,     0,
      90,    77,    78,    79,    80,    81,    82,     0,    83,    84,
      85,    86,    87,     0,     0,    88,     0,     0,     0,    89,
       0,     0,     0,    90,   -45,   -45,   -45,   -45,   -45,   -45,
       0,    83,    84,    85,    86,    87,     0,     0,    88,     0,
       0,     0,    89,     0,     0,     0,    90
};

static const yytype_int16 yycheck[] =
{
      10,    49,    11,     0,    33,    34,    57,    36,    11,    38,
      39,    49,    50,    51,    52,    53,    57,    57,    56,    48,
      49,    50,    60,    11,    36,     9,    64,    57,    57,    13,
      14,    15,    62,    42,    43,    44,    45,    60,    36,    33,
      34,    64,    36,    53,    38,    39,     3,    56,    57,    58,
      59,    54,    55,    62,    48,    49,    50,     3,    34,    62,
      63,    70,    38,    57,     3,     3,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,     0,     1,    93,     3,     4,     5,     6,   137,
       8,     9,   101,    28,    29,    30,    14,    15,    51,    52,
      53,     3,    20,    56,    22,    57,    36,    60,    38,    27,
      36,    64,    38,    31,    32,    57,    36,    57,    36,    64,
      38,    58,    58,   133,   134,    16,    18,    58,    23,   138,
      58,   140,   141,    11,    58,     3,    13,    30,    13,    13,
     151,    -1,   152,    -1,    62,    63,    -1,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
     169,    -1,   172,    -1,    -1,    -1,   176,   177,    -1,     1,
     180,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    36,    -1,    38,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    -1,    -1,    20,    -1,    22,    -1,
      62,    63,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    17,    -1,    -1,    20,    -1,    22,    -1,    62,    63,
      -1,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    62,    63,    -1,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    36,    -1,
      38,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    14,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    62,    63,    -1,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    19,    20,    -1,
      22,    -1,    62,    63,    -1,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    36,    -1,    38,     1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    17,    -1,    -1,    20,    -1,    22,    -1,
      62,    63,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    36,    -1,    38,     1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    14,    15,
      -1,    -1,    -1,    -1,    20,    -1,    22,    -1,    62,    63,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,     1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    14,    15,    -1,    -1,
      -1,    -1,    20,    -1,    22,    -1,    62,    63,    -1,    27,
      -1,    -1,    30,    31,    32,    -1,    -1,    -1,    36,    -1,
      38,     1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    12,    14,    15,    -1,    -1,    -1,    -1,
      20,    -1,    22,    -1,    62,    63,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    36,    -1,    38,    12,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    60,    62,    63,    -1,    64,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    18,    49,    50,    51,    52,
      53,    -1,    25,    56,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    18,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    24,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    64,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    64,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    64,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    -1,    60,    -1,    -1,    -1,    64,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    -1,    60,    -1,    -1,
      -1,    64,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    50,    51,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    64,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    64
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    66,    67,     0,     1,     3,     4,     5,     6,     8,
       9,    14,    15,    20,    22,    27,    31,    32,    36,    38,
      62,    63,    68,    69,    70,    71,    72,    74,    75,    76,
      77,    78,    83,    84,    85,    86,    87,    33,    34,    36,
      38,    39,    48,    49,    50,    57,    88,    57,    73,    73,
      67,    88,    57,    73,    73,    73,    57,    11,    54,    55,
      62,    63,    11,    36,    36,     3,     3,     3,     3,     3,
      57,    88,    88,    88,    88,    40,    41,    42,    43,    44,
      45,    46,    47,    49,    50,    51,    52,    53,    56,    60,
      64,    36,    38,    57,    82,    82,    10,    36,    38,    67,
      36,    57,    88,    36,    38,    85,    88,    88,    88,    85,
      88,    88,    89,    58,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      58,    58,    88,    16,    18,    58,    58,    21,    23,    88,
      12,    12,    90,    58,    58,    67,    67,    82,    88,    58,
      88,    88,     7,    17,    19,     3,    24,    79,    58,    90,
      67,    88,    28,    29,    30,    80,    81,    17,    18,    25,
      34,    38,    13,    30,    67,    88,    13,    13,    67,    26,
      18,    67,    67,    67,    26
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    65,    66,    67,    67,    67,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    73,    74,    74,    75,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    82,    83,    84,    85,    85,
      85,    85,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    90,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     4,     4,     2,     2,     2,     2,     3,     3,
       3,     0,     6,     8,     6,     6,    10,    12,     7,     8,
       0,     2,     4,     4,     3,     3,     1,     6,     3,     3,
       3,     3,     2,     4,     4,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       0,     2,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 263 "interpreter.y"
                  { 
		    // Create a new AST
			(yyval.prog) = new lp::AST((yyvsp[0].stmts)); 

			// Assign the AST to the root
			root = (yyval.prog); 

			// End of parsing
			//	return 1;
		  }
#line 1778 "interpreter.tab.c"
    break;

  case 3:
#line 276 "interpreter.y"
                  { 
			// create a empty list of statements
			(yyval.stmts) = new std::list<lp::Statement *>(); 
		  }
#line 1787 "interpreter.tab.c"
    break;

  case 4:
#line 282 "interpreter.y"
                  { 
			// copy up the list and add the stmt to it
			(yyval.stmts) = (yyvsp[-1].stmts);
			(yyval.stmts)->push_back((yyvsp[0].st));

			// Control the interative mode of execution of the interpreter
			if (interactiveMode == true && control == 0)
 			{
				for(std::list<lp::Statement *>::iterator it = (yyval.stmts)->begin(); 
						it != (yyval.stmts)->end(); 
						it++)
				{
					(*it)->printAST();
					(*it)->evaluate();
					
				}

				// Delete the AST code, because it has already run in the interactive mode.
				(yyval.stmts)->clear();
			}
		}
#line 1813 "interpreter.tab.c"
    break;

  case 5:
#line 305 "interpreter.y"
      { 
			 // just copy up the stmtlist when an error occurs
			 (yyval.stmts) = (yyvsp[-1].stmts);

			 // The previous look-ahead token ought to be discarded with `yyclearin;'
			 yyclearin; 
       }
#line 1825 "interpreter.tab.c"
    break;

  case 6:
#line 316 "interpreter.y"
          {
		// Create a new empty statement node
		(yyval.st) = new lp::EmptyStmt(); 
	  }
#line 1834 "interpreter.tab.c"
    break;

  case 7:
#line 321 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1843 "interpreter.tab.c"
    break;

  case 8:
#line 326 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1852 "interpreter.tab.c"
    break;

  case 9:
#line 331 "interpreter.y"
          {
		// Default action
		// $$ = $1;
	  }
#line 1861 "interpreter.tab.c"
    break;

  case 10:
#line 337 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1870 "interpreter.tab.c"
    break;

  case 11:
#line 343 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1879 "interpreter.tab.c"
    break;

  case 12:
#line 349 "interpreter.y"
         {
		// Default action
		// $$ = $1;
	 }
#line 1888 "interpreter.tab.c"
    break;

  case 13:
#line 355 "interpreter.y"
         {
		 // Default action
		 // $$ = $1;
	 }
#line 1897 "interpreter.tab.c"
    break;

  case 14:
#line 361 "interpreter.y"
    {
		 // Default action
		 // $$ = $1;
	 }
#line 1906 "interpreter.tab.c"
    break;

  case 15:
#line 367 "interpreter.y"
    {
		 // Default action
		 // $$ = $1;
	 }
#line 1915 "interpreter.tab.c"
    break;

  case 16:
#line 373 "interpreter.y"
    {
		 // Default action
		 // $$ = $1;
	 }
#line 1924 "interpreter.tab.c"
    break;

  case 17:
#line 379 "interpreter.y"
    {
		 // Default action
		 // $$ = $1;
	 }
#line 1933 "interpreter.tab.c"
    break;

  case 18:
#line 385 "interpreter.y"
         {
		 // Default action
		 // $$ = $1;
	 }
#line 1942 "interpreter.tab.c"
    break;

  case 19:
#line 391 "interpreter.y"
            {
			// Default action
			// $$ = $1;
		}
#line 1951 "interpreter.tab.c"
    break;

  case 20:
#line 397 "interpreter.y"
            {
			// Default action
			// $$ = $1;
		}
#line 1960 "interpreter.tab.c"
    break;

  case 21:
#line 406 "interpreter.y"
                           {	
				   // Create a new print node
			 		(yyval.st) = new lp::PrintStringStmt((yyvsp[0].expNode));
			   }
#line 1969 "interpreter.tab.c"
    break;

  case 22:
#line 413 "interpreter.y"
                                {
					// Create a new read_string node
					(yyval.st) = new lp::ReadStringStmt((yyvsp[-1].variable));
				}
#line 1978 "interpreter.tab.c"
    break;

  case 23:
#line 418 "interpreter.y"
                                {
					execerror("Semantic error in \"read_string statement\": it is not allowed to modify a constant ",(yyvsp[-1].variable));
				}
#line 1986 "interpreter.tab.c"
    break;

  case 24:
#line 426 "interpreter.y"
                { 
			// Create a new IncrementNode
			(yyval.opAssignNode) = new lp::IncrementNode((yyvsp[-1].variable), 1);
		}
#line 1995 "interpreter.tab.c"
    break;

  case 25:
#line 431 "interpreter.y"
                { 
			// Create a new IncrementNode
			(yyval.opAssignNode) = new lp::IncrementNode((yyvsp[0].variable), 1);		 
		 }
#line 2004 "interpreter.tab.c"
    break;

  case 26:
#line 436 "interpreter.y"
        {
			// Create a new IncrementNode
			(yyval.opAssignNode) = new lp::IncrementNode((yyvsp[-1].variable), -1);
		}
#line 2013 "interpreter.tab.c"
    break;

  case 27:
#line 441 "interpreter.y"
        {
			// Create a new IncrementNode
			(yyval.opAssignNode) = new lp::IncrementNode((yyvsp[0].variable), -1);
		}
#line 2022 "interpreter.tab.c"
    break;

  case 28:
#line 447 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.opAssignNode) = new lp::IncrementNode((yyvsp[-2].variable), (yyvsp[0].expNode), 1);
		}
#line 2031 "interpreter.tab.c"
    break;

  case 29:
#line 453 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.opAssignNode) = new lp::IncrementNode((yyvsp[-2].variable), (yyvsp[0].expNode), -1);
		}
#line 2040 "interpreter.tab.c"
    break;

  case 30:
#line 460 "interpreter.y"
                {
			// Create a new block of statements node
			(yyval.st) = new lp::BlockStmt((yyvsp[-1].stmts)); 
		}
#line 2049 "interpreter.tab.c"
    break;

  case 31:
#line 467 "interpreter.y"
                {
			// To control the interactive mode in "if" and "while" sentences
			control++;
		}
#line 2058 "interpreter.tab.c"
    break;

  case 32:
#line 477 "interpreter.y"
    {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmtlist((yyvsp[-3].expNode), (yyvsp[-1].stmts));

		// To control the interactive mode
		control--;
	}
#line 2070 "interpreter.tab.c"
    break;

  case 33:
#line 487 "interpreter.y"
         {
		// Create a new if statement node
		(yyval.st) = new lp::IfStmtlist((yyvsp[-5].expNode), (yyvsp[-3].stmts), (yyvsp[-1].stmts));

		// To control the interactive mode
		control--;
	 }
#line 2082 "interpreter.tab.c"
    break;

  case 34:
#line 498 "interpreter.y"
                {
			// Create a new while statement node
			(yyval.st) = new lp::WhileStmtlist((yyvsp[-3].expNode), (yyvsp[-1].stmts));

			// To control the interactive mode
			control--;
    }
#line 2094 "interpreter.tab.c"
    break;

  case 35:
#line 509 "interpreter.y"
                {
			// Create a new repeat statement node
			(yyval.st) = new lp::RepeatStmtlist((yyvsp[-3].stmts), (yyvsp[-1].expNode));

            // To control the interactive mode
			control--;	
    }
#line 2106 "interpreter.tab.c"
    break;

  case 36:
#line 520 "interpreter.y"
                {
			// Create a new for statement node
			(yyval.st) = new lp::ForStmtlist((yyvsp[-7].variable), (yyvsp[-5].expNode), (yyvsp[-3].expNode), (yyvsp[-1].stmts));

			// To control the interactive mode
			control--;
    	}
#line 2118 "interpreter.tab.c"
    break;

  case 37:
#line 529 "interpreter.y"
                {
			// Create a new for statement node
			(yyval.st) = new lp::ForStmtlist((yyvsp[-9].variable), (yyvsp[-7].expNode), (yyvsp[-5].expNode), (yyvsp[-1].stmts), (yyvsp[-3].expNode));

			// To control the interactive mode
			control--;
		}
#line 2130 "interpreter.tab.c"
    break;

  case 38:
#line 541 "interpreter.y"
        {	
		// Create a new do statement node
		(yyval.blockCase) = new lp::BlockCaseNode((yyvsp[-3].expNode), (yyvsp[-1].values));

		// To control the interactive mode
		control--;
	}
#line 2142 "interpreter.tab.c"
    break;

  case 39:
#line 550 "interpreter.y"
        {	
		// Create a new do statement node
		(yyval.blockCase) = new lp::BlockCaseNode((yyvsp[-4].expNode), (yyvsp[-2].values), (yyvsp[-1].individualValue));
		
		// To control the interactive mode
		control--;
	}
#line 2154 "interpreter.tab.c"
    break;

  case 40:
#line 561 "interpreter.y"
                  { 
			(yyval.values) = new std::list<lp::ValueNode *>(); 
		  }
#line 2162 "interpreter.tab.c"
    break;

  case 41:
#line 566 "interpreter.y"
                  { 
			(yyval.values) = (yyvsp[-1].values);
			(yyval.values)->push_back((yyvsp[0].individualValue));
		}
#line 2171 "interpreter.tab.c"
    break;

  case 42:
#line 574 "interpreter.y"
          {	
		  	lp::ExpNode * exp = new lp::NumberNode((yyvsp[-2].number));
			(yyval.individualValue) = new lp::ValueNode(exp, (yyvsp[0].stmts));
	  }
#line 2180 "interpreter.tab.c"
    break;

  case 43:
#line 579 "interpreter.y"
          {
		  	lp::ExpNode * exp = new lp::ConstantNode((yyvsp[-2].variable));
			(yyval.individualValue) = new lp::ValueNode(exp, (yyvsp[0].stmts));
	  }
#line 2189 "interpreter.tab.c"
    break;

  case 44:
#line 592 "interpreter.y"
                        {
				// Create a new case node
				(yyval.individualValue) = new lp::ValueNode(NULL, (yyvsp[0].stmts));
			}
#line 2198 "interpreter.tab.c"
    break;

  case 45:
#line 600 "interpreter.y"
                { 
			(yyval.expNode) = (yyvsp[-1].expNode);
		}
#line 2206 "interpreter.tab.c"
    break;

  case 46:
#line 607 "interpreter.y"
                                {
					// Create a new ClearScreenStmt
					(yyval.st) = new lp::ClearScreenStmt();
				}
#line 2215 "interpreter.tab.c"
    break;

  case 47:
#line 615 "interpreter.y"
                {
			(yyval.st) = new lp::PlaceStmt((yyvsp[-3].expNode), (yyvsp[-1].expNode));
		}
#line 2223 "interpreter.tab.c"
    break;

  case 48:
#line 621 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].variable), (yyvsp[0].expNode));
		}
#line 2232 "interpreter.tab.c"
    break;

  case 49:
#line 626 "interpreter.y"
                { 
			// Create a new assignment node
			(yyval.st) = new lp::AssignmentStmt((yyvsp[-2].variable), (lp::AssignmentStmt *) (yyvsp[0].st));
		}
#line 2241 "interpreter.tab.c"
    break;

  case 50:
#line 632 "interpreter.y"
                {   
 			execerror("Semantic error in assignment: it is not allowed to modify a constant ", (yyvsp[-2].variable));
		}
#line 2249 "interpreter.tab.c"
    break;

  case 51:
#line 637 "interpreter.y"
                {   
 			execerror("Semantic error in multiple assignment: it is not allowed to modify a constant ",(yyvsp[-2].variable));
		}
#line 2257 "interpreter.tab.c"
    break;

  case 52:
#line 643 "interpreter.y"
                {
			// Create a new print node
			 (yyval.st) = new lp::PrintStmt((yyvsp[0].expNode));
		}
#line 2266 "interpreter.tab.c"
    break;

  case 53:
#line 650 "interpreter.y"
                {
			// Create a new read node
			 (yyval.st) = new lp::ReadStmt((yyvsp[-1].variable));
		}
#line 2275 "interpreter.tab.c"
    break;

  case 54:
#line 657 "interpreter.y"
                {   
 			execerror("Semantic error in \"read statement\": it is not allowed to modify a constant ",(yyvsp[-1].variable));
		}
#line 2283 "interpreter.tab.c"
    break;

  case 55:
#line 664 "interpreter.y"
                { 
			// Create a new number node
			(yyval.expNode) = new lp::NumberNode((yyvsp[0].number));
		}
#line 2292 "interpreter.tab.c"
    break;

  case 56:
#line 670 "interpreter.y"
                { 
			// Create a new String node
			(yyval.expNode) = new lp::StringNode((yyvsp[0].string));
		}
#line 2301 "interpreter.tab.c"
    break;

  case 57:
#line 676 "interpreter.y"
                { 
			// Create a new plus node
			 (yyval.expNode) = new lp::PlusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		 }
#line 2310 "interpreter.tab.c"
    break;

  case 58:
#line 682 "interpreter.y"
        {
			// Create a new minus node
			(yyval.expNode) = new lp::MinusNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2319 "interpreter.tab.c"
    break;

  case 59:
#line 688 "interpreter.y"
                { 
			// Create a new multiplication node
			(yyval.expNode) = new lp::MultiplicationNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2328 "interpreter.tab.c"
    break;

  case 60:
#line 694 "interpreter.y"
                {
		  // Create a new division node	
		  (yyval.expNode) = new lp::DivisionNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2337 "interpreter.tab.c"
    break;

  case 61:
#line 701 "interpreter.y"
                {
		  // Create a new division entera node	
		  (yyval.expNode) = new lp::DivisionEnteraNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
	   }
#line 2346 "interpreter.tab.c"
    break;

  case 62:
#line 707 "interpreter.y"
        { 
		    // just copy up the expression node 
			(yyval.expNode) = (yyvsp[-1].expNode);
		 }
#line 2355 "interpreter.tab.c"
    break;

  case 63:
#line 713 "interpreter.y"
                { 
		  // Create a new unary plus node	
  		  (yyval.expNode) = new lp::UnaryPlusNode((yyvsp[0].expNode));
		}
#line 2364 "interpreter.tab.c"
    break;

  case 64:
#line 719 "interpreter.y"
                { 
		  // Create a new unary minus node	
  		  (yyval.expNode) = new lp::UnaryMinusNode((yyvsp[0].expNode));
		}
#line 2373 "interpreter.tab.c"
    break;

  case 65:
#line 725 "interpreter.y"
                {
		  // Create a new modulo node	

		  (yyval.expNode) = new lp::ModuloNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
       }
#line 2383 "interpreter.tab.c"
    break;

  case 66:
#line 732 "interpreter.y"
        { 
		  // Create a new power node	
  		  (yyval.expNode) = new lp::PowerNode((yyvsp[-2].expNode), (yyvsp[0].expNode));
		}
#line 2392 "interpreter.tab.c"
    break;

  case 67:
#line 738 "interpreter.y"
                {
		  // Create a new variable node	
		  (yyval.expNode) = new lp::VariableNode((yyvsp[0].variable));
		}
#line 2401 "interpreter.tab.c"
    break;

  case 68:
#line 744 "interpreter.y"
                {
		  // Create a new constant node	
		  (yyval.expNode) = new lp::ConstantNode((yyvsp[0].variable));

		}
#line 2411 "interpreter.tab.c"
    break;

  case 69:
#line 751 "interpreter.y"
                {
			// Get the identifier in the table of symbols as Builtin
			lp::Builtin *f= (lp::Builtin *) table.getSymbol((yyvsp[-3].variable));

			// Check the number of parameters 
			if (f->getNParameters() ==  (int) (yyvsp[-1].parameters)->size())
			{
				switch(f->getNParameters())
				{
					case 0:
						{
							// Create a new Builtin Function with 0 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_0((yyvsp[-3].variable));
						}
						break;

					case 1:
						{
							// Get the expression from the list of expressions
							lp::ExpNode *e = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 1 parameter node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_1((yyvsp[-3].variable),e);
						}
						break;

					case 2:
						{
							// Get the expressions from the list of expressions
							lp::ExpNode *e1 = (yyvsp[-1].parameters)->front();
							(yyvsp[-1].parameters)->pop_front();
							lp::ExpNode *e2 = (yyvsp[-1].parameters)->front();

							// Create a new Builtin Function with 2 parameters node	
							(yyval.expNode) = new lp::BuiltinFunctionNode_2((yyvsp[-3].variable),e1,e2);
						}
						break;

					default:
				  			 execerror("Syntax error: too many parameters for function ", (yyvsp[-3].variable));
				} 
			}
			else
	  			 execerror("Syntax error: incompatible number of parameters for function", (yyvsp[-3].variable));
		}
#line 2461 "interpreter.tab.c"
    break;

  case 70:
#line 798 "interpreter.y"
                {
		  // Create a new "greater than" node	
 			(yyval.expNode) = new lp::GreaterThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2470 "interpreter.tab.c"
    break;

  case 71:
#line 804 "interpreter.y"
                {
		  // Create a new "greater or equal" node	
 			(yyval.expNode) = new lp::GreaterOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2479 "interpreter.tab.c"
    break;

  case 72:
#line 810 "interpreter.y"
                {
		  // Create a new "less than" node	
 			(yyval.expNode) = new lp::LessThanNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2488 "interpreter.tab.c"
    break;

  case 73:
#line 816 "interpreter.y"
                {
		  // Create a new "less or equal" node	
 			(yyval.expNode) = new lp::LessOrEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2497 "interpreter.tab.c"
    break;

  case 74:
#line 822 "interpreter.y"
                {
		  // Create a new "equal" node	
 			(yyval.expNode) = new lp::EqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2506 "interpreter.tab.c"
    break;

  case 75:
#line 828 "interpreter.y"
                {
		  // Create a new "not equal" node	
 			(yyval.expNode) = new lp::NotEqualNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2515 "interpreter.tab.c"
    break;

  case 76:
#line 834 "interpreter.y"
                {
		  // Create a new "logic and" node	
 			(yyval.expNode) = new lp::AndNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2524 "interpreter.tab.c"
    break;

  case 77:
#line 840 "interpreter.y"
                {
		  // Create a new "logic or" node	
 			(yyval.expNode) = new lp::OrNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		}
#line 2533 "interpreter.tab.c"
    break;

  case 78:
#line 846 "interpreter.y"
                {
		  // Create a new "logic negation" node	
 			(yyval.expNode) = new lp::NotNode((yyvsp[0].expNode));
		}
#line 2542 "interpreter.tab.c"
    break;

  case 79:
#line 852 "interpreter.y"
                {
			// Create a new "concatenation" node
			(yyval.expNode) = new lp::ConcatenationNode((yyvsp[-2].expNode),(yyvsp[0].expNode));
		
		}
#line 2552 "interpreter.tab.c"
    break;

  case 80:
#line 863 "interpreter.y"
                        {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2561 "interpreter.tab.c"
    break;

  case 81:
#line 869 "interpreter.y"
                        {
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2572 "interpreter.tab.c"
    break;

  case 82:
#line 879 "interpreter.y"
                        {
			    // Create a new list STL
				(yyval.parameters) = new std::list<lp::ExpNode *>(); 
			}
#line 2581 "interpreter.tab.c"
    break;

  case 83:
#line 885 "interpreter.y"
                        {
				// Get the list of expressions
				(yyval.parameters) = (yyvsp[0].parameters);

				// Insert the expression in the list of expressions
				(yyval.parameters)->push_front((yyvsp[-1].expNode));
			}
#line 2593 "interpreter.tab.c"
    break;


#line 2597 "interpreter.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 896 "interpreter.y"




