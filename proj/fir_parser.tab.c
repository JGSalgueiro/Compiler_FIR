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
#define YYLAST   506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

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
      89,    92,    93,    94,   105,   106,   107,   108,   110,   113,
     114,   117,   118,   119,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   133,   134,   135,   136,   137,   138,   139,
     142,   143,   144,   147,   150,   153,   154,   157,   158,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   176,   177,   178,   179,   182,   183,   184,   185,
     187,   189,   191,   192,   193,   194,   195,   197,   198,   199,
     200,   201,   202,   204,   205,   207,   208,   209,   211,   212,
     213,   215,   216,   217,   220,   221,   224,   225,   228,   229,
     230,   231
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
  "$accept", "file", "declarations", "declaration", "opt_decs", "vardec",
  "data_type", "opt_initializer", "fundec", "fundef", "body", "argdecs",
  "argdec", "block", "instructions", "opt_instructions", "instruction",
  "lvalue", "expression", "expressions", "opt_expressions", "integer",
  "float", "string", YY_NULLPTR
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

#define YYPACT_NINF -88

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-88)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,   197,   197,   -88,   -88,   -88,   197,   197,     2,    83,
     -88,    -3,     0,   -88,   -88,    72,    78,    58,    60,   -88,
     -88,   -88,   -31,   109,   120,    95,    95,   -88,   -88,   199,
     197,   -88,    98,   105,   -88,   -88,   -88,   -88,   -88,   106,
     -88,   110,   -88,   199,   199,   199,   199,   199,   -26,   461,
     -88,   -88,   155,   160,   -41,   -88,   197,   197,   199,   199,
     156,   156,   321,    30,   461,   199,   199,   -88,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   -88,   -88,   -23,   197,    31,    53,   461,   121,   124,
     341,   123,   -88,   461,   222,    49,    49,    49,    49,   461,
      49,    49,    49,    69,    69,   156,   156,   156,   199,   122,
     122,    83,   -88,   144,   -88,   116,   117,   199,   125,   -88,
     199,   -88,   303,   -88,   -36,    83,   132,   122,   199,   -88,
     199,   -88,   461,   199,   260,   -88,   122,   147,   -88,   199,
     199,   199,   199,   137,   194,   -88,   132,   130,   -88,   359,
     -88,   303,   303,   281,   -88,   -88,   122,    28,   111,   422,
     441,   -88,   379,   -88,   400,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   132,   132,   -88,   -88,   165,   159,
     132,   132,   -88,   -88
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,    14,    15,    16,     0,     0,     0,     3,
       4,     0,     0,     7,     8,     0,     0,     0,     0,     1,
       5,     6,    19,     0,     0,    19,    19,    17,    18,     0,
      40,    13,     0,     0,    12,    11,    98,    99,   100,    62,
      69,     0,    90,     0,     0,     0,     0,     0,    70,    20,
      66,    67,    68,     0,     0,    41,    40,    40,    96,     0,
      86,    85,     0,     0,    87,     0,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,    43,    21,     0,     0,     0,    94,    97,     0,
       0,    91,    92,    71,     0,    82,    78,    80,    84,    83,
      79,    81,    77,    72,    73,    74,    75,    76,     0,     0,
       0,     9,    27,    39,    42,    23,    22,     0,    88,    89,
       0,    63,    24,    37,    33,    10,    47,     0,     0,    29,
       0,    28,    95,     0,     0,    30,     0,    35,    60,     0,
       0,     0,     0,     0,     0,    61,    48,     0,    45,     0,
      38,    26,    25,     0,    64,    34,     0,     0,     0,     0,
       0,    56,     0,    58,     0,    46,    44,    53,    32,    31,
      65,    36,    54,    55,     0,     0,    57,    59,    49,    51,
       0,     0,    50,    52
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -88,   -88,    82,    -9,   -88,   -88,     3,   -10,   -88,   -88,
     -87,   -30,   126,   -47,   -88,   -88,   -50,   -88,   -22,   -73,
     -88,   -88,   -88,   -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   126,    11,    12,    31,    13,    14,
     112,    54,    55,   113,   146,   147,   148,    48,   149,    88,
      89,    50,    51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,   136,    19,    29,    15,    16,    22,    49,    65,    17,
      18,    83,   108,    84,   109,    34,    35,    23,    24,   111,
      30,    60,    61,    62,    63,    64,    85,    86,   129,   131,
     110,    66,   111,    53,    67,   135,    87,    90,    68,    69,
      70,    71,    72,    93,    94,    21,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    53,
      53,    72,   123,   124,   168,   169,   157,   158,    73,    74,
      75,    76,    77,    78,    79,    80,   172,   137,    25,   145,
     150,    72,   117,   115,    26,    84,   122,    53,    92,   155,
      76,    77,    78,    79,    80,   132,   165,    27,   134,   145,
       1,     2,     3,     4,     5,   116,   151,    84,   152,   171,
      28,   153,    78,    79,    80,    32,    20,    87,    87,   159,
     160,   162,   164,     6,   178,   179,    33,   145,   145,    29,
     182,   183,     7,   145,   145,    36,    37,    38,    39,    40,
      36,    37,    38,    39,    40,    41,   138,   139,   140,    56,
      41,   128,   130,   109,   109,   141,    57,    58,   142,   173,
      81,    59,    42,   143,   144,   117,    82,    42,    72,   110,
     110,   111,   111,    43,    44,   117,   118,   111,    43,    44,
     120,   127,   133,    45,   156,   161,   166,   111,    45,    46,
     180,    47,   181,   125,    46,     0,    47,    36,    37,    38,
      39,    40,    36,    37,    38,    39,    40,    41,     0,     0,
     114,     0,    41,     0,     0,     0,     3,     4,     5,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,    42,
      68,    69,    70,    71,    72,    43,    44,     6,     0,     0,
      43,    44,   163,     0,     0,    45,     7,     0,     0,     0,
      45,    46,     0,    47,     0,     0,    46,     0,    47,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    68,    69,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,     0,     0,   154,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,   170,
     109,    73,    74,    75,    76,    77,    78,    79,    80,    68,
      69,    70,    71,    72,     0,     0,   110,     0,   111,    73,
      74,    75,    76,    77,    78,    79,    80,    68,    69,    70,
      71,    72,     0,    91,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    68,    69,    70,
      71,    72,     0,   119,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,   167,    68,    69,
      70,    71,    72,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,   176,     0,     0,
      68,    69,    70,    71,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,    80,   174,     0,   177,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,   175,    68,
      69,    70,    71,    72,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
       9,    37,     0,    34,     1,     2,     6,    29,    34,     6,
       7,    52,    35,    54,    37,    25,    26,    17,    18,    55,
      51,    43,    44,    45,    46,    47,    56,    57,   115,   116,
      53,    57,    55,    30,    60,   122,    58,    59,     8,     9,
      10,    11,    12,    65,    66,    48,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    56,
      57,    12,   109,   110,   151,   152,   139,   140,    38,    39,
      40,    41,    42,    43,    44,    45,    48,   124,     6,   126,
     127,    12,    54,    52,     6,    54,   108,    84,    58,   136,
      41,    42,    43,    44,    45,   117,   146,    39,   120,   146,
      17,    18,    19,    20,    21,    52,   128,    54,   130,   156,
      50,   133,    43,    44,    45,     6,   125,   139,   140,   141,
     142,   143,   144,    40,   174,   175,     6,   174,   175,    34,
     180,   181,    49,   180,   181,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    13,    14,    15,    16,    51,
      13,    35,    35,    37,    37,    23,    51,    51,    26,    48,
       5,    51,    30,    31,    32,    54,     6,    30,    12,    53,
      53,    55,    55,    41,    42,    54,    52,    55,    41,    42,
      57,    37,    57,    51,    37,    48,    56,    55,    51,    57,
      25,    59,    33,   111,    57,    -1,    59,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,    13,    -1,    -1,
      84,    -1,    13,    -1,    -1,    -1,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    30,
       8,     9,    10,    11,    12,    41,    42,    40,    -1,    -1,
      41,    42,    48,    -1,    -1,    51,    49,    -1,    -1,    -1,
      51,    57,    -1,    59,    -1,    -1,    57,    -1,    59,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    -1,    58,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    58,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     8,
       9,    10,    11,    12,    -1,    -1,    53,    -1,    55,    38,
      39,    40,    41,    42,    43,    44,    45,     8,     9,    10,
      11,    12,    -1,    52,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,     8,     9,    10,
      11,    12,    -1,    52,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    24,    -1,    48,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    27,     8,
       9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    18,    19,    20,    21,    40,    49,    62,    63,
      64,    66,    67,    69,    70,    67,    67,    67,    67,     0,
      64,    48,     6,    17,    18,     6,     6,    39,    50,    34,
      51,    68,     6,     6,    68,    68,     3,     4,     5,     6,
       7,    13,    30,    41,    42,    51,    57,    59,    78,    79,
      82,    83,    84,    67,    72,    73,    51,    51,    51,    51,
      79,    79,    79,    79,    79,    34,    57,    60,     8,     9,
      10,    11,    12,    38,    39,    40,    41,    42,    43,    44,
      45,     5,     6,    52,    54,    72,    72,    79,    80,    81,
      79,    52,    58,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    35,    37,
      53,    55,    71,    74,    73,    52,    52,    54,    52,    52,
      57,    58,    79,    74,    74,    63,    65,    37,    35,    71,
      35,    71,    79,    57,    79,    71,    37,    74,    14,    15,
      16,    23,    26,    31,    32,    74,    75,    76,    77,    79,
      74,    79,    79,    79,    58,    74,    37,    80,    80,    79,
      79,    48,    79,    48,    79,    77,    56,    48,    71,    71,
      58,    74,    48,    48,    24,    27,    48,    48,    77,    77,
      25,    33,    77,    77
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    83,
      84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     1,     1,     0,
       1,     4,     4,     3,     1,     1,     1,     3,     3,     0,
       2,     5,     6,     6,     7,     8,     8,     6,     7,     7,
       8,     9,     9,     2,     4,     3,     5,     2,     3,     1,
       0,     1,     3,     2,     4,     1,     2,     0,     1,     4,
       6,     4,     6,     2,     3,     3,     2,     3,     2,     3,
       1,     1,     1,     4,     6,     7,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     4,     4,
       1,     3,     3,     2,     1,     3,     0,     1,     1,     1,
       1,     2
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
#line 1475 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 76 "fir_parser.y" /* yacc.c:1646  */
    { compiler->ast((yyval.sequence) = (yyvsp[0].sequence)); }
#line 1481 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 79 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node)); }
#line 1487 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1493 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 83 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 1499 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 84 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1505 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1511 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = nullptr; }
#line 1517 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1523 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 92 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tEXTERNAL,  (yyvsp[-2].type), *(yyvsp[-1].s), nullptr); }
#line 1529 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 93 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tPUBLIC,  (yyvsp[-2].type), *(yyvsp[-1].s), (yyvsp[0].expression)); }
#line 1535 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tEXTERNAL, (yyvsp[-2].type), *(yyvsp[-1].s), (yyvsp[0].expression)); }
#line 1541 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_STRING);  }
#line 1547 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 106 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::primitive_type::create(4, cdk::TYPE_INT);     }
#line 1553 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::primitive_type::create(8, cdk::TYPE_DOUBLE);  }
#line 1559 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::reference_type::create(4, (yyvsp[-1].type)); }
#line 1565 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 110 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.type) = cdk::reference_type::create(4, nullptr); }
#line 1571 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 113 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = nullptr; /* must be nullptr, not NIL */ }
#line 1577 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 114 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1583 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 117 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_declaration_node(LINE, tEXTERNAL, (yyvsp[-4].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1589 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 118 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_declaration_node(LINE, tPUBLIC,  (yyvsp[-5].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1595 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 119 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_declaration_node(LINE, tPUBLIC,  (yyvsp[-5].type), *(yyvsp[-3].s), (yyvsp[-1].sequence)); }
#line 1601 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tEXTERNAL, *(yyvsp[-5].s), (yyvsp[-3].sequence), nullptr, new fir::return_node(LINE, (yyvsp[0].expression))); }
#line 1607 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-5].s), (yyvsp[-3].sequence), nullptr, new fir::return_node(LINE, (yyvsp[0].expression))); }
#line 1613 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 124 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-5].s), (yyvsp[-3].sequence), nullptr, new fir::return_node(LINE, (yyvsp[0].expression))); }
#line 1619 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tEXTERNAL, *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].body), nullptr); }
#line 1625 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 126 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].body), nullptr); }
#line 1631 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 127 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-4].s), (yyvsp[-2].sequence), (yyvsp[0].body), nullptr); }
#line 1637 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 128 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tEXTERNAL, *(yyvsp[-6].s), (yyvsp[-4].sequence), (yyvsp[0].body), new fir::return_node(LINE, (yyvsp[-1].expression))); }
#line 1643 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 129 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-6].s), (yyvsp[-4].sequence), (yyvsp[0].body), new fir::return_node(LINE, (yyvsp[-1].expression))); }
#line 1649 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 130 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::function_definition_node(LINE, tPUBLIC, *(yyvsp[-6].s), (yyvsp[-4].sequence), (yyvsp[0].body), new fir::return_node(LINE, (yyvsp[-1].expression))); }
#line 1655 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 133 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[0].block), nullptr, nullptr); }
#line 1661 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 134 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[-2].block), nullptr, (yyvsp[0].block)); }
#line 1667 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 135 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[-1].block), (yyvsp[0].block), nullptr); }
#line 1673 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 136 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, (yyvsp[-3].block), (yyvsp[-2].block), (yyvsp[0].block)); }
#line 1679 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 137 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, nullptr, nullptr, (yyvsp[0].block)); }
#line 1685 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, nullptr, (yyvsp[-2].block), (yyvsp[0].block)); }
#line 1691 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 139 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.body) = new fir::body_node(LINE, nullptr, (yyvsp[0].block), nullptr); }
#line 1697 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE);  }
#line 1703 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 143 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node));     }
#line 1709 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-2].sequence)); }
#line 1715 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::variable_declaration_node(LINE, tEXTERNAL, (yyvsp[-1].type), *(yyvsp[0].s), nullptr); }
#line 1721 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 150 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.block) = new fir::block_node(LINE, (yyvsp[-2].sequence), (yyvsp[-1].sequence)); }
#line 1727 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 153 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node));     }
#line 1733 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 154 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].node), (yyvsp[-1].sequence)); }
#line 1739 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 157 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE); }
#line 1745 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 158 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = (yyvsp[0].sequence); }
#line 1751 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 161 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::if_node(LINE, (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 1757 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 162 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::if_else_node(LINE, (yyvsp[-4].expression), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1763 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 163 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::while_node(LINE, (yyvsp[-2].expression), (yyvsp[0].node)); }
#line 1769 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 164 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::while_node(LINE, (yyvsp[-4].expression), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1775 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 165 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::evaluation_node(LINE, (yyvsp[-1].expression)); }
#line 1781 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 166 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::write_node(LINE, (yyvsp[-1].sequence), false); }
#line 1787 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 167 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::write_node(LINE, (yyvsp[-1].sequence), true); }
#line 1793 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 168 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::leave_node(LINE); }
#line 1799 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::leave_node(LINE, (yyvsp[-1].expression)); }
#line 1805 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 170 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::restart_node(LINE); }
#line 1811 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 171 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::restart_node(LINE, (yyvsp[-1].expression)); }
#line 1817 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 172 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = new fir::return_node(LINE, nullptr); }
#line 1823 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 173 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].block); }
#line 1829 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 176 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new cdk::variable_node(LINE, *(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 1835 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 177 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new fir::left_index_node(LINE, new cdk::rvalue_node(LINE, (yyvsp[-3].lvalue)), (yyvsp[-1].expression)); }
#line 1841 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 178 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new fir::left_index_node(LINE, (yyvsp[-4].expression), (yyvsp[-1].expression)); }
#line 1847 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 179 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.lvalue) = new fir::left_index_node(LINE, new fir::function_call_node(LINE, *(yyvsp[-6].s), (yyvsp[-4].sequence)), (yyvsp[-1].expression)); }
#line 1853 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 182 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1859 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 183 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1865 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 184 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::string_node(LINE, (yyvsp[0].s)); }
#line 1871 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 185 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::null_node(LINE); }
#line 1877 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 187 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::rvalue_node(LINE, (yyvsp[0].lvalue)); }
#line 1883 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 189 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::assignment_node(LINE, (yyvsp[-2].lvalue), (yyvsp[0].expression)); }
#line 1889 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 191 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::add_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1895 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 192 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::sub_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1901 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 193 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::mul_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1907 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 194 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::div_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1913 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 195 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::mod_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1919 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 197 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::lt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1925 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 198 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::le_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1931 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::eq_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1937 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 200 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::ge_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1943 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 201 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::gt_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1949 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 202 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::ne_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1955 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 204 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::and_node(LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1961 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 205 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::or_node (LINE, (yyvsp[-2].expression), (yyvsp[0].expression)); }
#line 1967 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 207 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::neg_node(LINE, (yyvsp[0].expression)); }
#line 1973 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 208 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[0].expression); }
#line 1979 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 209 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::not_node(LINE, (yyvsp[0].expression)); }
#line 1985 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 211 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::function_call_node(LINE, *(yyvsp[-3].s), (yyvsp[-1].sequence)); delete (yyvsp[-3].s); }
#line 1991 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 212 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::sizeof_node(LINE, (yyvsp[-1].expression)); }
#line 1997 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 213 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::read_node(LINE); }
#line 2003 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 215 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = (yyvsp[-1].expression); }
#line 2009 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 216 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::memory_node(LINE, (yyvsp[-1].expression)); }
#line 2015 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 217 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new fir::address_of_node(LINE, (yyvsp[-1].lvalue)); }
#line 2021 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 220 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression));     }
#line 2027 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 221 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE, (yyvsp[0].expression), (yyvsp[-2].sequence)); }
#line 2033 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 224 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = new cdk::sequence_node(LINE); }
#line 2039 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 225 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.sequence) = (yyvsp[0].sequence); }
#line 2045 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 228 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::integer_node(LINE, (yyvsp[0].i)); }
#line 2051 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 229 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.expression) = new cdk::double_node(LINE, (yyvsp[0].d)); }
#line 2057 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 230 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2063 "fir_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 231 "fir_parser.y" /* yacc.c:1646  */
    { (yyval.s) = (yyvsp[-1].s); (yyval.s)->append(*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 2069 "fir_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2073 "fir_parser.tab.c" /* yacc.c:1646  */
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
#line 234 "fir_parser.y" /* yacc.c:1906  */

