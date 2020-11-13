
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Bison_Rule.y"

  #include <iostream>
  #include <sstream>

  void yyerror(const char* m);
  extern int yylex();
  extern FILE* yyin;
  #include <stdio.h>
  #include <string.h>
  #include <map>
  #include <fstream>
  #include <string>
  using namespace std;

  int line = 1;
  int stringNumber = 0;
  int count1 = 0;
  int temp;
  int countForS =0;
  int countFort =0;
  int countFora =0;
  int countForv =0;
  int countForLoop = 1;
  int countForIF = 1;
  int countForEndIF = 1;


  map<string, string> table;
  map<string, string> env;
  map<string, string> variables;
  map<string, string> tVariables;
  bool printByTokenName;
  bool printTepsilon;
  char typecheck[100];
  string output = "\n";


  typedef struct tnode {
    char valname[100];
	char valname2[100];
	char valname3[100];
	char valname4[100];
    char token[100];
	char token2[100];
	char token3[100];
	char token4[100];
	bool isshow;
	bool lastchild;
	struct tnode *child;
    struct tnode *ptr;
    }tnode;

	tnode* CreateTnode();
	tnode* ProgramNode(tnode* push, tnode* t);
	tnode* ProgramNode(string valname, string token, tnode* t);
	void yyerror(int m);
	void yyerror(int m, string m1);
	void printtree(tnode *s);
	tnode *NTnode=NULL;



/* Line 189 of yacc.c  */
#line 136 "Bison_Rule.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_CHARCONST = 258,
     TOKEN_INTCONST = 259,
     TOKEN_FLOATCONST = 260,
     TOKEN_STRINGCONST = 261,
     TOKEN_ID = 262,
     TOKEN_WHITESPACEspace = 263,
     TOKEN_WHITESPACEtab = 264,
     TOKEN_WHITESPACEnewLine = 265,
     TOKEN_ARITHMATICOP_MINUS = 266,
     TOKEN_ARITHMATICOP_DIV = 267,
     TOKEN_ARITHMATICOP_POW = 268,
     TOKEN_ARITHMATICOP_PLUS = 269,
     TOKEN_ARITHMATICOP_MULT = 270,
     TOKEN_BITWISEOP = 271,
     TOKEN_LOGICOP = 272,
     TOKEN_RELATIONOP = 273,
     TOKEN_ASSIGNOP = 274,
     TOKEN_LOGICOP_NOT = 275,
     TOKEN_LEFTPAREN = 276,
     TOKEN_RIGHTPAREN = 277,
     TOKEN_LCB = 278,
     TOKEN_RCB = 279,
     TOKEN_SEMICOLON = 280,
     TOKEN_COMMA = 281,
     TOKEN_UNTIL = 282,
     TOKEN_LB = 283,
     TOKEN_RB = 284,
     TOKEN_PRFUNC = 285,
     TOKEN_ELSECONDITION = 286,
     TOKEN_INTTYPE = 287,
     TOKEN_VOIDTYPE = 288,
     TOKEN_DOUBLETYPE = 289,
     TOKEN_FLOATTYPE = 290,
     TOKEN_CHARTYPE = 291,
     TOKEN_STRINGTYPE = 292,
     TOKEN_BREAKSTMT = 293,
     TOKEN_CONTINUESTMT = 294,
     TOKEN_MAINFUNC = 295,
     TOKEN_LOOP = 296,
     TOKEN_RETURN = 297,
     TOKEN_IFCONDITION = 298,
     TOKEN_COMMENT = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 63 "Bison_Rule.y"

    int intVal;
	char chVal;
    char* string;
    float floatVal;
	struct tnode *node;



/* Line 214 of yacc.c  */
#line 226 "Bison_Rule.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 238 "Bison_Rule.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,    12,    14,    15,    26,    27,    33,
      37,    38,    42,    45,    48,    49,    51,    53,    55,    57,
      59,    61,    62,    67,    69,    71,    73,    75,    77,    79,
      83,    87,    91,    95,    99,   103,   107,   111,   116,   119,
     123,   125,   127,   129,   131,   133,   134,   135,   136,   150,
     158,   159,   169,   174,   177,   178,   184,   188,   191,   192,
     195,   200,   201,   206,   209,   213,   214,   219
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    -1,    54,     7,    19,    55,    25,
      47,    -1,    48,    -1,    -1,    54,     7,    49,    21,    50,
      22,    23,    51,    24,    48,    -1,    -1,    54,     7,    66,
      26,    50,    -1,    54,     7,    66,    -1,    -1,    52,    25,
      51,    -1,    60,    51,    -1,    56,    51,    -1,    -1,    64,
      -1,    70,    -1,    63,    -1,    68,    -1,    55,    -1,    53,
      -1,    -1,    30,    21,    55,    22,    -1,    33,    -1,    32,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    55,
      18,    55,    -1,    55,    11,    55,    -1,    55,    12,    55,
      -1,    55,    14,    55,    -1,    55,    15,    55,    -1,    55,
      13,    55,    -1,    55,    17,    55,    -1,    55,    16,    55,
      -1,     7,    28,    55,    29,    -1,    20,    55,    -1,    21,
      55,    22,    -1,     7,    -1,     4,    -1,     6,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    41,     7,    57,    21,
      55,    58,    27,    55,    59,    22,    23,    51,    24,    -1,
      43,    21,    55,    22,    23,    51,    24,    -1,    -1,    43,
      21,    55,    22,    23,    51,    24,    61,    62,    -1,    31,
      23,    51,    24,    -1,    42,    55,    -1,    -1,    54,     7,
      66,    65,    67,    -1,    28,    55,    29,    -1,    28,    29,
      -1,    -1,    70,    67,    -1,    26,     7,    66,    67,    -1,
      -1,     7,    21,    69,    22,    -1,    55,    69,    -1,    26,
      55,    69,    -1,    -1,     7,    66,    19,    55,    -1,    19,
      55,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   110,   128,   136,   136,   158,   164,   179,
     190,   196,   205,   213,   221,   226,   233,   240,   246,   253,
     260,   267,   273,   313,   321,   328,   335,   342,   349,   357,
     493,   539,   582,   622,   662,   674,   686,   698,   719,   730,
     748,   762,   771,   781,   791,   800,   800,   800,   800,   825,
     840,   840,   856,   870,   879,   879,   917,   931,   939,   947,
     956,   969,   976,   987,   995,  1004,  1010,  1069
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_CHARCONST", "TOKEN_INTCONST",
  "TOKEN_FLOATCONST", "TOKEN_STRINGCONST", "TOKEN_ID",
  "TOKEN_WHITESPACEspace", "TOKEN_WHITESPACEtab",
  "TOKEN_WHITESPACEnewLine", "TOKEN_ARITHMATICOP_MINUS",
  "TOKEN_ARITHMATICOP_DIV", "TOKEN_ARITHMATICOP_POW",
  "TOKEN_ARITHMATICOP_PLUS", "TOKEN_ARITHMATICOP_MULT", "TOKEN_BITWISEOP",
  "TOKEN_LOGICOP", "TOKEN_RELATIONOP", "TOKEN_ASSIGNOP",
  "TOKEN_LOGICOP_NOT", "TOKEN_LEFTPAREN", "TOKEN_RIGHTPAREN", "TOKEN_LCB",
  "TOKEN_RCB", "TOKEN_SEMICOLON", "TOKEN_COMMA", "TOKEN_UNTIL", "TOKEN_LB",
  "TOKEN_RB", "TOKEN_PRFUNC", "TOKEN_ELSECONDITION", "TOKEN_INTTYPE",
  "TOKEN_VOIDTYPE", "TOKEN_DOUBLETYPE", "TOKEN_FLOATTYPE",
  "TOKEN_CHARTYPE", "TOKEN_STRINGTYPE", "TOKEN_BREAKSTMT",
  "TOKEN_CONTINUESTMT", "TOKEN_MAINFUNC", "TOKEN_LOOP", "TOKEN_RETURN",
  "TOKEN_IFCONDITION", "TOKEN_COMMENT", "$accept", "PROGRAM",
  "GLOBAL_DECLARE", "PGM", "$@1", "F_ARG", "STMTS", "STMT", "PRINTFUNC",
  "TYPE", "EXP", "LOOP", "$@2", "$@3", "$@4", "CONDITION", "$@5",
  "ELSECON", "STMT_RETURN", "STMT_DECLARE", "$@6", "ARRAY_VAR", "IDS",
  "CALL", "ARGS", "STMT_ASSIGN", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    49,    48,    48,    50,    50,
      50,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    53,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    57,    58,    59,    56,    60,
      61,    60,    62,    63,    65,    64,    66,    66,    66,    67,
      67,    67,    68,    69,    69,    69,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     1,     0,    10,     0,     5,     3,
       0,     3,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     2,     3,
       1,     1,     1,     1,     1,     0,     0,     0,    13,     7,
       0,     9,     4,     2,     0,     5,     3,     2,     0,     2,
       4,     0,     4,     2,     3,     0,     4,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,    24,    23,    25,    26,    27,    28,     0,     2,     4,
       0,     1,     5,     0,     0,    43,    41,    44,    42,    40,
       0,     0,     0,    10,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,    39,
      30,    31,    34,    32,    33,    36,    35,    29,     3,     0,
      58,    37,    14,     0,     9,    40,     0,     0,     0,     0,
       0,     0,     0,    20,     0,    19,    14,    14,    17,    15,
      18,    16,    57,     0,    10,    65,     0,     0,    67,     0,
      45,    53,     0,     7,    14,    58,    13,    12,    56,     8,
       0,    65,     0,     0,     0,     0,     0,     0,     6,     0,
      11,    54,    65,    63,    62,    37,    66,    22,     0,     0,
       5,    61,    64,    46,    14,    58,     0,    55,    61,     0,
       0,    58,    59,     0,    49,    61,    47,     0,    60,     0,
       0,    51,     0,    14,    14,     0,     0,    52,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    14,    36,    61,    62,    63,    64,
      65,    66,    96,   119,   129,    67,   127,   131,    68,    69,
     111,    77,   117,    70,    92,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
     202,  -116,  -116,  -116,  -116,  -116,  -116,     9,  -116,  -116,
      -1,  -116,     7,   171,    13,  -116,  -116,  -116,  -116,    39,
     171,   171,    43,   202,   171,   229,   172,   171,   171,   171,
     171,   171,   171,   171,   171,   202,    52,    69,    85,  -116,
      26,    66,    66,    26,    66,   235,   229,   216,  -116,    57,
      54,  -116,    87,    24,    59,    14,   171,    62,    79,   171,
      67,    63,    80,  -116,   102,   208,    87,    87,  -116,  -116,
    -116,  -116,  -116,   144,   202,    44,    24,    94,   208,   171,
    -116,   208,   171,   202,    87,    54,  -116,  -116,  -116,  -116,
     171,   128,    93,   152,   171,   184,    95,   196,  -116,   118,
    -116,  -116,   128,  -116,  -116,   107,   208,  -116,   171,   104,
    -116,     6,  -116,   208,    87,    54,   129,  -116,     6,   110,
     114,    54,  -116,   171,   116,     6,   208,   119,  -116,   130,
     148,  -116,   149,    87,    87,   127,   155,  -116,  -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,   145,    70,  -116,   108,   -62,  -116,  -116,     1,
     -13,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,
    -116,   -48,  -115,  -116,   -79,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -59
static const yytype_int16 yytable[] =
{
      22,    10,    54,   122,    86,    87,    12,    25,    26,    11,
     128,    38,   103,   115,    40,    41,    42,    43,    44,    45,
      46,    47,   100,   112,    37,    56,    13,    15,    16,    17,
      18,    19,   116,   -58,    23,    75,    10,   101,    28,    29,
      73,    31,    76,    78,    20,    21,    81,    15,    16,    17,
      18,    19,   120,    72,    27,    28,    29,    30,    31,    32,
      33,    34,    91,    93,    20,    21,    95,    24,    35,    97,
      90,   135,   136,   125,    49,    37,    50,   102,    91,    29,
      52,   106,    53,    79,    99,    74,    80,    83,    82,    91,
      15,    16,    17,    18,    55,   113,    27,    28,    29,    30,
      31,    32,    33,    34,   118,    84,    56,    20,    21,    85,
     126,   118,   -21,    94,    51,   104,   108,    57,   118,     1,
       2,     3,     4,     5,     6,   110,   -56,   114,    58,    59,
      60,    15,    16,    17,    18,    19,   121,   123,   124,    27,
      28,    29,    30,    31,    32,    33,    34,   -50,    20,    21,
     130,   137,   132,    98,    90,    27,    28,    29,    30,    31,
      32,    33,    34,    27,    28,    29,    30,    31,    32,    33,
      34,   133,   134,    88,    15,    16,    17,    18,    19,   138,
      48,   105,    89,    27,    28,    29,    30,    31,    32,    33,
      34,    20,    21,     0,    39,    27,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,   107,    27,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,   109,    27,
      28,    29,    30,    31,    32,    33,    34,    27,    28,    29,
      30,    31,    32,    33,     1,     2,     3,     4,     5,     6,
      27,    28,    29,    30,    31,    32,    27,    28,    29,    30,
      31
};

static const yytype_int16 yycheck[] =
{
      13,     0,    50,   118,    66,    67,     7,    20,    21,     0,
     125,    24,    91,     7,    27,    28,    29,    30,    31,    32,
      33,    34,    84,   102,    23,    19,    19,     3,     4,     5,
       6,     7,    26,    19,    21,    21,    35,    85,    12,    13,
      53,    15,    28,    56,    20,    21,    59,     3,     4,     5,
       6,     7,   114,    29,    11,    12,    13,    14,    15,    16,
      17,    18,    75,    76,    20,    21,    79,    28,    25,    82,
      26,   133,   134,   121,    22,    74,     7,    90,    91,    13,
      23,    94,    28,    21,    83,    26,     7,    24,    21,   102,
       3,     4,     5,     6,     7,   108,    11,    12,    13,    14,
      15,    16,    17,    18,   111,    25,    19,    20,    21,     7,
     123,   118,    25,    19,    29,    22,    21,    30,   125,    32,
      33,    34,    35,    36,    37,     7,    19,    23,    41,    42,
      43,     3,     4,     5,     6,     7,     7,    27,    24,    11,
      12,    13,    14,    15,    16,    17,    18,    31,    20,    21,
      31,    24,    22,    83,    26,    11,    12,    13,    14,    15,
      16,    17,    18,    11,    12,    13,    14,    15,    16,    17,
      18,    23,    23,    29,     3,     4,     5,     6,     7,    24,
      35,    29,    74,    11,    12,    13,    14,    15,    16,    17,
      18,    20,    21,    -1,    22,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    11,    12,    13,
      14,    15,    16,    17,    18,    -1,    -1,    -1,    22,    11,
      12,    13,    14,    15,    16,    17,    18,    11,    12,    13,
      14,    15,    16,    17,    32,    33,    34,    35,    36,    37,
      11,    12,    13,    14,    15,    16,    11,    12,    13,    14,
      15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    34,    35,    36,    37,    46,    47,    48,
      54,     0,     7,    19,    49,     3,     4,     5,     6,     7,
      20,    21,    55,    21,    28,    55,    55,    11,    12,    13,
      14,    15,    16,    17,    18,    25,    50,    54,    55,    22,
      55,    55,    55,    55,    55,    55,    55,    55,    47,    22,
       7,    29,    23,    28,    66,     7,    19,    30,    41,    42,
      43,    51,    52,    53,    54,    55,    56,    60,    63,    64,
      68,    70,    29,    55,    26,    21,    28,    66,    55,    21,
       7,    55,    21,    24,    25,     7,    51,    51,    29,    50,
      26,    55,    69,    55,    19,    55,    57,    55,    48,    54,
      51,    66,    55,    69,    22,    29,    55,    22,    21,    22,
       7,    65,    69,    55,    23,     7,    26,    67,    70,    58,
      51,     7,    67,    27,    24,    66,    55,    61,    67,    59,
      31,    62,    22,    23,    23,    51,    51,    24,    24
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 103 "Bison_Rule.y"
    {
					NTnode = CreateTnode();
                    strcpy(NTnode->token,"PROGRAM");
                    NTnode = ProgramNode((yyvsp[(1) - (1)].node),NTnode);
					cout << "	li $v0, 10"<< endl <<"	syscall" << endl;
                  ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 111 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"GLOBAL_DECLARE");
                    a=ProgramNode((yyvsp[(1) - (6)].node),a);
                    a=ProgramNode((yyvsp[(2) - (6)].string),"TOKEN_ID",a);
                    a=ProgramNode((yyvsp[(3) - (6)].string),"TOKEN_ASSIGNOP",a);
                    a=ProgramNode((yyvsp[(4) - (6)].node),a);
                    a=ProgramNode((yyvsp[(5) - (6)].string),"TOKEN_SEMICOLON",a);
                    a=ProgramNode((yyvsp[(6) - (6)].node),a);

                    if(table[(yyvsp[(2) - (6)].string)]!="")
                      yyerror(3,(yyvsp[(2) - (6)].string));
                    table[(yyvsp[(2) - (6)].string)]=(yyvsp[(1) - (6)].node)->token2;
                    if(strcmp((yyvsp[(1) - (6)].node)->token2,(yyvsp[(4) - (6)].node)->token2)!= 0)
                      yyerror(1);
                    (yyval.node) = a;
                  ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 129 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"GLOBAL_DECLARE");
                    b=ProgramNode((yyvsp[(1) - (1)].node),b);
                    (yyval.node) = b;
                  ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 136 "Bison_Rule.y"
    {if (strcmp((yyvsp[(2) - (2)].string),"main")==0){cout <<"main: "<<endl;} else {cout <<"func: "<<endl;};}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 137 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
					strcpy(a->token,"PGM");
					a=ProgramNode((yyvsp[(1) - (10)].node),a);
					a=ProgramNode((yyvsp[(2) - (10)].string),"TOKEN_ID",a);
					a=ProgramNode((yyvsp[(4) - (10)].string),"TOKEN_LEFTPAREN",a);
					a=ProgramNode((yyvsp[(5) - (10)].node),a);
					a=ProgramNode((yyvsp[(6) - (10)].string),"TOKEN_RIGHTPAREN",a);
					a=ProgramNode((yyvsp[(7) - (10)].string),"TOKEN_LCB",a);
					a=ProgramNode((yyvsp[(8) - (10)].node),a);
					a=ProgramNode((yyvsp[(9) - (10)].string),"TOKEN_RCB",a);
					(yyval.node) = a;


					/*  if (strcmp($2,"main") == 0){
						cout << "main: "<<endl;
					  }
					  */

                  ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 158 "Bison_Rule.y"
    { tnode *b = CreateTnode();
                    strcpy(b->token,"PGM");
					b->isshow = 0;
                    (yyval.node) = b;
                 ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 165 "Bison_Rule.y"
    {
				  tnode *a = CreateTnode();
                    strcpy(a->token,"F_ARG");
                    a=ProgramNode((yyvsp[(1) - (5)].node),a);
                    a=ProgramNode((yyvsp[(2) - (5)].string),"TOKEN_ID",a);
                    a=ProgramNode((yyvsp[(3) - (5)].node),a);
                    a=ProgramNode((yyvsp[(4) - (5)].string),"TOKEN_COMMA",a);
                    a=ProgramNode((yyvsp[(5) - (5)].node),a);
                    table[(yyvsp[(2) - (5)].string)]=(yyvsp[(1) - (5)].node)->token2;
                    (yyval.node) = a;
					
					// table[$2]=$1->token2
						
                  ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 180 "Bison_Rule.y"
    { tnode *b = CreateTnode();
                    strcpy(b->token,"F_ARG");
                    b=ProgramNode((yyvsp[(1) - (3)].node),b);
                    b=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_ID",b);
                    b=ProgramNode((yyvsp[(3) - (3)].node),b);
                    table[(yyvsp[(2) - (3)].string)]=(yyvsp[(1) - (3)].node)->token2;
                    (yyval.node) = b;
					
					// table[$2]=$1->token2
                  ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 190 "Bison_Rule.y"
    { tnode *c = CreateTnode();
                    strcpy(c->token,"F_ARG");
					c->isshow =0;
                    (yyval.node) = c;
                 ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 197 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"STMTS");
                    a=ProgramNode((yyvsp[(1) - (3)].node),a);
                    a=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_SEMICOLON",a);
                    a=ProgramNode((yyvsp[(3) - (3)].node),a);
                    (yyval.node) = a;
                  ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 206 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"STMTS");
                    b=ProgramNode((yyvsp[(1) - (2)].node),b);
                    b=ProgramNode((yyvsp[(2) - (2)].node),b);
                    (yyval.node) = b;
                  ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 214 "Bison_Rule.y"
    {
					tnode *c = CreateTnode();
                    strcpy(c->token,"STMTS");
                    c=ProgramNode((yyvsp[(1) - (2)].node),c);
                    c=ProgramNode((yyvsp[(2) - (2)].node),c);
                    (yyval.node) = c;
                  ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 221 "Bison_Rule.y"
    { tnode *d = CreateTnode();
                    strcpy(d->token,"STMTS");
					d->isshow =0;
                    (yyval.node) = d;
                 ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 227 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"STMT");
                    a=ProgramNode((yyvsp[(1) - (1)].node),a);
                    (yyval.node) = a;
                  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 234 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"STMT");
                    b=ProgramNode((yyvsp[(1) - (1)].node),b);
                    (yyval.node) = b;
                  ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 241 "Bison_Rule.y"
    { tnode *c = CreateTnode();
                    strcpy(c->token,"STMT");
                    c=ProgramNode((yyvsp[(1) - (1)].node),c);
                    (yyval.node) = c;
                  ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 247 "Bison_Rule.y"
    {
					tnode *d = CreateTnode();
                    strcpy(d->token,"STMT");
                    d=ProgramNode((yyvsp[(1) - (1)].node),d);
                    (yyval.node) = d;
                  ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 254 "Bison_Rule.y"
    {
					tnode *e = CreateTnode();
                    strcpy(e->token,"STMT");
                    e=ProgramNode((yyvsp[(1) - (1)].node),e);
                    (yyval.node) = e;
                  ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 261 "Bison_Rule.y"
    {
					tnode *f = CreateTnode();
                    strcpy(f->token,"STMT");
                    f=ProgramNode((yyvsp[(1) - (1)].node),f);
                    (yyval.node) = f;
                  ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 267 "Bison_Rule.y"
    {
					tnode *g = CreateTnode();
                    strcpy(g->token,"STMT");
					g->isshow =0;
                    (yyval.node) = g;
                  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 274 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"PRINTFUNC");
                    a=ProgramNode((yyvsp[(1) - (4)].string),"TOKEN_PRFUNC",a);
                    a=ProgramNode((yyvsp[(2) - (4)].string),"TOKEN_LEFTPAREN",a);
                    a=ProgramNode((yyvsp[(3) - (4)].node),a);
                    a=ProgramNode((yyvsp[(4) - (4)].string),"TOKEN_RIGHTPAREN",a);
                    (yyval.node) = a;

					// cout << $3->token << " " << $3->token2 << " " << $3->token3 << " " << $3->token4 << $3->valname << " " << $3->valname2 << " " << $3->valname3 << " "  << $3->valname4 << endl;

					//default
					if (strcmp((yyvsp[(3) - (4)].node)->token4,"")==0 && strcmp((yyvsp[(3) - (4)].node)->valname4,"") ==0)
					{
					cout << "	move $a"<< countFora<<", " << variables[(yyvsp[(3) - (4)].node)->token3]<< endl;
					cout << "	li $v0, 1" << endl << "	syscall" << endl;
					}
					//array dynamic
					else if (strcmp((yyvsp[(3) - (4)].node)->token4,"")!=0)
					{
					cout << "	lw " << "$t" << countFort<< ", " << "0" << "(" << "$t" << countFort << ")" <<endl;
					cout << "	addi $sp, $sp , -4" << endl;
					cout << "	sw $a" << countFora << ", 0($sp)" << endl;
					cout << "	move $a"<< countFora<<", " << "$t" << countFort << endl;
					cout << "	li $v0, 1" << endl << "	syscall" << endl;
					cout << "	lw $a" << countFora << ", 0($sp)" << endl;
					cout << "	addi $sp, $sp , 4" << endl;

					}
					//array static
					else if (strcmp((yyvsp[(3) - (4)].node)->valname4,"")!=0)

					{
					countFort ++;
					cout << "	lw " << "$t" << countFort << ", "<< 4*atoi((yyvsp[(3) - (4)].node)->valname4) << "(" << variables[(yyvsp[(3) - (4)].node)->token3] << ")" << endl;
					cout << "	move " << "$a" << countFora << ", " << "$t" << countFort << endl;
					cout << "	li $v0, 1" << endl << "	syscall" << endl;
					}
                  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 314 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"TYPE");
                    a=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_VOIDTYPE",a);
                    strcpy(a->token2,"void");
                    (yyval.node) = a;
                  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 322 "Bison_Rule.y"
    { tnode *b = CreateTnode();
                    strcpy(b->token,"TYPE");
                    b=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_INTTYPE",b);
                    strcpy(b->token2,"int");
                    (yyval.node) = b;
                  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 329 "Bison_Rule.y"
    { tnode *c = CreateTnode();
                    strcpy(c->token,"TYPE");
                    c=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_DOUBLETYPE",c);
                    strcpy(c->token2,"double");
                    (yyval.node) = c;
                  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 336 "Bison_Rule.y"
    { tnode *d = CreateTnode();
                    strcpy(d->token,"TYPE");
                    d=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_FLOATTYPE",d);
                    strcpy(d->token2,"float");
                    (yyval.node) = d;
                  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 343 "Bison_Rule.y"
    { tnode *e = CreateTnode();
                    strcpy(e->token,"TYPE");
                    e=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_CHARTYPE",e);
                    strcpy(e->token2,"char");
                    (yyval.node) = e;
                  ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 350 "Bison_Rule.y"
    { tnode *f = CreateTnode();
                    strcpy(f->token,"TYPE");
                    f=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_STRINGTYPE",f);
                    strcpy(f->token2,"string");
                    (yyval.node) = f;
                  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 358 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"EXP");
                    a=ProgramNode((yyvsp[(1) - (3)].node),a);
                    a=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_RELATIONOP",a);
                    a=ProgramNode((yyvsp[(3) - (3)].node),a);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2)!= 0)
                      yyerror(1);
                    strcpy(a->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = a;

                    if (strcmp((yyvsp[(2) - (3)].string), "<")== 0){
                          if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")) {
                            cout << "	slti $t0";
                            cout <<", "<< "$t"<<countFort-1<< " , "<< (yyvsp[(3) - (3)].node)->valname2 <<endl;
                            cout << "        beq $t0"<<", $zero, IFL"<<countForIF<<endl;
                        }
                					else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
                            cout<< "	bgti "<< (yyvsp[(1) - (3)].node)->valname2<< " , "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;
                          }
                					else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
                            cout << "	slti $t0";
                            cout <<", "<< variables[(yyvsp[(1) - (3)].node)->token3]<< " , "<< (yyvsp[(3) - (3)].node)->valname2 <<endl;
                            cout << "        beq $t0"<<", $zero, IFL"<<countForIF<<endl;
                          }
                					else{
                            cout << "	slti $t0";
                            cout <<", "<< variables[(yyvsp[(1) - (3)].node)->token3]<< " , "<< variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
                            cout << "        beq $t0"<<", $zero, IFL"<<countForIF<<endl;
                          }
                    }
                    if (strcmp((yyvsp[(2) - (3)].string), ">")== 0){
                            if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")) {
                              cout<< "	bgti "<< (yyvsp[(3) - (3)].node)->valname2 << " , "<< "$t"<<countFort-1 << " , IFL"<<countForIF<<endl;

                          }
                            else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
                              cout<< "	bgti "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , "<< (yyvsp[(1) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                            }
                            else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
                              cout<< "	bgti "<< (yyvsp[(3) - (3)].node)->valname2 << " , "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                            else{
                              cout << "	slti $t0";
                              cout <<", "<< variables[(yyvsp[(3) - (3)].node)->token3]<< " , "<< variables[(yyvsp[(1) - (3)].node)->token3] <<endl;
                              cout << "        beq $t0"<<", $zero, IFL"<<countForIF<<endl;
                            }
                    }

                    if (strcmp((yyvsp[(2) - (3)].string), "==")== 0){
                            if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")) {
                              cout<< "	bne "<< "$t"<<countFort-1 << " , "<< (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                          }
                            else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
                              cout<< "	bne "<< (yyvsp[(1) - (3)].node)->valname2 << " , "<<  variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                            else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
                              cout<< "	bne "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<<  (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;

                            }
                            else{
                              cout<< "	bne "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                    }

                    if (strcmp((yyvsp[(2) - (3)].string), "!=")== 0){
                            if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")) {
                              cout<< "	bgti "<<(yyvsp[(3) - (3)].node)->valname2 << " , "<<  "$t"<<countFort-1 << " , IFL"<<countForIF<<endl;
                              cout<< "	bgti "<< "$t"<<countFort-1 << " , "<< (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                              cout<< "	beq "<< "$t"<<countFort-1 << " , "<< (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                          }
                            else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
                              cout<< "	bgti "<<   variables[(yyvsp[(3) - (3)].node)->token3] << " , "<< (yyvsp[(1) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                              cout<< "	bgti "<< (yyvsp[(1) - (3)].node)->valname2 << " , "<<  variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;
                              cout<< "	beq "<< (yyvsp[(1) - (3)].node)->valname2 << " , "<<  variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                            else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
                              cout<< "	bgti "<< (yyvsp[(3) - (3)].node)->valname2 << " , "<<  variables[(yyvsp[(1) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;
                              cout<< "	bgti "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<<  (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                              cout<< "	beq "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<<  (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;

                            }
                            else{
                              cout<< "	bgti "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;
                              cout<< "	bgti "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;
                              cout<< "	beq "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                    }

                    if (strcmp((yyvsp[(2) - (3)].string), ">=")== 0){
                            if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")) {
                              cout<< "	bgti "<<(yyvsp[(3) - (3)].node)->valname2 << " , "<<  "$t"<<countFort-1 << " , IFL"<<countForIF<<endl;
                          }
                            else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
                              cout<< "	bgti "<<   variables[(yyvsp[(3) - (3)].node)->token3] << " , "<< (yyvsp[(1) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;

                            }
                            else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
                              cout<< "	bgti "<< (yyvsp[(3) - (3)].node)->valname2 << " , "<<  variables[(yyvsp[(1) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                            else{
                              cout<< "	bgti "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                    }

                    if (strcmp((yyvsp[(2) - (3)].string), "<=")== 0){
                            if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")) {
                              cout<< "	bgti "<<  "$t"<<countFort-1 << " , "<<(yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;
                          }
                            else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
                              cout<< "	bgti "<<   (yyvsp[(1) - (3)].node)->valname2 << " , "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                            else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
                              cout<< "	bgti "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<<  (yyvsp[(3) - (3)].node)->valname2 << " , IFL"<<countForIF<<endl;

                            }
                            else{
                              cout<< "	bgti "<< variables[(yyvsp[(1) - (3)].node)->token3] << " , "<< variables[(yyvsp[(3) - (3)].node)->token3] << " , IFL"<<countForIF<<endl;

                            }
                    }


                  ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 494 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"EXP");
                    b=ProgramNode((yyvsp[(1) - (3)].node),b);
                    b=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_ARITHMATICOP_MINUS",b);
                    b=ProgramNode((yyvsp[(3) - (3)].node),b);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
                      yyerror(4);
                    strcpy(b->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = b;

					if (strcmp((yyvsp[(1) - (3)].node)->token2,"int") == 0)
						sprintf((yyval.node)->valname2,"%d", atoi((yyvsp[(1) - (3)].node)->valname2) - atoi((yyvsp[(3) - (3)].node)->valname2));
					else
					sprintf((yyval.node)->valname2,"%f", atof((yyvsp[(1) - (3)].node)->valname2) - atof((yyvsp[(3) - (3)].node)->valname2));



          if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")){
						cout << "	sub $t" << countFort <<", "<<(yyvsp[(1) - (3)].node)->valname2<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["-"] = "$t" + std::to_string(countFort);
					}
					else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
						cout << "	sub $t" << countFort<<", "<< (yyvsp[(1) - (3)].node)->valname2 <<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["-"] = "$t" + std::to_string(countFort);
					  }
					else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
						cout << "	sub $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["-"] = "$t" + std::to_string(countFort);
					  }
					else{
						cout << "	sub $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["-"] = "$t" + std::to_string(countFort);
					  }

					countFort++;

          //cout << "	sub $t"<<countFort<<", "<<variables[$1->token3]<<" , "<<variables[$3->token3] <<endl;


          //countFort++;



                  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 540 "Bison_Rule.y"
    {
					tnode *c = CreateTnode();
                    strcpy(c->token,"EXP");
                    c=ProgramNode((yyvsp[(1) - (3)].node),c);
                    c=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_ARITHMATICOP_DIV",c);
                    c=ProgramNode((yyvsp[(3) - (3)].node),c);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
                      yyerror(4);
                    strcpy(c->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = c;

					if (strcmp((yyvsp[(1) - (3)].node)->token2,"int") == 0)
						sprintf((yyval.node)->valname2,"%d", atoi((yyvsp[(1) - (3)].node)->valname2) / atoi((yyvsp[(3) - (3)].node)->valname2));
					else
					sprintf((yyval.node)->valname2,"%f", atof((yyvsp[(1) - (3)].node)->valname2) / atof((yyvsp[(3) - (3)].node)->valname2));


          if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")){
						cout << "	div $t" << countFort <<", "<<(yyvsp[(1) - (3)].node)->valname2<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["/"] = "$t" + std::to_string(countFort);
					}
					else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
						cout << "	div $t" << countFort<<", "<< (yyvsp[(1) - (3)].node)->valname2 <<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["/"] = "$t" + std::to_string(countFort);
					  }
					else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
						cout << "	div $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["/"] = "$t" + std::to_string(countFort);
					  }
					else{
						cout << "	div $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["/"] = "$t" + std::to_string(countFort);
					  }

					countFort++;


//					cout << "	div $t"<< countFort <<", "<<variables[$1->token3]<<" , "<<variables[$3->token3] <<endl;
//					countFort++;
                  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 583 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"EXP");
                    b=ProgramNode((yyvsp[(1) - (3)].node),b);
                    b=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_ARITHMATICOP_PLUS",b);
                    b=ProgramNode((yyvsp[(3) - (3)].node),b);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
                      yyerror(4);
                    strcpy(b->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = b;

					if (strcmp((yyvsp[(1) - (3)].node)->token2,"int") == 0)
						sprintf((yyval.node)->valname2,"%d", atoi((yyvsp[(1) - (3)].node)->valname2) + atoi((yyvsp[(3) - (3)].node)->valname2));
					else
					sprintf((yyval.node)->valname2,"%f", atof((yyvsp[(1) - (3)].node)->valname2) + atof((yyvsp[(3) - (3)].node)->valname2));

					//cout << $$->valname2 << endl;

					if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")){
						cout << "	add $t" << countFort <<", "<<(yyvsp[(1) - (3)].node)->valname2<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["+"] = "$t" + std::to_string(countFort);
					}
					else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
						cout << "	add $t" << countFort<<", "<< (yyvsp[(1) - (3)].node)->valname2 <<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["+"] = "$t" + std::to_string(countFort);
					  }
					else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
						cout << "	add $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["+"] = "$t" + std::to_string(countFort);
					  }
					else{
						cout << "	add $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["+"] = "$t" + std::to_string(countFort);
					  }

					countFort++;

					  //cout << "PLUS" <<endl;
                  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 623 "Bison_Rule.y"
    {
					tnode *c = CreateTnode();
                    strcpy(c->token,"EXP");
                    c=ProgramNode((yyvsp[(1) - (3)].node),c);
                    c=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_ARITHMATICOP_MULT",c);
                    c=ProgramNode((yyvsp[(3) - (3)].node),c);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
                      yyerror(4);
                    strcpy(c->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = c;

					if (strcmp((yyvsp[(1) - (3)].node)->token2,"int") == 0)
						sprintf((yyval.node)->valname2,"%d", atoi((yyvsp[(1) - (3)].node)->valname2) * atoi((yyvsp[(3) - (3)].node)->valname2));
					else
					sprintf((yyval.node)->valname2,"%f", atof((yyvsp[(1) - (3)].node)->valname2) * atof((yyvsp[(3) - (3)].node)->valname2));

          if ((variables[(yyvsp[(1) - (3)].node)->token3]=="") && (variables[(yyvsp[(3) - (3)].node)->token3]=="")){
						cout << "	mul $t" << countFort <<", "<<(yyvsp[(1) - (3)].node)->valname2<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["*"] = "$t" + std::to_string(countFort);
					}
					else if (variables[(yyvsp[(1) - (3)].node)->token3]==""){
						cout << "	mul $t" << countFort<<", "<< (yyvsp[(1) - (3)].node)->valname2 <<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["*"] = "$t" + std::to_string(countFort);
					  }
					else if (variables[(yyvsp[(3) - (3)].node)->token3]==""){
						cout << "	mul $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<(yyvsp[(3) - (3)].node)->valname2 <<endl;
						tVariables["*"] = "$t" + std::to_string(countFort);
					  }
					else{
						cout << "	mul $t" << countFort <<", "<<variables[(yyvsp[(1) - (3)].node)->token3]<<" , "<<variables[(yyvsp[(3) - (3)].node)->token3] <<endl;
						tVariables["*"] = "$t" + std::to_string(countFort);
					  }

					countFort++;

          //cout << "	mul $t"<<countFort<<", "<<variables[$1->token3]<<" , "<<variables[$3->token3] <<endl;
					//countFort++;
                  ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 663 "Bison_Rule.y"
    {
					tnode *d = CreateTnode();
                    strcpy(d->token,"EXP");
                    d=ProgramNode((yyvsp[(1) - (3)].node),d);
                    d=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_ARITHMATICOP_POW",d);
                    d=ProgramNode((yyvsp[(3) - (3)].node),d);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
					  yyerror(4);
                    strcpy(d->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = d;
                  ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 675 "Bison_Rule.y"
    {
					tnode *e = CreateTnode();
                    strcpy(e->token,"EXP");
                    e=ProgramNode((yyvsp[(1) - (3)].node),e);
                    e=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_LOGICOP",e);
                    e=ProgramNode((yyvsp[(3) - (3)].node),e);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
					  yyerror(4);
                    strcpy(e->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = e;
                  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 687 "Bison_Rule.y"
    {
					tnode *f = CreateTnode();
                    strcpy(f->token,"EXP");
                    f=ProgramNode((yyvsp[(1) - (3)].node),f);
                    f=ProgramNode((yyvsp[(2) - (3)].string),"TOKEN_BITWISEOP",f);
                    f=ProgramNode((yyvsp[(3) - (3)].node),f);
                    if(strcmp((yyvsp[(1) - (3)].node)->token2,(yyvsp[(3) - (3)].node)->token2) != 0)
					  yyerror(4);
                    strcpy(f->token2,(yyvsp[(1) - (3)].node)->token2);
                    (yyval.node) = f;
                  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 699 "Bison_Rule.y"
    {
					tnode *g = CreateTnode();
                    strcpy(g->token,"EXP");
                    g=ProgramNode((yyvsp[(1) - (4)].string),"TOKEN_ID",g);
                    g=ProgramNode((yyvsp[(2) - (4)].string),"TOKEN_LB",g);
                    g=ProgramNode((yyvsp[(3) - (4)].node),g);
                    g=ProgramNode((yyvsp[(4) - (4)].string),"TOKEN_RB",g);
                    if(strcmp("int",(yyvsp[(3) - (4)].node)->token2) != 0)
					  yyerror("array index should be in int form");
                    if(table[(yyvsp[(1) - (4)].string)]=="")
					  yyerror(2,(yyvsp[(1) - (4)].string));
                    else
                      strcpy(g->token2,table[(yyvsp[(1) - (4)].string)].c_str());
                    (yyval.node) = g;
					strcpy((yyval.node)->token3, (yyvsp[(1) - (4)].string));
					if(strcmp((yyvsp[(3) - (4)].node)->token3,"")!=0)
					strcpy((yyval.node)->token4, (yyvsp[(3) - (4)].node)->token3);
					else
					strcpy((yyval.node)->valname4, (yyvsp[(3) - (4)].node)->valname2);
                  ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 720 "Bison_Rule.y"
    {
					tnode *h = CreateTnode();
                    strcpy(h->token,"EXP");
                    h=ProgramNode((yyvsp[(1) - (2)].string),"TOKEN_LOGICOP_NOT",h);
                    h=ProgramNode((yyvsp[(2) - (2)].node),h);
                    if(strcmp((yyvsp[(2) - (2)].node)->token2,"string") == 0)
					  yyerror("string error");
                    strcpy(h->token2,(yyvsp[(2) - (2)].node)->token2);
                    (yyval.node) = h;
                  ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 731 "Bison_Rule.y"
    {
					tnode *k = CreateTnode();
                    strcpy(k->token,"EXP");
                    k=ProgramNode((yyvsp[(1) - (3)].string),"TOKEN_LEFTPAREN",k);
                    k=ProgramNode((yyvsp[(2) - (3)].node),k);
                    k=ProgramNode((yyvsp[(3) - (3)].string),"TOKEN_RIGHTPAREN",k);
                    strcpy(k->token2,(yyvsp[(2) - (3)].node)->token2);
                    (yyval.node) = k;
					strcpy((yyval.node)->valname, (yyvsp[(2) - (3)].node)->valname);
					strcpy((yyval.node)->valname2, (yyvsp[(2) - (3)].node)->valname2);
                    strcpy((yyval.node)->valname3, (yyvsp[(2) - (3)].node)->valname3);
					strcpy((yyval.node)->valname4, (yyvsp[(2) - (3)].node)->valname4);			
					strcpy((yyval.node)->token, (yyvsp[(2) - (3)].node)->token);
					strcpy((yyval.node)->token2, (yyvsp[(2) - (3)].node)->token2);
					strcpy((yyval.node)->token3, (yyvsp[(2) - (3)].node)->token3);
					strcpy((yyval.node)->token4, (yyvsp[(2) - (3)].node)->token4);
                  ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 749 "Bison_Rule.y"
    {
					tnode *l = CreateTnode();
                    strcpy(l->token,"EXP");
                    l=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_ID",l);
                    if(table[(yyvsp[(1) - (1)].string)]=="")
					  yyerror(2,(yyvsp[(1) - (1)].string));
                    else
                      strcpy(l->token2,table[(yyvsp[(1) - (1)].string)].c_str());
                    (yyval.node) = l;
					strcpy((yyval.node)->valname2,env[(yyvsp[(1) - (1)].string)].c_str());
					strcpy((yyval.node)->token3,(yyvsp[(1) - (1)].string));
					//cout << env[$1] << $$->valname2 << "TOKEN_ID" <<endl;
                  ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 763 "Bison_Rule.y"
    { tnode *n = CreateTnode();
                    strcpy(n->token,"EXP");
                    n=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_INTCONST",n);
                    strcpy(n->token2,"int");
                    (yyval.node) = n;
					strcpy((yyval.node)->valname2, (yyvsp[(1) - (1)].string));
					// cout << $1 << "TOKEN_INTCONST"<<endl;
                  ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 772 "Bison_Rule.y"
    {
					tnode *p = CreateTnode();
                    strcpy(p->token,"EXP");
                    p=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_STRINGCONST",p);
                    strcpy(p->token2,"string");
                    (yyval.node) = p;
					strcpy((yyval.node)->valname2, (yyvsp[(1) - (1)].string));

                  ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 782 "Bison_Rule.y"
    {
					tnode *q = CreateTnode();
                    strcpy(q->token,"EXP");
                    q=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_CHARCONST",q);
                    strcpy(q->token2,"char");
                    (yyval.node) = q;
					strcpy((yyval.node)->valname2, (yyvsp[(1) - (1)].string));

                  ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 792 "Bison_Rule.y"
    { tnode *r = CreateTnode();
                    strcpy(r->token,"EXP");
                    r=ProgramNode((yyvsp[(1) - (1)].string),"TOKEN_FLOATCONST",r);
                    strcpy(r->token2,"float");
                    (yyval.node) = r;
					strcpy((yyval.node)->valname2, (yyvsp[(1) - (1)].string));

                  ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 800 "Bison_Rule.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 800 "Bison_Rule.y"
    {cout << "	addi $t"<< countFort<<", $zero," << (yyvsp[(5) - (5)].node)->valname2 <<endl << "LOOP" <<countForLoop<< ":"<< endl; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 800 "Bison_Rule.y"
    {cout << "	addi $t"<< countFort+1 <<", $zero," << (yyvsp[(8) - (8)].node)->valname2 <<endl << "	beq $t"<< countFort<<", $t"<< countFort+1 <<" , L"<<countForLoop<<endl; countFort+=2;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 801 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"LOOP");
                    a=ProgramNode((yyvsp[(1) - (13)].string),"TOKEN_LOOP",a);
                    a=ProgramNode((yyvsp[(2) - (13)].string),"TOKEN_ID",a);
                    a=ProgramNode((yyvsp[(4) - (13)].string),"TOKEN_LEFTPAREN",a);
                    a=ProgramNode((yyvsp[(5) - (13)].node),a);
                    a=ProgramNode((yyvsp[(7) - (13)].string),"TOKEN_UNTIL",a);
                    a=ProgramNode((yyvsp[(8) - (13)].node),a);
                    a=ProgramNode((yyvsp[(10) - (13)].string),"TOKEN_RIGHTPAREN",a);
                    a=ProgramNode((yyvsp[(11) - (13)].string),"TOKEN_LCB",a);
                    a=ProgramNode((yyvsp[(12) - (13)].node),a);
                    a=ProgramNode((yyvsp[(13) - (13)].string),"TOKEN_RCB",a);
                    (yyval.node) = a;


					cout << "	addi $t"<< countFort-2<<", $t"<< countFort-2 <<" , " << "1" <<endl;
					cout << "	move " <<variables[(yyvsp[(2) - (13)].string)] << ", $t"<< countFort-2 <<endl;
                    cout<<	"        j LOOP"<< countForLoop<< endl;

                    cout<<"L"<<countForLoop << ":" <<endl;
                    countForLoop++;
                  ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 826 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"CONDITION");
                    a=ProgramNode((yyvsp[(1) - (7)].string),"TOKEN_IFCONDITION",a);
                    a=ProgramNode((yyvsp[(2) - (7)].string),"TOKEN_LEFTPAREN",a);
                    a=ProgramNode((yyvsp[(3) - (7)].node),a);
                    a=ProgramNode((yyvsp[(4) - (7)].string),"TOKEN_RIGHTPAREN",a);
                    a=ProgramNode((yyvsp[(5) - (7)].string),"TOKEN_LCB",a);
                    a=ProgramNode((yyvsp[(6) - (7)].node),a);
                    a=ProgramNode((yyvsp[(7) - (7)].string),"TOKEN_RCB",a);
                    (yyval.node) = a;
                    cout<<"IFL"<<countForIF<<":"<<endl;
                    countForIF++;
                  ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 840 "Bison_Rule.y"
    {cout<<"        j ENDIF"<<countForEndIF<<endl;                       cout<<"IFL"<<countForIF<<":"<<endl;
                                      countForIF++;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 842 "Bison_Rule.y"
    {
				  tnode *b = CreateTnode();
                    strcpy(b->token,"CONDITION");
                    b=ProgramNode((yyvsp[(1) - (9)].string),"TOKEN_IFCONDITION",b);
                    b=ProgramNode((yyvsp[(2) - (9)].string),"TOKEN_LEFTPAREN",b);
                    b=ProgramNode((yyvsp[(3) - (9)].node),b);
                    b=ProgramNode((yyvsp[(4) - (9)].string),"TOKEN_RIGHTPAREN",b);
                    b=ProgramNode((yyvsp[(5) - (9)].string),"TOKEN_LCB",b);
                    b=ProgramNode((yyvsp[(6) - (9)].node),b);
                    b=ProgramNode((yyvsp[(7) - (9)].string),"TOKEN_RCB",b);
                    b=ProgramNode((yyvsp[(9) - (9)].node),b);
                    (yyval.node) = b;
                  ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 857 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"ELSECON");
                    a=ProgramNode((yyvsp[(1) - (4)].string),"TOKEN_ELSECONDITION",a);
                    a=ProgramNode((yyvsp[(2) - (4)].string),"TOKEN_LCB",a);
                    a=ProgramNode((yyvsp[(3) - (4)].node),a);
                    a=ProgramNode((yyvsp[(4) - (4)].string),"TOKEN_RCB",a);
                    (yyval.node) = a;
					cout <<"ENDIF"<<countForEndIF<<":"<<endl;
                    countForEndIF++;

                  ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 871 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"STMT_RETURN");
                    a=ProgramNode((yyvsp[(1) - (2)].string),"TOKEN_RETURN",a);
                    a=ProgramNode((yyvsp[(2) - (2)].node),a);
                    (yyval.node) = a;
                  ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 879 "Bison_Rule.y"
    {strcpy(typecheck,(yyvsp[(1) - (3)].node)->token2);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 880 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"STMT_DECLARE");
                    a=ProgramNode((yyvsp[(1) - (5)].node),a);
                    a=ProgramNode((yyvsp[(2) - (5)].string),"TOKEN_ID",a);
                    a=ProgramNode((yyvsp[(3) - (5)].node),a);
                    a=ProgramNode((yyvsp[(5) - (5)].node),a);
					if(table[(yyvsp[(2) - (5)].string)]!="")
					  yyerror(3,(yyvsp[(2) - (5)].string));

                    table[(yyvsp[(2) - (5)].string)]=(yyvsp[(1) - (5)].node)->token2;
                    (yyval.node) = a;

					if (strcmp((yyvsp[(5) - (5)].node)->valname2,"")==0)
						env[(yyvsp[(2) - (5)].string)]="0"; //asm
					else
					env[(yyvsp[(2) - (5)].string)]=(yyvsp[(5) - (5)].node)->valname2; //asm

					variables[(yyvsp[(2) - (5)].string)]= "$s" + std::to_string(countForS);
					countForS++;

					if (strcmp((yyvsp[(3) - (5)].node)->valname2,"")!=0 || strcmp((yyvsp[(3) - (5)].node)->token3,"")!=0)
					{
					cout << "	addi $a"<< countFora << ", $zero, " << 4* atoi((yyvsp[(3) - (5)].node)->valname2) << endl;
					cout << "	li $v" << countForv << ", 9" << endl << "	syscall" << endl;
					cout << "	move " << variables[(yyvsp[(2) - (5)].string)] << ", $v" <<countForv <<endl;

					// countFora++;
					// countForv++;
					}
					else
					cout << "	addi "<< variables[(yyvsp[(2) - (5)].string)]<< ", $zero," << env[(yyvsp[(2) - (5)].string)] << endl;


					//cout << "STMT_DECLARE"<<endl;
                  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 918 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"ARRAY_VAR");
                    a=ProgramNode((yyvsp[(1) - (3)].string),"TOKEN_LB",a);
                    a=ProgramNode((yyvsp[(2) - (3)].node),a);
                    a=ProgramNode((yyvsp[(3) - (3)].string),"TOKEN_RB",a);
                    (yyval.node) = a;
					if (variables[(yyvsp[(2) - (3)].node)->token3]=="")
					strcpy((yyval.node)->valname2, (yyvsp[(2) - (3)].node)->valname2);
					else
					strcpy((yyval.node)->token3, (yyvsp[(2) - (3)].node)->token3);

                  ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 932 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"ARRAY_VAR");
                    b=ProgramNode((yyvsp[(1) - (2)].string),"TOKEN_LB",b);
                    b=ProgramNode((yyvsp[(2) - (2)].string),"TOKEN_RB",b);
                    (yyval.node) = b;
                  ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 939 "Bison_Rule.y"
    {  tnode *c = CreateTnode();
                    strcpy(c->token,"ARRAY_VAR");
					c->isshow =0;
                    (yyval.node) = c;
					strcpy((yyval.node)->valname2 , "");
					strcpy((yyval.node)->token3 , "");
                  ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 948 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"IDS");
                    a=ProgramNode((yyvsp[(1) - (2)].node),a);
                    a=ProgramNode((yyvsp[(2) - (2)].node),a);
                    (yyval.node) = a;
					strcpy((yyval.node)->valname2,(yyvsp[(1) - (2)].node)->valname2);
                  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 957 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"IDS");
                    b=ProgramNode((yyvsp[(1) - (4)].string),"TOKEN_COMMA",b);
                    b=ProgramNode((yyvsp[(2) - (4)].string),"TOKEN_ID",b);
                    b=ProgramNode((yyvsp[(3) - (4)].node),b);
                    b=ProgramNode((yyvsp[(4) - (4)].node),b);
                    if(table[(yyvsp[(2) - (4)].string)]!= "")
					  yyerror(3,(yyvsp[(2) - (4)].string));
                    table[(yyvsp[(2) - (4)].string)]=typecheck;
                    (yyval.node) = b;
                  ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 969 "Bison_Rule.y"
    {
					tnode *c = CreateTnode();
                    strcpy(c->token,"IDS");
					c->isshow =0;
                    (yyval.node) = c;
                  ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 977 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"CALL");
                    a=ProgramNode((yyvsp[(1) - (4)].string),"TOKEN_ID",a);
                    a=ProgramNode((yyvsp[(2) - (4)].string),"TOKEN_LEFTPAREN",a);
                    a=ProgramNode((yyvsp[(3) - (4)].node),a);
                    a=ProgramNode((yyvsp[(4) - (4)].string),"TOKEN_RIGHTPAREN",a);
                    (yyval.node) = a;
                  ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 988 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"ARGS");
                    a=ProgramNode((yyvsp[(1) - (2)].node),a);
                    a=ProgramNode((yyvsp[(2) - (2)].node),a);
                    (yyval.node) = a;
                  ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 996 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"ARGS");
                    b=ProgramNode((yyvsp[(1) - (3)].string),"TOKEN_COMMA",b);
                    b=ProgramNode((yyvsp[(2) - (3)].node),b);
                    b=ProgramNode((yyvsp[(3) - (3)].node),b);
                    (yyval.node) = b;
                  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1004 "Bison_Rule.y"
    { tnode *c = CreateTnode();
                    strcpy(c->token,"ARGS");
					c->isshow =0;
                    (yyval.node) = c;
                  ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1011 "Bison_Rule.y"
    {
					tnode *a = CreateTnode();
                    strcpy(a->token,"STMT_ASSIGN");
                    a=ProgramNode((yyvsp[(1) - (4)].string),"TOKEN_ID",a);
                    a=ProgramNode((yyvsp[(2) - (4)].node),a);
                    a=ProgramNode((yyvsp[(3) - (4)].string),"TOKEN_ASSIGNOP",a);
                    a=ProgramNode((yyvsp[(4) - (4)].node),a);
                    if(table[(yyvsp[(1) - (4)].string)] == "")
                      yyerror(2,(yyvsp[(1) - (4)].string));
                    else if(strcmp(table[(yyvsp[(1) - (4)].string)].c_str(),(yyvsp[(4) - (4)].node)->token2) != 0)
                      yyerror(1);
                    (yyval.node) = a;


					if (strcmp((yyvsp[(2) - (4)].node)->valname2,"")!=0 || strcmp((yyvsp[(2) - (4)].node)->token3,"")!=0)

						{

						if (strcmp((yyvsp[(2) - (4)].node)->token3,"")!=0 )
							{
							cout << "	sll " << "$t" << countFort<< ", " << variables[(yyvsp[(2) - (4)].node)->token3]<< " , 2" << endl;
							cout << "	add " << "$t" << countFort << ", " << "$t" << countFort <<", " <<variables[(yyvsp[(1) - (4)].string)] << endl;

							if (strcmp((yyvsp[(4) - (4)].node)->token3,"")!=0)
							{
								cout << "	sw " << variables[(yyvsp[(4) - (4)].node)->token3]<< ", " << "0" << "(" << "$t" << countFort << ")" <<endl;
							}
							else
							{

								cout << "	addi " << "$t" << countFort+1 << ", $zero ," << (yyvsp[(4) - (4)].node)->valname2 << endl;
								cout << "	sw " << "$t" << countFort+1<< ", " << "0" << "(" << "$t" << countFort << ")" <<endl;
							}

							cout << "	sll " << "$t" << countFort<< ", " << variables[(yyvsp[(2) - (4)].node)->token3]<< " , 2" << endl;
							cout << "	add " << "$t" << countFort << ", " << "$t" << countFort <<", " <<variables[(yyvsp[(1) - (4)].string)] << endl;

							}
						else
							{
							countFort++;

							if (strcmp((yyvsp[(4) - (4)].node)->token3,"")==0)
							cout << "	addi " << "$t" << countFort << ", $zero ," << (yyvsp[(4) - (4)].node)->valname2 << endl;
							else
							cout << "	addi " << "$t" << countFort << ", $zero ," << variables[(yyvsp[(4) - (4)].node)->token3] << endl;
							cout << "	sw " << "$t" << countFort << ", " << atoi((yyvsp[(2) - (4)].node)->valname2) * 4 << "(" << variables[(yyvsp[(1) - (4)].string)] << ")" << endl;
							countFort--;
							}
						}
					else
						{
					env[(yyvsp[(1) - (4)].string)]=(yyvsp[(4) - (4)].node)->valname2;
				    countFort --;
					cout << "	move "<< variables[(yyvsp[(1) - (4)].string)]<< ", $t" <<countFort << endl;
						}

                  ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1070 "Bison_Rule.y"
    {
					tnode *b = CreateTnode();
                    strcpy(b->token,"STMT_ASSIGN");
                    b=ProgramNode((yyvsp[(1) - (2)].string),"TOKEN_ASSIGNOP",b);
                    b=ProgramNode((yyvsp[(2) - (2)].node),b);
                    if(strcmp(typecheck,(yyvsp[(2) - (2)].node)->token2) != 0)
                      yyerror(1);
                    (yyval.node) = b;
					strcpy((yyval.node)->valname2,(yyvsp[(2) - (2)].node)->valname2);
                  ;}
    break;



/* Line 1455 of yacc.c  */
#line 2884 "Bison_Rule.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1080 "Bison_Rule.y"



int main(int argc,char **argv)
{
  cout << ".data\n backn: .asciiz \"\\n\"\n.text\n.globl main\n";


	FILE *pFile = fopen(argv[1],"r");

	if (pFile == NULL)
	perror ("Error opening file");
	else
	{
	yyin = pFile;
	yyparse();
	//if(NTnode != NULL)
	//	printtree(NTnode);
	}
  // cout << output <<endl;
  return 0;
}

void yyerror(const char* m)
{
	cout <<"line: "<<line<<", column: "<<stringNumber<<", error: " << m <<endl;
}

void yyerror(int m)
{
  if (m==1)
	cout <<"line: "<<line<<", column: "<<stringNumber<<", error: "<< "assign operation" <<endl;
  else if (m==4)
	cout <<"line: "<<line<<", column: "<<stringNumber<<", error: "<< "arithmetic operation" <<endl;
}

void yyerror(int m, string m1)
{
  if(m==2)
  	cout <<"line: "<<line<<", column: "<<stringNumber<<", error: "<< "variable" << m1 << "is not defined" <<endl;
  else if(m==3)
  	cout <<"line: "<<line<<", column: "<<stringNumber<<", error: "<< "variable" << m1 << "exists before" <<endl;
}

void printtree(tnode *node)
{
  tnode *itr;

	for(int i=1;i<count1;i++)
	  cout<<"\t";

	if(count1)
	  cout<<"\\";

	if(printByTokenName & (node->lastchild==1))
	{
	 cout << node->token << "\n";
	 output.append(node->token);
	 output.append(" ");
	}
	else if(!printByTokenName & (node->lastchild==1))
	{
	cout << node->valname << "\n";
	output.append(node->valname);
	output.append(" ");
	}
	else
	{
	cout << node->token << "\n";
	output.append(node->token);
	output.append(" ");
	count1++;
	}

  for(itr = node->child; itr != NULL; itr = itr->ptr)
    if(printTepsilon==1)
	  printtree(itr);
	else if(printTepsilon==0)
	  if (itr->isshow==1)
		{
		  printtree(itr);
		}

  if(node->lastchild==0)
	count1--;
}

tnode* CreateTnode()
{
 tnode *t = new struct tnode();
 t->ptr = NULL;
 t->child = NULL;
 t->lastchild = 0;
 t->isshow=1;

 strcpy(t->token, "");
 strcpy(t->token2, "");
 strcpy(t->token3, "");
 strcpy(t->token4, "");
 strcpy(t->valname, "");
 strcpy(t->valname2, "");
 strcpy(t->valname3, "");
 strcpy(t->valname4, "");

 return(t);
}


tnode* ProgramNode(tnode* push, tnode* t)
{
	if(t->child == NULL)
		t->child = push;
	else
	{
		tnode *itr;
		for(itr = t->child; itr->ptr != NULL; itr = itr->ptr);
		itr->ptr = push;
	}
	return(t);
}


tnode* ProgramNode(string valname, string token, tnode* t)
{
	tnode *push = CreateTnode();
	push->lastchild = 1;
	strcpy(push->valname, valname.c_str());
	strcpy(push->token, token.c_str());
	t = ProgramNode(push,t);
	return (t);
}

