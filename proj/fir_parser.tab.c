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
#line 1 "fir_parser.y" /* yacc.c:339  */

//-- don't change *any* of these: if you do, you'll break the compiler.
#include <algorithm>
#include <memory>
#include <cstring>
#include <cdk/compiler.h>
#include <cdk/types/types.h>
#include "ast/all.h"
#define LINE                         compiler->scanner()->lineno()
#define yylex()                      compiler->scanner()->scan()
#define yyerror(compiler, s)         compiler->scanner()->error(s)
//-- don't change *any* of these --- END!

#line 80 "fir_parser.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "fir_parser.tab.h".  */
#ifndef YY_YY_FIR_PARSER_TAB_H_INCLUDED
# define YY_YY_FIR_PARSER_TAB_H_INCLUDED
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
    tINTEGER = 258,
    tFLOAT = 259,
    tSTRING = 260,
    tIDENTIFIER = 261,
    tNULL = 262,
    tNE = 263,
    tLE = 264,
    tGE = 265,
    tOR = 266,
    tAND = 267,
    tSIZEOF = 268,
    tRETURN = 269,
    tWRITE = 270,
    tWRITELN = 271,
    tPUBLIC = 272,
    tEXTERNAL = 273,
    tTYPE_STRING = 274,
    tTYPE_INT = 275,
    tTYPE_FLOAT = 276,
    tVOID = 277,
    tIF = 278,
    tTHEN = 279,
    tELSE = 280,
    tWHILE = 281,
    tDO = 282,
    tBREAK = 283,
    tCONTINUE = 284,
    tREAD = 285,
    tLEAVE = 286,
    tRESTART = 287,
    tFINALLY = 288,
    tEQ = 291,
    tUNARY = 292,
    tUMINUS = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "fir_parser.y" /* yacc.c:355  */

  //--- don't change *any* of these: if you do, you'll break the compiler.
  YYSTYPE() : type(cdk::primitive_type::create(0, cdk::TYPE_VOID)) {}
  ~YYSTYPE() {}
  YYSTYPE(const YYSTYPE &other) { *this = other; }
  YYSTYPE& operator=(const YYSTYPE &other) { type = other.type; return *this; }

  std::shared_ptr<cdk::basic_type> type;        /* expression type */
  //-- don't change *any* of these --- END!

  int                   i;	/* integer value */
  double                d;    /* double value*/
  std::string          *s;	/* symbol name or string literal */
  cdk::basic_node      *node; /* node pointer */
  cdk::sequence_node   *sequence;
  cdk::expression_node *expression; /* expression nodes */
  cdk::lvalue_node     *lvalue;
  std::vector<std::string> *ids;
  fir::block_node       *block;
  fir::body_node       *body;

#line 179 "fir_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (std::shared_ptr<cdk::compiler> compiler);

#endif /* !YY_YY_FIR_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 70 "fir_parser.y" /* yacc.c:358  */

//-- The rules below will be included in yyparse, the main parsing function.

#line 199 "fir_parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   493

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      51,    52,    43,    41,    54,    42,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
      40,    34,    39,    60,    36,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,    59,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    35,
      37,    38,    46,    47,    49,    50,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    76,    79,    80,    83,    84,    85,    88,
      89,    90,    93,    94,    97,    98,   101,   102,   103,   104,
     106,   109,   110,   113,   114,   115,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   129,   130,   131,   132,   133,
     134,   135,   138,   139,   140,   143,   146,   149,   150,   153,
     154,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   172,   173,   174,   175,   178,   179,
     180,   181,   183,   185,   187,   188,   189,   190,   191,   193,
     194,   195,   196,   197,   198,   200,   201,   203,   204,   205,
     207,   208,   210,   211,   212,   215,   216,   219,   220,   223,
     224,   225,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINTEGER", "tFLOAT", "tSTRING",
  "tIDENTIFIER", "tNULL", "tNE", "tLE", "tGE", "tOR", "tAND", "tSIZEOF",
  "tRETURN", "tWRITE", "tWRITELN", "tPUBLIC", "tEXTERNAL", "tTYPE_STRING",
  "tTYPE_INT", "tTYPE_FLOAT", "tVOID", "tIF", "tTHEN", "tELSE", "tWHILE",
  "tDO", "tBREAK", "tCONTINUE", "tREAD", "tLEAVE", "tRESTART", "tFINALLY",
  "'='", "\"->\"", "'@'", "\">>\"", "tEQ", "'>'", "'<'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "tUNARY", "tUMINUS", "';'", "\"<<<\"", "\">>>\"",
  "'('", "')'", "\"@\"", "','", "'{'", "'}'", "'['", "']'", "'~'", "'?'",
  "$accept", "file", "declarations", "declaration", "vardec", "vardecs",
  "opt_vardecs", "data_type", "opt_initializer", "fundec", "fundef",
  "body", "argdecs", "argdec", "block", "instructions", "opt_instructions",
  "instruction", "lvalue", "expression", "expressions", "opt_expressions",
  "integer", "float", "string", YY_NULLPTR
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
     285,   286,   287,   288,    61,   289,    64,   290,   291,    62,
      60,    43,    45,    42,    47,    37,   292,   293,    59,   294,
     295,    40,    41,   296,    44,   123,   125,    91,    93,   126,
      63
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     204,   110,   110,  -121,  -121,  -121,   110,   110,    21,   204,
    -121,   -14,   152,  -121,  -121,    66,    74,    15,    33,  -121,
    -121,  -121,    44,    82,    91,    67,    67,  -121,  -121,   161,
     110,  -121,    53,    58,  -121,  -121,  -121,  -121,  -121,    73,
    -121,    77,   161,   161,   161,   161,   161,    29,   448,  -121,
    -121,   143,   146,   -39,  -121,   110,   110,   161,   161,   159,
     159,   308,   188,   448,   161,   161,  -121,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
    -121,  -121,   -25,   110,    48,    99,   448,   121,   124,   328,
     122,  -121,   448,   196,    70,    70,    70,    70,   448,    70,
      70,    70,    -8,    -8,   159,   159,   159,   161,   125,   125,
     204,  -121,   144,  -121,    32,    39,   161,   126,  -121,   161,
    -121,   290,  -121,   -15,   137,   204,   131,   183,   125,   161,
    -121,   161,  -121,   448,   161,   239,  -121,   125,   154,  -121,
     153,  -121,   161,   161,   161,   161,    20,   136,  -121,   131,
     138,  -121,   346,    67,  -121,   290,   290,   247,  -121,  -121,
     125,  -121,   -43,   -40,   409,   428,  -121,   366,  -121,   387,
    -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,  -121,   131,
     131,  -121,  -121,   167,   176,   131,   131,  -121,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,    16,    17,    18,     0,     0,     0,     3,
       4,     0,     0,     7,     8,     0,     0,     0,     0,     1,
       5,     6,    21,     0,     0,    21,    21,    19,    20,     0,
      42,    11,     0,     0,    10,     9,    99,   100,   101,    64,
      71,     0,     0,     0,     0,     0,     0,    72,    22,    68,
      69,    70,     0,     0,    43,    42,    42,    97,     0,    88,
      87,     0,     0,    89,     0,     0,    94,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,    45,    23,     0,     0,     0,    95,    98,     0,     0,
      92,    93,    73,     0,    84,    80,    82,    86,    85,    81,
      83,    79,    74,    75,    76,    77,    78,     0,     0,     0,
      14,    29,    41,    44,    25,    24,     0,    90,    91,     0,
      65,    26,    39,    35,     0,    15,    49,     0,     0,     0,
      31,     0,    30,    96,     0,     0,    32,     0,    37,    12,
       0,    62,     0,     0,     0,     0,     0,     0,    63,    50,
       0,    47,     0,    21,    40,    28,    27,     0,    66,    36,
       0,    13,     0,     0,     0,     0,    58,     0,    60,     0,
      48,    46,    55,    34,    33,    67,    38,    56,    57,     0,
       0,    59,    61,    51,    53,     0,     0,    52,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,   201,   -19,  -121,  -121,     0,    97,  -121,
    -121,   -57,   100,   128,   -53,  -121,  -121,  -120,  -121,   -26,
      18,  -121,  -121,  -121,  -121
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,   125,   126,    52,    31,    13,
      14,   111,    53,    54,   112,   149,   150,   151,    47,   152,
      87,    88,    49,    50,    51
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      12,    15,    16,    48,    71,   177,    17,    18,   178,    12,
     107,   116,   108,    82,   116,    83,    59,    60,    61,    62,
      63,    19,   137,    36,    37,    38,    39,    40,   109,   170,
     110,    86,    89,    41,    21,    77,    78,    79,    92,    93,
     110,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    27,   122,   123,   130,   132,   183,
     184,    42,    43,    64,   136,   187,   188,   129,   166,   108,
     138,    44,    25,   148,   131,   154,   108,    45,    29,    46,
      26,   121,    71,    28,   159,   109,    65,   110,    32,    66,
     133,   124,   109,   135,   110,    30,   148,    33,   173,   174,
     114,    29,    83,   155,    55,   156,   140,   176,   157,    56,
     127,    75,    76,    77,    78,    79,    86,    86,   164,   165,
     167,   169,    34,    35,    57,   127,   148,   148,    58,     3,
       4,     5,   148,   148,    36,    37,    38,    39,    40,    36,
      37,    38,    39,    40,    41,   141,   142,   143,    80,    41,
       6,   115,    81,    83,   144,    84,    85,   145,    22,     7,
     162,   163,   146,   147,    36,    37,    38,    39,    40,    23,
      24,    71,    42,    43,    41,   116,   117,    42,    43,   119,
     110,   128,    44,   134,   168,   139,   110,    44,    45,   153,
      46,   160,   185,    45,   171,    46,    67,    68,    69,    70,
      71,   161,    42,    43,    67,    68,    69,    70,    71,   186,
      20,   113,    44,     0,     0,     0,     0,     0,    45,     0,
      46,     1,     2,     3,     4,     5,    72,    73,    74,    75,
      76,    77,    78,    79,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     6,     0,    91,    67,    68,    69,
      70,    71,     0,     7,   120,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,   158,    67,    68,
      69,    70,    71,     0,     0,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,   108,    72,    73,
      74,    75,    76,    77,    78,    79,    67,    68,    69,    70,
      71,     0,     0,   109,     0,   110,    72,    73,    74,    75,
      76,    77,    78,    79,    67,    68,    69,    70,    71,     0,
      90,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    67,    68,    69,    70,    71,     0,
     118,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,   172,    67,    68,    69,    70,    71,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,   181,     0,     0,    67,    68,    69,
      70,    71,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,   179,     0,   182,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,   180,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    29,    12,    48,     6,     7,    48,     9,
      35,    54,    37,    52,    54,    54,    42,    43,    44,    45,
      46,     0,    37,     3,     4,     5,     6,     7,    53,   149,
      55,    57,    58,    13,    48,    43,    44,    45,    64,    65,
      55,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    39,   108,   109,   114,   115,   179,
     180,    41,    42,    34,   121,   185,   186,    35,    48,    37,
     123,    51,     6,   126,    35,   128,    37,    57,    34,    59,
       6,   107,    12,    50,   137,    53,    57,    55,     6,    60,
     116,   110,    53,   119,    55,    51,   149,     6,   155,   156,
      52,    34,    54,   129,    51,   131,   125,   160,   134,    51,
     110,    41,    42,    43,    44,    45,   142,   143,   144,   145,
     146,   147,    25,    26,    51,   125,   179,   180,    51,    19,
      20,    21,   185,   186,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,    13,    14,    15,    16,     5,    13,
      40,    52,     6,    54,    23,    55,    56,    26,     6,    49,
     142,   143,    31,    32,     3,     4,     5,     6,     7,    17,
      18,    12,    41,    42,    13,    54,    52,    41,    42,    57,
      55,    37,    51,    57,    48,    48,    55,    51,    57,     6,
      59,    37,    25,    57,    56,    59,     8,     9,    10,    11,
      12,    48,    41,    42,     8,     9,    10,    11,    12,    33,
       9,    83,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    17,    18,    19,    20,    21,    38,    39,    40,    41,
      42,    43,    44,    45,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    40,    -1,    58,     8,     9,    10,
      11,    12,    -1,    49,    58,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    58,     8,     9,
      10,    11,    12,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     8,     9,    10,    11,
      12,    -1,    -1,    53,    -1,    55,    38,    39,    40,    41,
      42,    43,    44,    45,     8,     9,    10,    11,    12,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,     8,     9,    10,    11,    12,    -1,
      52,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,     8,     9,    10,    11,    12,
      -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    24,    -1,    48,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    27,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    40,    49,    62,    63,
      64,    65,    68,    70,    71,    68,    68,    68,    68,     0,
      64,    48,     6,    17,    18,     6,     6,    39,    50,    34,
      51,    69,     6,     6,    69,    69,     3,     4,     5,     6,
       7,    13,    41,    42,    51,    57,    59,    79,    80,    83,
      84,    85,    68,    73,    74,    51,    51,    51,    51,    80,
      80,    80,    80,    80,    34,    57,    60,     8,     9,    10,
      11,    12,    38,    39,    40,    41,    42,    43,    44,    45,
       5,     6,    52,    54,    73,    73,    80,    81,    82,    80,
      52,    58,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    35,    37,    53,
      55,    72,    75,    74,    52,    52,    54,    52,    52,    57,
      58,    80,    75,    75,    65,    66,    67,    68,    37,    35,
      72,    35,    72,    80,    57,    80,    72,    37,    75,    48,
      65,    14,    15,    16,    23,    26,    31,    32,    75,    76,
      77,    78,    80,     6,    75,    80,    80,    80,    58,    75,
      37,    48,    81,    81,    80,    80,    48,    80,    48,    80,
      78,    56,    48,    72,    72,    58,    75,    48,    48,    24,
      27,    48,    48,    78,    78,    25,    33,    78,    78
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    73,    74,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      84,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     1,     1,     4,
       4,     3,     2,     3,     0,     1,     1,     1,     1,     3,
       3,     0,     2,     5,     6,     6,     7,     8,     8,     6,
       7,     7,     8,     9,     9,     2,     4,     3,     5,     2,
       3,     1,     0,     1,     3,     2,     4,     1,     2,     0,
       1,     4,     6,     4,     6,     2,     3,     3,     2,     3,
       2,     3,     1,     1,     1,     4,     6,     7,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       4,     4,     3,     3,     2,     1,     3,     0,     1,     1,
       1,     1,     2
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
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (compiler, YY_("syntax error: cannot back up")); \
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
                  Type, Value, compiler); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (compiler);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, compiler);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, std::shared_ptr<cdk::compiler> compiler)
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
                                              , compiler);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, compiler); \
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, std::shared_ptr<cdk::compiler> compiler)
{
  YYUSE (yyvaluep);
  YYUSE (compiler);
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
yyparse (std::shared_ptr<cdk::compiler> compiler)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 75 "fir_parser.y" /* yacc.c:1646  */
    { compiler->ast((yyval.sequence) = new cdk::sequence_node(LINE)); }
#line 1473 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "fir_parser.y" /* yacc.c:1646  */
    { compiler->ast((yyval.sequence) = (yyvsp[0].sequence)); }
#line 1479 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1485 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1491 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1497 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1503 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1509 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tEXTERNAL,  (yyvsp[-2].type), *(yyvsp[-1].s), nullptr); }
#line 1515 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tPUBLIC,  (yyvsp[-2].type), *(yyvsp[-1].s), (yyvsp[0].expression)); }
#line 1521 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tEXTERNAL, (yyvsp[-2].type), *(yyvsp[-1].s), (yyvsp[0].expression)); }
#line 1527 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[-1].node));     }
#line 1533 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[-1].node), (yyvsp[-2].sequence)); }
#line 1539 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 97 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = nullptr; }
#line 1545 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 98 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1551 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 101 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_STRING);  }
#line 1557 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_INT);     }
#line 1563 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 103 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::primitive_type::create(8, cdk::TYPE_DOUBLE);  }
#line 1569 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 104 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::reference_type::create(4, (yyvsp[-1].type)); }
#line 1575 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 106 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::reference_type::create(4, nullptr); }
#line 1581 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 109 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = nullptr; /* must be nullptr, not NIL */ }
#line 1587 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 110 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1593 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_declaration_node(LINE, tEXTERNAL, (yyvsp[-4].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1599 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_declaration_node(LINE, tPUBLIC,  (yyvsp[-5].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1605 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_declaration_node(LINE, tPUBLIC,  (yyvsp[-5].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1611 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 118 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tEXTERNAL, *(yyvsp[-5].s), (yyvsp[-3].sequence), nullptr, new fir::return_node(LINE, (yyvsp[0].expression))); }
#line 1617 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 119 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-5].s), (yyvsp[-3].sequence), nullptr, new fir::return_node(LINE, (yyvsp[0].expression))); }
#line 1623 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-5].s), (yyvsp[-3].sequence), nullptr, new fir::return_node(LINE, (yyvsp[0].expression))); }
#line 1629 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tEXTERNAL, *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].body), nullptr); }
#line 1635 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 122 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].body), nullptr); }
#line 1641 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 123 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].body), nullptr); }
#line 1647 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 124 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tEXTERNAL, *(yyvsp[-6].s), (yyvsp[-4].sequence), (yyvsp[0].body), new fir::return_node(LINE, (yyvsp[-1].expression))); }
#line 1653 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 125 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-6].s), (yyvsp[-4].sequence), (yyvsp[0].body), new fir::return_node(LINE, (yyvsp[-1].expression))); }
#line 1659 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 126 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-6].s), (yyvsp[-4].sequence), (yyvsp[0].body), new fir::return_node(LINE, (yyvsp[-1].expression))); }
#line 1665 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 129 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[0].block), nullptr, nullptr); }
#line 1671 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 130 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[-2].block), nullptr, (yyvsp[0].block)); }
#line 1677 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 131 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[-1].block), (yyvsp[0].block), nullptr); }
#line 1683 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 132 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block)); }
#line 1689 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 133 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, nullptr, nullptr, (yyvsp[0].block)); }
#line 1695 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 134 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, nullptr, (yyvsp[-2].block), (yyvsp[0].block)); }
#line 1701 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 135 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, nullptr, (yyvsp[0].block), nullptr); }
#line 1707 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 138 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE);  }
#line 1713 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 139 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node));     }
#line 1719 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-2].sequence)); }
#line 1725 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 143 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tEXTERNAL, (yyvsp[-1].type), *(yyvsp[0].s), nullptr); }
#line 1731 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.block) = new fir::block_node(LINE, (yyvsp[-2].sequence), (yyvsp[-1].sequence)); }
#line 1737 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 149 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node));     }
#line 1743 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 150 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1749 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 153 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE); }
#line 1755 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 154 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1761 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::if_node(LINE, (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 1767 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 158 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::if_else_node(LINE, (yyvsp[-4].expression), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1773 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 159 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::while_node(LINE, (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 1779 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 160 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::while_node(LINE, (yyvsp[-4].expression), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1785 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 161 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::evaluation_node(LINE, (yyvsp[-1].expression)); }
#line 1791 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 162 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::write_node(LINE, (yyvsp[-1].sequence), false); }
#line 1797 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 163 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::write_node(LINE, (yyvsp[-1].sequence), true); }
#line 1803 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 164 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::leave_node(LINE); }
#line 1809 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 165 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::leave_node(LINE, (yyvsp[-1].expression)); }
#line 1815 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 166 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::restart_node(LINE); }
#line 1821 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 167 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::restart_node(LINE, (yyvsp[-1].expression)); }
#line 1827 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 168 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::return_node(LINE, nullptr); }
#line 1833 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 169 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].block); }
#line 1839 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 172 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new cdk::variable_node(LINE, *(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 1845 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 173 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new fir::left_index_node(LINE, new cdk::rvalue_node(LINE, (yyvsp[-3].lvalue)), (yyvsp[-1].expression)); }
#line 1851 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 174 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new fir::left_index_node(LINE, (yyvsp[-4].expression), (yyvsp[-1].expression)); }
#line 1857 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 175 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new fir::left_index_node(LINE, new fir::function_call_node(LINE, *(yyvsp[-6].s), (yyvsp[-4].sequence)), (yyvsp[-1].expression)); }
#line 1863 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 178 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1869 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 179 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1875 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 180 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::string_node(LINE, (yyvsp[0].s)); }
#line 1881 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 181 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::null_node(LINE); }
#line 1887 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 183 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::rvalue_node(LINE, (yyvsp[0].lvalue)); }
#line 1893 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 185 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::assignment_node(LINE, (yyvsp[-2].lvalue), (yyvsp[0].expression)); }
#line 1899 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 187 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::add_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1905 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 188 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::sub_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1911 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 189 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::mul_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1917 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 190 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::div_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1923 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 191 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::mod_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1929 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 193 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::lt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1935 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 194 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::le_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1941 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 195 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::eq_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1947 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 196 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::ge_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1953 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 197 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::gt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1959 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 198 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::ne_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1965 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 200 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::and_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1971 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 201 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::or_node (LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1977 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 203 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::neg_node(LINE, (yyvsp[0].expression)); }
#line 1983 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 204 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1989 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 205 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::not_node(LINE, (yyvsp[0].expression)); }
#line 1995 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 207 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::function_call_node(LINE, *(yyvsp[-3].s), (yyvsp[-1].sequence)); delete (yyvsp[-3].s); }
#line 2001 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 208 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::sizeof_node(LINE, (yyvsp[-1].expression)); }
#line 2007 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 210 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2013 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 211 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::memory_node(LINE, (yyvsp[-1].expression)); }
#line 2019 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 212 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::adress_of_node(LINE, (yyvsp[-1].lvalue)); }
#line 2025 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 215 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression));     }
#line 2031 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 216 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression), (yyvsp[-2].sequence)); }
#line 2037 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 219 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE); }
#line 2043 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 220 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = (yyvsp[0].sequence); }
#line 2049 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 223 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::integer_node(LINE, (yyvsp[0].i)); }
#line 2055 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 224 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::double_node(LINE, (yyvsp[0].d)); }
#line 2061 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 225 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2067 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 226 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); (yyval.s)->append(*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 2073 "fir_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2077 "fir_parser.tab.c" /* yacc.c:1646  */
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
      yyerror (compiler, YY_("syntax error"));
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
        yyerror (compiler, yymsgp);
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
                      yytoken, &yylval, compiler);
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
                  yystos[yystate], yyvsp, compiler);
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
  yyerror (compiler, YY_("memory exhausted"));
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
                  yytoken, &yylval, compiler);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, compiler);
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
#line 229 "fir_parser.y" /* yacc.c:1906  */

