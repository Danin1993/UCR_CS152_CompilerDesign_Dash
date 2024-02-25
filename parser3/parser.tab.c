/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string>
#include <string.h>
#include <fstream>

std::ofstream milFile("output.mil");
struct CodeNode{
std :: string code;
std :: string name;
};
int parCnt = 0;
int varCount = 0;
extern int yylex();
extern FILE* yyin;
extern int yylineno;
int error_count = 0;
void yyerror(const char* s);
std::string createTempVarible(){
 static int cnt = 0;
 return std::string("_temp") + std::to_string(cnt++);
}

#line 94 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SUBTRACTION = 258,
    ADD = 259,
    MULTIPLY = 260,
    DIVIDE = 261,
    MOD = 262,
    L_PAR = 263,
    R_PAR = 264,
    IDENTIFIER = 265,
    NUMBER = 266,
    FUNCTION = 267,
    BEGINPARAMS = 268,
    ENDPARAMS = 269,
    BEGINLOCALS = 270,
    ENDLOCALS = 271,
    BEGINBODY = 272,
    ENDBODY = 273,
    INTEGER = 274,
    ARRAY = 275,
    OF = 276,
    IF = 277,
    THEN = 278,
    ENDIF = 279,
    ELSE = 280,
    WHILE = 281,
    DO = 282,
    BEGINLOOP = 283,
    ENDLOOP = 284,
    CONTINUE = 285,
    RETURN = 286,
    RRETURN = 287,
    INT = 288,
    PRT = 289,
    FUNC = 290,
    BREAK = 291,
    READ = 292,
    SEMICOLON = 293,
    COMMA = 294,
    L_CURLY = 295,
    R_CURLY = 296,
    L_BRAKET = 297,
    R_BRAKET = 298,
    ASSIGNMENT = 299,
    LESS = 300,
    LESS_EQ = 301,
    GREATER = 302,
    GREATER_EQ = 303,
    EQUALITY = 304,
    NOT_EQ = 305,
    UNKNOWN_TOKEN = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 32 "parser.y" /* yacc.c:355  */

 struct CodeNode *codenode;
 char *op_value;

#line 191 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 222 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    68,    74,    78,    84,    89,    90,    91,
      92,    95,    96,    99,   102,   105,   109,   110,   111,   113,
     114,   115,   116,   117,   118,   120,   128,   134,   144,   146,
     151,   158,   159,   160,   162,   182,   189,   198,   199,   209,
     220,   221,   222,   232,   242,   253,   254,   258,   267,   269,
     278,   284,   286,   290,   298,   305,   306
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SUBTRACTION", "ADD", "MULTIPLY",
  "DIVIDE", "MOD", "L_PAR", "R_PAR", "IDENTIFIER", "NUMBER", "FUNCTION",
  "BEGINPARAMS", "ENDPARAMS", "BEGINLOCALS", "ENDLOCALS", "BEGINBODY",
  "ENDBODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "BEGINLOOP", "ENDLOOP", "CONTINUE", "RETURN", "RRETURN",
  "INT", "PRT", "FUNC", "BREAK", "READ", "SEMICOLON", "COMMA", "L_CURLY",
  "R_CURLY", "L_BRAKET", "R_BRAKET", "ASSIGNMENT", "LESS", "LESS_EQ",
  "GREATER", "GREATER_EQ", "EQUALITY", "NOT_EQ", "UNKNOWN_TOKEN",
  "$accept", "if_statement", "else_statement", "comparitors",
  "bool_expression", "read_statement", "while_statement", "program",
  "function_declerations", "statements", "statement", "return_statement",
  "var_decleration", "paramerter_decleration", "function_decleration",
  "var_assigment", "expression", "multiplicative_expr", "term", "pars",
  "varibles", "print_statement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -100

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-100)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -100,     6,   -25,  -100,     7,  -100,    11,   -12,    -8,    21,
      -1,     4,     2,   -12,    31,  -100,  -100,     0,    18,   -12,
     -29,    45,    53,    25,     1,    -6,    56,    27,    58,  -100,
    -100,    32,  -100,  -100,    33,    36,    37,    40,  -100,    68,
       1,     1,     1,  -100,     1,    -7,  -100,  -100,    29,    51,
    -100,    44,    81,     1,  -100,     1,  -100,  -100,  -100,  -100,
    -100,    52,  -100,    89,   -23,    92,    94,     1,    96,     1,
       1,     1,     1,     1,     1,    62,    99,   100,    71,    72,
    -100,  -100,  -100,  -100,  -100,  -100,     1,    78,  -100,  -100,
      -2,    76,  -100,  -100,  -100,  -100,  -100,  -100,   110,  -100,
    -100,     1,  -100,  -100,  -100,  -100,     1,  -100,  -100,  -100,
      50,    63,  -100,    97,  -100,    83,  -100,  -100,    80,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     3,     0,    33,     0,     0,
      29,     0,     0,    33,     0,     6,    30,    31,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      10,     0,    13,     5,     0,     0,     0,     0,    32,     0,
       0,     0,     0,    15,     0,    52,    46,    25,    37,    41,
      48,    26,     0,     0,    14,     0,    12,    11,     7,     8,
       9,     0,    35,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,    22,    23,    24,     0,     0,    45,    50,
       0,     0,    39,    38,    43,    44,    42,    28,     0,    54,
      55,     0,     6,    40,     6,    47,     0,    53,    27,    36,
       0,     0,    49,    18,    56,     0,    16,     6,     0,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -100,  -100,  -100,  -100,    82,  -100,  -100,  -100,  -100,   -99,
    -100,  -100,  -100,    -5,  -100,  -100,   -24,    -4,  -100,  -100,
    -100,  -100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    30,   116,    86,    63,    31,    32,     1,     2,    18,
      33,    34,    35,     9,     5,    36,    64,    48,    49,    90,
      50,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,    67,    10,   110,    51,   111,     3,   105,    16,    44,
       4,    45,    46,    39,    38,    40,    62,     6,   118,     7,
      66,     8,    80,    81,    82,    83,    84,    85,    20,    76,
      12,    77,    69,    70,    11,    68,    52,   106,    13,    19,
      21,    17,    15,    89,    22,    92,    93,    14,    23,    24,
      97,    25,    26,    41,    27,    28,    71,    72,    73,    29,
      20,    42,   103,    43,    53,    54,    55,    94,    95,    96,
      56,    57,    21,    20,    58,    59,    22,   109,    60,    61,
      23,    24,   112,    25,    26,    21,    27,    28,    74,    22,
      20,   113,    75,    23,    24,    78,    25,    26,    79,    27,
      28,    87,    21,    88,   114,    98,    22,    91,    99,   100,
      23,    24,   102,    25,    26,   101,    27,    28,   104,   107,
     108,   119,   115,   117,    65
};

static const yytype_uint8 yycheck[] =
{
      24,     8,    10,   102,    10,   104,     0,     9,    13,     8,
      35,    10,    11,    42,    19,    44,    40,    10,   117,     8,
      44,    33,    45,    46,    47,    48,    49,    50,    10,    53,
       9,    55,     3,     4,    42,    42,    42,    39,    39,    39,
      22,    10,    40,    67,    26,    69,    70,    43,    30,    31,
      74,    33,    34,     8,    36,    37,     5,     6,     7,    41,
      10,     8,    86,    38,     8,    38,     8,    71,    72,    73,
      38,    38,    22,    10,    38,    38,    26,   101,    38,    11,
      30,    31,   106,    33,    34,    22,    36,    37,    44,    26,
      10,    41,    11,    30,    31,    43,    33,    34,     9,    36,
      37,     9,    22,     9,    41,    43,    26,    11,     9,     9,
      30,    31,    40,    33,    34,    44,    36,    37,    40,    43,
      10,    41,    25,    40,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,     0,    35,    66,    10,     8,    33,    65,
      10,    42,     9,    39,    43,    40,    65,    10,    61,    39,
      10,    22,    26,    30,    31,    33,    34,    36,    37,    41,
      53,    57,    58,    62,    63,    64,    67,    73,    65,    42,
      44,     8,     8,    38,     8,    10,    11,    68,    69,    70,
      72,    10,    42,     8,    38,     8,    38,    38,    38,    38,
      38,    11,    68,    56,    68,    56,    68,     8,    42,     3,
       4,     5,     6,     7,    44,    11,    68,    68,    43,     9,
      45,    46,    47,    48,    49,    50,    55,     9,     9,    68,
      71,    11,    68,    68,    69,    69,    69,    68,    43,     9,
       9,    44,    40,    68,    40,     9,    39,    43,    10,    68,
      61,    61,    68,    41,    41,    25,    54,    40,    61,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    66,    67,    67,    68,    68,    68,
      56,    69,    69,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    73,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     0,     2,     2,     2,
       1,     2,     2,     1,     2,     2,     8,     4,     0,     1,
       1,     1,     1,     1,     1,     2,     2,     5,     4,     2,
       4,     4,     6,     0,     8,     3,     6,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     4,     1,     3,
       1,     0,     1,     4,     4,     4,     7
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      YY_LAC_DISCARD ("YYBACKUP");                              \
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYSIZE_T *yycapacity, YYSIZE_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yytype_int16 **yybottom,
                      yytype_int16 *yybottom_no_free,
                      yytype_int16 **yytop, yytype_int16 *yytop_empty)
{
  YYSIZE_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYSIZE_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYSIZE_T yyalloc = 2 * yysize_new;
      yytype_int16 *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        (yytype_int16*) YYSTACK_ALLOC (yyalloc * sizeof *yybottom_new);
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yytype_int16 *yyesa, yytype_int16 **yyes,
        YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  yytype_int16 *yyes_prev = yyssp;
  yytype_int16 *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYSIZE_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYSIZE_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        int yystate;
        {
          int yylhs = yyr1[yyrule] - YYNTOKENS;
          yystate = yypgoto[yylhs] + *yyesp;
          if (yystate < 0 || YYLAST < yystate
              || yycheck[yystate] != *yyesp)
            yystate = yydefgoto[yylhs];
          else
            yystate = yytable[yystate];
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            *yyesp = yystate;
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            *++yyesp = yystate;
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyesa, yytype_int16 **yyes,
                YYSIZE_T *yyes_capacity, yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

    yytype_int16 yyesa[20];
    yytype_int16 *yyes;
    YYSIZE_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = sizeof yyesa / sizeof *yyes;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
          case 2:
#line 63 "parser.y" /* yacc.c:1646  */
    { 
                        struct CodeNode *node = (yyvsp[0].codenode);
                         printf("%s\n", node->code.c_str());
                         milFile << node->code; 
                        milFile.close();}
#line 1717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *function_declerations = (yyvsp[-1].codenode);
 struct CodeNode *function_decleration = (yyvsp[0].codenode);
 struct CodeNode *node = new CodeNode;
 node -> code = function_declerations-> code + function_decleration -> code;
 (yyval.codenode) = node; }
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 74 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 78 "parser.y" /* yacc.c:1646  */
    { 
 struct CodeNode *statements = (yyvsp[-1].codenode);
 struct CodeNode *statement = (yyvsp[0].codenode);
 struct CodeNode *node = new CodeNode;
 node -> code = statements-> code + statement -> code;
 (yyval.codenode) = node;}
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 84 "parser.y" /* yacc.c:1646  */
    {
  struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;
 }
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[-1].codenode);}
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.codenode) = (yyvsp[-1].codenode); }
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[-1].codenode);}
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "parser.y" /* yacc.c:1646  */
    {
struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;}
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[-1].codenode);}
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 96 "parser.y" /* yacc.c:1646  */
    {
struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;}
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "parser.y" /* yacc.c:1646  */
    {
struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 102 "parser.y" /* yacc.c:1646  */
    {
struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;}
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "parser.y" /* yacc.c:1646  */
    {
struct CodeNode *node = new CodeNode;
 (yyval.codenode) = node;}
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "parser.y" /* yacc.c:1646  */
    {}
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "parser.y" /* yacc.c:1646  */
    {}
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "parser.y" /* yacc.c:1646  */
    {}
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 113 "parser.y" /* yacc.c:1646  */
    {}
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 114 "parser.y" /* yacc.c:1646  */
    {}
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "parser.y" /* yacc.c:1646  */
    {}
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "parser.y" /* yacc.c:1646  */
    {}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 117 "parser.y" /* yacc.c:1646  */
    {}
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 118 "parser.y" /* yacc.c:1646  */
    {}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node= new CodeNode;
 struct CodeNode *expression= (yyvsp[0].codenode);
 node->code=expression->code;
 node->code+= std::string("ret ")+expression->name +std::string("\n");
 (yyval.codenode)=node;

}
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 128 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node= new CodeNode;
 node->code = std:: string(". ") + std::string((yyvsp[0].op_value)) + std::string("\n");
 (yyval.codenode) = node;
 
 }
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 134 "parser.y" /* yacc.c:1646  */
    {
  if(atoi((yyvsp[-2].op_value)) <= 0){
  fprintf(stderr, "Sematic error at line %d: array decleared of size less than or equal to 0\n", yylineno);
  return -1;
 }
  struct CodeNode *node= new CodeNode;
  node -> code =  std:: string(".[] ") + std::string((yyvsp[0].op_value)) + std::string(", ")+std::string((yyvsp[-2].op_value))+ std::string("\n");
  (yyval.codenode) = node;
  
 }
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 144 "parser.y" /* yacc.c:1646  */
    {}
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 node->code = std:: string(". ") + std::string((yyvsp[0].op_value)) + std::string("\n");
 (yyval.codenode) = node;
}
#line 1929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 151 "parser.y" /* yacc.c:1646  */
    { 
struct CodeNode *node = new CodeNode;
struct CodeNode *paramerter_decleration = (yyvsp[0].codenode);
 node->code = std:: string(". ") + std::string((yyvsp[-2].op_value)) + std::string("\n");
 node->code += paramerter_decleration->code;
 (yyval.codenode) = node;
}
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "parser.y" /* yacc.c:1646  */
    {}
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "parser.y" /* yacc.c:1646  */
    {}
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 160 "parser.y" /* yacc.c:1646  */
    {struct CodeNode *node = new CodeNode; (yyval.codenode) = node;}
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 162 "parser.y" /* yacc.c:1646  */
    {
std::string subS="";
int cnt=0;
int dotPlace=0;
struct CodeNode *node = new CodeNode;
struct CodeNode *statements = (yyvsp[-1].codenode); 
struct CodeNode *paramerter_decleration = (yyvsp[-4].codenode);
node->code = std::string("func ") + std::string((yyvsp[-6].op_value)) + std::string("\n");
node->code += paramerter_decleration->code;
for(int i=0; i< paramerter_decleration->code.length();i++){
	if(paramerter_decleration->code.at(i) == '\n'){
	   subS = paramerter_decleration->code.substr(dotPlace + 1 , i-dotPlace-1);
           node->code += std::string("= ")+subS+std::string(", $")+std::to_string(cnt) + std::string("\n");
	   cnt++;
           dotPlace =i+1;
	}
}
node->code += statements->code;
node->code += std::string("endfunc\n\n");
(yyval.codenode) = node;}
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 182 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *expression = (yyvsp[0].codenode);
 node -> code = expression -> code;
 node-> code += std:: string("= ")+ std::string((yyvsp[-2].op_value)) + std::string(", ")+ expression->name+ std::string("\n");
 (yyval.codenode) = node;
 }
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 189 "parser.y" /* yacc.c:1646  */
    {

 struct CodeNode *node = new CodeNode;
 struct CodeNode *expression = (yyvsp[0].codenode);
 node -> code = expression -> code; 
 node-> code += std:: string("[]= ") + std::string((yyvsp[-5].op_value)) + std::string(", ") + std::string((yyvsp[-3].op_value)) + std::string(", ") + expression->name + std::string("\n");
 (yyval.codenode)= node;
}
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[0].codenode);}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 199 "parser.y" /* yacc.c:1646  */
    {
    struct CodeNode *node = new CodeNode;
    struct CodeNode *left = (yyvsp[-2].codenode); 
    struct CodeNode *right = (yyvsp[0].codenode);
    std::string tempVarible = createTempVarible();
    node->code = left->code + right->code;
    node->code += std::string(". ") + tempVarible + std::string("\n");
    node->code += std::string("+ ") + tempVarible + std::string(", ") + left->name  + std::string(", ") + right->name + std::string("\n");
    node->name = tempVarible;
 (yyval.codenode) = node;}
#line 2030 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 209 "parser.y" /* yacc.c:1646  */
    { 
 struct CodeNode *node = new CodeNode;
 struct CodeNode *multiplicative_expr = (yyvsp[-2].codenode);
 struct CodeNode *expression = (yyvsp[0].codenode);
 node -> code = multiplicative_expr -> code + expression->code;
 std:: string tempVarible = createTempVarible();
 node -> code +=  std:: string(". ") + tempVarible + std::string("\n");
 node -> code += std::string("- ") + tempVarible + std::string(", ") + multiplicative_expr->name  + std::string(", ") + expression->name + std::string("\n");
 node -> name = tempVarible;
 (yyval.codenode) = node;}
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 220 "parser.y" /* yacc.c:1646  */
    {}
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[0].codenode);}
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 222 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *term = (yyvsp[-2].codenode);
 struct CodeNode *multiplicative_expr = (yyvsp[0].codenode);
 node -> code = term -> code + multiplicative_expr->code;
 std:: string tempVarible = createTempVarible();
 node -> code +=  std:: string(". ") + tempVarible + std::string("\n");
 node -> code += std::string("% ") + tempVarible + std::string(", ") + term->name  + std::string(", ") + multiplicative_expr->name + std::string("\n");
 node -> name = tempVarible;
 (yyval.codenode) = node;}
#line 2072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 232 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *term = (yyvsp[-2].codenode);
 struct CodeNode *multiplicative_expr = (yyvsp[0].codenode);
 node -> code = term -> code + multiplicative_expr->code;
 std:: string tempVarible = createTempVarible();
 node -> code +=  std:: string(". ") + tempVarible + std::string("\n");
 node -> code += std::string("* ") + tempVarible + std::string(", ") + term->name  + std::string(", ") + multiplicative_expr->name + std::string("\n");
 node -> name = tempVarible;
 (yyval.codenode) = node;}
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 242 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *term = (yyvsp[-2].codenode);
 struct CodeNode *multiplicative_expr = (yyvsp[0].codenode);
 node -> code = term -> code + multiplicative_expr->code;
 std:: string tempVarible = createTempVarible();
 node -> code +=  std:: string(". ") + tempVarible + std::string("\n");
 node -> code += std::string("/ ") + tempVarible + std::string(", ") + term->name  + std::string(", ") + multiplicative_expr->name + std::string("\n");
 node -> name = tempVarible;
 (yyval.codenode) = node;}
#line 2102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[-1].codenode); }
#line 2108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 254 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 node -> name = std::string((yyvsp[0].op_value)); 
 (yyval.codenode) = node;}
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 258 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *pars = (yyvsp[-1].codenode);
 std:: string tempVarible = createTempVarible();
 node->code=pars->code;
 node -> code +=  std:: string(". ") + tempVarible + std::string("\n");
 node->code+=std::string("call ")+ std::string((yyvsp[-3].op_value)) + std::string(", ") + tempVarible +  std::string("\n");
 node->name = tempVarible; 
 (yyval.codenode) = node;}
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.codenode) = (yyvsp[0].codenode);}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 269 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *expression = (yyvsp[0].codenode);
  struct CodeNode *pars = (yyvsp[-2].codenode);
  node->code = pars->code;
 node->code += expression->code;
  node->code += std::string("param ") + expression->name +std::string("\n");
 (yyval.codenode) = node;
}
#line 2151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 278 "parser.y" /* yacc.c:1646  */
    { 
 struct CodeNode *node = new CodeNode;
 struct CodeNode *expression = (yyvsp[0].codenode);
 node->code += expression->code;
 node->code += std::string("param ") + expression->name +std::string("\n");
 (yyval.codenode) = node;}
#line 2162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 284 "parser.y" /* yacc.c:1646  */
    {struct CodeNode *node = new CodeNode; (yyval.codenode) = node;}
#line 2168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 286 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 node -> name = std::string((yyvsp[0].op_value));
 (yyval.codenode) = node;}
#line 2177 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 290 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 std:: string tempVarible = createTempVarible();
 node -> code =  std:: string(". ") + tempVarible + std::string("\n");
 node -> code += std:: string("=[] ")+tempVarible + std:: string(", ") +std::string((yyvsp[-3].op_value)) + std:: string(", ") + std::string((yyvsp[-1].op_value)) +  std::string("\n");
 node->name = tempVarible;
 (yyval.codenode) = node;}
#line 2189 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 298 "parser.y" /* yacc.c:1646  */
    {
 struct CodeNode *node = new CodeNode;
 struct CodeNode *expression = (yyvsp[-1].codenode);
 node->code = expression->code;
 node-> code += std::string(".> ") + expression->name + std::string("\n");
 (yyval.codenode) = node;
}
#line 2201 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 305 "parser.y" /* yacc.c:1646  */
    {}
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 306 "parser.y" /* yacc.c:1646  */
    {}
#line 2213 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2217 "parser.tab.c" /* yacc.c:1646  */
        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 307 "parser.y" /* yacc.c:1906  */


int main(int argc, char** argv) {
    yyin = stdin;

    if (argc >= 2) {
        FILE* file_ptr = fopen(argv[1], "r");
        if (file_ptr == NULL) {
            printf("Could not open file: %s\n", argv[1]);
            exit(1);
        }
        yyin = file_ptr;
    }

    yyparse();

    if (argc >= 2) {
        fclose(yyin);
    }

    if (error_count > 0) {
        fprintf(stderr, "Parsing finished with %d error(s).\n", error_count);
        return 1; 
    }

    return 0;
}

void yyerror(const char *s) {
  if (strcmp(s, "syntax error") == 0) {
        fprintf(stderr, "Syntax error at line %d: Unexpected token\n", yylineno);
    } else if (strcmp(s, "type error") == 0) {
        fprintf(stderr, "Type error at line %d: Incompatible types\n", yylineno);
    } else if (strcmp(s, "undeclared variable") == 0) {
        fprintf(stderr, "Error at line %d: Undeclared variable\n", yylineno);
    } else {
        fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
    }
    error_count++;
}