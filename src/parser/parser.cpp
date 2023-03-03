/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         SQLSTYPE
#define YYLTYPE         SQLLTYPE
/* Substitute the variable and function names.  */
#define yyparse         sqlparse
#define yylex           sqllex
#define yyerror         sqlerror
#define yydebug         sqldebug
#define yynerrs         sqlnerrs

/* First part of user prologue.  */
#line 2 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"

#include <stdint.h>
#include <stdio.h>
#include "parser.h"
#include "lexer.h"

void yyerror(YYLTYPE * llocp, void* lexer, ParserResult* result, const char* msg);

#line 87 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_DOUBLE_VALUE = 5,               /* DOUBLE_VALUE  */
  YYSYMBOL_LONG_VALUE = 6,                 /* LONG_VALUE  */
  YYSYMBOL_CREATE = 7,                     /* CREATE  */
  YYSYMBOL_SELECT = 8,                     /* SELECT  */
  YYSYMBOL_INSERT = 9,                     /* INSERT  */
  YYSYMBOL_DROP = 10,                      /* DROP  */
  YYSYMBOL_UPDATE = 11,                    /* UPDATE  */
  YYSYMBOL_DELETE = 12,                    /* DELETE  */
  YYSYMBOL_COPY = 13,                      /* COPY  */
  YYSYMBOL_SET = 14,                       /* SET  */
  YYSYMBOL_EXPLAIN = 15,                   /* EXPLAIN  */
  YYSYMBOL_SHOW = 16,                      /* SHOW  */
  YYSYMBOL_ALTER = 17,                     /* ALTER  */
  YYSYMBOL_EXECUTE = 18,                   /* EXECUTE  */
  YYSYMBOL_PREPARE = 19,                   /* PREPARE  */
  YYSYMBOL_DESCRIBE = 20,                  /* DESCRIBE  */
  YYSYMBOL_UNION = 21,                     /* UNION  */
  YYSYMBOL_ALL = 22,                       /* ALL  */
  YYSYMBOL_INTERSECT = 23,                 /* INTERSECT  */
  YYSYMBOL_EXCEPT = 24,                    /* EXCEPT  */
  YYSYMBOL_SCHEMA = 25,                    /* SCHEMA  */
  YYSYMBOL_TABLE = 26,                     /* TABLE  */
  YYSYMBOL_COLLECTION = 27,                /* COLLECTION  */
  YYSYMBOL_TABLES = 28,                    /* TABLES  */
  YYSYMBOL_INTO = 29,                      /* INTO  */
  YYSYMBOL_VALUES = 30,                    /* VALUES  */
  YYSYMBOL_AST = 31,                       /* AST  */
  YYSYMBOL_PIPELINE = 32,                  /* PIPELINE  */
  YYSYMBOL_UNOPT = 33,                     /* UNOPT  */
  YYSYMBOL_OPT = 34,                       /* OPT  */
  YYSYMBOL_LOGICAL = 35,                   /* LOGICAL  */
  YYSYMBOL_PHYSICAL = 36,                  /* PHYSICAL  */
  YYSYMBOL_VIEW = 37,                      /* VIEW  */
  YYSYMBOL_INDEX = 38,                     /* INDEX  */
  YYSYMBOL_GROUP = 39,                     /* GROUP  */
  YYSYMBOL_BY = 40,                        /* BY  */
  YYSYMBOL_HAVING = 41,                    /* HAVING  */
  YYSYMBOL_AS = 42,                        /* AS  */
  YYSYMBOL_NATURAL = 43,                   /* NATURAL  */
  YYSYMBOL_JOIN = 44,                      /* JOIN  */
  YYSYMBOL_LEFT = 45,                      /* LEFT  */
  YYSYMBOL_RIGHT = 46,                     /* RIGHT  */
  YYSYMBOL_OUTER = 47,                     /* OUTER  */
  YYSYMBOL_FULL = 48,                      /* FULL  */
  YYSYMBOL_ON = 49,                        /* ON  */
  YYSYMBOL_INNER = 50,                     /* INNER  */
  YYSYMBOL_CROSS = 51,                     /* CROSS  */
  YYSYMBOL_DISTINCT = 52,                  /* DISTINCT  */
  YYSYMBOL_WHERE = 53,                     /* WHERE  */
  YYSYMBOL_ORDER = 54,                     /* ORDER  */
  YYSYMBOL_LIMIT = 55,                     /* LIMIT  */
  YYSYMBOL_OFFSET = 56,                    /* OFFSET  */
  YYSYMBOL_ASC = 57,                       /* ASC  */
  YYSYMBOL_DESC = 58,                      /* DESC  */
  YYSYMBOL_IF = 59,                        /* IF  */
  YYSYMBOL_NOT = 60,                       /* NOT  */
  YYSYMBOL_EXISTS = 61,                    /* EXISTS  */
  YYSYMBOL_FROM = 62,                      /* FROM  */
  YYSYMBOL_TO = 63,                        /* TO  */
  YYSYMBOL_WITH = 64,                      /* WITH  */
  YYSYMBOL_DELIMITER = 65,                 /* DELIMITER  */
  YYSYMBOL_FORMAT = 66,                    /* FORMAT  */
  YYSYMBOL_HEADER = 67,                    /* HEADER  */
  YYSYMBOL_BOOLEAN = 68,                   /* BOOLEAN  */
  YYSYMBOL_INTEGER = 69,                   /* INTEGER  */
  YYSYMBOL_TINYINT = 70,                   /* TINYINT  */
  YYSYMBOL_SMALLINT = 71,                  /* SMALLINT  */
  YYSYMBOL_BIGINT = 72,                    /* BIGINT  */
  YYSYMBOL_HUGEINT = 73,                   /* HUGEINT  */
  YYSYMBOL_CHAR = 74,                      /* CHAR  */
  YYSYMBOL_VARCHAR = 75,                   /* VARCHAR  */
  YYSYMBOL_FLOAT = 76,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 77,                    /* DOUBLE  */
  YYSYMBOL_REAL = 78,                      /* REAL  */
  YYSYMBOL_DECIMAL = 79,                   /* DECIMAL  */
  YYSYMBOL_DATE = 80,                      /* DATE  */
  YYSYMBOL_TIME = 81,                      /* TIME  */
  YYSYMBOL_DATETIME = 82,                  /* DATETIME  */
  YYSYMBOL_TIMESTAMP = 83,                 /* TIMESTAMP  */
  YYSYMBOL_UUID = 84,                      /* UUID  */
  YYSYMBOL_POINT = 85,                     /* POINT  */
  YYSYMBOL_LINE = 86,                      /* LINE  */
  YYSYMBOL_LSEG = 87,                      /* LSEG  */
  YYSYMBOL_BOX = 88,                       /* BOX  */
  YYSYMBOL_PATH = 89,                      /* PATH  */
  YYSYMBOL_POLYGON = 90,                   /* POLYGON  */
  YYSYMBOL_CIRCLE = 91,                    /* CIRCLE  */
  YYSYMBOL_BLOB = 92,                      /* BLOB  */
  YYSYMBOL_BITMAP = 93,                    /* BITMAP  */
  YYSYMBOL_EMBEDDING = 94,                 /* EMBEDDING  */
  YYSYMBOL_VECTOR = 95,                    /* VECTOR  */
  YYSYMBOL_BIT = 96,                       /* BIT  */
  YYSYMBOL_PRIMARY = 97,                   /* PRIMARY  */
  YYSYMBOL_KEY = 98,                       /* KEY  */
  YYSYMBOL_UNIQUE = 99,                    /* UNIQUE  */
  YYSYMBOL_NULLABLE = 100,                 /* NULLABLE  */
  YYSYMBOL_IS = 101,                       /* IS  */
  YYSYMBOL_TRUE = 102,                     /* TRUE  */
  YYSYMBOL_FALSE = 103,                    /* FALSE  */
  YYSYMBOL_INTERVAL = 104,                 /* INTERVAL  */
  YYSYMBOL_SECOND = 105,                   /* SECOND  */
  YYSYMBOL_SECONDS = 106,                  /* SECONDS  */
  YYSYMBOL_MINUTE = 107,                   /* MINUTE  */
  YYSYMBOL_MINUTES = 108,                  /* MINUTES  */
  YYSYMBOL_HOUR = 109,                     /* HOUR  */
  YYSYMBOL_HOURS = 110,                    /* HOURS  */
  YYSYMBOL_DAY = 111,                      /* DAY  */
  YYSYMBOL_DAYS = 112,                     /* DAYS  */
  YYSYMBOL_MONTH = 113,                    /* MONTH  */
  YYSYMBOL_MONTHS = 114,                   /* MONTHS  */
  YYSYMBOL_YEAR = 115,                     /* YEAR  */
  YYSYMBOL_YEARS = 116,                    /* YEARS  */
  YYSYMBOL_EQUAL = 117,                    /* EQUAL  */
  YYSYMBOL_NOT_EQ = 118,                   /* NOT_EQ  */
  YYSYMBOL_LESS_EQ = 119,                  /* LESS_EQ  */
  YYSYMBOL_GREATER_EQ = 120,               /* GREATER_EQ  */
  YYSYMBOL_NUMBER = 121,                   /* NUMBER  */
  YYSYMBOL_OR = 122,                       /* OR  */
  YYSYMBOL_AND = 123,                      /* AND  */
  YYSYMBOL_124_ = 124,                     /* '='  */
  YYSYMBOL_125_ = 125,                     /* '<'  */
  YYSYMBOL_126_ = 126,                     /* '>'  */
  YYSYMBOL_127_ = 127,                     /* '+'  */
  YYSYMBOL_128_ = 128,                     /* '-'  */
  YYSYMBOL_129_ = 129,                     /* '*'  */
  YYSYMBOL_130_ = 130,                     /* '/'  */
  YYSYMBOL_131_ = 131,                     /* '%'  */
  YYSYMBOL_132_ = 132,                     /* '['  */
  YYSYMBOL_133_ = 133,                     /* ']'  */
  YYSYMBOL_134_ = 134,                     /* '('  */
  YYSYMBOL_135_ = 135,                     /* ')'  */
  YYSYMBOL_136_ = 136,                     /* '.'  */
  YYSYMBOL_137_ = 137,                     /* ';'  */
  YYSYMBOL_138_ = 138,                     /* ','  */
  YYSYMBOL_YYACCEPT = 139,                 /* $accept  */
  YYSYMBOL_input_pattern = 140,            /* input_pattern  */
  YYSYMBOL_statement_list = 141,           /* statement_list  */
  YYSYMBOL_statement = 142,                /* statement  */
  YYSYMBOL_explainable_statement = 143,    /* explainable_statement  */
  YYSYMBOL_create_statement = 144,         /* create_statement  */
  YYSYMBOL_table_element_array = 145,      /* table_element_array  */
  YYSYMBOL_table_element = 146,            /* table_element  */
  YYSYMBOL_table_column = 147,             /* table_column  */
  YYSYMBOL_column_type = 148,              /* column_type  */
  YYSYMBOL_column_constraints = 149,       /* column_constraints  */
  YYSYMBOL_column_constraint = 150,        /* column_constraint  */
  YYSYMBOL_table_constraint = 151,         /* table_constraint  */
  YYSYMBOL_identifier_array = 152,         /* identifier_array  */
  YYSYMBOL_delete_statement = 153,         /* delete_statement  */
  YYSYMBOL_insert_statement = 154,         /* insert_statement  */
  YYSYMBOL_optional_identifier_array = 155, /* optional_identifier_array  */
  YYSYMBOL_explain_statement = 156,        /* explain_statement  */
  YYSYMBOL_explain_type = 157,             /* explain_type  */
  YYSYMBOL_update_statement = 158,         /* update_statement  */
  YYSYMBOL_update_expr_array = 159,        /* update_expr_array  */
  YYSYMBOL_update_expr = 160,              /* update_expr  */
  YYSYMBOL_drop_statement = 161,           /* drop_statement  */
  YYSYMBOL_copy_statement = 162,           /* copy_statement  */
  YYSYMBOL_select_statement = 163,         /* select_statement  */
  YYSYMBOL_select_with_paren = 164,        /* select_with_paren  */
  YYSYMBOL_select_without_paren = 165,     /* select_without_paren  */
  YYSYMBOL_select_clause_with_modifier = 166, /* select_clause_with_modifier  */
  YYSYMBOL_select_clause_without_modifier_paren = 167, /* select_clause_without_modifier_paren  */
  YYSYMBOL_select_clause_without_modifier = 168, /* select_clause_without_modifier  */
  YYSYMBOL_order_by_clause = 169,          /* order_by_clause  */
  YYSYMBOL_order_by_expr_list = 170,       /* order_by_expr_list  */
  YYSYMBOL_order_by_expr = 171,            /* order_by_expr  */
  YYSYMBOL_order_by_type = 172,            /* order_by_type  */
  YYSYMBOL_limit_expr = 173,               /* limit_expr  */
  YYSYMBOL_offset_expr = 174,              /* offset_expr  */
  YYSYMBOL_distinct = 175,                 /* distinct  */
  YYSYMBOL_from_clause = 176,              /* from_clause  */
  YYSYMBOL_where_clause = 177,             /* where_clause  */
  YYSYMBOL_having_clause = 178,            /* having_clause  */
  YYSYMBOL_group_by_clause = 179,          /* group_by_clause  */
  YYSYMBOL_set_operator = 180,             /* set_operator  */
  YYSYMBOL_table_reference = 181,          /* table_reference  */
  YYSYMBOL_table_reference_unit = 182,     /* table_reference_unit  */
  YYSYMBOL_table_reference_name = 183,     /* table_reference_name  */
  YYSYMBOL_table_name = 184,               /* table_name  */
  YYSYMBOL_table_alias = 185,              /* table_alias  */
  YYSYMBOL_with_clause = 186,              /* with_clause  */
  YYSYMBOL_with_expr_list = 187,           /* with_expr_list  */
  YYSYMBOL_with_expr = 188,                /* with_expr  */
  YYSYMBOL_join_clause = 189,              /* join_clause  */
  YYSYMBOL_join_type = 190,                /* join_type  */
  YYSYMBOL_show_statement = 191,           /* show_statement  */
  YYSYMBOL_expr_array = 192,               /* expr_array  */
  YYSYMBOL_constant_expr_array = 193,      /* constant_expr_array  */
  YYSYMBOL_expr_alias = 194,               /* expr_alias  */
  YYSYMBOL_expr = 195,                     /* expr  */
  YYSYMBOL_function_expr = 196,            /* function_expr  */
  YYSYMBOL_column_expr = 197,              /* column_expr  */
  YYSYMBOL_constant_expr = 198,            /* constant_expr  */
  YYSYMBOL_interval_expr = 199,            /* interval_expr  */
  YYSYMBOL_copy_option_list = 200,         /* copy_option_list  */
  YYSYMBOL_copy_option = 201,              /* copy_option  */
  YYSYMBOL_file_path = 202,                /* file_path  */
  YYSYMBOL_if_exists = 203,                /* if_exists  */
  YYSYMBOL_if_not_exists = 204,            /* if_not_exists  */
  YYSYMBOL_semicolon = 205                 /* semicolon  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined SQLLTYPE_IS_TRIVIAL && SQLLTYPE_IS_TRIVIAL \
             && defined SQLSTYPE_IS_TRIVIAL && SQLSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  442

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   378


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   131,     2,     2,
     134,   135,   129,   127,   138,   128,   136,   130,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   137,
     125,   124,   126,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   132,     2,   133,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if SQLDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   341,   341,   345,   351,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   368,   369,   370,   371,   372,   373,
     374,   375,   382,   392,   407,   442,   458,   474,   492,   496,
     502,   505,   511,   553,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   660,   664,   673,   676,
     679,   682,   686,   691,   698,   703,   712,   726,   738,   750,
     753,   760,   766,   769,   772,   775,   778,   785,   797,   801,
     806,   817,   827,   845,   897,   953,   956,   959,   967,   976,
     979,   983,   988,   995,   998,  1003,  1018,  1021,  1025,  1029,
    1034,  1040,  1043,  1047,  1051,  1053,  1057,  1059,  1062,  1066,
    1069,  1073,  1076,  1080,  1083,  1087,  1090,  1094,  1097,  1100,
    1103,  1111,  1114,  1123,  1123,  1125,  1139,  1148,  1154,  1163,
    1167,  1172,  1179,  1182,  1186,  1189,  1194,  1205,  1212,  1226,
    1229,  1232,  1235,  1238,  1241,  1244,  1250,  1254,  1270,  1274,
    1279,  1283,  1288,  1293,  1297,  1300,  1301,  1302,  1304,  1311,
    1318,  1326,  1333,  1340,  1347,  1354,  1362,  1370,  1378,  1386,
    1394,  1402,  1410,  1418,  1426,  1434,  1442,  1451,  1456,  1461,
    1466,  1476,  1481,  1486,  1491,  1496,  1501,  1506,  1510,  1516,
    1522,  1528,  1534,  1540,  1546,  1552,  1558,  1564,  1570,  1576,
    1587,  1591,  1596,  1608,  1614,  1620,  1624,  1625,  1627,  1628,
    1630,  1631
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "DOUBLE_VALUE", "LONG_VALUE", "CREATE", "SELECT", "INSERT", "DROP",
  "UPDATE", "DELETE", "COPY", "SET", "EXPLAIN", "SHOW", "ALTER", "EXECUTE",
  "PREPARE", "DESCRIBE", "UNION", "ALL", "INTERSECT", "EXCEPT", "SCHEMA",
  "TABLE", "COLLECTION", "TABLES", "INTO", "VALUES", "AST", "PIPELINE",
  "UNOPT", "OPT", "LOGICAL", "PHYSICAL", "VIEW", "INDEX", "GROUP", "BY",
  "HAVING", "AS", "NATURAL", "JOIN", "LEFT", "RIGHT", "OUTER", "FULL",
  "ON", "INNER", "CROSS", "DISTINCT", "WHERE", "ORDER", "LIMIT", "OFFSET",
  "ASC", "DESC", "IF", "NOT", "EXISTS", "FROM", "TO", "WITH", "DELIMITER",
  "FORMAT", "HEADER", "BOOLEAN", "INTEGER", "TINYINT", "SMALLINT",
  "BIGINT", "HUGEINT", "CHAR", "VARCHAR", "FLOAT", "DOUBLE", "REAL",
  "DECIMAL", "DATE", "TIME", "DATETIME", "TIMESTAMP", "UUID", "POINT",
  "LINE", "LSEG", "BOX", "PATH", "POLYGON", "CIRCLE", "BLOB", "BITMAP",
  "EMBEDDING", "VECTOR", "BIT", "PRIMARY", "KEY", "UNIQUE", "NULLABLE",
  "IS", "TRUE", "FALSE", "INTERVAL", "SECOND", "SECONDS", "MINUTE",
  "MINUTES", "HOUR", "HOURS", "DAY", "DAYS", "MONTH", "MONTHS", "YEAR",
  "YEARS", "EQUAL", "NOT_EQ", "LESS_EQ", "GREATER_EQ", "NUMBER", "OR",
  "AND", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "$accept", "input_pattern",
  "statement_list", "statement", "explainable_statement",
  "create_statement", "table_element_array", "table_element",
  "table_column", "column_type", "column_constraints", "column_constraint",
  "table_constraint", "identifier_array", "delete_statement",
  "insert_statement", "optional_identifier_array", "explain_statement",
  "explain_type", "update_statement", "update_expr_array", "update_expr",
  "drop_statement", "copy_statement", "select_statement",
  "select_with_paren", "select_without_paren",
  "select_clause_with_modifier", "select_clause_without_modifier_paren",
  "select_clause_without_modifier", "order_by_clause",
  "order_by_expr_list", "order_by_expr", "order_by_type", "limit_expr",
  "offset_expr", "distinct", "from_clause", "where_clause",
  "having_clause", "group_by_clause", "set_operator", "table_reference",
  "table_reference_unit", "table_reference_name", "table_name",
  "table_alias", "with_clause", "with_expr_list", "with_expr",
  "join_clause", "join_type", "show_statement", "expr_array",
  "constant_expr_array", "expr_alias", "expr", "function_expr",
  "column_expr", "constant_expr", "interval_expr", "copy_option_list",
  "copy_option", "file_path", "if_exists", "if_not_exists", "semicolon", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-231)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,   105,    17,   171,    28,    24,    28,   198,    79,    28,
      98,   -35,   118,    -4,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,    69,  -241,  -241,   117,  -241,    82,    82,    82,
      82,    82,    28,   113,   113,    53,   193,    28,    33,  -241,
    -241,   182,   183,  -241,   155,  -241,  -241,   199,   111,  -241,
     108,   115,  -241,    25,  -241,   237,  -241,  -241,     2,   209,
    -241,   226,   221,   279,    28,    28,    28,   284,   154,   233,
     296,    28,   297,   298,   260,   310,   310,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,    69,  -241,   181,    98,
    -241,  -241,  -241,  -241,     2,  -241,  -241,  -241,    18,   276,
     319,   314,  -241,   -34,  -241,   154,   327,   374,    14,  -241,
    -241,  -241,  -241,   254,   -41,  -241,    18,  -241,  -241,   315,
     316,   117,  -241,   246,   248,   250,  -241,  -241,  -241,   378,
    -241,  -241,   379,    18,    18,  -241,    18,   -47,  -241,    75,
    -241,   251,  -241,    18,    18,   330,  -241,   -35,    27,   346,
      28,  -241,   -84,   255,  -241,    18,   298,  -241,   147,   257,
     258,   259,  -241,  -241,     0,  -241,   247,  -241,    26,    26,
     127,     6,    18,   260,   387,   -27,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    18,    18,     8,   261,
    -241,    96,   147,    18,  -241,    69,   256,   295,   262,   -79,
    -241,  -241,  -241,   -35,   263,  -241,   392,    78,   147,  -241,
     203,   203,  -241,    18,  -241,   -22,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   -35,
     264,   321,  -241,   356,  -241,  -241,   361,  -241,   301,  -241,
     178,   178,   192,   192,   178,   192,   192,    26,    26,  -241,
    -241,  -241,  -241,  -241,    18,  -241,  -241,  -241,   147,  -241,
    -241,  -241,  -241,  -241,  -241,   269,   270,  -241,  -241,  -241,
     271,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,   272,   273,   274,   275,   -12,   277,   374,
    -241,    27,    69,   374,  -241,    35,  -241,   406,   409,  -241,
      39,  -241,    73,    74,  -241,    34,     6,   369,  -241,  -241,
    -241,  -241,  -241,  -241,   370,   412,  -241,   376,   377,  -241,
    -241,   411,   413,   414,   415,   416,   114,   214,   323,   326,
    -241,  -241,   -12,  -241,   374,   100,  -241,   102,  -241,    78,
    -241,  -241,  -241,   203,  -241,  -241,   356,   321,     6,     6,
     291,    18,    18,  -241,   292,   293,   104,   294,   299,   288,
     300,   302,   303,   304,   305,   306,   307,   308,   309,   311,
     312,   313,   317,  -241,  -241,  -241,   125,  -241,  -241,  -241,
    -241,  -241,  -241,   381,   374,   318,   147,  -241,  -241,  -241,
     425,  -241,  -241,   426,   427,   429,   430,   431,   433,   442,
     446,   447,   448,   451,   452,   453,   454,  -241,    18,   235,
     328,   329,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   147,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   231,     3,     5,    10,    12,    13,    11,
       6,     7,     9,   106,   105,     0,     8,   229,   229,   229,
     229,   229,     0,   227,   227,   147,     0,     0,     0,    92,
      96,     0,     0,    95,   153,   166,   167,     0,   152,   154,
       0,     0,     1,   153,     2,   137,   139,   140,     0,   128,
     111,   117,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,   132,     0,     0,    93,    94,    91,
      14,    19,    21,    20,    15,    16,    18,    17,     0,     0,
     110,   109,     4,   138,     0,   107,   108,   127,     0,     0,
     124,     0,    22,     0,    23,    90,     0,     0,   153,   226,
     101,   102,   148,     0,   132,    98,     0,    86,   225,     0,
       0,     0,   155,     0,     0,   197,   201,   204,   205,     0,
     202,   203,     0,     0,     0,   199,     0,   130,   168,   173,
     177,   176,   175,     0,     0,   126,   228,   153,     0,     0,
       0,    84,     0,     0,    88,     0,     0,    97,   131,     0,
       0,     0,   114,   113,     0,   206,     0,   207,   184,   183,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     118,     0,   123,     0,   112,    25,     0,     0,     0,     0,
      28,    30,    31,   153,     0,    89,     0,     0,   100,    99,
       0,     0,   156,     0,   178,     0,   209,   208,   211,   210,
     213,   212,   215,   214,   217,   216,   219,   218,   174,   153,
     129,   141,   143,   151,   144,   169,   136,   172,     0,   182,
     191,   192,   195,   196,   190,   193,   194,   186,   185,   187,
     188,   189,   198,   200,     0,   121,   122,   120,   125,    34,
      37,    35,    36,    38,    39,     0,     0,    40,    42,    41,
      59,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,    32,     0,     0,
      24,     0,    26,     0,    85,     0,   170,     0,     0,   224,
       0,   220,     0,     0,   179,     0,     0,     0,   160,   161,
     162,   163,   159,   164,     0,     0,   145,     0,   134,   181,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      79,    80,    33,    76,     0,     0,    29,     0,    87,     0,
     223,   222,   104,     0,   103,   180,   151,   142,     0,     0,
     149,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    78,    77,     0,    83,    27,   171,
     221,   146,   157,     0,     0,   135,   133,    55,    56,    58,
       0,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,   150,    57,    65,    63,
      64,    66,    67,    68,    62,    72,    70,    71,    73,    74,
      75,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,   408,  -241,   418,  -241,   174,  -241,  -241,
    -241,   148,  -241,  -240,   435,   437,   380,  -241,  -241,   438,
    -241,   344,   439,   440,   -42,   475,    15,   366,   394,   -15,
    -241,  -241,   236,  -241,  -241,  -241,  -241,  -241,  -101,  -241,
    -241,  -241,  -241,   185,  -170,    10,   143,  -241,  -241,   403,
    -241,  -241,   449,  -163,  -241,   322,  -116,  -241,  -241,  -200,
    -241,   285,   152,   421,   464,   120,  -241
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    12,    13,    14,    79,    15,   199,   200,   201,   287,
     332,   333,   202,   152,    16,    17,   108,    18,    44,    19,
     114,   115,    20,    21,    22,    23,    24,    60,    95,    61,
     100,   189,   190,   257,   145,   194,    98,   173,   117,   353,
     318,    58,   230,   231,   232,   233,   316,    25,    48,    49,
     234,   314,    26,   137,   295,   138,   139,   140,   141,   142,
     167,   300,   301,   119,    70,    63,    54
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     158,   215,    86,   125,   126,   127,   128,   296,   147,    35,
      59,   252,   116,   157,    36,   171,    38,   168,   169,    46,
     170,   125,   126,   127,   128,  -230,    51,   191,   192,    10,
     196,    35,     1,   238,     2,     3,     4,     5,     6,   208,
       7,     8,    68,    96,   153,     9,    32,    74,   328,   335,
     303,   205,   213,   337,   206,    55,   290,    56,    57,   291,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   236,   239,   103,   104,   105,   258,    10,   124,
     129,   111,   126,   127,   128,   329,    37,   330,   331,    10,
      55,   172,    56,    57,   376,    75,    76,   156,   129,    11,
     148,    47,   130,   131,   132,   195,     1,    45,     2,     3,
       4,     5,     6,   304,     7,     8,   172,   174,    52,     9,
     130,   131,   132,   154,   197,    59,   198,   133,   134,   135,
      27,    28,    29,    53,   136,   214,    94,   253,   191,   379,
     229,    62,    30,    31,   409,   133,   134,   135,    64,    65,
      66,    67,   136,   255,   256,   185,   186,   187,   129,    11,
     204,   292,     1,    10,     2,     3,     4,     5,     6,   346,
     338,     8,    69,   339,   342,     9,   175,   343,   382,   383,
     130,   131,   132,   359,   360,   361,   362,   305,   385,    72,
     363,   364,   176,   177,   178,   179,    33,   175,    34,   180,
     181,   182,   183,   184,   185,   186,   187,    73,   344,   345,
     365,   343,   172,   176,   177,   178,   179,    77,    78,    10,
     180,   181,   182,   183,   184,   185,   186,   187,   175,    39,
      40,    41,    42,    11,    43,   377,   386,   378,   206,   389,
     206,    88,   390,    90,   176,   177,   178,   179,   175,    89,
      91,   180,   181,   182,   183,   184,   185,   186,   187,    93,
     407,    97,   228,   206,   176,   177,   178,   179,   297,   298,
     299,   180,   181,   182,   183,   184,   185,   186,   187,   175,
      99,   101,   102,   366,   367,   368,   369,   106,   107,    11,
     370,   371,   425,   175,   109,  -231,  -231,   178,   179,   110,
     112,   113,  -231,   181,   182,   183,   184,   185,   186,   187,
     372,  -231,  -231,   116,   118,   121,   143,  -231,  -231,   183,
     184,   185,   186,   187,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   307,  -165,   308,   309,   310,   311,
     426,   312,   313,   206,   144,   146,   150,   151,   155,   159,
     160,   162,   165,   163,   164,   166,   193,   188,   203,   207,
     237,   210,   211,   288,   212,   294,   289,   293,   315,   254,
     317,   319,   306,   321,   322,   323,   324,   325,   326,   327,
     340,   334,   341,   348,   349,   350,   351,   354,   352,   355,
     356,   357,   358,   373,   374,   384,   393,   387,   388,   391,
     408,   410,   411,   412,   392,   413,   414,   415,   394,   416,
     395,   396,   397,   398,   399,   400,   401,   402,   417,   403,
     404,   405,   418,   419,   420,   406,   172,   421,   422,   423,
     424,    92,    80,   427,   428,   336,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,    81,
     375,    82,    83,    84,    85,   149,    50,   161,   123,   381,
     320,   347,   122,    87,   235,   380,   302,   120,    71,     0,
     209
};

static const yytype_int16 yycheck[] =
{
     116,   164,    44,     3,     4,     5,     6,   207,    42,     3,
       8,     3,    53,   114,     4,    62,     6,   133,   134,     9,
     136,     3,     4,     5,     6,     0,    11,   143,   144,    64,
       3,     3,     7,    60,     9,    10,    11,    12,    13,   155,
      15,    16,    32,    58,    30,    20,    29,    37,    60,   289,
     213,   135,    52,   293,   138,    21,   135,    23,    24,   138,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   173,   100,    64,    65,    66,   193,    64,    94,
      80,    71,     4,     5,     6,    97,    62,    99,   100,    64,
      21,   138,    23,    24,   334,    62,    63,   138,    80,   134,
     134,     3,   102,   103,   104,   147,     7,    28,     9,    10,
      11,    12,    13,   135,    15,    16,   138,    42,     0,    20,
     102,   103,   104,   108,    97,     8,    99,   127,   128,   129,
      25,    26,    27,   137,   134,   135,   134,   129,   254,   339,
     134,    59,    37,    38,   384,   127,   128,   129,    28,    29,
      30,    31,   134,    57,    58,   129,   130,   131,    80,   134,
     150,   203,     7,    64,     9,    10,    11,    12,    13,   135,
     135,    16,    59,   138,   135,    20,   101,   138,   348,   349,
     102,   103,   104,    69,    70,    71,    72,   229,   351,   136,
      76,    77,   117,   118,   119,   120,    25,   101,    27,   124,
     125,   126,   127,   128,   129,   130,   131,    14,   135,   135,
      96,   138,   138,   117,   118,   119,   120,    35,    35,    64,
     124,   125,   126,   127,   128,   129,   130,   131,   101,    31,
      32,    33,    34,   134,    36,   135,   352,   135,   138,   135,
     138,    42,   138,   135,   117,   118,   119,   120,   101,   138,
     135,   124,   125,   126,   127,   128,   129,   130,   131,    22,
     135,    52,   135,   138,   117,   118,   119,   120,    65,    66,
      67,   124,   125,   126,   127,   128,   129,   130,   131,   101,
      54,    60,     3,    69,    70,    71,    72,     3,   134,   134,
      76,    77,   408,   101,    61,   117,   118,   119,   120,     3,
       3,     3,   124,   125,   126,   127,   128,   129,   130,   131,
      96,   119,   120,    53,     4,   134,    40,   125,   126,   127,
     128,   129,   130,   131,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    43,    44,    45,    46,    47,    48,
     135,    50,    51,   138,    55,    61,    49,     3,   124,    64,
      64,   135,     4,   135,   134,     6,    56,   136,    42,   134,
       3,   134,   134,    98,   135,     3,   134,   134,    42,   138,
      39,   100,   138,   134,   134,   134,   134,   134,   134,   134,
       4,   134,     3,    44,    44,     3,    40,     6,    41,     6,
       6,     6,     6,   100,    98,   134,   138,   135,   135,   135,
      49,     6,     6,     6,   135,     6,     6,     6,   138,     6,
     138,   138,   138,   138,   138,   138,   138,   138,     6,   138,
     138,   138,     6,     6,     6,   138,   138,     6,     6,     6,
       6,    53,    44,   135,   135,   291,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,    44,
     332,    44,    44,    44,    44,   105,    11,   121,    94,   346,
     254,   306,    89,    44,   172,   343,   211,    76,    34,    -1,
     156
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,     9,    10,    11,    12,    13,    15,    16,    20,
      64,   134,   140,   141,   142,   144,   153,   154,   156,   158,
     161,   162,   163,   164,   165,   186,   191,    25,    26,    27,
      37,    38,    29,    25,    27,     3,   184,    62,   184,    31,
      32,    33,    34,    36,   157,    28,   184,     3,   187,   188,
     164,   165,     0,   137,   205,    21,    23,    24,   180,     8,
     166,   168,    59,   204,   204,   204,   204,   204,   184,    59,
     203,   203,   136,    14,   184,    62,    63,    35,    35,   143,
     144,   153,   154,   158,   161,   162,   163,   191,    42,   138,
     135,   135,   142,    22,   134,   167,   168,    52,   175,    54,
     169,    60,     3,   184,   184,   184,     3,   134,   155,    61,
       3,   184,     3,     3,   159,   160,    53,   177,     4,   202,
     202,   134,   188,   167,   168,     3,     4,     5,     6,    80,
     102,   103,   104,   127,   128,   129,   134,   192,   194,   195,
     196,   197,   198,    40,    55,   173,    61,    42,   134,   155,
      49,     3,   152,    30,   165,   124,   138,   177,   195,    64,
      64,   166,   135,   135,   134,     4,     6,   199,   195,   195,
     195,    62,   138,   176,    42,   101,   117,   118,   119,   120,
     124,   125,   126,   127,   128,   129,   130,   131,   136,   170,
     171,   195,   195,    56,   174,   163,     3,    97,    99,   145,
     146,   147,   151,    42,   184,   135,   138,   134,   195,   160,
     134,   134,   135,    52,   135,   192,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   135,   134,
     181,   182,   183,   184,   189,   194,   177,     3,    60,   100,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   195,     3,   129,   138,    57,    58,   172,   195,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   148,    98,   134,
     135,   138,   163,   134,     3,   193,   198,    65,    66,    67,
     200,   201,   200,   192,   135,   163,   138,    43,    45,    46,
      47,    48,    50,    51,   190,    42,   185,    39,   179,   100,
     171,   134,   134,   134,   134,   134,   134,   134,    60,    97,
      99,   100,   149,   150,   134,   152,   146,   152,   135,   138,
       4,     3,   135,   138,   135,   135,   135,   182,    44,    44,
       3,    40,    41,   178,     6,     6,     6,     6,     6,    69,
      70,    71,    72,    76,    77,    96,    69,    70,    71,    72,
      76,    77,    96,   100,    98,   150,   152,   135,   135,   198,
     201,   185,   183,   183,   134,   192,   195,   135,   135,   135,
     138,   135,   135,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   135,    49,   152,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,   195,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   139,   140,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149,   150,   150,
     150,   150,   151,   151,   152,   152,   153,   154,   154,   155,
     155,   156,   157,   157,   157,   157,   157,   158,   159,   159,
     160,   161,   161,   162,   162,   163,   163,   163,   163,   164,
     164,   165,   166,   167,   167,   168,   169,   169,   170,   170,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   180,
     180,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   185,   186,   186,   187,   187,   188,   189,   189,   190,
     190,   190,   190,   190,   190,   190,   191,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   195,   195,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   197,   197,   197,
     197,   198,   198,   198,   198,   198,   198,   198,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     200,   200,   201,   201,   201,   202,   203,   203,   204,   204,
     205,   205
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     7,     6,     7,     9,     1,     3,
       1,     1,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     6,     4,     1,
       4,     4,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     1,     2,     2,     1,
       1,     2,     5,     4,     1,     3,     4,     8,     5,     3,
       0,     3,     1,     2,     2,     1,     1,     5,     1,     3,
       3,     4,     4,     8,     8,     1,     1,     3,     3,     3,
       3,     2,     4,     3,     3,     7,     3,     0,     1,     3,
       2,     1,     1,     2,     0,     2,     0,     1,     0,     2,
       0,     2,     0,     2,     0,     3,     0,     1,     2,     1,
       1,     1,     3,     1,     1,     2,     4,     1,     3,     2,
       5,     0,     2,     0,     1,     3,     5,     4,     6,     1,
       1,     1,     1,     1,     1,     0,     2,     2,     1,     3,
       1,     3,     3,     1,     3,     1,     1,     1,     3,     4,
       5,     4,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     3,     2,     2,     1,     1,     2,     0,     3,     0,
       1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQLEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQLEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQLerror or SQLUNDEF. */
#define YYERRCODE SQLUNDEF

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
#if SQLDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined SQLLTYPE_IS_TRIVIAL && SQLLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, ParserResult* result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void *scanner, ParserResult* result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, void *scanner, ParserResult* result)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !SQLDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !SQLDEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void *scanner, ParserResult* result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 214 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    free(((*yyvaluep).str_value));
}
#line 1731 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 214 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    free(((*yyvaluep).str_value));
}
#line 1739 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 148 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy statement array\n");
    if ((((*yyvaluep).stmt_array)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_array))) {
            delete ptr;
        }
        delete (((*yyvaluep).stmt_array));
    }
}
#line 1753 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_table_element_array: /* table_element_array  */
#line 138 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table element array\n");
    if ((((*yyvaluep).table_element_array_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_array_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).table_element_array_t));
    }
}
#line 1767 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_column_constraints: /* column_constraints  */
#line 207 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy constraints\n");
    if ((((*yyvaluep).column_constraints_t)) != nullptr) {
        delete (((*yyvaluep).column_constraints_t));
    }
}
#line 1778 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_identifier_array: /* identifier_array  */
#line 218 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy identifier array\n");
    delete (((*yyvaluep).identifier_array_t));
}
#line 1787 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_optional_identifier_array: /* optional_identifier_array  */
#line 218 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy identifier array\n");
    delete (((*yyvaluep).identifier_array_t));
}
#line 1796 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_update_expr_array: /* update_expr_array  */
#line 178 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy update expr array\n");
    if ((((*yyvaluep).update_expr_array_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_expr_array_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).update_expr_array_t));
    }
}
#line 1810 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_order_by_clause: /* order_by_clause  */
#line 168 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy order by expr list\n");
    if ((((*yyvaluep).order_by_expr_list_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_by_expr_list_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).order_by_expr_list_t));
    }
}
#line 1824 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_order_by_expr_list: /* order_by_expr_list  */
#line 168 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy order by expr list\n");
    if ((((*yyvaluep).order_by_expr_list_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_by_expr_list_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).order_by_expr_list_t));
    }
}
#line 1838 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_order_by_expr: /* order_by_expr  */
#line 237 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy order by expr\n");
    delete ((*yyvaluep).order_by_expr_t)->expr_;
    delete ((*yyvaluep).order_by_expr_t);
}
#line 1848 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_limit_expr: /* limit_expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 1856 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_offset_expr: /* offset_expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 1864 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 232 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table reference\n");
    delete (((*yyvaluep).table_reference_t));
}
#line 1873 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_where_clause: /* where_clause  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 1881 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_having_clause: /* having_clause  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 1889 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_group_by_clause: /* group_by_clause  */
#line 158 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy expression array\n");
    if ((((*yyvaluep).expr_array_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_array_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).expr_array_t));
    }
}
#line 1903 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_table_reference: /* table_reference  */
#line 232 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table reference\n");
    delete (((*yyvaluep).table_reference_t));
}
#line 1912 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_table_reference_unit: /* table_reference_unit  */
#line 232 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table reference\n");
    delete (((*yyvaluep).table_reference_t));
}
#line 1921 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_table_reference_name: /* table_reference_name  */
#line 232 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table reference\n");
    delete (((*yyvaluep).table_reference_t));
}
#line 1930 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 198 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table name\n");
    if ((((*yyvaluep).table_name_t)) != nullptr) {
        free(((*yyvaluep).table_name_t)->schema_name_ptr_);
        free(((*yyvaluep).table_name_t)->table_name_ptr_);
        delete (((*yyvaluep).table_name_t));
    }
}
#line 1943 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 227 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table alias\n");
    delete (((*yyvaluep).table_alias_t));
}
#line 1952 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 188 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy with expr list\n");
    if ((((*yyvaluep).with_expr_list_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).with_expr_list_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).with_expr_list_t));
    }
}
#line 1966 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_with_expr_list: /* with_expr_list  */
#line 188 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy with expr list\n");
    if ((((*yyvaluep).with_expr_list_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).with_expr_list_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).with_expr_list_t));
    }
}
#line 1980 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_with_expr: /* with_expr  */
#line 243 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy with expr\n");
    delete ((*yyvaluep).with_expr_t)->statement_;
    delete ((*yyvaluep).with_expr_t);
}
#line 1990 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 232 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy table reference\n");
    delete (((*yyvaluep).table_reference_t));
}
#line 1999 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_expr_array: /* expr_array  */
#line 158 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy expression array\n");
    if ((((*yyvaluep).expr_array_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_array_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).expr_array_t));
    }
}
#line 2013 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_constant_expr_array: /* constant_expr_array  */
#line 158 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    fprintf(stderr, "destroy expression array\n");
    if ((((*yyvaluep).expr_array_t)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_array_t))) {
            delete ptr;
        }
        delete (((*yyvaluep).expr_array_t));
    }
}
#line 2027 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 2035 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 2043 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 2051 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_column_expr: /* column_expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 2059 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_constant_expr: /* constant_expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 2067 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_interval_expr: /* interval_expr  */
#line 223 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    delete (((*yyvaluep).expr_t));
}
#line 2075 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 214 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    free(((*yyvaluep).str_value));
}
#line 2083 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void *scanner, ParserResult* result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined SQLLTYPE_IS_TRIVIAL && SQLLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQLEMPTY; /* Cause a token to be read.  */


/* User initialization code.  */
#line 71 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 2191 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQLEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQLEOF)
    {
      yychar = SQLEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQLerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQLUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQLEMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input_pattern: statement_list semicolon  */
#line 341 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                         {
    result->statements_ptr_ = (yyvsp[-1].stmt_array);
}
#line 2406 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 345 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                           {
    (yyvsp[0].base_stmt)->stmt_length_ = yylloc.string_length;
    yylloc.string_length = 0;
    (yyval.stmt_array) = new Vector<BaseStatement*>();
    (yyval.stmt_array)->push_back((yyvsp[0].base_stmt));
}
#line 2417 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 351 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                               {
    (yyvsp[0].base_stmt)->stmt_length_ = yylloc.string_length;
    yylloc.string_length = 0;
    (yyvsp[-2].stmt_array)->push_back((yyvsp[0].base_stmt));
    (yyval.stmt_array) = (yyvsp[-2].stmt_array);
}
#line 2428 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 5: /* statement: create_statement  */
#line 358 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                             { (yyval.base_stmt) = (yyvsp[0].create_stmt); }
#line 2434 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 6: /* statement: drop_statement  */
#line 359 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 { (yyval.base_stmt) = (yyvsp[0].drop_stmt); }
#line 2440 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 7: /* statement: copy_statement  */
#line 360 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 { (yyval.base_stmt) = (yyvsp[0].copy_stmt); }
#line 2446 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 8: /* statement: show_statement  */
#line 361 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 { (yyval.base_stmt) = (yyvsp[0].show_stmt); }
#line 2452 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 9: /* statement: select_statement  */
#line 362 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].select_stmt); }
#line 2458 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 10: /* statement: delete_statement  */
#line 363 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].delete_stmt); }
#line 2464 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 11: /* statement: update_statement  */
#line 364 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].update_stmt); }
#line 2470 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 12: /* statement: insert_statement  */
#line 365 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].insert_stmt); }
#line 2476 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 13: /* statement: explain_statement  */
#line 366 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    { (yyval.base_stmt) = (yyvsp[0].explain_stmt); }
#line 2482 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 14: /* explainable_statement: create_statement  */
#line 368 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                         { (yyval.base_stmt) = (yyvsp[0].create_stmt); }
#line 2488 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 15: /* explainable_statement: drop_statement  */
#line 369 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 { (yyval.base_stmt) = (yyvsp[0].drop_stmt); }
#line 2494 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 16: /* explainable_statement: copy_statement  */
#line 370 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 { (yyval.base_stmt) = (yyvsp[0].copy_stmt); }
#line 2500 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 17: /* explainable_statement: show_statement  */
#line 371 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 { (yyval.base_stmt) = (yyvsp[0].show_stmt); }
#line 2506 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 18: /* explainable_statement: select_statement  */
#line 372 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].select_stmt); }
#line 2512 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 19: /* explainable_statement: delete_statement  */
#line 373 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].delete_stmt); }
#line 2518 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 20: /* explainable_statement: update_statement  */
#line 374 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].update_stmt); }
#line 2524 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 21: /* explainable_statement: insert_statement  */
#line 375 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   { (yyval.base_stmt) = (yyvsp[0].insert_stmt); }
#line 2530 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 22: /* create_statement: CREATE SCHEMA if_not_exists IDENTIFIER  */
#line 382 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                          {
    (yyval.create_stmt) = new CreateStatement();
    UniquePtr<CreateSchemaInfo> create_schema_info = MakeUnique<CreateSchemaInfo>();
    create_schema_info->schema_name_ = (yyvsp[0].str_value);
    free((yyvsp[0].str_value));
    (yyval.create_stmt)->create_info_ = std::move(create_schema_info);
    (yyval.create_stmt)->create_info_->conflict_type_ = (yyvsp[-1].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
}
#line 2543 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 23: /* create_statement: CREATE COLLECTION if_not_exists table_name  */
#line 392 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                             {
    (yyval.create_stmt) = new CreateStatement();
    UniquePtr<CreateCollectionInfo> create_collection_info = std::make_unique<CreateCollectionInfo>();
    if((yyvsp[0].table_name_t)->schema_name_ptr_ != nullptr) {
        create_collection_info->schema_name_ = (yyvsp[0].table_name_t)->schema_name_ptr_;
        free((yyvsp[0].table_name_t)->schema_name_ptr_);
    }
    create_collection_info->table_name_ = (yyvsp[0].table_name_t)->table_name_ptr_;
    free((yyvsp[0].table_name_t)->table_name_ptr_);
    (yyval.create_stmt)->create_info_ = std::move(create_collection_info);
    (yyval.create_stmt)->create_info_->conflict_type_ = (yyvsp[-1].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
    delete (yyvsp[0].table_name_t);
}
#line 2561 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 24: /* create_statement: CREATE TABLE if_not_exists table_name '(' table_element_array ')'  */
#line 407 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                    {
    if(result->IsError()) {
        printf("Error happened, release memory\n");
        if((yyvsp[-3].table_name_t)->schema_name_ptr_ != nullptr) {
            free((yyvsp[-3].table_name_t)->schema_name_ptr_);
        }
        free((yyvsp[-3].table_name_t)->table_name_ptr_);
        delete((yyvsp[-3].table_name_t));
        delete((yyvsp[-1].table_element_array_t));
        YYERROR;
    }

    (yyval.create_stmt) = new CreateStatement();
    UniquePtr<CreateTableInfo> create_table_info = MakeUnique<CreateTableInfo>();
    if((yyvsp[-3].table_name_t)->schema_name_ptr_ != nullptr) {
        create_table_info->schema_name_ = (yyvsp[-3].table_name_t)->schema_name_ptr_;
        free((yyvsp[-3].table_name_t)->schema_name_ptr_);
    }
    create_table_info->table_name_ = (yyvsp[-3].table_name_t)->table_name_ptr_;
    free((yyvsp[-3].table_name_t)->table_name_ptr_);
    delete (yyvsp[-3].table_name_t);

    for (TableElement*& element : *(yyvsp[-1].table_element_array_t)) {
        if(element->type_ == TableElementType::kColumn) {
            create_table_info->column_defs_.emplace_back((ColumnDef*)element);
        } else {
            create_table_info->constraints_.emplace_back((TableConstraint*)element);
        }
    }
    delete (yyvsp[-1].table_element_array_t);

    (yyval.create_stmt)->create_info_ = std::move(create_table_info);
    (yyval.create_stmt)->create_info_->conflict_type_ = (yyvsp[-4].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
}
#line 2600 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 25: /* create_statement: CREATE TABLE if_not_exists table_name AS select_statement  */
#line 442 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                            {
    (yyval.create_stmt) = new CreateStatement();
    UniquePtr<CreateTableInfo> create_table_info = MakeUnique<CreateTableInfo>();
    if((yyvsp[-2].table_name_t)->schema_name_ptr_ != nullptr) {
        create_table_info->schema_name_ = (yyvsp[-2].table_name_t)->schema_name_ptr_;
        free((yyvsp[-2].table_name_t)->schema_name_ptr_);
    }
    create_table_info->table_name_ = (yyvsp[-2].table_name_t)->table_name_ptr_;
    free((yyvsp[-2].table_name_t)->table_name_ptr_);
    delete (yyvsp[-2].table_name_t);

    create_table_info->conflict_type_ = (yyvsp[-3].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
    create_table_info->select_ = (yyvsp[0].select_stmt);
    (yyval.create_stmt)->create_info_ = std::move(create_table_info);
}
#line 2620 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 26: /* create_statement: CREATE VIEW if_not_exists table_name optional_identifier_array AS select_statement  */
#line 458 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                                     {
    (yyval.create_stmt) = new CreateStatement();
    UniquePtr<CreateViewInfo> create_view_info = MakeUnique<CreateViewInfo>();
    if((yyvsp[-3].table_name_t)->schema_name_ptr_ != nullptr) {
        create_view_info->schema_name_ = (yyvsp[-3].table_name_t)->schema_name_ptr_;
        free((yyvsp[-3].table_name_t)->schema_name_ptr_);
    }
    create_view_info->view_name_ = (yyvsp[-3].table_name_t)->table_name_ptr_;
    free((yyvsp[-3].table_name_t)->table_name_ptr_);
    delete (yyvsp[-3].table_name_t);

    create_view_info->view_columns_ = (yyvsp[-2].identifier_array_t);
    create_view_info->select_ = (yyvsp[0].select_stmt);
    create_view_info->conflict_type_ = (yyvsp[-4].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
}
#line 2640 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 27: /* create_statement: CREATE INDEX if_not_exists IDENTIFIER ON table_name '(' identifier_array ')'  */
#line 474 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                               {
    (yyval.create_stmt) = new CreateStatement();
    UniquePtr<CreateIndexInfo> create_index_info = MakeUnique<CreateIndexInfo>();
    if((yyvsp[-3].table_name_t)->schema_name_ptr_ != nullptr) {
        create_index_info->schema_name_ = (yyvsp[-3].table_name_t)->schema_name_ptr_;
        free((yyvsp[-3].table_name_t)->schema_name_ptr_);
    }
    create_index_info->table_name_ = (yyvsp[-3].table_name_t)->table_name_ptr_;
    free((yyvsp[-3].table_name_t)->table_name_ptr_);
    delete (yyvsp[-3].table_name_t);

    create_index_info->index_name_ = (yyvsp[-5].str_value);
    free((yyvsp[-5].str_value));

    create_index_info->column_names_ = (yyvsp[-1].identifier_array_t);
    create_index_info->conflict_type_ = (yyvsp[-6].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
}
#line 2662 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 28: /* table_element_array: table_element  */
#line 492 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                    {
    (yyval.table_element_array_t) = new Vector<TableElement*>();
    (yyval.table_element_array_t)->push_back((yyvsp[0].table_element_t));
}
#line 2671 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 29: /* table_element_array: table_element_array ',' table_element  */
#line 496 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                        {
    (yyvsp[-2].table_element_array_t)->push_back((yyvsp[0].table_element_t));
    (yyval.table_element_array_t) = (yyvsp[-2].table_element_array_t);
}
#line 2680 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 30: /* table_element: table_column  */
#line 502 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                             {
    (yyval.table_element_t) = (yyvsp[0].table_column_t);
}
#line 2688 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 31: /* table_element: table_constraint  */
#line 505 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    (yyval.table_element_t) = (yyvsp[0].table_constraint_t);
}
#line 2696 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 32: /* table_column: IDENTIFIER column_type  */
#line 511 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                       {
    if(result->IsError()) {
        free((yyvsp[-1].str_value));
    }

    SharedPtr<TypeInfo> type_info_ptr{nullptr};
    switch((yyvsp[0].column_type_t).logical_type_) {
        case LogicalType::kChar: {
            type_info_ptr = CharInfo::Make((yyvsp[0].column_type_t).width);
            break;
        }
        case LogicalType::kVarchar: {
            type_info_ptr = VarcharInfo::Make((yyvsp[0].column_type_t).width);
            break;
        }
        case LogicalType::kDecimal64: {
            type_info_ptr = Decimal64Info::Make((yyvsp[0].column_type_t).precision, (yyvsp[0].column_type_t).scale);
            break;
        }
        case LogicalType::kBlob: {
            type_info_ptr = BlobInfo::Make((yyvsp[0].column_type_t).width);
            break;
        }
        case LogicalType::kBitmap: {
            type_info_ptr = BitmapInfo::Make((yyvsp[0].column_type_t).width);
            break;
        }
        case LogicalType::kEmbedding: {
            type_info_ptr = EmbeddingInfo::Make((yyvsp[0].column_type_t).embedding_type_, (yyvsp[0].column_type_t).width);
            break;
        }
    }
    (yyval.table_column_t) = new ColumnDef((yyvsp[0].column_type_t).logical_type_, type_info_ptr);

    (yyval.table_column_t)->name_ = (yyvsp[-1].str_value);
    free((yyvsp[-1].str_value));
    /*
    if (!$$->trySetNullableExplicit()) {
        yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{$1}).c_str());
    }
    */
}
#line 2743 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 33: /* table_column: IDENTIFIER column_type column_constraints  */
#line 553 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                            {
    if(result->IsError()) {
        free((yyvsp[-2].str_value));
        delete((yyvsp[0].column_constraints_t));
    }

    SharedPtr<TypeInfo> type_info_ptr{nullptr};
    switch((yyvsp[-1].column_type_t).logical_type_) {
        case LogicalType::kChar: {
            type_info_ptr = CharInfo::Make((yyvsp[-1].column_type_t).width);
            break;
        }
        case LogicalType::kVarchar: {
            type_info_ptr = VarcharInfo::Make((yyvsp[-1].column_type_t).width);
            break;
        }
        case LogicalType::kDecimal64: {
            type_info_ptr = Decimal64Info::Make((yyvsp[-1].column_type_t).precision, (yyvsp[-1].column_type_t).scale);
            break;
        }
        case LogicalType::kBlob: {
            type_info_ptr = BlobInfo::Make((yyvsp[-1].column_type_t).width);
            break;
        }
        case LogicalType::kBitmap: {
            type_info_ptr = BitmapInfo::Make((yyvsp[-1].column_type_t).width);
            break;
        }
        case LogicalType::kEmbedding: {
            type_info_ptr = EmbeddingInfo::Make((yyvsp[-1].column_type_t).embedding_type_, (yyvsp[-1].column_type_t).width);
            break;
        }
    }
    (yyval.table_column_t) = new ColumnDef((yyvsp[-1].column_type_t).logical_type_, type_info_ptr);

    (yyval.table_column_t)->name_ = (yyvsp[-2].str_value);
    (yyval.table_column_t)->constraints_ = (yyvsp[0].column_constraints_t);
    free((yyvsp[-2].str_value));
    /*
    if (!$$->trySetNullableExplicit()) {
        yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{$1}).c_str());
    }
    */
}
#line 2792 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 34: /* column_type: BOOLEAN  */
#line 599 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        { (yyval.column_type_t) = ColumnType{LogicalType::kBoolean}; }
#line 2798 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 35: /* column_type: TINYINT  */
#line 600 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
          { (yyval.column_type_t) = ColumnType{LogicalType::kTinyInt}; }
#line 2804 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 36: /* column_type: SMALLINT  */
#line 601 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           { (yyval.column_type_t) = ColumnType{LogicalType::kSmallInt}; }
#line 2810 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 37: /* column_type: INTEGER  */
#line 602 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
          { (yyval.column_type_t) = ColumnType{LogicalType::kInteger}; }
#line 2816 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 38: /* column_type: BIGINT  */
#line 603 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
         { (yyval.column_type_t) = ColumnType{LogicalType::kBigInt}; }
#line 2822 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 39: /* column_type: HUGEINT  */
#line 604 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
          { (yyval.column_type_t) = ColumnType{LogicalType::kHugeInt}; }
#line 2828 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 40: /* column_type: FLOAT  */
#line 605 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        { (yyval.column_type_t) = ColumnType{LogicalType::kFloat}; }
#line 2834 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 41: /* column_type: REAL  */
#line 606 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        { (yyval.column_type_t) = ColumnType{LogicalType::kFloat}; }
#line 2840 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 42: /* column_type: DOUBLE  */
#line 607 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
         { (yyval.column_type_t) = ColumnType{LogicalType::kDouble}; }
#line 2846 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 43: /* column_type: DATE  */
#line 608 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       { (yyval.column_type_t) = ColumnType{LogicalType::kDate}; }
#line 2852 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 44: /* column_type: TIME  */
#line 609 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       { (yyval.column_type_t) = ColumnType{LogicalType::kTime}; }
#line 2858 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 45: /* column_type: DATETIME  */
#line 610 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           { (yyval.column_type_t) = ColumnType{LogicalType::kDateTime}; }
#line 2864 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 46: /* column_type: TIMESTAMP  */
#line 611 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            { (yyval.column_type_t) = ColumnType{LogicalType::kTimestamp}; }
#line 2870 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 47: /* column_type: UUID  */
#line 612 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       { (yyval.column_type_t) = ColumnType{LogicalType::kUuid}; }
#line 2876 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 48: /* column_type: POINT  */
#line 613 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        { (yyval.column_type_t) = ColumnType{LogicalType::kPoint}; }
#line 2882 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 49: /* column_type: LINE  */
#line 614 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       { (yyval.column_type_t) = ColumnType{LogicalType::kLine}; }
#line 2888 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 50: /* column_type: LSEG  */
#line 615 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       { (yyval.column_type_t) = ColumnType{LogicalType::kLineSeg}; }
#line 2894 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 51: /* column_type: BOX  */
#line 616 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
      { (yyval.column_type_t) = ColumnType{LogicalType::kBox}; }
#line 2900 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 52: /* column_type: PATH  */
#line 617 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       { (yyval.column_type_t) = ColumnType{LogicalType::kPath}; }
#line 2906 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 53: /* column_type: POLYGON  */
#line 618 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
          { (yyval.column_type_t) = ColumnType{LogicalType::kPolygon}; }
#line 2912 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 54: /* column_type: CIRCLE  */
#line 619 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
         { (yyval.column_type_t) = ColumnType{LogicalType::kCircle}; }
#line 2918 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 55: /* column_type: CHAR '(' LONG_VALUE ')'  */
#line 621 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                          { (yyval.column_type_t) = ColumnType{LogicalType::kChar, (yyvsp[-1].long_value)}; }
#line 2924 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 56: /* column_type: VARCHAR '(' LONG_VALUE ')'  */
#line 622 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                             { (yyval.column_type_t) = ColumnType{LogicalType::kVarchar, (yyvsp[-1].long_value)}; }
#line 2930 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 57: /* column_type: DECIMAL '(' LONG_VALUE ',' LONG_VALUE ')'  */
#line 623 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                            { (yyval.column_type_t) = ColumnType{LogicalType::kDecimal64, 0, (yyvsp[-3].long_value), (yyvsp[-1].long_value)}; }
#line 2936 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 58: /* column_type: DECIMAL '(' LONG_VALUE ')'  */
#line 624 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                             { (yyval.column_type_t) = ColumnType{LogicalType::kDecimal64, 0, (yyvsp[-1].long_value), 0}; }
#line 2942 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 59: /* column_type: DECIMAL  */
#line 625 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
          { (yyval.column_type_t) = ColumnType{LogicalType::kDecimal64, 0, 0, 0}; }
#line 2948 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 60: /* column_type: BLOB '(' LONG_VALUE ')'  */
#line 626 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                          { (yyval.column_type_t) = ColumnType{LogicalType::kBlob, (yyvsp[-1].long_value)}; }
#line 2954 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 61: /* column_type: BITMAP '(' LONG_VALUE ')'  */
#line 627 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                            { (yyval.column_type_t) = ColumnType{LogicalType::kBitmap, (yyvsp[-1].long_value)}; }
#line 2960 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 62: /* column_type: EMBEDDING '(' BIT ',' LONG_VALUE ')'  */
#line 628 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemBit}; }
#line 2966 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 63: /* column_type: EMBEDDING '(' TINYINT ',' LONG_VALUE ')'  */
#line 629 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                           { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt8}; }
#line 2972 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 64: /* column_type: EMBEDDING '(' SMALLINT ',' LONG_VALUE ')'  */
#line 630 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                            { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt16}; }
#line 2978 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 65: /* column_type: EMBEDDING '(' INTEGER ',' LONG_VALUE ')'  */
#line 631 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                           { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt32}; }
#line 2984 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 66: /* column_type: EMBEDDING '(' BIGINT ',' LONG_VALUE ')'  */
#line 632 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                          { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt64}; }
#line 2990 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 67: /* column_type: EMBEDDING '(' FLOAT ',' LONG_VALUE ')'  */
#line 633 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                         { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemFloat}; }
#line 2996 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 68: /* column_type: EMBEDDING '(' DOUBLE ',' LONG_VALUE ')'  */
#line 634 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                          { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemDouble}; }
#line 3002 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 69: /* column_type: VECTOR '(' BIT ',' LONG_VALUE ')'  */
#line 635 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                    { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemBit}; }
#line 3008 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 70: /* column_type: VECTOR '(' TINYINT ',' LONG_VALUE ')'  */
#line 636 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                        { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt8}; }
#line 3014 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 71: /* column_type: VECTOR '(' SMALLINT ',' LONG_VALUE ')'  */
#line 637 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                         { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt16}; }
#line 3020 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 72: /* column_type: VECTOR '(' INTEGER ',' LONG_VALUE ')'  */
#line 638 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                        { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt32}; }
#line 3026 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 73: /* column_type: VECTOR '(' BIGINT ',' LONG_VALUE ')'  */
#line 639 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemInt64}; }
#line 3032 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 74: /* column_type: VECTOR '(' FLOAT ',' LONG_VALUE ')'  */
#line 640 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                      { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemFloat}; }
#line 3038 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 75: /* column_type: VECTOR '(' DOUBLE ',' LONG_VALUE ')'  */
#line 641 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       { (yyval.column_type_t) = ColumnType{LogicalType::kEmbedding, (yyvsp[-1].long_value), 0, 0, kElemDouble}; }
#line 3044 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 76: /* column_constraints: column_constraint  */
#line 660 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       {
    (yyval.column_constraints_t) = new HashSet<ConstraintType>();
    (yyval.column_constraints_t)->insert((yyvsp[0].column_constraint_t));
}
#line 3053 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 77: /* column_constraints: column_constraints column_constraint  */
#line 664 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       {
    if((yyvsp[-1].column_constraints_t)->contains((yyvsp[0].column_constraint_t))) {
        yyerror(&yyloc, scanner, result, "Duplicate column constraint.");
        delete (yyvsp[-1].column_constraints_t);
    }
    (yyvsp[-1].column_constraints_t)->insert((yyvsp[0].column_constraint_t));
    (yyval.column_constraints_t) = (yyvsp[-1].column_constraints_t);
}
#line 3066 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 78: /* column_constraint: PRIMARY KEY  */
#line 673 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                {
    (yyval.column_constraint_t) = ConstraintType::kPrimaryKey;
}
#line 3074 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 79: /* column_constraint: UNIQUE  */
#line 676 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
         {
    (yyval.column_constraint_t) = ConstraintType::kUnique;
}
#line 3082 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 80: /* column_constraint: NULLABLE  */
#line 679 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           {
    (yyval.column_constraint_t) = ConstraintType::kNull;
}
#line 3090 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 81: /* column_constraint: NOT NULLABLE  */
#line 682 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
               {
    (yyval.column_constraint_t) = ConstraintType::kNotNull;
}
#line 3098 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 82: /* table_constraint: PRIMARY KEY '(' identifier_array ')'  */
#line 686 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                        {
    (yyval.table_constraint_t) = new TableConstraint();
    (yyval.table_constraint_t)->names_ptr_ = (yyvsp[-1].identifier_array_t);
    (yyval.table_constraint_t)->constraint_ = ConstraintType::kPrimaryKey;
}
#line 3108 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 83: /* table_constraint: UNIQUE '(' identifier_array ')'  */
#line 691 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    (yyval.table_constraint_t) = new TableConstraint();
    (yyval.table_constraint_t)->names_ptr_ = (yyvsp[-1].identifier_array_t);
    (yyval.table_constraint_t)->constraint_ = ConstraintType::kUnique;
}
#line 3118 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 84: /* identifier_array: IDENTIFIER  */
#line 698 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                              {
    (yyval.identifier_array_t) = new Vector<String>();
    (yyval.identifier_array_t)->emplace_back((yyvsp[0].str_value));
    free((yyvsp[0].str_value));
}
#line 3128 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 85: /* identifier_array: identifier_array ',' IDENTIFIER  */
#line 703 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    (yyvsp[-2].identifier_array_t)->emplace_back((yyvsp[0].str_value));
    free((yyvsp[0].str_value));
    (yyval.identifier_array_t) = (yyvsp[-2].identifier_array_t);
}
#line 3138 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 86: /* delete_statement: DELETE FROM table_name where_clause  */
#line 712 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                       {
    (yyval.delete_stmt) = new DeleteStatement();

    if((yyvsp[-1].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.delete_stmt)->schema_name_ = (yyvsp[-1].table_name_t)->schema_name_ptr_;
        free((yyvsp[-1].table_name_t)->schema_name_ptr_);
    }
    (yyval.delete_stmt)->table_name_ = (yyvsp[-1].table_name_t)->table_name_ptr_;
    (yyval.delete_stmt)->where_expr_ = (yyvsp[0].expr_t);
}
#line 3153 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 87: /* insert_statement: INSERT INTO table_name optional_identifier_array VALUES '(' constant_expr_array ')'  */
#line 726 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                                                      {
    (yyval.insert_stmt) = new InsertStatement();
    if((yyvsp[-5].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.insert_stmt)->schema_name_ = (yyvsp[-5].table_name_t)->schema_name_ptr_;
        free((yyvsp[-5].table_name_t)->schema_name_ptr_);
    }
    (yyval.insert_stmt)->table_name_ = (yyvsp[-5].table_name_t)->table_name_ptr_;
    free((yyvsp[-5].table_name_t)->table_name_ptr_);

    (yyval.insert_stmt)->columns_ = (yyvsp[-4].identifier_array_t);
    (yyval.insert_stmt)->values_ = (yyvsp[-1].expr_array_t);
}
#line 3170 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 88: /* insert_statement: INSERT INTO table_name optional_identifier_array select_without_paren  */
#line 738 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                        {
    (yyval.insert_stmt) = new InsertStatement();
    if((yyvsp[-2].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.insert_stmt)->schema_name_ = (yyvsp[-2].table_name_t)->schema_name_ptr_;
        free((yyvsp[-2].table_name_t)->schema_name_ptr_);
    }
    (yyval.insert_stmt)->table_name_ = (yyvsp[-2].table_name_t)->table_name_ptr_;
    free((yyvsp[-2].table_name_t)->table_name_ptr_);
    (yyval.insert_stmt)->columns_ = (yyvsp[-1].identifier_array_t);
    (yyval.insert_stmt)->select_ = (yyvsp[0].select_stmt);
}
#line 3186 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 89: /* optional_identifier_array: '(' identifier_array ')'  */
#line 750 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                    {
    (yyval.identifier_array_t) = (yyvsp[-1].identifier_array_t);
}
#line 3194 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 90: /* optional_identifier_array: %empty  */
#line 753 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
  {
    (yyval.identifier_array_t) = nullptr;
}
#line 3202 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 91: /* explain_statement: EXPLAIN explain_type explainable_statement  */
#line 760 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                               {
    (yyval.explain_stmt) = new ExplainStatement();
    (yyval.explain_stmt)->type_ = (yyvsp[-1].explain_type_t);
    (yyval.explain_stmt)->statement_ = (yyvsp[0].base_stmt);
}
#line 3212 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 92: /* explain_type: AST  */
#line 766 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                  {
    (yyval.explain_type_t) = ExplainType::kAst;
}
#line 3220 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 93: /* explain_type: UNOPT LOGICAL  */
#line 769 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    (yyval.explain_type_t) = ExplainType::kUnOpt;
}
#line 3228 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 94: /* explain_type: OPT LOGICAL  */
#line 772 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
              {
    (yyval.explain_type_t) = ExplainType::kOpt;
}
#line 3236 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 95: /* explain_type: PHYSICAL  */
#line 775 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           {
    (yyval.explain_type_t) = ExplainType::kPhysical;
}
#line 3244 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 96: /* explain_type: PIPELINE  */
#line 778 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           {
    (yyval.explain_type_t) = ExplainType::kPipeline;
}
#line 3252 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 97: /* update_statement: UPDATE table_name SET update_expr_array where_clause  */
#line 785 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                       {
    (yyval.update_stmt) = new UpdateStatement();
    if((yyvsp[-3].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.update_stmt)->schema_name_ = (yyvsp[-3].table_name_t)->schema_name_ptr_;
        free((yyvsp[-3].table_name_t)->schema_name_ptr_);
    }
    (yyval.update_stmt)->table_name_ = (yyvsp[-3].table_name_t)->table_name_ptr_;
    free((yyvsp[-3].table_name_t)->table_name_ptr_);
    (yyval.update_stmt)->where_expr_ = (yyvsp[0].expr_t);
    (yyval.update_stmt)->update_expr_array_ = (yyvsp[-1].update_expr_array_t);
}
#line 3268 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 98: /* update_expr_array: update_expr  */
#line 797 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                               {
    (yyval.update_expr_array_t) = new Vector<UpdateExpr*>();
    (yyval.update_expr_array_t)->emplace_back((yyvsp[0].update_expr_t));
}
#line 3277 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 99: /* update_expr_array: update_expr_array ',' update_expr  */
#line 801 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                    {
    (yyvsp[-2].update_expr_array_t)->emplace_back((yyvsp[0].update_expr_t));
    (yyval.update_expr_array_t) = (yyvsp[-2].update_expr_array_t);
}
#line 3286 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 100: /* update_expr: IDENTIFIER '=' expr  */
#line 806 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    (yyval.update_expr_t) = new UpdateExpr();
    (yyval.update_expr_t)->column_name = (yyvsp[-2].str_value);
    (yyval.update_expr_t)->value = (yyvsp[0].expr_t);
}
#line 3296 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 101: /* drop_statement: DROP SCHEMA if_exists IDENTIFIER  */
#line 817 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                 {
    (yyval.drop_stmt) = new DropStatement();
    UniquePtr<DropSchemaInfo> drop_schema_info = MakeUnique<DropSchemaInfo>();
    drop_schema_info->schema_name_ = (yyvsp[0].str_value);
    free((yyvsp[0].str_value));
    (yyval.drop_stmt)->drop_info_ = std::move(drop_schema_info);
    (yyval.drop_stmt)->drop_info_->conflict_type_ = (yyvsp[-1].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
}
#line 3309 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 102: /* drop_statement: DROP COLLECTION if_exists table_name  */
#line 827 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       {
    (yyval.drop_stmt) = new DropStatement();
    std::unique_ptr<DropCollectionInfo> drop_collection_info = std::make_unique<DropCollectionInfo>();
    if((yyvsp[0].table_name_t)->schema_name_ptr_ != nullptr) {
        drop_collection_info->schema_name_ = (yyvsp[0].table_name_t)->schema_name_ptr_;
        free((yyvsp[0].table_name_t)->schema_name_ptr_);
    }
    drop_collection_info->table_name_ = (yyvsp[0].table_name_t)->table_name_ptr_;
    free((yyvsp[0].table_name_t)->table_name_ptr_);
    (yyval.drop_stmt)->drop_info_ = std::move(drop_collection_info);
    (yyval.drop_stmt)->drop_info_->conflict_type_ = (yyvsp[-1].bool_value) ? ConflictType::kIgnore : ConflictType::kError;
    delete (yyvsp[0].table_name_t);
}
#line 3327 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 103: /* copy_statement: COPY table_name TO file_path WITH '(' copy_option_list ')'  */
#line 845 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                           {
    if(result->IsError()) {
        if((yyvsp[-6].table_name_t)->schema_name_ptr_ != nullptr) {
            free((yyvsp[-6].table_name_t)->schema_name_ptr_);
        }
        free((yyvsp[-6].table_name_t)->table_name_ptr_);
        delete((yyvsp[-6].table_name_t));
        free((yyvsp[-4].str_value));
        delete (yyvsp[-1].copy_option_array);
        YYERROR;
    }

    (yyval.copy_stmt) = new CopyStatement();

    // Copy To
    (yyval.copy_stmt)->copy_from_ = false;

    // table_name
    if((yyvsp[-6].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.copy_stmt)->schema_name_ = (yyvsp[-6].table_name_t)->schema_name_ptr_;
        free((yyvsp[-6].table_name_t)->schema_name_ptr_);
    }
    (yyval.copy_stmt)->table_name_ = (yyvsp[-6].table_name_t)->table_name_ptr_;
    free((yyvsp[-6].table_name_t)->table_name_ptr_);
    delete (yyvsp[-6].table_name_t);

    // file path
    (yyval.copy_stmt)->file_path_ = (yyvsp[-4].str_value);
    free((yyvsp[-4].str_value));

    // copy options
    SizeT option_count = (*(yyvsp[-1].copy_option_array)).size();
    for(SizeT idx = 0; idx < option_count; ++ idx) {
        CopyOption* option_ptr = (*(yyvsp[-1].copy_option_array))[idx];
        switch(option_ptr->option_type_) {
            case CopyOptionType::kFormat: {
                (yyval.copy_stmt)->copy_file_type_ = option_ptr->file_type_;
                break;
            }
            case CopyOptionType::kDelimiter: {
                (yyval.copy_stmt)->delimiter_ = option_ptr->delimiter_;
                break;
            }
            case CopyOptionType::kHeader: {
                (yyval.copy_stmt)->header_ = option_ptr->header_;
                break;
            }
        }
        delete option_ptr;
    }
    delete (yyvsp[-1].copy_option_array);
}
#line 3384 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 104: /* copy_statement: COPY table_name FROM file_path WITH '(' copy_option_list ')'  */
#line 897 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                               {
    if(result->IsError()) {
        if((yyvsp[-6].table_name_t)->schema_name_ptr_ != nullptr) {
            free((yyvsp[-6].table_name_t)->schema_name_ptr_);
        }
        free((yyvsp[-6].table_name_t)->table_name_ptr_);
        delete((yyvsp[-6].table_name_t));
        free((yyvsp[-4].str_value));
        delete (yyvsp[-1].copy_option_array);
        YYERROR;
    }

    (yyval.copy_stmt) = new CopyStatement();

    // Copy From
    (yyval.copy_stmt)->copy_from_ = true;

    // table_name
    if((yyvsp[-6].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.copy_stmt)->schema_name_ = (yyvsp[-6].table_name_t)->schema_name_ptr_;
        free((yyvsp[-6].table_name_t)->schema_name_ptr_);
    }
    (yyval.copy_stmt)->table_name_ = (yyvsp[-6].table_name_t)->table_name_ptr_;
    free((yyvsp[-6].table_name_t)->table_name_ptr_);
    delete (yyvsp[-6].table_name_t);

    // file path
    (yyval.copy_stmt)->file_path_ = (yyvsp[-4].str_value);
    free((yyvsp[-4].str_value));

    // copy options
    SizeT option_count = (*(yyvsp[-1].copy_option_array)).size();
    for(SizeT idx = 0; idx < option_count; ++ idx) {
        CopyOption* option_ptr = (*(yyvsp[-1].copy_option_array))[idx];
        switch(option_ptr->option_type_) {
            case CopyOptionType::kFormat: {
                (yyval.copy_stmt)->copy_file_type_ = option_ptr->file_type_;
                break;
            }
            case CopyOptionType::kDelimiter: {
                (yyval.copy_stmt)->delimiter_ = option_ptr->delimiter_;
                break;
            }
            case CopyOptionType::kHeader: {
                (yyval.copy_stmt)->header_ = option_ptr->header_;
                break;
            }
        }
        delete option_ptr;
    }
    delete (yyvsp[-1].copy_option_array);
}
#line 3441 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 105: /* select_statement: select_without_paren  */
#line 953 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                        {
    (yyval.select_stmt) = (yyvsp[0].select_stmt);
}
#line 3449 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 106: /* select_statement: select_with_paren  */
#line 956 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
    (yyval.select_stmt) = (yyvsp[0].select_stmt);
}
#line 3457 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 107: /* select_statement: select_statement set_operator select_clause_without_modifier_paren  */
#line 959 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                     {
    (yyvsp[-2].select_stmt)->set_op_ = (yyvsp[-1].set_operator_t);
    SelectStatement* node = (yyvsp[-2].select_stmt);
    while(node->nested_select_ != nullptr) {
        node = node->nested_select_;
    }
    node->nested_select_ = (yyvsp[0].select_stmt);
}
#line 3470 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 108: /* select_statement: select_statement set_operator select_clause_without_modifier  */
#line 967 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                               {
    (yyvsp[-2].select_stmt)->set_op_ = (yyvsp[-1].set_operator_t);
    SelectStatement* node = (yyvsp[-2].select_stmt);
    while(node->nested_select_ != nullptr) {
        node = node->nested_select_;
    }
    node->nested_select_ = (yyvsp[0].select_stmt);
}
#line 3483 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 109: /* select_with_paren: '(' select_without_paren ')'  */
#line 976 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                 {
    (yyval.select_stmt) = (yyvsp[-1].select_stmt);
}
#line 3491 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 110: /* select_with_paren: '(' select_with_paren ')'  */
#line 979 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                            {
    (yyval.select_stmt) = (yyvsp[-1].select_stmt);
}
#line 3499 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 111: /* select_without_paren: with_clause select_clause_with_modifier  */
#line 983 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                              {
    (yyvsp[0].select_stmt)->with_exprs_ = (yyvsp[-1].with_expr_list_t);
    (yyval.select_stmt) = (yyvsp[0].select_stmt);
}
#line 3508 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 112: /* select_clause_with_modifier: select_clause_without_modifier order_by_clause limit_expr offset_expr  */
#line 988 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                                                   {
    (yyvsp[-3].select_stmt)->order_by_list = (yyvsp[-2].order_by_expr_list_t);
    (yyvsp[-3].select_stmt)->limit_expr_ = (yyvsp[-1].expr_t);
    (yyvsp[-3].select_stmt)->offset_expr_ = (yyvsp[0].expr_t);
    (yyval.select_stmt) = (yyvsp[-3].select_stmt);
}
#line 3519 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 113: /* select_clause_without_modifier_paren: '(' select_clause_without_modifier ')'  */
#line 995 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                             {
  (yyval.select_stmt) = (yyvsp[-1].select_stmt);
}
#line 3527 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 114: /* select_clause_without_modifier_paren: '(' select_clause_without_modifier_paren ')'  */
#line 998 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                               {
    (yyval.select_stmt) = (yyvsp[-1].select_stmt);
}
#line 3535 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 115: /* select_clause_without_modifier: SELECT distinct expr_array from_clause where_clause group_by_clause having_clause  */
#line 1003 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                                  {
    (yyval.select_stmt) = new SelectStatement();
    (yyval.select_stmt)->select_list_ = (yyvsp[-4].expr_array_t);
    (yyval.select_stmt)->select_distinct_ = (yyvsp[-5].bool_value);
    (yyval.select_stmt)->table_ref_ = (yyvsp[-3].table_reference_t);
    (yyval.select_stmt)->where_expr_ = (yyvsp[-2].expr_t);
    (yyval.select_stmt)->group_by_list_ = (yyvsp[-1].expr_array_t);
    (yyval.select_stmt)->having_expr_ = (yyvsp[0].expr_t);

    if((yyval.select_stmt)->group_by_list_ == nullptr && (yyval.select_stmt)->having_expr_ != nullptr) {
        yyerror(&yyloc, scanner, result, "HAVING clause should follow after GROUP BY clause");
        YYERROR;
    }
}
#line 3554 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 116: /* order_by_clause: ORDER BY order_by_expr_list  */
#line 1018 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                              {
    (yyval.order_by_expr_list_t) = (yyvsp[0].order_by_expr_list_t);
}
#line 3562 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 117: /* order_by_clause: %empty  */
#line 1021 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                       {
    (yyval.order_by_expr_list_t) = nullptr;
}
#line 3570 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 118: /* order_by_expr_list: order_by_expr  */
#line 1025 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    (yyval.order_by_expr_list_t) = new Vector<OrderByExpr*>();
    (yyval.order_by_expr_list_t)->emplace_back((yyvsp[0].order_by_expr_t));
}
#line 3579 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 119: /* order_by_expr_list: order_by_expr_list ',' order_by_expr  */
#line 1029 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       {
    (yyvsp[-2].order_by_expr_list_t)->emplace_back((yyvsp[0].order_by_expr_t));
    (yyval.order_by_expr_list_t) = (yyvsp[-2].order_by_expr_list_t);
}
#line 3588 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 120: /* order_by_expr: expr order_by_type  */
#line 1034 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                   {
    (yyval.order_by_expr_t) = new OrderByExpr();
    (yyval.order_by_expr_t)->expr_ = (yyvsp[-1].expr_t);
    (yyval.order_by_expr_t)->type_ = (yyvsp[0].order_by_type_t);
}
#line 3598 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 121: /* order_by_type: ASC  */
#line 1040 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    (yyval.order_by_type_t) = kAsc;
}
#line 3606 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 122: /* order_by_type: DESC  */
#line 1043 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       {
    (yyval.order_by_type_t) = kDesc;
}
#line 3614 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 123: /* limit_expr: LIMIT expr  */
#line 1047 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                       {
    (yyval.expr_t) = (yyvsp[0].expr_t);
}
#line 3622 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 124: /* limit_expr: %empty  */
#line 1051 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
{   (yyval.expr_t) = nullptr; }
#line 3628 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 125: /* offset_expr: OFFSET expr  */
#line 1053 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                         {
    (yyval.expr_t) = (yyvsp[0].expr_t);
}
#line 3636 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 126: /* offset_expr: %empty  */
#line 1057 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
{   (yyval.expr_t) = nullptr; }
#line 3642 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 127: /* distinct: DISTINCT  */
#line 1059 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
    (yyval.bool_value) = true;
}
#line 3650 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 128: /* distinct: %empty  */
#line 1062 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
  {
    (yyval.bool_value) = false;
}
#line 3658 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 129: /* from_clause: FROM table_reference  */
#line 1066 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    (yyval.table_reference_t) = (yyvsp[0].table_reference_t);
}
#line 3666 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 130: /* from_clause: %empty  */
#line 1069 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                       {
    (yyval.table_reference_t) = nullptr;
}
#line 3674 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 131: /* where_clause: WHERE expr  */
#line 1073 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                         {
    (yyval.expr_t) = (yyvsp[0].expr_t);
}
#line 3682 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 132: /* where_clause: %empty  */
#line 1076 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                        {
    (yyval.expr_t) = nullptr;
}
#line 3690 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 133: /* having_clause: HAVING expr  */
#line 1080 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                           {
    (yyval.expr_t) = (yyvsp[0].expr_t);
}
#line 3698 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 134: /* having_clause: %empty  */
#line 1083 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                        {
    (yyval.expr_t) = nullptr;
}
#line 3706 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 135: /* group_by_clause: GROUP BY expr_array  */
#line 1087 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                     {
    (yyval.expr_array_t) = (yyvsp[0].expr_array_t);
}
#line 3714 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 136: /* group_by_clause: %empty  */
#line 1090 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
  {
    (yyval.expr_array_t) = nullptr;
}
#line 3722 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 137: /* set_operator: UNION  */
#line 1094 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                     {
    (yyval.set_operator_t) = SetOperatorType::kUnion;
}
#line 3730 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 138: /* set_operator: UNION ALL  */
#line 1097 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    (yyval.set_operator_t) = SetOperatorType::kUnionAll;
}
#line 3738 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 139: /* set_operator: INTERSECT  */
#line 1100 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
            {
    (yyval.set_operator_t) = SetOperatorType::kIntersect;
}
#line 3746 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 140: /* set_operator: EXCEPT  */
#line 1103 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
         {
    (yyval.set_operator_t) = SetOperatorType::kExcept;
}
#line 3754 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 141: /* table_reference: table_reference_unit  */
#line 1111 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       {
    (yyval.table_reference_t) = (yyvsp[0].table_reference_t);
}
#line 3762 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 142: /* table_reference: table_reference ',' table_reference_unit  */
#line 1114 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                           {
    CrossProductReference* cross_product_ref = new CrossProductReference();
    cross_product_ref->left_ = (yyvsp[-2].table_reference_t);
    cross_product_ref->right_ = (yyvsp[0].table_reference_t);

    (yyval.table_reference_t) = cross_product_ref;
}
#line 3774 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 145: /* table_reference_name: table_name table_alias  */
#line 1125 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                              {
    TableReference* table_ref = new TableReference();
    if((yyvsp[-1].table_name_t)->schema_name_ptr_ != nullptr) {
        table_ref->schema_name_ = (yyvsp[-1].table_name_t)->schema_name_ptr_;
        free((yyvsp[-1].table_name_t)->schema_name_ptr_);
    }
    table_ref->table_name_ = (yyvsp[-1].table_name_t)->table_name_ptr_;
    free((yyvsp[-1].table_name_t)->table_name_ptr_);
    delete (yyvsp[-1].table_name_t);

    table_ref->alias_ = (yyvsp[0].table_alias_t);
    (yyval.table_reference_t) = table_ref;
}
#line 3792 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 146: /* table_reference_name: '(' select_statement ')' table_alias  */
#line 1139 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                       {
    SubqueryReference* subquery_reference = new SubqueryReference();
    subquery_reference->select_statement_ = (yyvsp[-2].select_stmt);
    subquery_reference->alias_ = (yyvsp[0].table_alias_t);
    (yyval.table_reference_t) = subquery_reference;
}
#line 3803 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 147: /* table_name: IDENTIFIER  */
#line 1148 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                        {
    if(!result->IsError()) {
        (yyval.table_name_t) = new TableName();
        (yyval.table_name_t)->table_name_ptr_ = (yyvsp[0].str_value);
    }
}
#line 3814 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 148: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1154 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                            {
    if(!result->IsError()) {
        (yyval.table_name_t) = new TableName();
        (yyval.table_name_t)->schema_name_ptr_ = (yyvsp[-2].str_value);
        (yyval.table_name_t)->table_name_ptr_ = (yyvsp[0].str_value);
    }
}
#line 3826 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 149: /* table_alias: AS IDENTIFIER  */
#line 1163 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                            {
    (yyval.table_alias_t) = new TableAlias();
    (yyval.table_alias_t)->alias_ = (yyvsp[0].str_value);
}
#line 3835 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 150: /* table_alias: AS IDENTIFIER '(' identifier_array ')'  */
#line 1167 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                         {
    (yyval.table_alias_t) = new TableAlias();
    (yyval.table_alias_t)->alias_ = (yyvsp[-3].str_value);
    (yyval.table_alias_t)->column_alias_array_ = (yyvsp[-1].identifier_array_t);
}
#line 3845 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 151: /* table_alias: %empty  */
#line 1172 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
  {
    (yyval.table_alias_t) = nullptr;
}
#line 3853 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 152: /* with_clause: WITH with_expr_list  */
#line 1179 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    (yyval.with_expr_list_t) = (yyvsp[0].with_expr_list_t);
}
#line 3861 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 153: /* with_clause: %empty  */
#line 1182 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                          {
    (yyval.with_expr_list_t) = nullptr;
}
#line 3869 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 154: /* with_expr_list: with_expr  */
#line 1186 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                          {
    (yyval.with_expr_list_t) = new Vector<WithExpr*>();
    (yyval.with_expr_list_t)->emplace_back((yyvsp[0].with_expr_t));
}
#line 3878 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 155: /* with_expr_list: with_expr_list ',' with_expr  */
#line 1189 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                 {
    (yyvsp[-2].with_expr_list_t)->emplace_back((yyvsp[0].with_expr_t));
    (yyval.with_expr_list_t) = (yyvsp[-2].with_expr_list_t);
}
#line 3887 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 156: /* with_expr: IDENTIFIER AS '(' select_clause_with_modifier ')'  */
#line 1194 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                             {
    (yyval.with_expr_t) = new WithExpr();
    (yyval.with_expr_t)->alias_ = (yyvsp[-4].str_value);
    free((yyvsp[-4].str_value));
    (yyval.with_expr_t)->statement_ = (yyvsp[-1].select_stmt);
}
#line 3898 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 157: /* join_clause: table_reference_unit NATURAL JOIN table_reference_name  */
#line 1205 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                    {
    JoinReference* join_reference = new JoinReference();
    join_reference->left_ = (yyvsp[-3].table_reference_t);
    join_reference->right_ = (yyvsp[0].table_reference_t);
    join_reference->join_type_ = JoinType::kNatural;
    (yyval.table_reference_t) = join_reference;
}
#line 3910 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 158: /* join_clause: table_reference_unit join_type JOIN table_reference_name ON expr  */
#line 1212 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                                                   {
    JoinReference* join_reference = new JoinReference();
    join_reference->left_ = (yyvsp[-5].table_reference_t);
    join_reference->right_ = (yyvsp[-2].table_reference_t);
    join_reference->join_type_ = (yyvsp[-4].join_type_t);
    join_reference->condition_ = (yyvsp[0].expr_t);
    (yyval.table_reference_t) = join_reference;
}
#line 3923 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 159: /* join_type: INNER  */
#line 1226 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                  {
    (yyval.join_type_t) = JoinType::kInner;
}
#line 3931 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 160: /* join_type: LEFT  */
#line 1229 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       {
    (yyval.join_type_t) = JoinType::kLeft;
}
#line 3939 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 161: /* join_type: RIGHT  */
#line 1232 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        {
    (yyval.join_type_t) = JoinType::kRight;
}
#line 3947 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 162: /* join_type: OUTER  */
#line 1235 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        {
    (yyval.join_type_t) = JoinType::kFull;
}
#line 3955 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 163: /* join_type: FULL  */
#line 1238 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       {
    (yyval.join_type_t) = JoinType::kFull;
}
#line 3963 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 164: /* join_type: CROSS  */
#line 1241 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        {
    (yyval.join_type_t) = JoinType::kCross;
}
#line 3971 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 165: /* join_type: %empty  */
#line 1244 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
}
#line 3978 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 166: /* show_statement: SHOW TABLES  */
#line 1250 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                            {
    (yyval.show_stmt) = new ShowStatement();
    (yyval.show_stmt)->show_type_ = ShowStmtType::kTables;
}
#line 3987 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 167: /* show_statement: DESCRIBE table_name  */
#line 1254 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                      {
    (yyval.show_stmt) = new ShowStatement();
    (yyval.show_stmt)->show_type_ = ShowStmtType::kColumns;
    if((yyvsp[0].table_name_t)->schema_name_ptr_ != nullptr) {
        (yyval.show_stmt)->schema_name_ = (yyvsp[0].table_name_t)->schema_name_ptr_;
        free((yyvsp[0].table_name_t)->schema_name_ptr_);
    }
    (yyval.show_stmt)->table_name_ = (yyvsp[0].table_name_t)->table_name_ptr_;
    free((yyvsp[0].table_name_t)->table_name_ptr_);
    delete (yyvsp[0].table_name_t);
}
#line 4003 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 168: /* expr_array: expr_alias  */
#line 1270 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                        {
    (yyval.expr_array_t) = new Vector<ParsedExpr*>();
    (yyval.expr_array_t)->emplace_back((yyvsp[0].expr_t));
}
#line 4012 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 169: /* expr_array: expr_array ',' expr_alias  */
#line 1274 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                            {
    (yyvsp[-2].expr_array_t)->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_array_t) = (yyvsp[-2].expr_array_t);
}
#line 4021 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 170: /* constant_expr_array: constant_expr  */
#line 1279 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                   {
    (yyval.expr_array_t) = new Vector<ParsedExpr*>();
    (yyval.expr_array_t)->emplace_back((yyvsp[0].expr_t));
}
#line 4030 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 171: /* constant_expr_array: constant_expr_array ',' constant_expr  */
#line 1283 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                        {
    (yyvsp[-2].expr_array_t)->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_array_t) = (yyvsp[-2].expr_array_t);
}
#line 4039 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 172: /* expr_alias: expr AS IDENTIFIER  */
#line 1288 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                {
    (yyval.expr_t) = (yyvsp[-2].expr_t);
    (yyval.expr_t)->alias_ = (yyvsp[0].str_value);
    free((yyvsp[0].str_value));
}
#line 4049 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 173: /* expr_alias: expr  */
#line 1293 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       {
    (yyval.expr_t) = (yyvsp[0].expr_t);
}
#line 4057 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 174: /* expr: '(' expr ')'  */
#line 1297 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
      (yyval.expr_t) = (yyvsp[-1].expr_t);
}
#line 4065 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 178: /* function_expr: IDENTIFIER '(' ')'  */
#line 1304 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                   {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = (yyvsp[-2].str_value);
    free((yyvsp[-2].str_value));
    func_expr->arguments_ = nullptr;
    (yyval.expr_t) = func_expr;
}
#line 4077 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 179: /* function_expr: IDENTIFIER '(' expr_array ')'  */
#line 1311 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = (yyvsp[-3].str_value);
    free((yyvsp[-3].str_value));
    func_expr->arguments_ = (yyvsp[-1].expr_array_t);
    (yyval.expr_t) = func_expr;
}
#line 4089 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 180: /* function_expr: IDENTIFIER '(' DISTINCT expr_array ')'  */
#line 1318 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                         {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = (yyvsp[-4].str_value);
    free((yyvsp[-4].str_value));
    func_expr->arguments_ = (yyvsp[-1].expr_array_t);
    func_expr->distinct_ = true;
    (yyval.expr_t) = func_expr;
}
#line 4102 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 181: /* function_expr: expr IS NOT NULLABLE  */
#line 1326 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                       {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "is_not_null";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-3].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4114 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 182: /* function_expr: expr IS NULLABLE  */
#line 1333 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "is_null";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4126 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 183: /* function_expr: '-' expr  */
#line 1340 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           {
  FunctionExpr* func_expr = new FunctionExpr();
  func_expr->func_name_ = "-";
  func_expr->arguments_ = new Vector<ParsedExpr*>();
  func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
  (yyval.expr_t) = func_expr;
}
#line 4138 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 184: /* function_expr: '+' expr  */
#line 1347 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
           {
  FunctionExpr* func_expr = new FunctionExpr();
  func_expr->func_name_ = "+";
  func_expr->arguments_ = new Vector<ParsedExpr*>();
  func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
  (yyval.expr_t) = func_expr;
}
#line 4150 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 185: /* function_expr: expr '-' expr  */
#line 1354 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "-";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4163 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 186: /* function_expr: expr '+' expr  */
#line 1362 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "+";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4176 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 187: /* function_expr: expr '*' expr  */
#line 1370 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "*";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4189 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 188: /* function_expr: expr '/' expr  */
#line 1378 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "/";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4202 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 189: /* function_expr: expr '%' expr  */
#line 1386 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "%";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4215 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 190: /* function_expr: expr '=' expr  */
#line 1394 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "=";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4228 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 191: /* function_expr: expr EQUAL expr  */
#line 1402 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                  {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "=";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4241 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 192: /* function_expr: expr NOT_EQ expr  */
#line 1410 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "<>";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4254 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 193: /* function_expr: expr '<' expr  */
#line 1418 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "<";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4267 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 194: /* function_expr: expr '>' expr  */
#line 1426 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = ">";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4280 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 195: /* function_expr: expr LESS_EQ expr  */
#line 1434 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = "<=";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4293 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 196: /* function_expr: expr GREATER_EQ expr  */
#line 1442 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                       {
    FunctionExpr* func_expr = new FunctionExpr();
    func_expr->func_name_ = ">=";
    func_expr->arguments_ = new Vector<ParsedExpr*>();
    func_expr->arguments_->emplace_back((yyvsp[-2].expr_t));
    func_expr->arguments_->emplace_back((yyvsp[0].expr_t));
    (yyval.expr_t) = func_expr;
}
#line 4306 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 197: /* column_expr: IDENTIFIER  */
#line 1451 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                         {
    ColumnExpr* column_expr = new ColumnExpr();
    column_expr->names_.emplace_back((yyvsp[0].str_value));
    (yyval.expr_t) = column_expr;
}
#line 4316 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 198: /* column_expr: column_expr '.' IDENTIFIER  */
#line 1456 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                             {
    ColumnExpr* column_expr = (ColumnExpr*)(yyvsp[-2].expr_t);
    column_expr->names_.emplace_back((yyvsp[0].str_value));
    (yyval.expr_t) = column_expr;
}
#line 4326 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 199: /* column_expr: '*'  */
#line 1461 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
      {
    ColumnExpr* column_expr = new ColumnExpr();
    column_expr->star_ = true;
    (yyval.expr_t) = column_expr;
}
#line 4336 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 200: /* column_expr: column_expr '.' '*'  */
#line 1466 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                      {
    ColumnExpr* column_expr = (ColumnExpr*)(yyvsp[-2].expr_t);
    if(column_expr->star_) {
        yyerror(&yyloc, scanner, result, "Invalid column expression format");
        YYERROR;
    }
    column_expr->star_ = true;
    (yyval.expr_t) = column_expr;
}
#line 4350 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 201: /* constant_expr: STRING  */
#line 1476 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                      {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kString);
    const_expr->str_value_ = (yyvsp[0].str_value);
    (yyval.expr_t) = const_expr;
}
#line 4360 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 202: /* constant_expr: TRUE  */
#line 1481 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
       {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kBoolean);
    const_expr->bool_value_ = true;
    (yyval.expr_t) = const_expr;
}
#line 4370 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 203: /* constant_expr: FALSE  */
#line 1486 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
        {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kBoolean);
    const_expr->bool_value_ = false;
    (yyval.expr_t) = const_expr;
}
#line 4380 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 204: /* constant_expr: DOUBLE_VALUE  */
#line 1491 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
               {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kFloat);
    const_expr->float_value_ = (yyvsp[0].double_value);
    (yyval.expr_t) = const_expr;
}
#line 4390 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 205: /* constant_expr: LONG_VALUE  */
#line 1496 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
             {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInteger);
    const_expr->integer_value_ = (yyvsp[0].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4400 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 206: /* constant_expr: DATE STRING  */
#line 1501 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
              {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kDate);
    const_expr->date_value_ = (yyvsp[0].str_value);
    (yyval.expr_t) = const_expr;
}
#line 4410 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 207: /* constant_expr: INTERVAL interval_expr  */
#line 1506 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                         {
    (yyval.expr_t) = (yyvsp[0].expr_t);
}
#line 4418 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 208: /* interval_expr: LONG_VALUE SECONDS  */
#line 1510 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                  {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kSecond;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4429 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 209: /* interval_expr: LONG_VALUE SECOND  */
#line 1516 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kSecond;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4440 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 210: /* interval_expr: LONG_VALUE MINUTES  */
#line 1522 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                     {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kMinute;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4451 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 211: /* interval_expr: LONG_VALUE MINUTE  */
#line 1528 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kMinute;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4462 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 212: /* interval_expr: LONG_VALUE HOURS  */
#line 1534 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kHour;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4473 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 213: /* interval_expr: LONG_VALUE HOUR  */
#line 1540 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                  {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kHour;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4484 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 214: /* interval_expr: LONG_VALUE DAYS  */
#line 1546 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                  {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kDay;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4495 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 215: /* interval_expr: LONG_VALUE DAY  */
#line 1552 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                 {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kDay;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4506 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 216: /* interval_expr: LONG_VALUE MONTHS  */
#line 1558 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                    {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kMonth;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4517 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 217: /* interval_expr: LONG_VALUE MONTH  */
#line 1564 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kMonth;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4528 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 218: /* interval_expr: LONG_VALUE YEARS  */
#line 1570 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kYear;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4539 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 219: /* interval_expr: LONG_VALUE YEAR  */
#line 1576 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                  {
    ConstantExpr* const_expr = new ConstantExpr(LiteralType::kInterval);
    const_expr->interval_type_ = IntervalExprType::kYear;
    const_expr->integer_value_ = (yyvsp[-1].long_value);
    (yyval.expr_t) = const_expr;
}
#line 4550 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 220: /* copy_option_list: copy_option  */
#line 1587 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                               {
    (yyval.copy_option_array) = new Vector<CopyOption*>();
    (yyval.copy_option_array)->push_back((yyvsp[0].copy_option_t));
}
#line 4559 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 221: /* copy_option_list: copy_option_list ',' copy_option  */
#line 1591 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                   {
    (yyvsp[-2].copy_option_array)->push_back((yyvsp[0].copy_option_t));
    (yyval.copy_option_array) = (yyvsp[-2].copy_option_array);
}
#line 4568 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 222: /* copy_option: FORMAT IDENTIFIER  */
#line 1596 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                                {
    (yyval.copy_option_t) = new CopyOption();
    (yyval.copy_option_t)->option_type_ = CopyOptionType::kFormat;
    if (strcasecmp((yyvsp[0].str_value), "csv") == 0) {
        (yyval.copy_option_t)->file_type_ = CopyFileType::kCSV;
        free((yyvsp[0].str_value));
    } else {
        free((yyvsp[0].str_value));
        delete (yyval.copy_option_t);
        yyerror(&yyloc, scanner, result, "Unknown file type");
    }
}
#line 4585 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 223: /* copy_option: DELIMITER STRING  */
#line 1608 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    (yyval.copy_option_t) = new CopyOption();
    (yyval.copy_option_t)->option_type_ = CopyOptionType::kDelimiter;
    (yyval.copy_option_t)->delimiter_ = (yyvsp[0].str_value)[0];
    free((yyvsp[0].str_value));
}
#line 4596 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 224: /* copy_option: HEADER  */
#line 1614 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
         {
    (yyval.copy_option_t) = new CopyOption();
    (yyval.copy_option_t)->option_type_ = CopyOptionType::kHeader;
    (yyval.copy_option_t)->header_ = true;
}
#line 4606 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 225: /* file_path: STRING  */
#line 1620 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                   {
    (yyval.str_value) = (yyvsp[0].str_value);
}
#line 4614 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 226: /* if_exists: IF EXISTS  */
#line 1624 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                     { (yyval.bool_value) = true; }
#line 4620 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 227: /* if_exists: %empty  */
#line 1625 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
  { (yyval.bool_value) = false; }
#line 4626 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 228: /* if_not_exists: IF NOT EXISTS  */
#line 1627 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
                              { (yyval.bool_value) = true; }
#line 4632 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;

  case 229: /* if_not_exists: %empty  */
#line 1628 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"
  { (yyval.bool_value) = false; }
#line 4638 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"
    break;


#line 4642 "/home/jinhai/Documents/development/infinity/src/parser/parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == SQLEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, scanner, result, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQLEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQLEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, result);
          yychar = SQLEMPTY;
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != SQLEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1634 "/home/jinhai/Documents/development/infinity/src/parser/parser.y"


void
yyerror(YYLTYPE * llocp, void* lexer, ParserResult* result, const char* msg) {
    if(result->IsError()) return ;

    result->error_message_ = String(msg) + ", " + std::to_string(llocp->first_column);
	fprintf(stderr, "Error: %s, %d\n", msg, llocp->first_column);
}
