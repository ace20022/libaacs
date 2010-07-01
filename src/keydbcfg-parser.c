
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "keydbcfg-parser.y"

/*
 * This file is part of libaacs
 * Copyright (C) 2010  gates
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#include "keydbcfg.h"
#include "util/macro.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Disable some warnings triggered by generated parser */
#if defined __GNUC__
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wimplicit-function-declaration"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif

/* Fix some warnings trigger by -Wundef which can't be ignored */
#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 0

#define DIGIT_KEY_PAIR_LIST_FREE(X) do   \
{                                        \
  while (X)                              \
  {                                      \
    digit_key_pair_list *next = X->next; \
    X_FREE(X->key_pair.key);             \
    X_FREE(X);                           \
    X = next;                            \
  }                                      \
} while (0);

/* enum used in certain functions to add proper entry */
enum
{
  ENTRY_TYPE_DISCID,
  ENTRY_TYPE_TITLE,
  ENTRY_TYPE_DATE,
  ENTRY_TYPE_MEK,
  ENTRY_TYPE_VID,
  ENTRY_TYPE_BN,
  ENTRY_TYPE_VUK,
  ENTRY_TYPE_PAK,
  ENTRY_TYPE_TK,
  ENTRY_TYPE_UK
};

static dk_list *new_dk_list();
static dk_list *add_dk_list_entry(dk_list *list, const char *key,
                                  const char *node);
static pk_list *new_pk_list();
static pk_list *add_pk_list_entry(pk_list *list, const char *key);
static cert_list *new_cert_list();
static cert_list *add_cert_list(cert_list *list, const char *host_priv_key,
                         const char *host_cert, const char *host_nonce,
                         const char *host_key_point);
static title_entry_list *new_title_entry_list();
static int add_entry(title_entry_list *list, int type, const char *entry);
static digit_key_pair_list *new_digit_key_pair_list();
static digit_key_pair_list *add_digit_key_pair_entry(digit_key_pair_list *list,
                              int type, unsigned int digit, const char *key);
static int add_date_entry(title_entry_list *list, unsigned int year,
                          unsigned int month, unsigned int day);
void yyerror (void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist,
              title_entry_list *celist, digit_key_pair_list *dkplist,
              const char *msg);
extern int yyget_lineno  (void *scanner);

/* uncomment the line below for debugging */
// int yydebug = 1;


/* Line 189 of yacc.c  */
#line 163 "keydbcfg-parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     HEXSTRING = 258,
     DISC_TITLE = 259,
     DIGIT = 260,
     KEYWORD_BEGIN = 261,
     KEYWORD_END = 262,
     KEYWORD_DK_ENTRY = 263,
     KEYWORD_DEVICE_KEY = 264,
     KEYWORD_DEVICE_NODE = 265,
     KEYWORD_PROCESSING_KEY = 266,
     KEYWORD_HOST_CERT_ENTRY = 267,
     KEYWORD_HOST_PRIV_KEY = 268,
     KEYWORD_HOST_CERT = 269,
     KEYWORD_HOST_NONCE = 270,
     KEYWORD_HOST_KEY_POINT = 271,
     PUNCT_EQUALS_SIGN = 272,
     PUNCT_VERTICAL_BAR = 273,
     PUNCT_HYPHEN = 274,
     ENTRY_ID_DATE = 275,
     ENTRY_ID_MEK = 276,
     ENTRY_ID_VID = 277,
     ENTRY_ID_BN = 278,
     ENTRY_ID_VUK = 279,
     ENTRY_ID_PAK = 280,
     ENTRY_ID_TK = 281,
     ENTRY_ID_UK = 282,
     NEWLINE = 283,
     BAD_ENTRY = 284
   };
#endif
/* Tokens.  */
#define HEXSTRING 258
#define DISC_TITLE 259
#define DIGIT 260
#define KEYWORD_BEGIN 261
#define KEYWORD_END 262
#define KEYWORD_DK_ENTRY 263
#define KEYWORD_DEVICE_KEY 264
#define KEYWORD_DEVICE_NODE 265
#define KEYWORD_PROCESSING_KEY 266
#define KEYWORD_HOST_CERT_ENTRY 267
#define KEYWORD_HOST_PRIV_KEY 268
#define KEYWORD_HOST_CERT 269
#define KEYWORD_HOST_NONCE 270
#define KEYWORD_HOST_KEY_POINT 271
#define PUNCT_EQUALS_SIGN 272
#define PUNCT_VERTICAL_BAR 273
#define PUNCT_HYPHEN 274
#define ENTRY_ID_DATE 275
#define ENTRY_ID_MEK 276
#define ENTRY_ID_VID 277
#define ENTRY_ID_BN 278
#define ENTRY_ID_VUK 279
#define ENTRY_ID_PAK 280
#define ENTRY_ID_TK 281
#define ENTRY_ID_UK 282
#define NEWLINE 283
#define BAD_ENTRY 284




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 106 "keydbcfg-parser.y"

  char *string;
  unsigned int digit;



/* Line 214 of yacc.c  */
#line 264 "keydbcfg-parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 276 "keydbcfg-parser.c"

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    11,    14,    16,    18,
      20,    22,    24,    27,    31,    36,    40,    45,    49,    52,
      57,    61,    66,    70,    75,    79,    83,    88,    92,    97,
     101,   106,   111,   115,   120,   124,   129,   133,   138,   142,
     147,   151,   154,   156,   160,   162,   164,   167,   169,   171,
     173,   175,   177,   179,   181,   183,   185,   192,   195,   198,
     201,   205,   207,   211,   214,   217,   221,   223,   227,   230,
     234,   236,   240,   243,   247,   249,   253,   256
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    32,    50,    -1,    32,    -1,    50,    -1,
      -1,    32,    33,    -1,    33,    -1,    34,    -1,    40,    -1,
      41,    -1,    49,    -1,     1,    28,    -1,    35,    37,    36,
      -1,    50,     6,     8,    28,    -1,     6,     8,    28,    -1,
      50,     7,     8,    28,    -1,     7,     8,    28,    -1,    38,
      39,    -1,    50,     9,    72,    28,    -1,     9,    72,    28,
      -1,    50,    10,    72,    28,    -1,    10,    72,    28,    -1,
      50,    11,    72,    28,    -1,    11,    72,    28,    -1,    42,
      44,    43,    -1,    50,     6,    12,    28,    -1,     6,    12,
      28,    -1,    50,     7,    12,    28,    -1,     7,    12,    28,
      -1,    45,    46,    47,    48,    -1,    50,    13,    72,    28,
      -1,    13,    72,    28,    -1,    50,    14,    72,    28,    -1,
      14,    72,    28,    -1,    50,    15,    72,    28,    -1,    15,
      72,    28,    -1,    50,    16,    72,    28,    -1,    16,    72,
      28,    -1,    50,    51,    54,    28,    -1,    51,    54,    28,
      -1,    50,    28,    -1,    28,    -1,    52,    17,    53,    -1,
      72,    -1,     4,    -1,    54,    55,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    62,    -1,    63,
      -1,    66,    -1,    69,    -1,    20,     5,    19,     5,    19,
       5,    -1,    21,    72,    -1,    22,    72,    -1,    23,    60,
      -1,    60,    18,    61,    -1,    61,    -1,     5,    19,    72,
      -1,    24,    72,    -1,    25,    64,    -1,    64,    18,    65,
      -1,    65,    -1,     5,    19,    72,    -1,    26,    67,    -1,
      67,    18,    68,    -1,    68,    -1,     5,    19,    72,    -1,
      27,    70,    -1,    70,    18,    71,    -1,    71,    -1,     5,
      19,    72,    -1,    72,     3,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   149,   150,   151,   155,   156,   160,   161,
     162,   163,   164,   173,   177,   178,   182,   183,   187,   194,
     196,   201,   203,   208,   212,   219,   223,   224,   228,   229,
     233,   240,   242,   247,   249,   254,   256,   261,   263,   268,
     273,   281,   282,   286,   294,   298,   302,   303,   307,   308,
     309,   310,   311,   312,   313,   314,   318,   325,   332,   339,
     346,   347,   351,   363,   370,   377,   378,   382,   394,   401,
     402,   406,   418,   425,   426,   430,   442,   450
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEXSTRING", "DISC_TITLE", "DIGIT",
  "KEYWORD_BEGIN", "KEYWORD_END", "KEYWORD_DK_ENTRY", "KEYWORD_DEVICE_KEY",
  "KEYWORD_DEVICE_NODE", "KEYWORD_PROCESSING_KEY",
  "KEYWORD_HOST_CERT_ENTRY", "KEYWORD_HOST_PRIV_KEY", "KEYWORD_HOST_CERT",
  "KEYWORD_HOST_NONCE", "KEYWORD_HOST_KEY_POINT", "PUNCT_EQUALS_SIGN",
  "PUNCT_VERTICAL_BAR", "PUNCT_HYPHEN", "ENTRY_ID_DATE", "ENTRY_ID_MEK",
  "ENTRY_ID_VID", "ENTRY_ID_BN", "ENTRY_ID_VUK", "ENTRY_ID_PAK",
  "ENTRY_ID_TK", "ENTRY_ID_UK", "NEWLINE", "BAD_ENTRY", "$accept",
  "config_file", "config_entry_list", "config_entry", "dk_entry_block",
  "dk_entry_start", "dk_entry_end", "dk_entry", "device_key",
  "device_node", "pk_entry", "host_cert_entry_block",
  "host_cert_entry_start", "host_cert_entry_end", "host_cert_entry",
  "host_priv_key", "host_cert", "host_nonce", "host_key_point",
  "title_entry", "newline_list", "disc_info", "discid", "disc_title",
  "entry_list", "entry", "date_entry", "mek_entry", "vid_entry",
  "bn_entry", "bn_data_list", "bn_data", "vuk_entry", "pak_entry",
  "pak_data_list", "pak_data", "tk_entry", "tk_data_list", "tk_data",
  "uk_entry", "uk_data_list", "uk_data", "hexstring_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    31,    31,    31,    32,    32,    33,    33,
      33,    33,    33,    34,    35,    35,    36,    36,    37,    38,
      38,    39,    39,    40,    40,    41,    42,    42,    43,    43,
      44,    45,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    50,    51,    52,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    57,    58,    59,
      60,    60,    61,    62,    63,    64,    64,    65,    66,    67,
      67,    68,    69,    70,    70,    71,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     2,     3,     4,     3,     4,     3,     2,     4,
       3,     4,     3,     4,     3,     3,     4,     3,     4,     3,
       4,     4,     3,     4,     3,     4,     3,     4,     3,     4,
       3,     2,     1,     3,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     2,     2,     2,
       3,     1,     3,     2,     2,     3,     1,     3,     2,     3,
       1,     3,     2,     3,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    77,     0,     0,    42,     0,     0,     7,     8,
       0,     9,    10,     0,    11,     4,     0,     0,    44,    12,
       0,     0,     0,     1,     6,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,    76,    15,    27,
      24,     0,     0,    13,     0,     0,    18,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,    58,     0,    59,    61,    63,     0,    64,
      66,     0,    68,    70,     0,    72,    74,    40,    46,    45,
      43,    20,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    26,    23,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,    22,     0,    19,    29,     0,    34,     0,     0,    30,
       0,     0,     0,    31,     0,    62,    60,    67,    65,    71,
      69,    75,    73,    16,    21,    28,    36,     0,     0,     0,
      33,     0,    38,     0,    35,    56,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    63,    27,    28,    66,
      11,    12,    13,    71,    31,    32,    74,   112,   139,    14,
      15,    16,    17,   100,    46,    47,    48,    49,    50,    51,
      85,    86,    52,    53,    89,    90,    54,    92,    93,    55,
      95,    96,    18
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -44
static const yytype_int16 yypact[] =
{
       5,    19,   -44,    84,    94,   -44,    90,    12,   -44,   -44,
      54,   -44,   -44,    57,   -44,    38,   135,    91,   108,   -44,
      85,    86,    -1,   -44,   -44,    38,    94,    51,    -9,    56,
      94,    52,    72,    74,    87,    94,   -44,   135,   107,    94,
      94,   110,    94,   111,   113,   115,   104,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   129,   -44,   -44,   -44,
     -44,     6,   114,   -44,    53,    94,   -44,    46,    94,    11,
     123,   -44,    55,    94,    39,    75,    94,   119,   120,    14,
     118,   117,   108,   108,   130,   132,   -44,   108,   133,   145,
     -44,   134,   146,   -44,   147,   149,   -44,   -44,   -44,   -44,
     -44,   -44,   137,   143,    17,    94,    18,   -44,   140,   157,
      27,    94,    77,    76,    94,    29,   -44,   -44,   -44,   -44,
     165,    94,   110,    94,   111,    94,   113,    94,   115,   -44,
     144,   -44,    40,   -44,   -44,   148,   -44,    45,    94,   -44,
      78,    94,    47,   -44,   152,   108,   -44,   108,   -44,   108,
     -44,   108,   -44,   -44,   -44,   -44,   -44,    48,    94,    49,
     -44,   168,   -44,    50,   -44,   -44,   -44
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   167,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
      -3,    73,   -44,   -44,   138,   -43,   -44,   -44,   -44,   -44,
     -44,    58,   -44,   -44,   -44,    59,   -44,   -44,    60,   -44,
     -44,    61,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      22,    65,    57,    98,    25,    -5,     1,    29,     2,    57,
      33,     3,    -3,     1,    57,     2,     4,    57,     3,     5,
      57,    57,    61,     4,    64,    67,    69,    60,    72,    75,
      57,    79,    57,     5,   101,    82,    83,    98,    87,   107,
       5,     2,   118,    57,    34,   131,   133,    19,    57,    35,
      57,    57,    57,    57,   111,   136,   105,   143,    62,    70,
     103,   104,   109,    26,   106,    68,    36,     5,   154,   110,
      30,   113,   115,   156,    36,   160,   162,   164,   166,     5,
       5,    36,     5,    36,    36,     5,    73,    76,    37,   114,
      23,   141,    20,   138,   158,    77,    21,     2,    37,    78,
       5,   132,    36,    36,    36,     5,    36,   137,    56,   140,
     142,    57,    81,    58,    59,    84,    88,   145,    91,   147,
      94,   149,   102,   151,    38,    39,    40,    41,    42,    43,
      44,    45,    97,    99,   157,   108,   120,   159,    38,    39,
      40,    41,    42,    43,    44,    45,   119,   116,   117,   121,
     122,   130,   123,   125,   163,    38,    39,    40,    41,    42,
      43,    44,    45,   124,   126,   129,   127,   128,   134,   135,
     144,   161,   153,   165,    24,    80,   155,     0,     0,     0,
     146,     0,     0,   148,     0,     0,   150,     0,     0,   152
};

static const yytype_int16 yycheck[] =
{
       4,    10,     3,    46,     7,     0,     1,    10,     3,     3,
      13,     6,     0,     1,     3,     3,    11,     3,     6,    28,
       3,     3,    26,    11,    27,    28,    30,    28,    31,    32,
       3,    35,     3,    28,    28,    39,    40,    80,    42,    28,
      28,     3,    28,     3,     6,    28,    28,    28,     3,    11,
       3,     3,     3,     3,    15,    28,    10,    28,     7,     7,
       7,    65,     7,     9,    68,     9,    28,    28,    28,    73,
      13,    74,    76,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    14,    13,    15,    14,
       0,    15,     8,    16,    16,     8,    12,     3,    25,    12,
      28,   105,    28,    28,    28,    28,    28,   111,    17,   112,
     114,     3,     5,    28,    28,     5,     5,   121,     5,   123,
       5,   125,     8,   127,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     4,   138,    12,    19,   141,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    28,    28,    19,
      18,     8,    19,    19,   158,    20,    21,    22,    23,    24,
      25,    26,    27,    18,    18,    28,    19,    18,    28,    12,
       5,    19,    28,     5,     7,    37,    28,    -1,    -1,    -1,
     122,    -1,    -1,   124,    -1,    -1,   126,    -1,    -1,   128
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     6,    11,    28,    31,    32,    33,    34,
      35,    40,    41,    42,    49,    50,    51,    52,    72,    28,
       8,    12,    72,     0,    33,    50,     9,    37,    38,    50,
      13,    44,    45,    50,     6,    11,    28,    51,    20,    21,
      22,    23,    24,    25,    26,    27,    54,    55,    56,    57,
      58,    59,    62,    63,    66,    69,    17,     3,    28,    28,
      28,    72,     7,    36,    50,    10,    39,    50,     9,    72,
       7,    43,    50,    14,    46,    50,    13,     8,    12,    72,
      54,     5,    72,    72,     5,    60,    61,    72,     5,    64,
      65,     5,    67,    68,     5,    70,    71,    28,    55,     4,
      53,    28,     8,     7,    72,    10,    72,    28,    12,     7,
      72,    15,    47,    50,    14,    72,    28,    28,    28,    28,
      19,    19,    18,    19,    18,    19,    18,    19,    18,    28,
       8,    28,    72,    28,    28,    12,    28,    72,    16,    48,
      50,    15,    72,    28,     5,    72,    61,    72,    65,    72,
      68,    72,    71,    28,    28,    28,    28,    72,    16,    72,
      28,    19,    28,    72,    28,     5,    28
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
      yyerror (scanner, dklist, pklist, clist, celist, dkplist, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, scanner, dklist, pklist, clist, celist, dkplist); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist, title_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner, dklist, pklist, clist, celist, dkplist)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
    dk_list *dklist;
    pk_list *pklist;
    cert_list *clist;
    title_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (scanner);
  YYUSE (dklist);
  YYUSE (pklist);
  YYUSE (clist);
  YYUSE (celist);
  YYUSE (dkplist);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist, title_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, scanner, dklist, pklist, clist, celist, dkplist)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    void *scanner;
    dk_list *dklist;
    pk_list *pklist;
    cert_list *clist;
    title_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, scanner, dklist, pklist, clist, celist, dkplist);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist, title_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yy_reduce_print (yyvsp, yyrule, scanner, dklist, pklist, clist, celist, dkplist)
    YYSTYPE *yyvsp;
    int yyrule;
    void *scanner;
    dk_list *dklist;
    pk_list *pklist;
    cert_list *clist;
    title_entry_list *celist;
    digit_key_pair_list *dkplist;
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
		       		       , scanner, dklist, pklist, clist, celist, dkplist);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, scanner, dklist, pklist, clist, celist, dkplist); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist, title_entry_list *celist, digit_key_pair_list *dkplist)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, scanner, dklist, pklist, clist, celist, dkplist)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    void *scanner;
    dk_list *dklist;
    pk_list *pklist;
    cert_list *clist;
    title_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (scanner);
  YYUSE (dklist);
  YYUSE (pklist);
  YYUSE (clist);
  YYUSE (celist);
  YYUSE (dkplist);

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
int yyparse (void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist, title_entry_list *celist, digit_key_pair_list *dkplist);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





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
yyparse (void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist, title_entry_list *celist, digit_key_pair_list *dkplist)
#else
int
yyparse (scanner, dklist, pklist, clist, celist, dkplist)
    void *scanner;
    dk_list *dklist;
    pk_list *pklist;
    cert_list *clist;
    title_entry_list *celist;
    digit_key_pair_list *dkplist;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
        case 12:

/* Line 1455 of yacc.c  */
#line 165 "keydbcfg-parser.y"
    {
      fprintf(stderr, "bad entry at or around line %d\n",
              yyget_lineno(scanner) - 1);
      yyerrok;
    }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 188 "keydbcfg-parser.y"
    {
      dklist = add_dk_list_entry(dklist, (yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string));
    }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 195 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(3) - (4)].string); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 197 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 202 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(3) - (4)].string); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 204 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 209 "keydbcfg-parser.y"
    {
      pklist = add_pk_list_entry(pklist, (yyvsp[(3) - (4)].string));
    }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 213 "keydbcfg-parser.y"
    {
      pklist = add_pk_list_entry(pklist, (yyvsp[(2) - (3)].string));
    }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 234 "keydbcfg-parser.y"
    {
      clist = add_cert_list(clist, (yyvsp[(1) - (4)].string), (yyvsp[(2) - (4)].string), (yyvsp[(3) - (4)].string), (yyvsp[(4) - (4)].string));
    }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 241 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(3) - (4)].string); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 243 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 248 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(3) - (4)].string); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 250 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 255 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(3) - (4)].string); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 257 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 262 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(3) - (4)].string); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 264 "keydbcfg-parser.y"
    { (yyval.string) = (yyvsp[(2) - (3)].string); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 269 "keydbcfg-parser.y"
    {
      celist->next = new_title_entry_list();
      celist = celist->next;
    }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 274 "keydbcfg-parser.y"
    {
      celist->next = new_title_entry_list();
      celist = celist->next;
    }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 287 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_DISCID, (yyvsp[(1) - (3)].string));
      add_entry(celist, ENTRY_TYPE_TITLE, (yyvsp[(3) - (3)].string));
    }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 319 "keydbcfg-parser.y"
    {
      add_date_entry(celist, (yyvsp[(2) - (6)].digit), (yyvsp[(4) - (6)].digit), (yyvsp[(6) - (6)].digit));
    }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 326 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_MEK, (yyvsp[(2) - (2)].string));
    }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 333 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_VID, (yyvsp[(2) - (2)].string));
    }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 340 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 352 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.bn = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_BN, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 364 "keydbcfg-parser.y"
    {
      add_entry(celist, ENTRY_TYPE_VUK, (yyvsp[(2) - (2)].string));
    }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 371 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 383 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.pak = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_PAK, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 395 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 407 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.tk = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_TK, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 419 "keydbcfg-parser.y"
    {
      dkplist = NULL;
    }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 431 "keydbcfg-parser.y"
    {
      if (!dkplist)
      {
        dkplist = (digit_key_pair_list *)malloc(sizeof(*dkplist));
        celist->entry.uk = dkplist;
      }
      dkplist = add_digit_key_pair_entry(dkplist, ENTRY_TYPE_UK, (yyvsp[(1) - (3)].digit), (yyvsp[(3) - (3)].string));
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 443 "keydbcfg-parser.y"
    {
      char *str = (char*)malloc(strlen((yyvsp[(1) - (2)].string)) + strlen((yyvsp[(2) - (2)].string)) + 1);
      strcpy(str, (yyvsp[(1) - (2)].string));
      strcat(str, (yyvsp[(2) - (2)].string));
      (yyval.string) = str;
      X_FREE((yyvsp[(1) - (2)].string));
    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 451 "keydbcfg-parser.y"
    {
      char *str = (char*)malloc(strlen((yyvsp[(1) - (1)].string)) + 1);
      strcpy(str, (yyvsp[(1) - (1)].string));
      (yyval.string) = str;
    }
    break;



/* Line 1455 of yacc.c  */
#line 1972 "keydbcfg-parser.c"
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
      yyerror (scanner, dklist, pklist, clist, celist, dkplist, YY_("syntax error"));
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
	    yyerror (scanner, dklist, pklist, clist, celist, dkplist, yymsg);
	  }
	else
	  {
	    yyerror (scanner, dklist, pklist, clist, celist, dkplist, YY_("syntax error"));
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
		      yytoken, &yylval, scanner, dklist, pklist, clist, celist, dkplist);
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
		  yystos[yystate], yyvsp, scanner, dklist, pklist, clist, celist, dkplist);
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
  yyerror (scanner, dklist, pklist, clist, celist, dkplist, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, scanner, dklist, pklist, clist, celist, dkplist);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, scanner, dklist, pklist, clist, celist, dkplist);
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
#line 457 "keydbcfg-parser.y"

/* Function to parse a config file */
int keydbcfg_parse_config(config_file *cfgfile, const char *path)
{
  FILE * fp = fopen(path, "r");
  if (!fp)
    return 0;

  dk_list *head_dklist = new_dk_list();
  pk_list *head_pklist = new_pk_list();
  cert_list *head_clist = new_cert_list();
  title_entry_list *head_celist = new_title_entry_list();
  digit_key_pair_list *dkplist = NULL;

  void *scanner;
  yylex_init(&scanner);
  yyset_in(fp, scanner);
  int retval = yyparse(scanner, head_dklist, head_pklist, head_clist,
                       head_celist, dkplist);
  yylex_destroy(scanner);

  cfgfile->dkl = head_dklist;
  cfgfile->pkl = head_pklist;
  cfgfile->host_cert_list = head_clist;
  cfgfile->list = head_celist;

  if (retval)
    return 0;

  return 1;
}

/* Function that returns pointer to new config file object */
config_file *keydbcfg_new_config_file()
{
  config_file *cfgfile = (config_file *)malloc(sizeof(*cfgfile));
  cfgfile->pkl = NULL;
  cfgfile->list = NULL;
  return cfgfile;
}

/* Function that closes and frees a config file object */
int keydbcfg_config_file_close(config_file *cfgfile)
{
  /* free pk list */
  while (cfgfile->pkl)
  {
    pk_list *next = cfgfile->pkl->next;
    X_FREE(cfgfile->pkl->key);
    X_FREE(cfgfile->pkl);
    cfgfile->pkl = next;
  }

  /* free host cert list */
  while (cfgfile->host_cert_list)
  {
    cert_list *next = cfgfile->host_cert_list->next;
    X_FREE(cfgfile->host_cert_list->host_priv_key);
    X_FREE(cfgfile->host_cert_list->host_cert);
    X_FREE(cfgfile->host_cert_list->host_nonce);
    X_FREE(cfgfile->host_cert_list->host_key_point);
    X_FREE(cfgfile->host_cert_list);
    cfgfile->host_cert_list = next;
  }

  /* free title entries */
  while (cfgfile->list)
  {
    title_entry_list *next = cfgfile->list->next;
    X_FREE(cfgfile->list->entry.discid);
    X_FREE(cfgfile->list->entry.title);
    X_FREE(cfgfile->list->entry.mek);
    X_FREE(cfgfile->list->entry.vid);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.bn);
    X_FREE(cfgfile->list->entry.vuk);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.pak);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.tk);
    DIGIT_KEY_PAIR_LIST_FREE(cfgfile->list->entry.uk);
    X_FREE(cfgfile->list);
    cfgfile->list = next;
  }

  /* free the config file object */
  X_FREE(cfgfile);

  return 1;
}

/* Function to return new dk_list object */
static dk_list *new_dk_list()
{
  dk_list *dkl = (dk_list *)malloc(sizeof(*dkl));
  dkl->key = NULL;
  dkl->next = NULL;
  return dkl;
}

/* Function to add dk to config file */
static dk_list *add_dk_list_entry(dk_list *list, const char *key,
                                  const char *node)
{
  if (!list)
  {
    printf("Error: No dk list passed as parameter.\n");
    return NULL;
  }

  list->key = (char*)malloc(strlen(key) + 1);
  strcpy(list->key, key);
  list->node = strtoul(node, NULL, 16);

  list->next = new_dk_list();

  return list->next;
}

/* Function to return new pk_list object */
static pk_list *new_pk_list()
{
  pk_list *pkl = (pk_list *)malloc(sizeof(*pkl));
  pkl->key = NULL;
  pkl->next = NULL;
  return pkl;
}

/* Function to add pk to config file */
static pk_list *add_pk_list_entry(pk_list *list, const char *key)
{
  if (!list)
  {
    printf("Error: No pk list passed as parameter.\n");
    return NULL;
  }

  list->key = (char*)malloc(strlen(key) + 1);
  strcpy(list->key, key);

  list->next = new_pk_list();

  return list->next;
}

/* Function to create new certificate list */
static cert_list *new_cert_list()
{
  cert_list *list = (cert_list *)malloc(sizeof(*list));
  if (!list)
  {
    printf("Error allocating memory for new certificate list!\n");
    return NULL;
  }

  list->host_priv_key = NULL;
  list->host_cert = NULL;
  list->host_nonce = NULL;
  list->host_key_point = NULL;
  list->next = NULL;

  return list;
}

/* Function to add certificate list entry into config file object */
static cert_list *add_cert_list(cert_list *list, const char *host_priv_key,
                         const char *host_cert, const char *host_nonce,
                         const char *host_key_point)
{
  if (!list)
  {
    printf("Error: no certificate list object passed as parameter.\n");
    return NULL;
  }

  list->host_priv_key = (char*)malloc(strlen(host_priv_key) + 1);
  strcpy(list->host_priv_key, host_priv_key);
  list->host_cert = (char*)malloc(strlen(host_cert) + 1);
  strcpy(list->host_cert, host_cert);
  list->host_nonce = (char*)malloc(strlen(host_nonce) + 1);
  strcpy(list->host_nonce, host_nonce);
  list->host_key_point = (char*)malloc(strlen(host_key_point) + 1);
  strcpy(list->host_key_point, host_key_point);

  list->next = new_cert_list();

  return list->next;
}

/* Function that returns pointer to new title entry list */
title_entry_list *new_title_entry_list()
{
  title_entry_list *list = (title_entry_list *)malloc(sizeof(*list));
  if (!list)
  {
    printf("Error allocating memory for new title entry list!\n");
    return NULL;
  }

  list->entry.discid = NULL;
  list->entry.title = NULL;
  list->entry.date.year = 0;
  list->entry.date.month = 0;
  list->entry.date.day = 0;
  list->entry.mek = NULL;
  list->entry.vid = NULL;
  list->entry.bn = NULL;
  list->entry.vuk = NULL;
  list->entry.pak = NULL;
  list->entry.tk = NULL;
  list->entry.uk = NULL;
  list->next = NULL;

  return list;
}

/* Function to add standard string entries to a config entry */
static int add_entry(title_entry_list *list, int type, const char *entry)
{
  if (!list)
  {
    printf("Error: No title list passed as parameter.\n");
    return 0;
  }

  switch (type)
  {
    case ENTRY_TYPE_DISCID:
      list->entry.discid = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.discid, entry);
      break;

    case ENTRY_TYPE_TITLE:
      list->entry.title = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.title, entry);
      break;

    case ENTRY_TYPE_MEK:
      list->entry.mek = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.mek, entry);
      break;

    case ENTRY_TYPE_VID:
      list->entry.vid = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.vid, entry);
      break;

    case ENTRY_TYPE_VUK:
      list->entry.vuk = (char*)malloc(strlen(entry) + 1);
      strcpy(list->entry.vuk, entry);
      break;

    default:
      printf("WARNING: entry type passed in unknown\n");
      return 0;
  }

  return 1;
}

/* Function that returns pointer to new digit key pair list */
static digit_key_pair_list *new_digit_key_pair_list()
{
  digit_key_pair_list *list = (digit_key_pair_list *)malloc(sizeof(*list));
  if (!list)
  {
    printf("Error allocating memory for new digit key pair entry list!\n");
    return NULL;
  }

  list->key_pair.digit = 0;
  list->key_pair.key = NULL;
  list->next = NULL;

  return list;
}

/* Function used to add a digit/key pair to a list of digit key pair entries */
static digit_key_pair_list *add_digit_key_pair_entry(digit_key_pair_list *list,
                              int type, unsigned int digit, const char *key)
{
  if (!list)
  {
    printf("Error: No digit key pair list passed as parameter.\n");
    return NULL;
  }

  list->key_pair.digit = digit;
  list->key_pair.key = (char*)malloc(strlen(key) + 1);
  strcpy(list->key_pair.key, key);

  list->next = new_digit_key_pair_list();

  return list->next;
}

/* Function to add a date entry */
static int add_date_entry(title_entry_list *list, unsigned int year,
                          unsigned int month, unsigned int day)
{
  if (!list)
  {
    printf("Error: No title list passed as parameter.\n");
    return 0;
  }

  list->entry.date.year = year;
  list->entry.date.month = month;
  list->entry.date.day = day;

  return 1;
}

/* Our definition of yyerror */
void yyerror (void *scanner, dk_list *dklist, pk_list *pklist, cert_list *clist,
              title_entry_list *celist, digit_key_pair_list *dkplist,
              const char *msg)
{
  fprintf(stderr, "%s: line %d\n", msg, yyget_lineno(scanner));
}
