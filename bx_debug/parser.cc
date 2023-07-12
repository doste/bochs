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


/* Substitute the variable and function names.  */
#define yyparse         bxparse
#define yylex           bxlex
#define yyerror         bxerror
#define yydebug         bxdebug
#define yynerrs         bxnerrs
#define yylval          bxlval
#define yychar          bxchar

/* First part of user prologue.  */
#line 5 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

#if BX_DEBUGGER
Bit64u eval_value;

#line 86 "y.tab.c"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_BX_Y_TAB_H_INCLUDED
# define YY_BX_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int bxdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BX_TOKEN_8BH_REG = 258,
    BX_TOKEN_8BL_REG = 259,
    BX_TOKEN_16B_REG = 260,
    BX_TOKEN_32B_REG = 261,
    BX_TOKEN_64B_REG = 262,
    BX_TOKEN_CS = 263,
    BX_TOKEN_ES = 264,
    BX_TOKEN_SS = 265,
    BX_TOKEN_DS = 266,
    BX_TOKEN_FS = 267,
    BX_TOKEN_GS = 268,
    BX_TOKEN_OPMASK_REG = 269,
    BX_TOKEN_FLAGS = 270,
    BX_TOKEN_ON = 271,
    BX_TOKEN_OFF = 272,
    BX_TOKEN_CONTINUE = 273,
    BX_TOKEN_IF = 274,
    BX_TOKEN_STEPN = 275,
    BX_TOKEN_STEP_OVER = 276,
    BX_TOKEN_SET = 277,
    BX_TOKEN_DEBUGGER = 278,
    BX_TOKEN_LIST_BREAK = 279,
    BX_TOKEN_VBREAKPOINT = 280,
    BX_TOKEN_LBREAKPOINT = 281,
    BX_TOKEN_PBREAKPOINT = 282,
    BX_TOKEN_DEL_BREAKPOINT = 283,
    BX_TOKEN_ENABLE_BREAKPOINT = 284,
    BX_TOKEN_DISABLE_BREAKPOINT = 285,
    BX_TOKEN_INFO = 286,
    BX_TOKEN_QUIT = 287,
    BX_TOKEN_R = 288,
    BX_TOKEN_REGS = 289,
    BX_TOKEN_CPU = 290,
    BX_TOKEN_FPU = 291,
    BX_TOKEN_MMX = 292,
    BX_TOKEN_XMM = 293,
    BX_TOKEN_YMM = 294,
    BX_TOKEN_ZMM = 295,
    BX_TOKEN_AVX = 296,
    BX_TOKEN_IDT = 297,
    BX_TOKEN_IVT = 298,
    BX_TOKEN_GDT = 299,
    BX_TOKEN_LDT = 300,
    BX_TOKEN_TSS = 301,
    BX_TOKEN_TAB = 302,
    BX_TOKEN_ALL = 303,
    BX_TOKEN_LINUX = 304,
    BX_TOKEN_DEBUG_REGS = 305,
    BX_TOKEN_CONTROL_REGS = 306,
    BX_TOKEN_SEGMENT_REGS = 307,
    BX_TOKEN_EXAMINE = 308,
    BX_TOKEN_XFORMAT = 309,
    BX_TOKEN_DISFORMAT = 310,
    BX_TOKEN_RESTORE = 311,
    BX_TOKEN_WRITEMEM = 312,
    BX_TOKEN_SETPMEM = 313,
    BX_TOKEN_SYMBOLNAME = 314,
    BX_TOKEN_QUERY = 315,
    BX_TOKEN_PENDING = 316,
    BX_TOKEN_TAKE = 317,
    BX_TOKEN_DMA = 318,
    BX_TOKEN_IRQ = 319,
    BX_TOKEN_SMI = 320,
    BX_TOKEN_NMI = 321,
    BX_TOKEN_TLB = 322,
    BX_TOKEN_DISASM = 323,
    BX_TOKEN_INSTRUMENT = 324,
    BX_TOKEN_STRING = 325,
    BX_TOKEN_STOP = 326,
    BX_TOKEN_DOIT = 327,
    BX_TOKEN_CRC = 328,
    BX_TOKEN_TRACE = 329,
    BX_TOKEN_TRACEREG = 330,
    BX_TOKEN_TRACEMEM = 331,
    BX_TOKEN_SWITCH_MODE = 332,
    BX_TOKEN_SIZE = 333,
    BX_TOKEN_PTIME = 334,
    BX_TOKEN_TIMEBP_ABSOLUTE = 335,
    BX_TOKEN_TIMEBP = 336,
    BX_TOKEN_MODEBP = 337,
    BX_TOKEN_VMEXITBP = 338,
    BX_TOKEN_PRINT_STACK = 339,
    BX_TOKEN_BT = 340,
    BX_TOKEN_WATCH = 341,
    BX_TOKEN_UNWATCH = 342,
    BX_TOKEN_READ = 343,
    BX_TOKEN_WRITE = 344,
    BX_TOKEN_SHOW = 345,
    BX_TOKEN_LOAD_SYMBOLS = 346,
    BX_TOKEN_SYMBOLS = 347,
    BX_TOKEN_LIST_SYMBOLS = 348,
    BX_TOKEN_GLOBAL = 349,
    BX_TOKEN_WHERE = 350,
    BX_TOKEN_PRINT_STRING = 351,
    BX_TOKEN_NUMERIC = 352,
    BX_TOKEN_PAGE = 353,
    BX_TOKEN_HELP = 354,
    BX_TOKEN_XML = 355,
    BX_TOKEN_CALC = 356,
    BX_TOKEN_DEVICE = 357,
    BX_TOKEN_GENERIC = 358,
    BX_TOKEN_RSHIFT = 359,
    BX_TOKEN_LSHIFT = 360,
    BX_TOKEN_EQ = 361,
    BX_TOKEN_NE = 362,
    BX_TOKEN_LE = 363,
    BX_TOKEN_GE = 364,
    BX_TOKEN_REG_IP = 365,
    BX_TOKEN_REG_EIP = 366,
    BX_TOKEN_REG_RIP = 367,
    BX_TOKEN_REG_SSP = 368,
    NOT = 369,
    NEG = 370,
    INDIRECT = 371
  };
#endif
/* Tokens.  */
#define BX_TOKEN_8BH_REG 258
#define BX_TOKEN_8BL_REG 259
#define BX_TOKEN_16B_REG 260
#define BX_TOKEN_32B_REG 261
#define BX_TOKEN_64B_REG 262
#define BX_TOKEN_CS 263
#define BX_TOKEN_ES 264
#define BX_TOKEN_SS 265
#define BX_TOKEN_DS 266
#define BX_TOKEN_FS 267
#define BX_TOKEN_GS 268
#define BX_TOKEN_OPMASK_REG 269
#define BX_TOKEN_FLAGS 270
#define BX_TOKEN_ON 271
#define BX_TOKEN_OFF 272
#define BX_TOKEN_CONTINUE 273
#define BX_TOKEN_IF 274
#define BX_TOKEN_STEPN 275
#define BX_TOKEN_STEP_OVER 276
#define BX_TOKEN_SET 277
#define BX_TOKEN_DEBUGGER 278
#define BX_TOKEN_LIST_BREAK 279
#define BX_TOKEN_VBREAKPOINT 280
#define BX_TOKEN_LBREAKPOINT 281
#define BX_TOKEN_PBREAKPOINT 282
#define BX_TOKEN_DEL_BREAKPOINT 283
#define BX_TOKEN_ENABLE_BREAKPOINT 284
#define BX_TOKEN_DISABLE_BREAKPOINT 285
#define BX_TOKEN_INFO 286
#define BX_TOKEN_QUIT 287
#define BX_TOKEN_R 288
#define BX_TOKEN_REGS 289
#define BX_TOKEN_CPU 290
#define BX_TOKEN_FPU 291
#define BX_TOKEN_MMX 292
#define BX_TOKEN_XMM 293
#define BX_TOKEN_YMM 294
#define BX_TOKEN_ZMM 295
#define BX_TOKEN_AVX 296
#define BX_TOKEN_IDT 297
#define BX_TOKEN_IVT 298
#define BX_TOKEN_GDT 299
#define BX_TOKEN_LDT 300
#define BX_TOKEN_TSS 301
#define BX_TOKEN_TAB 302
#define BX_TOKEN_ALL 303
#define BX_TOKEN_LINUX 304
#define BX_TOKEN_DEBUG_REGS 305
#define BX_TOKEN_CONTROL_REGS 306
#define BX_TOKEN_SEGMENT_REGS 307
#define BX_TOKEN_EXAMINE 308
#define BX_TOKEN_XFORMAT 309
#define BX_TOKEN_DISFORMAT 310
#define BX_TOKEN_RESTORE 311
#define BX_TOKEN_WRITEMEM 312
#define BX_TOKEN_SETPMEM 313
#define BX_TOKEN_SYMBOLNAME 314
#define BX_TOKEN_QUERY 315
#define BX_TOKEN_PENDING 316
#define BX_TOKEN_TAKE 317
#define BX_TOKEN_DMA 318
#define BX_TOKEN_IRQ 319
#define BX_TOKEN_SMI 320
#define BX_TOKEN_NMI 321
#define BX_TOKEN_TLB 322
#define BX_TOKEN_DISASM 323
#define BX_TOKEN_INSTRUMENT 324
#define BX_TOKEN_STRING 325
#define BX_TOKEN_STOP 326
#define BX_TOKEN_DOIT 327
#define BX_TOKEN_CRC 328
#define BX_TOKEN_TRACE 329
#define BX_TOKEN_TRACEREG 330
#define BX_TOKEN_TRACEMEM 331
#define BX_TOKEN_SWITCH_MODE 332
#define BX_TOKEN_SIZE 333
#define BX_TOKEN_PTIME 334
#define BX_TOKEN_TIMEBP_ABSOLUTE 335
#define BX_TOKEN_TIMEBP 336
#define BX_TOKEN_MODEBP 337
#define BX_TOKEN_VMEXITBP 338
#define BX_TOKEN_PRINT_STACK 339
#define BX_TOKEN_BT 340
#define BX_TOKEN_WATCH 341
#define BX_TOKEN_UNWATCH 342
#define BX_TOKEN_READ 343
#define BX_TOKEN_WRITE 344
#define BX_TOKEN_SHOW 345
#define BX_TOKEN_LOAD_SYMBOLS 346
#define BX_TOKEN_SYMBOLS 347
#define BX_TOKEN_LIST_SYMBOLS 348
#define BX_TOKEN_GLOBAL 349
#define BX_TOKEN_WHERE 350
#define BX_TOKEN_PRINT_STRING 351
#define BX_TOKEN_NUMERIC 352
#define BX_TOKEN_PAGE 353
#define BX_TOKEN_HELP 354
#define BX_TOKEN_XML 355
#define BX_TOKEN_CALC 356
#define BX_TOKEN_DEVICE 357
#define BX_TOKEN_GENERIC 358
#define BX_TOKEN_RSHIFT 359
#define BX_TOKEN_LSHIFT 360
#define BX_TOKEN_EQ 361
#define BX_TOKEN_NE 362
#define BX_TOKEN_LE 363
#define BX_TOKEN_GE 364
#define BX_TOKEN_REG_IP 365
#define BX_TOKEN_REG_EIP 366
#define BX_TOKEN_REG_RIP 367
#define BX_TOKEN_REG_SSP 368
#define NOT 369
#define NEG 370
#define INDIRECT 371

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"

  char    *sval;
  Bit64u   uval;
  unsigned bval;

#line 376 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern "C" YYSTYPE bxlval;

int bxparse (void);

#endif /* !YY_BX_Y_TAB_H_INCLUDED  */



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
#define YYFINAL  309
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  133
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  301
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  588

#define YYUNDEFTOK  2
#define YYMAXUTOK   371


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     126,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   129,     2,     2,     2,     2,   122,     2,
     130,   131,   120,   114,     2,   115,     2,   121,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   128,     2,
     118,   127,   119,     2,   132,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   117,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   116,     2,     2,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   123,
     124,   125
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   149,   149,   150,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   212,   213,   218,
     219,   224,   225,   226,   227,   228,   229,   234,   239,   247,
     255,   263,   268,   273,   278,   283,   288,   296,   304,   312,
     320,   328,   336,   344,   349,   357,   362,   370,   375,   380,
     385,   390,   395,   400,   405,   410,   415,   420,   428,   433,
     438,   443,   451,   459,   467,   472,   480,   485,   490,   495,
     503,   511,   516,   521,   525,   529,   533,   537,   541,   545,
     549,   556,   561,   566,   571,   576,   581,   586,   591,   596,
     601,   606,   611,   616,   624,   632,   637,   645,   650,   655,
     660,   665,   670,   675,   680,   685,   690,   695,   700,   705,
     710,   715,   720,   725,   733,   734,   737,   745,   753,   761,
     769,   777,   785,   793,   801,   809,   817,   824,   832,   840,
     845,   850,   855,   863,   871,   879,   887,   895,   900,   905,
     910,   915,   923,   928,   933,   938,   943,   948,   953,   958,
     966,   971,   979,   987,   995,  1000,  1006,  1013,  1018,  1024,
    1030,  1036,  1041,  1046,  1051,  1056,  1061,  1066,  1071,  1077,
    1083,  1089,  1097,  1102,  1107,  1112,  1117,  1122,  1127,  1132,
    1137,  1142,  1147,  1152,  1157,  1162,  1167,  1172,  1177,  1182,
    1192,  1203,  1209,  1222,  1227,  1238,  1243,  1259,  1275,  1285,
    1290,  1298,  1307,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,
    1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1347,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,
    1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,
    1369,  1370,  1371,  1372,  1373,  1374,  1375,  1376,  1377,  1378,
    1379,  1380
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BX_TOKEN_8BH_REG", "BX_TOKEN_8BL_REG",
  "BX_TOKEN_16B_REG", "BX_TOKEN_32B_REG", "BX_TOKEN_64B_REG",
  "BX_TOKEN_CS", "BX_TOKEN_ES", "BX_TOKEN_SS", "BX_TOKEN_DS",
  "BX_TOKEN_FS", "BX_TOKEN_GS", "BX_TOKEN_OPMASK_REG", "BX_TOKEN_FLAGS",
  "BX_TOKEN_ON", "BX_TOKEN_OFF", "BX_TOKEN_CONTINUE", "BX_TOKEN_IF",
  "BX_TOKEN_STEPN", "BX_TOKEN_STEP_OVER", "BX_TOKEN_SET",
  "BX_TOKEN_DEBUGGER", "BX_TOKEN_LIST_BREAK", "BX_TOKEN_VBREAKPOINT",
  "BX_TOKEN_LBREAKPOINT", "BX_TOKEN_PBREAKPOINT",
  "BX_TOKEN_DEL_BREAKPOINT", "BX_TOKEN_ENABLE_BREAKPOINT",
  "BX_TOKEN_DISABLE_BREAKPOINT", "BX_TOKEN_INFO", "BX_TOKEN_QUIT",
  "BX_TOKEN_R", "BX_TOKEN_REGS", "BX_TOKEN_CPU", "BX_TOKEN_FPU",
  "BX_TOKEN_MMX", "BX_TOKEN_XMM", "BX_TOKEN_YMM", "BX_TOKEN_ZMM",
  "BX_TOKEN_AVX", "BX_TOKEN_IDT", "BX_TOKEN_IVT", "BX_TOKEN_GDT",
  "BX_TOKEN_LDT", "BX_TOKEN_TSS", "BX_TOKEN_TAB", "BX_TOKEN_ALL",
  "BX_TOKEN_LINUX", "BX_TOKEN_DEBUG_REGS", "BX_TOKEN_CONTROL_REGS",
  "BX_TOKEN_SEGMENT_REGS", "BX_TOKEN_EXAMINE", "BX_TOKEN_XFORMAT",
  "BX_TOKEN_DISFORMAT", "BX_TOKEN_RESTORE", "BX_TOKEN_WRITEMEM",
  "BX_TOKEN_SETPMEM", "BX_TOKEN_SYMBOLNAME", "BX_TOKEN_QUERY",
  "BX_TOKEN_PENDING", "BX_TOKEN_TAKE", "BX_TOKEN_DMA", "BX_TOKEN_IRQ",
  "BX_TOKEN_SMI", "BX_TOKEN_NMI", "BX_TOKEN_TLB", "BX_TOKEN_DISASM",
  "BX_TOKEN_INSTRUMENT", "BX_TOKEN_STRING", "BX_TOKEN_STOP",
  "BX_TOKEN_DOIT", "BX_TOKEN_CRC", "BX_TOKEN_TRACE", "BX_TOKEN_TRACEREG",
  "BX_TOKEN_TRACEMEM", "BX_TOKEN_SWITCH_MODE", "BX_TOKEN_SIZE",
  "BX_TOKEN_PTIME", "BX_TOKEN_TIMEBP_ABSOLUTE", "BX_TOKEN_TIMEBP",
  "BX_TOKEN_MODEBP", "BX_TOKEN_VMEXITBP", "BX_TOKEN_PRINT_STACK",
  "BX_TOKEN_BT", "BX_TOKEN_WATCH", "BX_TOKEN_UNWATCH", "BX_TOKEN_READ",
  "BX_TOKEN_WRITE", "BX_TOKEN_SHOW", "BX_TOKEN_LOAD_SYMBOLS",
  "BX_TOKEN_SYMBOLS", "BX_TOKEN_LIST_SYMBOLS", "BX_TOKEN_GLOBAL",
  "BX_TOKEN_WHERE", "BX_TOKEN_PRINT_STRING", "BX_TOKEN_NUMERIC",
  "BX_TOKEN_PAGE", "BX_TOKEN_HELP", "BX_TOKEN_XML", "BX_TOKEN_CALC",
  "BX_TOKEN_DEVICE", "BX_TOKEN_GENERIC", "BX_TOKEN_RSHIFT",
  "BX_TOKEN_LSHIFT", "BX_TOKEN_EQ", "BX_TOKEN_NE", "BX_TOKEN_LE",
  "BX_TOKEN_GE", "BX_TOKEN_REG_IP", "BX_TOKEN_REG_EIP", "BX_TOKEN_REG_RIP",
  "BX_TOKEN_REG_SSP", "'+'", "'-'", "'|'", "'^'", "'<'", "'>'", "'*'",
  "'/'", "'&'", "NOT", "NEG", "INDIRECT", "'\\n'", "'='", "':'", "'!'",
  "'('", "')'", "'@'", "$accept", "commands", "command",
  "BX_TOKEN_TOGGLE_ON_OFF", "BX_TOKEN_REGISTERS", "BX_TOKEN_SEGREG",
  "timebp_command", "modebp_command", "vmexitbp_command", "show_command",
  "page_command", "tlb_command", "ptime_command", "trace_command",
  "trace_reg_command", "trace_mem_command", "print_stack_command",
  "backtrace_command", "watch_point_command", "symbol_command",
  "where_command", "print_string_command", "continue_command",
  "stepN_command", "step_over_command", "set_command",
  "breakpoint_command", "blist_command", "slist_command", "info_command",
  "optional_numeric", "regs_command", "fpu_regs_command",
  "mmx_regs_command", "xmm_regs_command", "ymm_regs_command",
  "zmm_regs_command", "segment_regs_command", "control_regs_command",
  "debug_regs_command", "delete_command", "bpe_command", "bpd_command",
  "quit_command", "examine_command", "restore_command", "writemem_command",
  "setpmem_command", "query_command", "take_command",
  "disassemble_command", "instrument_command", "doit_command",
  "crc_command", "help_command", "calc_command", "if_command",
  "vexpression", "expression", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,    43,    45,   124,    94,    60,    62,
      42,    47,    38,   369,   370,   371,    10,    61,    58,    33,
      40,    41,    64
};
# endif

#define YYPACT_NINF (-178)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-300)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     555,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,    -7,  1439,   100,   -90,   134,   -87,  1249,
    1059,  1083,   -56,   -55,   -51,   716,   -77,  -178,  -178,   -70,
     -69,   -63,   -62,   -58,   -50,   -41,   -40,  1031,     1,     3,
    1439,     9,    30,  1439,   284,   -53,  -178,  1439,  1439,    16,
      16,    16,   -20,  1439,  1439,   -19,   -18,   -75,   -74,    -5,
    1213,   500,   -39,   -64,     7,  1439,  -178,  1439,  1552,  1439,
    -178,  -178,  -178,  -178,  1439,  1439,  -178,  1439,  1439,  1439,
     425,  -178,    35,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  2251,  1439,  -178,   815,    13,   -68,
    -178,  -178,    37,    40,    41,    42,    43,    44,    16,    45,
      46,    48,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  1427,  -178,  1427,  1427,  -178,
     114,     5,  -178,   -17,  1439,  -178,     8,    36,    54,    55,
      73,    74,    77,  1439,  1439,  1439,  1439,  1439,    78,    81,
     -54,   -65,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  1237,  -178,  1350,   138,  1439,  1005,    83,   -67,    84,
      85,    86,  1385,  1261,    88,    93,  -178,   146,    89,   101,
    1551,  1005,  -178,  -178,   106,   107,   112,  -178,  1576,  1601,
    -178,  -178,   115,  -178,   121,  -178,   122,  1439,   143,  1439,
    1439,  -178,  -178,  1626,   145,   147,   -81,   151,  -178,  1285,
     209,   154,  -178,  -178,  1651,  1676,   155,   156,   159,   160,
     176,   177,   178,   180,   181,   182,   183,   184,   185,   202,
     203,   204,   205,   206,   217,   231,   232,   233,   234,   237,
     238,   243,   244,   248,   249,   250,   252,   253,   254,   256,
     257,   258,   259,   264,   265,   266,   267,   274,   275,   276,
     277,  -178,   279,  1701,   278,   278,   278,   786,   278,  -178,
    -178,  -178,  1439,  1439,  1439,  1439,  1439,  1439,  1439,  1439,
    1439,  1439,  1439,  1439,  1439,  1439,  1439,  1439,  1726,  -178,
     281,   282,  -178,  1439,  1439,  1439,  1439,  1439,  1439,   283,
    1439,  1439,  1439,  -178,  -178,   652,  1427,  1427,  1427,  1427,
    1427,  1427,  1427,  1427,  1427,  1427,   235,  -178,   341,  -178,
      -8,   342,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  1439,
    2251,  1439,  1439,  1439,   293,  -178,  -178,   294,  -178,   -45,
     -44,  -178,  -178,  1751,  -178,   295,  1005,  1439,  1439,  1005,
    -178,   296,  -178,  -178,  -178,  -178,  -178,  -178,   685,  -178,
     326,  -178,  1776,  -178,  -178,  -178,  1801,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,   715,  -178,   845,   875,  -178,
    -178,  -178,   298,  -178,  -178,  -178,  1826,  1415,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,    70,
      70,   278,   278,   278,   278,  1491,  1491,  1491,  1491,  1491,
    1491,    70,    70,    70,  2251,  -178,  -178,  -178,  1851,  1876,
    1901,  1926,  1951,  1976,  -178,  2001,  2026,  2051,  -178,  -178,
    -178,   179,   179,   179,   179,  -178,  -178,  -178,   251,   300,
     314,   371,  -178,   316,   322,   334,   340,   343,  -178,  -178,
     344,  -178,   345,  -178,  -178,  -178,  2076,  2276,   116,  2101,
    -178,  -178,  2126,   346,  -178,  -178,  -178,  2151,  -178,  2176,
    -178,  2201,  -178,  -178,  -178,  2226,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,   397,  -178,  -178,  -178,   347,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,   348,  -178,  -178
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
      55,   271,   270,   272,   273,   274,    61,    62,    63,    64,
      65,    66,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   268,     0,     0,     0,
     277,   278,   279,   280,     0,     0,    56,     0,     0,     0,
       0,     3,     0,   276,    39,    40,    41,    47,    45,    46,
      38,    35,    36,    37,    42,    43,    44,    48,    49,    50,
       4,     5,     6,     7,     8,    19,    20,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    17,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    51,    52,    53,    54,     0,   104,     0,     0,     0,
     106,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   246,   245,   247,   248,   249,   250,   244,
     243,   252,   253,   254,   255,     0,   121,     0,     0,   251,
       0,   269,   124,     0,     0,   129,     0,     0,     0,     0,
       0,     0,     0,   154,   154,   154,   154,   154,     0,     0,
       0,     0,   168,   157,   158,   159,   160,   161,   164,   163,
     162,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   182,     0,     0,     0,
       0,     0,    57,    58,     0,     0,     0,    79,     0,     0,
      69,    70,     0,    83,     0,    85,     0,     0,     0,     0,
       0,    89,    96,     0,     0,     0,     0,     0,    76,     0,
       0,     0,   135,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   240,     0,     0,   298,   299,   297,     0,   300,     1,
       2,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   266,   265,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127,     0,   125,
     299,     0,   130,   165,   166,   167,   145,   137,   138,   154,
     155,   154,   154,   154,     0,   143,   146,     0,   147,     0,
       0,   149,   170,     0,   171,     0,     0,     0,     0,     0,
     176,     0,   177,   179,   180,   181,    78,   185,     0,   188,
       0,   183,     0,   190,   191,   192,     0,    80,    81,    82,
      68,    67,    84,    86,    88,     0,    87,     0,     0,    97,
      73,    72,     0,    74,    71,    98,     0,     0,   136,   103,
      77,   195,   196,   197,   234,   204,   198,   199,   200,   201,
     202,   203,   236,   194,   219,   220,   221,   222,   223,   226,
     225,   224,   232,   211,   227,   228,   229,   233,   207,   208,
     209,   210,   212,   214,   213,   205,   206,   215,   230,   231,
     237,   216,   217,   235,   239,   238,   218,   241,   301,   286,
     287,   293,   294,   295,   296,   282,   283,   288,   289,   292,
     291,   284,   285,   290,   281,   105,   108,   109,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,   267,   260,
     261,   256,   257,   262,   263,   258,   259,   264,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,   144,   148,
       0,   152,     0,   150,   169,   173,     0,   283,   284,     0,
     178,   186,     0,     0,   184,   193,    90,     0,    91,     0,
      92,     0,    75,    99,   100,     0,   114,   113,   115,   116,
     117,   112,   118,   119,   120,     0,   122,   128,   126,     0,
     131,   139,   140,   141,   142,   153,   151,   174,   175,   187,
     189,    93,    94,    95,   101,     0,   133,   123
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -178,  -178,   388,   -16,   411,    -2,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -177,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,  -178,
    -178,  -178,  -178,  -178,  -178,  -178,  -178,  -164,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    80,    81,   224,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     369,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   170,   370
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     134,   343,   358,   344,   345,   379,   251,   371,   372,   373,
     374,   521,   135,   236,   137,   151,   377,   169,   218,   422,
     173,   176,   232,   234,   356,   530,   532,   361,   237,   331,
     391,   249,   222,   223,   225,   226,   141,   203,   380,   152,
     206,   177,   178,   212,   217,   423,   179,   220,   221,   192,
     219,   233,   235,   228,   229,   250,   193,   194,   332,   392,
     243,   381,   252,   195,   196,   254,   238,   255,   197,   303,
     207,   204,   378,   205,   304,   305,   198,   306,   307,   308,
     134,   531,   533,   239,   240,   199,   200,   312,   313,   314,
     315,   316,   317,   208,   209,   210,   211,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   227,   230,   231,   359,
     330,   327,   312,   313,   314,   315,   316,   317,   522,   136,
     327,   241,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   357,   339,   253,   362,   328,   327,   142,   143,   144,
     145,   146,     6,     7,     8,     9,    10,    11,   138,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,   311,   363,   169,   333,   169,   169,   334,   335,   336,
     337,   338,   340,   341,   360,   342,   314,   315,   316,   317,
     364,   365,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   518,   524,   147,   525,   526,   527,   139,   327,   366,
     367,   383,   148,   368,   375,   386,   389,   376,   385,   390,
     393,   394,   395,   398,   399,   403,    46,   402,   346,   347,
     400,   406,  -299,  -299,  -299,  -299,   140,   404,   348,   349,
     350,   351,   407,   408,   352,   353,   354,   415,   409,   417,
     418,   412,   355,    66,   327,   149,   150,   413,   414,   426,
     312,   313,   314,   315,   316,   317,    70,    71,    72,    73,
     318,   387,   320,   321,   322,   323,   388,   325,   326,   416,
     565,   420,   401,   421,   327,    77,    78,   424,    79,   427,
     428,   431,   432,   346,   347,   433,   434,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   352,
     353,   354,   435,   436,   437,   519,   438,   439,   440,   441,
     442,   443,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   444,   445,
     446,   447,   448,   498,   499,   500,   501,   502,   503,   213,
     505,   506,   507,   449,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,    46,   346,   347,   450,   451,   452,
     453,   214,   215,   454,   455,   348,   349,   350,   351,   456,
     457,   352,   353,   354,   458,   459,   460,   566,   461,   462,
     463,    66,   464,   465,   466,   467,   536,   537,   538,   539,
     468,   469,   470,   471,    70,    71,    72,    73,   542,    74,
     472,   473,   474,   475,    75,   476,   327,   496,   497,   504,
     216,   520,   523,    77,    78,   547,    79,   549,   551,   528,
     529,   535,   540,   543,   552,   309,   567,   555,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     568,   569,   570,    13,    14,    15,    16,    17,   571,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     572,    29,    30,    31,    32,    33,   573,   585,   310,   574,
     575,   576,   580,   586,   587,    34,    35,    36,    37,   302,
       0,    38,    39,    40,     0,    41,     0,    42,     0,     0,
       0,     0,    43,    44,    45,    46,     0,    47,    48,    49,
      50,    51,     0,     0,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     0,    61,    62,   244,    63,     0,
      64,    65,    66,    67,    68,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,   245,     0,
       0,    76,     0,     0,    77,    78,     0,    79,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     246,     0,     0,    13,    14,    15,    16,    17,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,    29,    30,    31,    32,    33,     0,     0,     0,     0,
       0,     0,     0,   247,     0,    34,    35,    36,    37,     0,
       0,    38,    39,    40,     0,    41,     0,    42,     0,     0,
       0,     0,    43,    44,    45,    46,   248,    47,    48,    49,
      50,    51,     0,     0,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     0,    61,    62,     0,    63,     0,
      64,    65,    66,    67,    68,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,    70,    71,    72,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,    76,     0,     0,    77,    78,     0,    79,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,     0,     0,     0,     0,     0,     0,
       0,   182,     0,     0,     0,    46,   346,   347,   183,   184,
     185,   186,   187,   188,     0,   189,   348,   349,   350,   351,
       0,     0,   352,   353,   354,     0,     0,     0,     0,     0,
       0,     0,    66,   508,     0,    46,     0,     0,     0,   312,
     313,   314,   315,   316,   317,    70,    71,    72,    73,   318,
     387,   320,   321,   322,   323,   388,   325,   326,   190,     0,
       0,   541,    66,   327,    77,    78,     0,    79,   191,   312,
     313,   314,   315,   316,   317,    70,    71,    72,    73,   318,
     387,   320,   321,   322,   323,   388,   325,   326,     0,     0,
       0,   546,     0,   327,    77,    78,     0,    79,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,     0,     0,   327,    46,     0,   478,     0,   312,
     313,   314,   315,   316,   317,     0,     0,     0,     0,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,     0,
       0,   329,    66,   327,     0,    46,     0,     0,     0,   312,
     313,   314,   315,   316,   317,    70,    71,    72,    73,   318,
     387,   320,   321,   322,   323,   388,   325,   326,     0,     0,
       0,   548,    66,   327,    77,    78,     0,    79,     0,   312,
     313,   314,   315,   316,   317,    70,    71,    72,    73,   318,
     387,   320,   321,   322,   323,   388,   325,   326,     0,     0,
       0,   550,     0,   327,    77,    78,     0,    79,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    46,    66,     0,     0,     0,     0,     0,     0,   312,
     313,   314,   315,   316,   317,    70,    71,    72,    73,   318,
     387,   320,   321,   322,   323,   388,   325,   326,    66,   171,
       0,     0,     0,   327,    77,    78,     0,    79,     0,     0,
       0,    70,    71,    72,    73,     0,    74,     0,     0,     0,
       0,    75,     0,    46,     0,     0,    66,   202,     0,     0,
      77,    78,     0,    79,     0,     0,     0,     0,     0,    70,
      71,    72,    73,     0,    74,     0,     0,     0,     0,    75,
      66,     0,     0,     0,     0,   172,     0,     0,    77,    78,
       0,    79,     0,    70,    71,    72,    73,     0,    74,     0,
       0,     0,     0,   174,     0,     0,     0,     0,     0,   175,
       0,     0,    77,    78,     0,    79,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,   153,   154,   155,   156,   157,     6,     7,     8,
       9,    10,    11,   158,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,   159,
       0,     0,     0,    70,    71,    72,    73,     0,    74,     0,
       0,    46,     0,    75,    66,     0,     0,     0,     0,   242,
       0,     0,    77,    78,     0,    79,   160,    70,    71,    72,
      73,     0,    74,     0,     0,    46,     0,    75,    66,   161,
     162,   163,   164,   382,   165,     0,    77,    78,     0,    79,
       0,    70,    71,    72,    73,   166,    74,     0,   167,   168,
       0,    75,    66,     0,     0,     0,     0,   397,     0,     0,
      77,    78,     0,    79,     0,    70,    71,    72,    73,     0,
      74,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,   425,     0,     0,    77,    78,     0,    79,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     153,   154,   155,   156,   157,     6,     7,     8,     9,    10,
      11,   158,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,   312,   313,   314,   315,   316,   317,
       0,     0,     0,     0,   318,   319,   320,   321,   322,   323,
     324,   325,   326,     0,     0,     0,   384,     0,   327,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,   312,
     313,   314,   315,   316,   317,     0,     0,   159,     0,   318,
     319,   320,   321,   322,   323,   324,   325,   326,     0,    46,
       0,   396,    66,   327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   160,    70,    71,    72,    73,     0,
      74,     0,     0,     0,     0,    75,    66,   161,   162,   163,
     164,   554,   165,     0,    77,    78,     0,    79,     0,    70,
      71,    72,    73,     0,    74,     0,   167,   168,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
     256,    79,   257,   258,   259,     0,   260,   261,   262,   263,
     264,   265,   266,   267,   268,    27,    28,     0,   269,   270,
     271,   272,   273,     0,     0,   312,   313,   314,   315,   316,
     317,     0,   274,   275,   276,   277,     0,     0,   278,   279,
     280,   324,   325,   326,     0,     0,     0,     0,     0,   327,
     281,   282,     0,     0,     0,   283,   284,   285,   286,     0,
       0,   287,   288,   289,   290,   291,   292,     0,   293,   294,
       0,     0,   295,   296,     0,   297,     0,     0,     0,     0,
     298,   299,     0,   300,     0,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   405,   301,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   410,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   411,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   419,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   429,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   430,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   477,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   495,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   534,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   544,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   545,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   553,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   556,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   557,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   558,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   559,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   560,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   561,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   562,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   563,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   564,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   577,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   578,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   579,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   581,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   582,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,   583,     0,   327,
     312,   313,   314,   315,   316,   317,     0,     0,     0,     0,
     318,   319,   320,   321,   322,   323,   324,   325,   326,     0,
       0,     0,   584,     0,   327,   312,   313,   314,   315,   316,
     317,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,   326,     0,     0,     0,     0,     0,   327,
    -298,  -298,  -298,  -298,  -298,  -298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -298,  -298,  -298,     0,
       0,     0,     0,     0,   327
};

static const yytype_int16 yycheck[] =
{
       0,   165,    19,   167,   168,    70,    70,   184,   185,   186,
     187,    19,    19,    18,    14,    17,    70,    19,    71,   100,
      20,    21,    97,    97,    19,    70,    70,    19,    33,    97,
      97,    70,    16,    17,    50,    51,   126,    37,   103,   126,
      40,    97,    97,    43,    44,   126,    97,    47,    48,   126,
     103,   126,   126,    53,    54,    94,   126,   126,   126,   126,
      60,   126,   126,   126,   126,    65,    71,    67,   126,    69,
      61,    70,   126,    70,    74,    75,   126,    77,    78,    79,
      80,   126,   126,    88,    89,   126,   126,   104,   105,   106,
     107,   108,   109,    63,    64,    65,    66,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   126,   126,   126,   126,
      97,   128,   104,   105,   106,   107,   108,   109,   126,   126,
     128,   126,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   126,   148,   126,   126,   135,   128,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    48,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   126,   126,   165,   127,   167,   168,   127,   127,   127,
     127,   127,   127,   127,   174,   127,   106,   107,   108,   109,
     126,   126,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   369,    59,   371,   372,   373,    97,   128,   126,
     126,   201,    68,   126,   126,   205,   206,   126,    70,   126,
     126,   126,   126,   213,   126,   126,    70,   217,   104,   105,
     127,   221,   106,   107,   108,   109,   126,   126,   114,   115,
     116,   117,   126,   126,   120,   121,   122,   237,   126,   239,
     240,   126,   128,    97,   128,   111,   112,   126,   126,   249,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   126,
      19,   126,   126,   126,   128,   129,   130,   126,   132,    70,
     126,   126,   126,   104,   105,   126,   126,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,   120,
     121,   122,   126,   126,   126,    70,   126,   126,   126,   126,
     126,   126,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   126,   126,
     126,   126,   126,   333,   334,   335,   336,   337,   338,    55,
     340,   341,   342,   126,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,    70,   104,   105,   126,   126,   126,
     126,    77,    78,   126,   126,   114,   115,   116,   117,   126,
     126,   120,   121,   122,   126,   126,   126,   126,   126,   126,
     126,    97,   126,   126,   126,   126,   386,   387,   388,   389,
     126,   126,   126,   126,   110,   111,   112,   113,   398,   115,
     126,   126,   126,   126,   120,   126,   128,   126,   126,   126,
     126,    70,    70,   129,   130,   415,   132,   417,   418,   126,
     126,   126,   126,    97,   126,     0,   126,   427,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     126,    70,   126,    18,    19,    20,    21,    22,   126,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
     126,    36,    37,    38,    39,    40,   126,    70,    80,   126,
     126,   126,   126,   126,   126,    50,    51,    52,    53,    68,
      -1,    56,    57,    58,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    17,    93,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,    -1,
     115,    -1,    -1,    -1,    -1,   120,    -1,    -1,    48,    -1,
      -1,   126,    -1,    -1,   129,   130,    -1,   132,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      70,    -1,    -1,    18,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    50,    51,    52,    53,    -1,
      -1,    56,    57,    58,    -1,    60,    -1,    62,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,   126,    72,    73,    74,
      75,    76,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    -1,    93,    -1,
      95,    96,    97,    98,    99,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,   112,   113,    -1,
     115,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,   129,   130,    -1,   132,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    70,   104,   105,    42,    43,
      44,    45,    46,    47,    -1,    49,   114,   115,   116,   117,
      -1,    -1,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,   131,    -1,    70,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    92,    -1,
      -1,   126,    97,   128,   129,   130,    -1,   132,   102,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,   126,    -1,   128,   129,   130,    -1,   132,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,   128,    70,    -1,   131,    -1,   104,
     105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,   126,    97,   128,    -1,    70,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,   126,    97,   128,   129,   130,    -1,   132,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    -1,
      -1,   126,    -1,   128,   129,   130,    -1,   132,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    70,    97,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    97,    70,
      -1,    -1,    -1,   128,   129,   130,    -1,   132,    -1,    -1,
      -1,   110,   111,   112,   113,    -1,   115,    -1,    -1,    -1,
      -1,   120,    -1,    70,    -1,    -1,    97,   126,    -1,    -1,
     129,   130,    -1,   132,    -1,    -1,    -1,    -1,    -1,   110,
     111,   112,   113,    -1,   115,    -1,    -1,    -1,    -1,   120,
      97,    -1,    -1,    -1,    -1,   126,    -1,    -1,   129,   130,
      -1,   132,    -1,   110,   111,   112,   113,    -1,   115,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,   129,   130,    -1,   132,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    -1,    -1,   110,   111,   112,   113,    -1,   115,    -1,
      -1,    70,    -1,   120,    97,    -1,    -1,    -1,    -1,   126,
      -1,    -1,   129,   130,    -1,   132,    97,   110,   111,   112,
     113,    -1,   115,    -1,    -1,    70,    -1,   120,    97,   110,
     111,   112,   113,   126,   115,    -1,   129,   130,    -1,   132,
      -1,   110,   111,   112,   113,   126,   115,    -1,   129,   130,
      -1,   120,    97,    -1,    -1,    -1,    -1,   126,    -1,    -1,
     129,   130,    -1,   132,    -1,   110,   111,   112,   113,    -1,
     115,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,   129,   130,    -1,   132,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,   104,   105,   106,   107,   108,   109,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,    -1,    -1,    70,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,    70,
      -1,   126,    97,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    97,   110,   111,   112,   113,    -1,
     115,    -1,    -1,    -1,    -1,   120,    97,   110,   111,   112,
     113,   126,   115,    -1,   129,   130,    -1,   132,    -1,   110,
     111,   112,   113,    -1,   115,    -1,   129,   130,    -1,   120,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
      18,   132,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    37,
      38,    39,    40,    -1,    -1,   104,   105,   106,   107,   108,
     109,    -1,    50,    51,    52,    53,    -1,    -1,    56,    57,
      58,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,
      68,    69,    -1,    -1,    -1,    73,    74,    75,    76,    -1,
      -1,    79,    80,    81,    82,    83,    84,    -1,    86,    87,
      -1,    -1,    90,    91,    -1,    93,    -1,    -1,    -1,    -1,
      98,    99,    -1,   101,    -1,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,   126,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,   126,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,   128,   104,   105,   106,   107,   108,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    -1,    -1,    -1,    -1,    -1,   128,
     104,   105,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,    -1,    -1,   128
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    18,    19,    20,    21,    22,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    36,
      37,    38,    39,    40,    50,    51,    52,    53,    56,    57,
      58,    60,    62,    67,    68,    69,    70,    72,    73,    74,
      75,    76,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    90,    91,    93,    95,    96,    97,    98,    99,   101,
     110,   111,   112,   113,   115,   120,   126,   129,   130,   132,
     134,   135,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   191,    19,   126,   191,    48,    97,
     126,   126,     3,     4,     5,     6,     7,    59,    68,   111,
     112,   138,   126,     3,     4,     5,     6,     7,    14,    70,
      97,   110,   111,   112,   113,   115,   126,   129,   130,   138,
     190,    70,   126,   191,   120,   126,   191,    97,    97,    97,
      15,    27,    35,    42,    43,    44,    45,    46,    47,    49,
      92,   102,   126,   126,   126,   126,   126,   126,   126,   126,
     126,    54,   126,   191,    70,    70,   191,    61,    63,    64,
      65,    66,   191,    55,    77,    78,   126,   191,    71,   103,
     191,   191,    16,    17,   136,   136,   136,   126,   191,   191,
     126,   126,    97,   126,    97,   126,    18,    33,    71,    88,
      89,   126,   126,   191,    17,    48,    70,   103,   126,    70,
      94,    70,   126,   126,   191,   191,    18,    20,    21,    22,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    36,
      37,    38,    39,    40,    50,    51,    52,    53,    56,    57,
      58,    68,    69,    73,    74,    75,    76,    79,    80,    81,
      82,    83,    84,    86,    87,    90,    91,    93,    98,    99,
     101,   126,   137,   191,   191,   191,   191,   191,   191,     0,
     135,   126,   104,   105,   106,   107,   108,   109,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   128,   191,   126,
      97,    97,   126,   127,   127,   127,   127,   127,   127,   136,
     127,   127,   127,   190,   190,   190,   104,   105,   114,   115,
     116,   117,   120,   121,   122,   128,    19,   126,    19,   126,
     191,    19,   126,   126,   126,   126,   126,   126,   126,   163,
     191,   163,   163,   163,   163,   126,   126,    70,   126,    70,
     103,   126,   126,   191,   126,    70,   191,   115,   120,   191,
     126,    97,   126,   126,   126,   126,   126,   126,   191,   126,
     127,   126,   191,   126,   126,   126,   191,   126,   126,   126,
     126,   126,   126,   126,   126,   191,   126,   191,   191,   126,
     126,   126,   100,   126,   126,   126,   191,    70,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   131,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   126,   126,   126,   191,   191,
     191,   191,   191,   191,   126,   191,   191,   191,   131,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,    70,
      70,    19,   126,    70,   163,   163,   163,   163,   126,   126,
      70,   126,    70,   126,   126,   126,   191,   191,   191,   191,
     126,   126,   191,    97,   126,   126,   126,   191,   126,   191,
     126,   191,   126,   126,   126,   191,   126,   126,   126,   126,
     126,   126,   126,   126,   126,    19,   126,   126,   126,    70,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,    70,   126,   126
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   133,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   139,   139,   140,
     141,   142,   142,   142,   142,   142,   142,   143,   144,   145,
     146,   147,   148,   149,   149,   150,   150,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   152,   153,   154,   155,   155,   156,   156,   156,   156,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   161,   161,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     177,   177,   177,   178,   179,   180,   181,   182,   182,   182,
     182,   182,   183,   183,   183,   183,   183,   183,   183,   183,
     184,   184,   185,   186,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   188,   189,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,   190,   190,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       2,     3,     3,     3,     3,     4,     2,     3,     3,     2,
       3,     3,     3,     2,     3,     2,     3,     3,     3,     2,
       4,     4,     4,     5,     5,     5,     2,     3,     3,     4,
       4,     5,     2,     3,     2,     4,     2,     3,     4,     4,
       2,     4,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     2,     5,     7,     2,     3,     5,     3,     5,     2,
       3,     5,     4,     6,     2,     2,     3,     3,     3,     5,
       5,     5,     5,     3,     4,     3,     3,     3,     4,     3,
       4,     5,     4,     5,     0,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     4,
       3,     3,     2,     4,     5,     5,     3,     3,     4,     3,
       3,     3,     2,     3,     4,     3,     4,     5,     3,     5,
       3,     3,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3
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
  case 54:
#line 204 "parser.y"
                 { eval_value = (yyvsp[0].uval); }
#line 2368 "y.tab.c"
    break;

  case 56:
#line 207 "parser.y"
      {
      }
#line 2375 "y.tab.c"
    break;

  case 58:
#line 214 "parser.y"
    { (yyval.bval)=(yyvsp[0].bval); }
#line 2381 "y.tab.c"
    break;

  case 60:
#line 220 "parser.y"
    { (yyval.sval)=(yyvsp[0].sval); }
#line 2387 "y.tab.c"
    break;

  case 66:
#line 230 "parser.y"
    { (yyval.uval)=(yyvsp[0].uval); }
#line 2393 "y.tab.c"
    break;

  case 67:
#line 235 "parser.y"
      {
          bx_dbg_timebp_command(0, (yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2402 "y.tab.c"
    break;

  case 68:
#line 240 "parser.y"
      {
          bx_dbg_timebp_command(1, (yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2411 "y.tab.c"
    break;

  case 69:
#line 248 "parser.y"
      {
          bx_dbg_modebp_command();
          free((yyvsp[-1].sval));
      }
#line 2420 "y.tab.c"
    break;

  case 70:
#line 256 "parser.y"
      {
          bx_dbg_vmexitbp_command();
          free((yyvsp[-1].sval));
      }
#line 2429 "y.tab.c"
    break;

  case 71:
#line 264 "parser.y"
      {
          bx_dbg_show_command((yyvsp[-1].sval));
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2438 "y.tab.c"
    break;

  case 72:
#line 269 "parser.y"
      {
          bx_dbg_show_command("all");
          free((yyvsp[-2].sval));
      }
#line 2447 "y.tab.c"
    break;

  case 73:
#line 274 "parser.y"
      {
          bx_dbg_show_command("off");
          free((yyvsp[-2].sval));
      }
#line 2456 "y.tab.c"
    break;

  case 74:
#line 279 "parser.y"
      {
          bx_dbg_show_param_command((yyvsp[-1].sval), 0);
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2465 "y.tab.c"
    break;

  case 75:
#line 284 "parser.y"
      {
          bx_dbg_show_param_command((yyvsp[-2].sval), 1);
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2474 "y.tab.c"
    break;

  case 76:
#line 289 "parser.y"
      {
          bx_dbg_show_command(0);
          free((yyvsp[-1].sval));
      }
#line 2483 "y.tab.c"
    break;

  case 77:
#line 297 "parser.y"
      {
          bx_dbg_xlate_address((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2492 "y.tab.c"
    break;

  case 78:
#line 305 "parser.y"
      {
          bx_dbg_tlb_lookup((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2501 "y.tab.c"
    break;

  case 79:
#line 313 "parser.y"
      {
          bx_dbg_ptime_command();
          free((yyvsp[-1].sval));
      }
#line 2510 "y.tab.c"
    break;

  case 80:
#line 321 "parser.y"
      {
          bx_dbg_trace_command((yyvsp[-1].bval));
          free((yyvsp[-2].sval));
      }
#line 2519 "y.tab.c"
    break;

  case 81:
#line 329 "parser.y"
      {
          bx_dbg_trace_reg_command((yyvsp[-1].bval));
          free((yyvsp[-2].sval));
      }
#line 2528 "y.tab.c"
    break;

  case 82:
#line 337 "parser.y"
      {
          bx_dbg_trace_mem_command((yyvsp[-1].bval));
          free((yyvsp[-2].sval));
      }
#line 2537 "y.tab.c"
    break;

  case 83:
#line 345 "parser.y"
      {
          bx_dbg_print_stack_command(16);
          free((yyvsp[-1].sval));
      }
#line 2546 "y.tab.c"
    break;

  case 84:
#line 350 "parser.y"
      {
          bx_dbg_print_stack_command((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2555 "y.tab.c"
    break;

  case 85:
#line 358 "parser.y"
      {
        bx_dbg_bt_command(16);
        free((yyvsp[-1].sval));
      }
#line 2564 "y.tab.c"
    break;

  case 86:
#line 363 "parser.y"
      {
        bx_dbg_bt_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2573 "y.tab.c"
    break;

  case 87:
#line 371 "parser.y"
      {
          bx_dbg_watchpoint_continue(0);
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2582 "y.tab.c"
    break;

  case 88:
#line 376 "parser.y"
      {
          bx_dbg_watchpoint_continue(1);
          free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2591 "y.tab.c"
    break;

  case 89:
#line 381 "parser.y"
      {
          bx_dbg_print_watchpoints();
          free((yyvsp[-1].sval));
      }
#line 2600 "y.tab.c"
    break;

  case 90:
#line 386 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-1].uval), 1); /* BX_READ */
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2609 "y.tab.c"
    break;

  case 91:
#line 391 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-1].uval), 1); /* BX_READ */
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2618 "y.tab.c"
    break;

  case 92:
#line 396 "parser.y"
      {
          bx_dbg_watch(1, (yyvsp[-1].uval), 1); /* BX_WRITE */
          free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2627 "y.tab.c"
    break;

  case 93:
#line 401 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-2].uval), (yyvsp[-1].uval)); /* BX_READ */
          free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2636 "y.tab.c"
    break;

  case 94:
#line 406 "parser.y"
      {
          bx_dbg_watch(0, (yyvsp[-2].uval), (yyvsp[-1].uval)); /* BX_READ */
          free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2645 "y.tab.c"
    break;

  case 95:
#line 411 "parser.y"
      {
          bx_dbg_watch(1, (yyvsp[-2].uval), (yyvsp[-1].uval)); /* BX_WRITE */
          free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2654 "y.tab.c"
    break;

  case 96:
#line 416 "parser.y"
      {
          bx_dbg_unwatch_all();
          free((yyvsp[-1].sval));
      }
#line 2663 "y.tab.c"
    break;

  case 97:
#line 421 "parser.y"
      {
          bx_dbg_unwatch((yyvsp[-1].uval));
          free((yyvsp[-2].sval));
      }
#line 2672 "y.tab.c"
    break;

  case 98:
#line 429 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-1].sval), 0, 0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2681 "y.tab.c"
    break;

  case 99:
#line 434 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-2].sval), 0, (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2690 "y.tab.c"
    break;

  case 100:
#line 439 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-1].sval), 1, 0);
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2699 "y.tab.c"
    break;

  case 101:
#line 444 "parser.y"
      {
        bx_dbg_symbol_command((yyvsp[-2].sval), 1, (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2708 "y.tab.c"
    break;

  case 102:
#line 452 "parser.y"
      {
        bx_dbg_where_command();
        free((yyvsp[-1].sval));
      }
#line 2717 "y.tab.c"
    break;

  case 103:
#line 460 "parser.y"
      {
        bx_dbg_print_string_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2726 "y.tab.c"
    break;

  case 104:
#line 468 "parser.y"
      {
        bx_dbg_continue_command(1);
        free((yyvsp[-1].sval));
      }
#line 2735 "y.tab.c"
    break;

  case 105:
#line 473 "parser.y"
      {
        bx_dbg_continue_command((yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2744 "y.tab.c"
    break;

  case 106:
#line 481 "parser.y"
      {
        bx_dbg_stepN_command(dbg_cpu, 1);
        free((yyvsp[-1].sval));
      }
#line 2753 "y.tab.c"
    break;

  case 107:
#line 486 "parser.y"
      {
        bx_dbg_stepN_command(dbg_cpu, (yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 2762 "y.tab.c"
    break;

  case 108:
#line 491 "parser.y"
      {
        bx_dbg_stepN_command(-1, (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2771 "y.tab.c"
    break;

  case 109:
#line 496 "parser.y"
      {
        bx_dbg_stepN_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 2780 "y.tab.c"
    break;

  case 110:
#line 504 "parser.y"
      {
        bx_dbg_step_over_command();
        free((yyvsp[-1].sval));
      }
#line 2789 "y.tab.c"
    break;

  case 111:
#line 512 "parser.y"
      {
        bx_dbg_set_auto_disassemble((yyvsp[-1].bval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 2798 "y.tab.c"
    break;

  case 112:
#line 517 "parser.y"
      {
        bx_dbg_set_symbol_command((yyvsp[-3].sval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 2807 "y.tab.c"
    break;

  case 113:
#line 522 "parser.y"
      { 
        bx_dbg_set_reg8l_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2815 "y.tab.c"
    break;

  case 114:
#line 526 "parser.y"
      { 
        bx_dbg_set_reg8h_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2823 "y.tab.c"
    break;

  case 115:
#line 530 "parser.y"
      { 
        bx_dbg_set_reg16_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2831 "y.tab.c"
    break;

  case 116:
#line 534 "parser.y"
      { 
        bx_dbg_set_reg32_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2839 "y.tab.c"
    break;

  case 117:
#line 538 "parser.y"
      { 
        bx_dbg_set_reg64_value((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2847 "y.tab.c"
    break;

  case 118:
#line 542 "parser.y"
      { 
        bx_dbg_set_rip_value((yyvsp[-1].uval));
      }
#line 2855 "y.tab.c"
    break;

  case 119:
#line 546 "parser.y"
      { 
        bx_dbg_set_rip_value((yyvsp[-1].uval));
      }
#line 2863 "y.tab.c"
    break;

  case 120:
#line 550 "parser.y"
      { 
        bx_dbg_load_segreg((yyvsp[-3].uval), (yyvsp[-1].uval));
      }
#line 2871 "y.tab.c"
    break;

  case 121:
#line 557 "parser.y"
      {
        bx_dbg_vbreakpoint_command(bkAtIP, 0, 0, NULL);
        free((yyvsp[-1].sval));
      }
#line 2880 "y.tab.c"
    break;

  case 122:
#line 562 "parser.y"
      {
        bx_dbg_vbreakpoint_command(bkRegular, (yyvsp[-3].uval), (yyvsp[-1].uval), NULL);
        free((yyvsp[-4].sval));
      }
#line 2889 "y.tab.c"
    break;

  case 123:
#line 567 "parser.y"
      {
        bx_dbg_vbreakpoint_command(bkRegular, (yyvsp[-5].uval), (yyvsp[-3].uval), (yyvsp[-1].sval));
        free((yyvsp[-6].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2898 "y.tab.c"
    break;

  case 124:
#line 572 "parser.y"
      {
        bx_dbg_lbreakpoint_command(bkAtIP, 0, NULL);
        free((yyvsp[-1].sval));
      }
#line 2907 "y.tab.c"
    break;

  case 125:
#line 577 "parser.y"
      {
        bx_dbg_lbreakpoint_command(bkRegular, (yyvsp[-1].uval), NULL);
        free((yyvsp[-2].sval));
      }
#line 2916 "y.tab.c"
    break;

  case 126:
#line 582 "parser.y"
      {
        bx_dbg_lbreakpoint_command(bkRegular, (yyvsp[-3].uval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2925 "y.tab.c"
    break;

  case 127:
#line 587 "parser.y"
      {
        bx_dbg_lbreakpoint_symbol_command((yyvsp[-1].sval), NULL);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2934 "y.tab.c"
    break;

  case 128:
#line 592 "parser.y"
      {
        bx_dbg_lbreakpoint_symbol_command((yyvsp[-3].sval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2943 "y.tab.c"
    break;

  case 129:
#line 597 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkAtIP, 0, NULL);
        free((yyvsp[-1].sval));
      }
#line 2952 "y.tab.c"
    break;

  case 130:
#line 602 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-1].uval), NULL);
        free((yyvsp[-2].sval));
      }
#line 2961 "y.tab.c"
    break;

  case 131:
#line 607 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-3].uval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2970 "y.tab.c"
    break;

  case 132:
#line 612 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-1].uval), NULL);
        free((yyvsp[-3].sval));
      }
#line 2979 "y.tab.c"
    break;

  case 133:
#line 617 "parser.y"
      {
        bx_dbg_pbreakpoint_command(bkRegular, (yyvsp[-3].uval), (yyvsp[-1].sval));
        free((yyvsp[-5].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 2988 "y.tab.c"
    break;

  case 134:
#line 625 "parser.y"
      {
        bx_dbg_info_bpoints_command();
        free((yyvsp[-1].sval));
      }
#line 2997 "y.tab.c"
    break;

  case 135:
#line 633 "parser.y"
      {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[-1].sval));
      }
#line 3006 "y.tab.c"
    break;

  case 136:
#line 638 "parser.y"
      {
        bx_dbg_info_symbols_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval));free((yyvsp[-1].sval));
      }
#line 3015 "y.tab.c"
    break;

  case 137:
#line 646 "parser.y"
      {
        bx_dbg_info_bpoints_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3024 "y.tab.c"
    break;

  case 138:
#line 651 "parser.y"
      {
        bx_dbg_info_registers_command(-1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3033 "y.tab.c"
    break;

  case 139:
#line 656 "parser.y"
      {
        bx_dbg_info_idt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3042 "y.tab.c"
    break;

  case 140:
#line 661 "parser.y"
      {
        bx_dbg_info_ivt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3051 "y.tab.c"
    break;

  case 141:
#line 666 "parser.y"
      {
        bx_dbg_info_gdt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3060 "y.tab.c"
    break;

  case 142:
#line 671 "parser.y"
      {
        bx_dbg_info_ldt_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3069 "y.tab.c"
    break;

  case 143:
#line 676 "parser.y"
      {
        bx_dbg_dump_table();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3078 "y.tab.c"
    break;

  case 144:
#line 681 "parser.y"
      {
        bx_dbg_info_tss_command((yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3087 "y.tab.c"
    break;

  case 145:
#line 686 "parser.y"
      {
        bx_dbg_info_flags();
        free((yyvsp[-2].sval));
      }
#line 3096 "y.tab.c"
    break;

  case 146:
#line 691 "parser.y"
      {
        bx_dbg_info_linux_command();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3105 "y.tab.c"
    break;

  case 147:
#line 696 "parser.y"
      {
        bx_dbg_info_symbols_command(0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3114 "y.tab.c"
    break;

  case 148:
#line 701 "parser.y"
      {
        bx_dbg_info_symbols_command((yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3123 "y.tab.c"
    break;

  case 149:
#line 706 "parser.y"
      {
        bx_dbg_info_device("", "");
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3132 "y.tab.c"
    break;

  case 150:
#line 711 "parser.y"
      {
        bx_dbg_info_device((yyvsp[-1].sval), "");
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3141 "y.tab.c"
    break;

  case 151:
#line 716 "parser.y"
      {
        bx_dbg_info_device((yyvsp[-2].sval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3150 "y.tab.c"
    break;

  case 152:
#line 721 "parser.y"
      {
        bx_dbg_info_device((yyvsp[-1].sval), "");
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3159 "y.tab.c"
    break;

  case 153:
#line 726 "parser.y"
      {
        bx_dbg_info_device((yyvsp[-2].sval), (yyvsp[-1].sval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3168 "y.tab.c"
    break;

  case 154:
#line 733 "parser.y"
               { (yyval.uval) = EMPTY_ARG; }
#line 3174 "y.tab.c"
    break;

  case 156:
#line 738 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_GENERAL_PURPOSE_REGS);
        free((yyvsp[-1].sval));
      }
#line 3183 "y.tab.c"
    break;

  case 157:
#line 746 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_FPU_REGS);
        free((yyvsp[-1].sval));
      }
#line 3192 "y.tab.c"
    break;

  case 158:
#line 754 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_MMX_REGS);
        free((yyvsp[-1].sval));
      }
#line 3201 "y.tab.c"
    break;

  case 159:
#line 762 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_SSE_REGS);
        free((yyvsp[-1].sval));
      }
#line 3210 "y.tab.c"
    break;

  case 160:
#line 770 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_YMM_REGS);
        free((yyvsp[-1].sval));
      }
#line 3219 "y.tab.c"
    break;

  case 161:
#line 778 "parser.y"
      {
        bx_dbg_info_registers_command(BX_INFO_ZMM_REGS);
        free((yyvsp[-1].sval));
      }
#line 3228 "y.tab.c"
    break;

  case 162:
#line 786 "parser.y"
      {
        bx_dbg_info_segment_regs_command();
        free((yyvsp[-1].sval));
      }
#line 3237 "y.tab.c"
    break;

  case 163:
#line 794 "parser.y"
      {
        bx_dbg_info_control_regs_command();
        free((yyvsp[-1].sval));
      }
#line 3246 "y.tab.c"
    break;

  case 164:
#line 802 "parser.y"
      {
        bx_dbg_info_debug_regs_command();
        free((yyvsp[-1].sval));
      }
#line 3255 "y.tab.c"
    break;

  case 165:
#line 810 "parser.y"
      {
        bx_dbg_del_breakpoint_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 3264 "y.tab.c"
    break;

  case 166:
#line 818 "parser.y"
      {
        bx_dbg_en_dis_breakpoint_command((yyvsp[-1].uval), 1);
        free((yyvsp[-2].sval));
      }
#line 3273 "y.tab.c"
    break;

  case 167:
#line 825 "parser.y"
      {
        bx_dbg_en_dis_breakpoint_command((yyvsp[-1].uval), 0);
        free((yyvsp[-2].sval));
      }
#line 3282 "y.tab.c"
    break;

  case 168:
#line 833 "parser.y"
      {
        bx_dbg_quit_command();
        free((yyvsp[-1].sval));
      }
#line 3291 "y.tab.c"
    break;

  case 169:
#line 841 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-3].sval), (yyvsp[-2].sval),1, (yyvsp[-1].uval), 1);
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3300 "y.tab.c"
    break;

  case 170:
#line 846 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-2].sval), (yyvsp[-1].sval),1, 0, 0);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3309 "y.tab.c"
    break;

  case 171:
#line 851 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-2].sval), NULL,0, (yyvsp[-1].uval), 1);
        free((yyvsp[-2].sval));
      }
#line 3318 "y.tab.c"
    break;

  case 172:
#line 856 "parser.y"
      {
        bx_dbg_examine_command((yyvsp[-1].sval), NULL,0, 0, 0);
        free((yyvsp[-1].sval));
      }
#line 3327 "y.tab.c"
    break;

  case 173:
#line 864 "parser.y"
      {
        bx_dbg_restore_command((yyvsp[-2].sval), (yyvsp[-1].sval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3336 "y.tab.c"
    break;

  case 174:
#line 872 "parser.y"
      {
        bx_dbg_writemem_command((yyvsp[-3].sval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3345 "y.tab.c"
    break;

  case 175:
#line 880 "parser.y"
      {
        bx_dbg_setpmem_command((yyvsp[-3].uval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval));
      }
#line 3354 "y.tab.c"
    break;

  case 176:
#line 888 "parser.y"
      {
        bx_dbg_query_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3363 "y.tab.c"
    break;

  case 177:
#line 896 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3372 "y.tab.c"
    break;

  case 178:
#line 901 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-2].sval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3381 "y.tab.c"
    break;

  case 179:
#line 906 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3390 "y.tab.c"
    break;

  case 180:
#line 911 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3399 "y.tab.c"
    break;

  case 181:
#line 916 "parser.y"
      {
        bx_dbg_take_command((yyvsp[-1].sval), 1);
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3408 "y.tab.c"
    break;

  case 182:
#line 924 "parser.y"
      {
        bx_dbg_disassemble_current(NULL);
        free((yyvsp[-1].sval));
      }
#line 3417 "y.tab.c"
    break;

  case 183:
#line 929 "parser.y"
      {
        bx_dbg_disassemble_command(NULL, (yyvsp[-1].uval), (yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 3426 "y.tab.c"
    break;

  case 184:
#line 934 "parser.y"
      {
        bx_dbg_disassemble_command(NULL, (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 3435 "y.tab.c"
    break;

  case 185:
#line 939 "parser.y"
      {
        bx_dbg_disassemble_current((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3444 "y.tab.c"
    break;

  case 186:
#line 944 "parser.y"
      {
        bx_dbg_disassemble_command((yyvsp[-2].sval), (yyvsp[-1].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval)); free((yyvsp[-2].sval));
      }
#line 3453 "y.tab.c"
    break;

  case 187:
#line 949 "parser.y"
      {
        bx_dbg_disassemble_command((yyvsp[-3].sval), (yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3462 "y.tab.c"
    break;

  case 188:
#line 954 "parser.y"
      {
        bx_dbg_disassemble_switch_mode();
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3471 "y.tab.c"
    break;

  case 189:
#line 959 "parser.y"
      {
        bx_dbg_set_disassemble_size((yyvsp[-1].uval));
        free((yyvsp[-4].sval)); free((yyvsp[-3].sval));
      }
#line 3480 "y.tab.c"
    break;

  case 190:
#line 967 "parser.y"
      {
        bx_dbg_instrument_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3489 "y.tab.c"
    break;

  case 191:
#line 972 "parser.y"
      {
        bx_dbg_instrument_command((yyvsp[-1].sval));
        free((yyvsp[-2].sval)); free((yyvsp[-1].sval));
      }
#line 3498 "y.tab.c"
    break;

  case 192:
#line 980 "parser.y"
      {
        bx_dbg_doit_command((yyvsp[-1].uval));
        free((yyvsp[-2].sval));
      }
#line 3507 "y.tab.c"
    break;

  case 193:
#line 988 "parser.y"
      {
        bx_dbg_crc_command((yyvsp[-2].uval), (yyvsp[-1].uval));
        free((yyvsp[-3].sval));
      }
#line 3516 "y.tab.c"
    break;

  case 194:
#line 996 "parser.y"
       {
         dbg_printf("q|quit|exit - quit debugger and emulator execution\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3525 "y.tab.c"
    break;

  case 195:
#line 1001 "parser.y"
       {
         dbg_printf("c|cont|continue - continue executing\n");
         dbg_printf("c|cont|continue if \"expression\" - continue executing only if expression is true\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3535 "y.tab.c"
    break;

  case 196:
#line 1007 "parser.y"
       {
         dbg_printf("s|step [count] - execute #count instructions on current processor (default is one instruction)\n");
         dbg_printf("s|step [cpu] <count> - execute #count instructions on processor #cpu\n");
         dbg_printf("s|step all <count> - execute #count instructions on all the processors\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3546 "y.tab.c"
    break;

  case 197:
#line 1014 "parser.y"
       {
         dbg_printf("n|next|p - execute instruction stepping over subroutines\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3555 "y.tab.c"
    break;

  case 198:
#line 1019 "parser.y"
       {
         dbg_printf("vb|vbreak <seg:offset> - set a virtual address instruction breakpoint\n");
         dbg_printf("vb|vbreak <seg:offset> if \"expression\" - set a conditional virtual address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3565 "y.tab.c"
    break;

  case 199:
#line 1025 "parser.y"
       {
         dbg_printf("lb|lbreak <addr> - set a linear address instruction breakpoint\n");
         dbg_printf("lb|lbreak <addr> if \"expression\" - set a conditional linear address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3575 "y.tab.c"
    break;

  case 200:
#line 1031 "parser.y"
       {
         dbg_printf("p|pb|break|pbreak <addr> - set a physical address instruction breakpoint\n");
         dbg_printf("p|pb|break|pbreak <addr> if \"expression\" - set a conditional physical address instruction breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3585 "y.tab.c"
    break;

  case 201:
#line 1037 "parser.y"
       {
         dbg_printf("d|del|delete <n> - delete a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3594 "y.tab.c"
    break;

  case 202:
#line 1042 "parser.y"
       {
         dbg_printf("bpe <n> - enable a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3603 "y.tab.c"
    break;

  case 203:
#line 1047 "parser.y"
       {
         dbg_printf("bpd <n> - disable a breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3612 "y.tab.c"
    break;

  case 204:
#line 1052 "parser.y"
       {
         dbg_printf("blist - list all breakpoints (same as 'info break')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3621 "y.tab.c"
    break;

  case 205:
#line 1057 "parser.y"
       {
         dbg_printf("modebp - toggles mode switch breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3630 "y.tab.c"
    break;

  case 206:
#line 1062 "parser.y"
       {
         dbg_printf("vmexitbp - toggles VMEXIT switch breakpoint\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3639 "y.tab.c"
    break;

  case 207:
#line 1067 "parser.y"
       {
         dbg_printf("crc <addr1> <addr2> - show CRC32 for physical memory range addr1..addr2\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3648 "y.tab.c"
    break;

  case 208:
#line 1072 "parser.y"
       {
         dbg_printf("trace on  - print disassembly for every executed instruction\n");
         dbg_printf("trace off - disable instruction tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3658 "y.tab.c"
    break;

  case 209:
#line 1078 "parser.y"
       {
         dbg_printf("trace-reg on  - print all registers before every executed instruction\n");
         dbg_printf("trace-reg off - disable registers state tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3668 "y.tab.c"
    break;

  case 210:
#line 1084 "parser.y"
       {
         dbg_printf("trace-mem on  - print all memory accesses occurred during instruction execution\n");
         dbg_printf("trace-mem off - disable memory accesses tracing\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3678 "y.tab.c"
    break;

  case 211:
#line 1090 "parser.y"
       {
         dbg_printf("restore <param_name> [path] - restore bochs root param from the file\n");
         dbg_printf("for example:\n");
         dbg_printf("restore \"cpu0\" - restore CPU #0 from file \"cpu0\" in current directory\n");
         dbg_printf("restore \"cpu0\" \"/save\" - restore CPU #0 from file \"cpu0\" located in directory \"/save\"\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3690 "y.tab.c"
    break;

  case 212:
#line 1098 "parser.y"
       {
         dbg_printf("ptime - print current time (number of ticks since start of simulation)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3699 "y.tab.c"
    break;

  case 213:
#line 1103 "parser.y"
       {
         dbg_printf("sb <delta> - insert a time breakpoint delta instructions into the future\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3708 "y.tab.c"
    break;

  case 214:
#line 1108 "parser.y"
       {
         dbg_printf("sba <time> - insert breakpoint at specific time\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3717 "y.tab.c"
    break;

  case 215:
#line 1113 "parser.y"
       {
         dbg_printf("print-stack [num_words] - print the num_words top 16 bit words on the stack\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3726 "y.tab.c"
    break;

  case 216:
#line 1118 "parser.y"
       {
         dbg_printf("ldsym [global] <filename> [offset] - load symbols from file\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3735 "y.tab.c"
    break;

  case 217:
#line 1123 "parser.y"
       {
         dbg_printf("slist [string] - list symbols whose preffix is string (same as 'info symbols')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3744 "y.tab.c"
    break;

  case 218:
#line 1128 "parser.y"
       {
         dbg_printf("r|reg|regs|registers - list of CPU registers and their contents (same as 'info registers')\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3753 "y.tab.c"
    break;

  case 219:
#line 1133 "parser.y"
       {
         dbg_printf("fp|fpu - print FPU state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3762 "y.tab.c"
    break;

  case 220:
#line 1138 "parser.y"
       {
         dbg_printf("mmx - print MMX state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3771 "y.tab.c"
    break;

  case 221:
#line 1143 "parser.y"
       {
         dbg_printf("xmm|sse - print SSE state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3780 "y.tab.c"
    break;

  case 222:
#line 1148 "parser.y"
       {
         dbg_printf("ymm - print AVX state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3789 "y.tab.c"
    break;

  case 223:
#line 1153 "parser.y"
       {
         dbg_printf("zmm - print AVX-512 state\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3798 "y.tab.c"
    break;

  case 224:
#line 1158 "parser.y"
       {
         dbg_printf("sreg - show segment registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3807 "y.tab.c"
    break;

  case 225:
#line 1163 "parser.y"
       {
         dbg_printf("creg - show control registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3816 "y.tab.c"
    break;

  case 226:
#line 1168 "parser.y"
       {
         dbg_printf("dreg - show debug registers\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3825 "y.tab.c"
    break;

  case 227:
#line 1173 "parser.y"
       {
         dbg_printf("writemem <filename> <laddr> <len> - dump 'len' bytes of virtual memory starting from the linear address 'laddr' into the file\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3834 "y.tab.c"
    break;

  case 228:
#line 1178 "parser.y"
       {
         dbg_printf("setpmem <addr> <datasize> <val> - set physical memory location of size 'datasize' to value 'val'\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3843 "y.tab.c"
    break;

  case 229:
#line 1183 "parser.y"
       {
         dbg_printf("u|disasm [/count] <start> <end> - disassemble instructions for given linear address\n");
         dbg_printf("    Optional 'count' is the number of disassembled instructions\n");
         dbg_printf("u|disasm switch-mode - switch between Intel and AT&T disassembler syntax\n");
         dbg_printf("u|disasm hex on/off - control disasm offsets and displacements format\n");
         dbg_printf("u|disasm size = n - tell debugger what segment size [16|32|64] to use\n");
         dbg_printf("       when \"disassemble\" command is used.\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3857 "y.tab.c"
    break;

  case 230:
#line 1193 "parser.y"
       {
         dbg_printf("watch - print current watch point status\n");
         dbg_printf("watch stop - stop simulation when a watchpoint is encountred\n");
         dbg_printf("watch continue - do not stop the simulation when watch point is encountred\n");
         dbg_printf("watch r|read addr - insert a read watch point at physical address addr\n");
         dbg_printf("watch w|write addr - insert a write watch point at physical address addr\n");
         dbg_printf("watch r|read addr <len> - insert a read watch point at physical address addr with range <len>\n");
         dbg_printf("watch w|write addr <len> - insert a write watch point at physical address addr with range <len>\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3872 "y.tab.c"
    break;

  case 231:
#line 1204 "parser.y"
       {
         dbg_printf("unwatch      - remove all watch points\n");
         dbg_printf("unwatch addr - remove a watch point\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3882 "y.tab.c"
    break;

  case 232:
#line 1210 "parser.y"
       {
         dbg_printf("x  /nuf <addr> - examine memory at linear address\n");
         dbg_printf("xp /nuf <addr> - examine memory at physical address\n");
         dbg_printf("    nuf is a sequence of numbers (how much values to display)\n");
         dbg_printf("    and one or more of the [mxduotcsibhwg] format specificators:\n");
         dbg_printf("    x,d,u,o,t,c,s,i select the format of the output (they stand for\n");
         dbg_printf("        hex, decimal, unsigned, octal, binary, char, asciiz, instr)\n");
         dbg_printf("    b,h,w,g select the size of a data element (for byte, half-word,\n");
         dbg_printf("        word and giant word)\n");
         dbg_printf("    m selects an alternative output format (memory dump)\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3899 "y.tab.c"
    break;

  case 233:
#line 1223 "parser.y"
       {
         dbg_printf("instrument <command> - calls BX_INSTR_DEBUG_CMD instrumentation callback with <command>\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3908 "y.tab.c"
    break;

  case 234:
#line 1228 "parser.y"
       {
         dbg_printf("set <regname> = <expr> - set register value to expression\n");
         dbg_printf("set eflags = <expr> - set eflags value to expression, not all flags can be modified\n");
         dbg_printf("set $cpu = <N> - move debugger control to cpu <N> in SMP simulation\n");
         dbg_printf("set $auto_disassemble = 1 - cause debugger to disassemble current instruction\n");
         dbg_printf("       every time execution stops\n");
         dbg_printf("set u|disasm|disassemble on  - same as 'set $auto_disassemble = 1'\n");
         dbg_printf("set u|disasm|disassemble off - same as 'set $auto_disassemble = 0'\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3923 "y.tab.c"
    break;

  case 235:
#line 1239 "parser.y"
       {
         dbg_printf("page <laddr> - show linear to physical xlation for linear address laddr\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3932 "y.tab.c"
    break;

  case 236:
#line 1244 "parser.y"
       {
         dbg_printf("info break - show information about current breakpoint status\n");
         dbg_printf("info cpu - show dump of all cpu registers\n");
         dbg_printf("info idt - show interrupt descriptor table\n");
         dbg_printf("info ivt - show interrupt vector table\n");
         dbg_printf("info gdt - show global descriptor table\n");
         dbg_printf("info tss - show current task state segment\n");
         dbg_printf("info tab - show page tables\n");
         dbg_printf("info eflags - show decoded EFLAGS register\n");
         dbg_printf("info symbols [string] - list symbols whose prefix is string\n");
         dbg_printf("info device - show list of devices supported by this command\n");
         dbg_printf("info device [string] - show state of device specified in string\n");
         dbg_printf("info device [string] [string] - show state of device with options\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3952 "y.tab.c"
    break;

  case 237:
#line 1260 "parser.y"
       {
         dbg_printf("show <command> - toggles show symbolic info (calls to begin with)\n");
         dbg_printf("show - shows current show mode\n");
         dbg_printf("show mode - show, when processor switch mode\n");
         dbg_printf("show int - show, when an interrupt happens\n");
         dbg_printf("show softint - show, when software interrupt happens\n");
         dbg_printf("show extint - show, when external interrupt happens\n");
         dbg_printf("show call - show, when call is happens\n");
         dbg_printf("show iret - show, when iret is happens\n");
         dbg_printf("show all - turns on all symbolic info\n");
         dbg_printf("show off - turns off symbolic info\n");
         dbg_printf("show dbg_all - turn on all bx_dbg flags\n");
         dbg_printf("show dbg_none - turn off all bx_dbg flags\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3972 "y.tab.c"
    break;

  case 238:
#line 1276 "parser.y"
       {
         dbg_printf("calc|? <expr> - calculate a expression and display the result.\n");
         dbg_printf("    'expr' can reference any general-purpose, opmask and segment\n");
         dbg_printf("    registers, use any arithmetic and logic operations, and\n");
         dbg_printf("    also the special ':' operator which computes the linear\n");
         dbg_printf("    address of a segment:offset (in real and v86 mode) or of\n");
         dbg_printf("    a selector:offset (in protected mode) pair.\n");
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3986 "y.tab.c"
    break;

  case 239:
#line 1286 "parser.y"
       {
         bx_dbg_print_help();
         free((yyvsp[-2].sval));free((yyvsp[-1].sval));
       }
#line 3995 "y.tab.c"
    break;

  case 240:
#line 1291 "parser.y"
       {
         bx_dbg_print_help();
         free((yyvsp[-1].sval));
       }
#line 4004 "y.tab.c"
    break;

  case 241:
#line 1299 "parser.y"
   {
     eval_value = (yyvsp[-1].uval);
     bx_dbg_calc_command((yyvsp[-1].uval));
     free((yyvsp[-2].sval));
   }
#line 4014 "y.tab.c"
    break;

  case 242:
#line 1308 "parser.y"
   {
     eval_value = (yyvsp[-1].uval) != 0;
     bx_dbg_calc_command((yyvsp[-1].uval));
     free((yyvsp[-2].sval));
   }
#line 4024 "y.tab.c"
    break;

  case 243:
#line 1317 "parser.y"
                                     { (yyval.uval) = (yyvsp[0].uval); }
#line 4030 "y.tab.c"
    break;

  case 244:
#line 1318 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_symbol_value((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 4036 "y.tab.c"
    break;

  case 245:
#line 1319 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8l_value((yyvsp[0].uval)); }
#line 4042 "y.tab.c"
    break;

  case 246:
#line 1320 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8h_value((yyvsp[0].uval)); }
#line 4048 "y.tab.c"
    break;

  case 247:
#line 1321 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg16_value((yyvsp[0].uval)); }
#line 4054 "y.tab.c"
    break;

  case 248:
#line 1322 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg32_value((yyvsp[0].uval)); }
#line 4060 "y.tab.c"
    break;

  case 249:
#line 1323 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg64_value((yyvsp[0].uval)); }
#line 4066 "y.tab.c"
    break;

  case 250:
#line 1324 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_opmask_value((yyvsp[0].uval)); }
#line 4072 "y.tab.c"
    break;

  case 251:
#line 1325 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_selector_value((yyvsp[0].uval)); }
#line 4078 "y.tab.c"
    break;

  case 252:
#line 1326 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_ip (); }
#line 4084 "y.tab.c"
    break;

  case 253:
#line 1327 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_eip(); }
#line 4090 "y.tab.c"
    break;

  case 254:
#line 1328 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_rip(); }
#line 4096 "y.tab.c"
    break;

  case 255:
#line 1329 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_ssp(); }
#line 4102 "y.tab.c"
    break;

  case 256:
#line 1330 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) + (yyvsp[0].uval); }
#line 4108 "y.tab.c"
    break;

  case 257:
#line 1331 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) - (yyvsp[0].uval); }
#line 4114 "y.tab.c"
    break;

  case 258:
#line 1332 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval); }
#line 4120 "y.tab.c"
    break;

  case 259:
#line 1333 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) / (yyvsp[0].uval); }
#line 4126 "y.tab.c"
    break;

  case 260:
#line 1334 "parser.y"
                                             { (yyval.uval) = (yyvsp[-2].uval) >> (yyvsp[0].uval); }
#line 4132 "y.tab.c"
    break;

  case 261:
#line 1335 "parser.y"
                                             { (yyval.uval) = (yyvsp[-2].uval) << (yyvsp[0].uval); }
#line 4138 "y.tab.c"
    break;

  case 262:
#line 1336 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval); }
#line 4144 "y.tab.c"
    break;

  case 263:
#line 1337 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval); }
#line 4150 "y.tab.c"
    break;

  case 264:
#line 1338 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval); }
#line 4156 "y.tab.c"
    break;

  case 265:
#line 1339 "parser.y"
                                     { (yyval.uval) = !(yyvsp[0].uval); }
#line 4162 "y.tab.c"
    break;

  case 266:
#line 1340 "parser.y"
                                     { (yyval.uval) = -(yyvsp[0].uval); }
#line 4168 "y.tab.c"
    break;

  case 267:
#line 1341 "parser.y"
                                     { (yyval.uval) = (yyvsp[-1].uval); }
#line 4174 "y.tab.c"
    break;

  case 268:
#line 1347 "parser.y"
                                     { (yyval.uval) = (yyvsp[0].uval); }
#line 4180 "y.tab.c"
    break;

  case 269:
#line 1348 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_symbol_value((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 4186 "y.tab.c"
    break;

  case 270:
#line 1349 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8l_value((yyvsp[0].uval)); }
#line 4192 "y.tab.c"
    break;

  case 271:
#line 1350 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg8h_value((yyvsp[0].uval)); }
#line 4198 "y.tab.c"
    break;

  case 272:
#line 1351 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg16_value((yyvsp[0].uval)); }
#line 4204 "y.tab.c"
    break;

  case 273:
#line 1352 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg32_value((yyvsp[0].uval)); }
#line 4210 "y.tab.c"
    break;

  case 274:
#line 1353 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_reg64_value((yyvsp[0].uval)); }
#line 4216 "y.tab.c"
    break;

  case 275:
#line 1354 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_opmask_value((yyvsp[0].uval)); }
#line 4222 "y.tab.c"
    break;

  case 276:
#line 1355 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_selector_value((yyvsp[0].uval)); }
#line 4228 "y.tab.c"
    break;

  case 277:
#line 1356 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_ip (); }
#line 4234 "y.tab.c"
    break;

  case 278:
#line 1357 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_eip(); }
#line 4240 "y.tab.c"
    break;

  case 279:
#line 1358 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_rip(); }
#line 4246 "y.tab.c"
    break;

  case 280:
#line 1359 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_ssp(); }
#line 4252 "y.tab.c"
    break;

  case 281:
#line 1360 "parser.y"
                                     { (yyval.uval) = bx_dbg_get_laddr ((yyvsp[-2].uval), (yyvsp[0].uval)); }
#line 4258 "y.tab.c"
    break;

  case 282:
#line 1361 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) + (yyvsp[0].uval); }
#line 4264 "y.tab.c"
    break;

  case 283:
#line 1362 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) - (yyvsp[0].uval); }
#line 4270 "y.tab.c"
    break;

  case 284:
#line 1363 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) * (yyvsp[0].uval); }
#line 4276 "y.tab.c"
    break;

  case 285:
#line 1364 "parser.y"
                                     { (yyval.uval) = ((yyvsp[0].uval) != 0) ? (yyvsp[-2].uval) / (yyvsp[0].uval) : 0; }
#line 4282 "y.tab.c"
    break;

  case 286:
#line 1365 "parser.y"
                                           { (yyval.uval) = (yyvsp[-2].uval) >> (yyvsp[0].uval); }
#line 4288 "y.tab.c"
    break;

  case 287:
#line 1366 "parser.y"
                                           { (yyval.uval) = (yyvsp[-2].uval) << (yyvsp[0].uval); }
#line 4294 "y.tab.c"
    break;

  case 288:
#line 1367 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) | (yyvsp[0].uval); }
#line 4300 "y.tab.c"
    break;

  case 289:
#line 1368 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) ^ (yyvsp[0].uval); }
#line 4306 "y.tab.c"
    break;

  case 290:
#line 1369 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) & (yyvsp[0].uval); }
#line 4312 "y.tab.c"
    break;

  case 291:
#line 1370 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) > (yyvsp[0].uval); }
#line 4318 "y.tab.c"
    break;

  case 292:
#line 1371 "parser.y"
                                     { (yyval.uval) = (yyvsp[-2].uval) < (yyvsp[0].uval); }
#line 4324 "y.tab.c"
    break;

  case 293:
#line 1372 "parser.y"
                                       { (yyval.uval) = (yyvsp[-2].uval) == (yyvsp[0].uval); }
#line 4330 "y.tab.c"
    break;

  case 294:
#line 1373 "parser.y"
                                       { (yyval.uval) = (yyvsp[-2].uval) != (yyvsp[0].uval); }
#line 4336 "y.tab.c"
    break;

  case 295:
#line 1374 "parser.y"
                                       { (yyval.uval) = (yyvsp[-2].uval) <= (yyvsp[0].uval); }
#line 4342 "y.tab.c"
    break;

  case 296:
#line 1375 "parser.y"
                                       { (yyval.uval) = (yyvsp[-2].uval) >= (yyvsp[0].uval); }
#line 4348 "y.tab.c"
    break;

  case 297:
#line 1376 "parser.y"
                                     { (yyval.uval) = !(yyvsp[0].uval); }
#line 4354 "y.tab.c"
    break;

  case 298:
#line 1377 "parser.y"
                                     { (yyval.uval) = -(yyvsp[0].uval); }
#line 4360 "y.tab.c"
    break;

  case 299:
#line 1378 "parser.y"
                                     { (yyval.uval) = bx_dbg_lin_indirect((yyvsp[0].uval)); }
#line 4366 "y.tab.c"
    break;

  case 300:
#line 1379 "parser.y"
                                     { (yyval.uval) = bx_dbg_phy_indirect((yyvsp[0].uval)); }
#line 4372 "y.tab.c"
    break;

  case 301:
#line 1380 "parser.y"
                                     { (yyval.uval) = (yyvsp[-1].uval); }
#line 4378 "y.tab.c"
    break;


#line 4382 "y.tab.c"

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
#line 1383 "parser.y"

#endif  /* if BX_DEBUGGER */
/* The #endif is appended by the makefile after running yacc. */
