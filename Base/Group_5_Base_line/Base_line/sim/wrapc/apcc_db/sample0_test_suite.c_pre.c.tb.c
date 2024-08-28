/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC_k2c_tensor l_struct_OC_k2c_tensor;

/* Structure contents */
struct l_struct_OC_k2c_tensor {
  float field0[10000];
  unsigned long long field1;
  unsigned long long field2;
  signed long long field3[5];
};


/* External Global Variable Declarations */
extern float test1_dense_13_input_input_array[20];
extern float keras_dense_16_test1_array[1];
extern float c_dense_16_test1_array[1];
extern float test2_dense_13_input_input_array[20];
extern float keras_dense_16_test2_array[1];
extern float c_dense_16_test2_array[1];
extern float test3_dense_13_input_input_array[20];
extern float keras_dense_16_test3_array[1];
extern float c_dense_16_test3_array[1];
extern float test4_dense_13_input_input_array[20];
extern float keras_dense_16_test4_array[1];
extern float c_dense_16_test4_array[1];
extern float test5_dense_13_input_input_array[20];
extern float keras_dense_16_test5_array[1];
extern float c_dense_16_test5_array[1];
extern float test6_dense_13_input_input_array[20];
extern float keras_dense_16_test6_array[1];
extern float c_dense_16_test6_array[1];
extern float test7_dense_13_input_input_array[20];
extern float keras_dense_16_test7_array[1];
extern float c_dense_16_test7_array[1];
extern float test8_dense_13_input_input_array[20];
extern float keras_dense_16_test8_array[1];
extern float c_dense_16_test8_array[1];
extern float test9_dense_13_input_input_array[20];
extern float keras_dense_16_test9_array[1];
extern float c_dense_16_test9_array[1];
extern float test10_dense_13_input_input_array[20];
extern float keras_dense_16_test10_array[1];
extern float c_dense_16_test10_array[1];
extern unsigned long long i;
extern l_struct_OC_k2c_tensor c_dense_16_test7;
extern l_struct_OC_k2c_tensor test1_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test1;
extern l_struct_OC_k2c_tensor c_dense_16_test1;
extern l_struct_OC_k2c_tensor test2_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test2;
extern l_struct_OC_k2c_tensor c_dense_16_test2;
extern l_struct_OC_k2c_tensor test3_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test3;
extern l_struct_OC_k2c_tensor c_dense_16_test3;
extern l_struct_OC_k2c_tensor test4_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test4;
extern l_struct_OC_k2c_tensor c_dense_16_test4;
extern l_struct_OC_k2c_tensor test5_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test5;
extern l_struct_OC_k2c_tensor c_dense_16_test5;
extern l_struct_OC_k2c_tensor test6_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test6;
extern l_struct_OC_k2c_tensor c_dense_16_test6;
extern l_struct_OC_k2c_tensor test7_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test7;
extern l_struct_OC_k2c_tensor test8_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test8;
extern l_struct_OC_k2c_tensor c_dense_16_test8;
extern l_struct_OC_k2c_tensor test9_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test9;
extern l_struct_OC_k2c_tensor c_dense_16_test9;
extern l_struct_OC_k2c_tensor test10_dense_13_input_input;
extern l_struct_OC_k2c_tensor keras_dense_16_test10;
extern l_struct_OC_k2c_tensor c_dense_16_test10;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int main(void);
void sample0_initialize();
void AESL_WRAP_sample0(l_struct_OC_k2c_tensor *, l_struct_OC_k2c_tensor *);
float maxabs(l_struct_OC_k2c_tensor *llvm_cbe_tensor1, l_struct_OC_k2c_tensor *llvm_cbe_tensor2);
void sample0_terminate();
float fabsf(float );


/* Global Variable Definitions and Initialization */
float test1_dense_13_input_input_array[20] = { 0x1.9f663ap-3, 0x1.04c672p0, -0x1.a4a4b8p-1, 0x1.d6278ep0, -0x1.a0fbb2p-1, -0x1.51b6ep0, -0x1.f00d72p0, 0x1.dba32p-1, 0x1.53497p-1, -0x1.b18474p-1, -0x1.40c542p-1, 0x1.6547bap0, -0x1.ca7156p-2, 0x1.89ea28p0, -0x1.ff7476p-1, -0x1.e44cdcp-1, -0x1.32e956p0, -0x1.0d87fep0, 0x1.d50a16p0, -0x1.13bd56p0 };
float keras_dense_16_test1_array[1] = { 0x1.f726e6p-5 };
float c_dense_16_test1_array[1];
float test2_dense_13_input_input_array[20] = { -0x1.14cc1cp-1, 0x1.97e878p0, -0x1.51f34ap-2, 0x1.87bcc4p-2, -0x1.dea284p0, 0x1.b00fa2p-1, 0x1.a5c4c6p0, -0x1.f5d242p-1, 0x1.f5f8e6p-1, -0x1.fc4828p0, 0x1.69042cp-2, 0x1.d11552p-3, -0x1.1539ecp0, -0x1.a4f84ap0, 0x1.61ed22p-1, 0x1.9e27a2p0, 0x1.165ff8p-5, -0x1.73f166p-4, -0x1.fa520cp-3, 0x1.ccb44ap0 };
float keras_dense_16_test2_array[1] = { 0x1.2704f6p-1 };
float keras_dense_16_test4_array[1] = { 0x1.99ada8p-1 };
float c_dense_16_test2_array[1];
float test3_dense_13_input_input_array[20] = { -0x1.1ea68ep0, 0x1.35a41ap-2, -0x1.085c3p-1, 0x1.5e97dp0, -0x1.401126p-1, -0x1.65fafep0, -0x1.48359ep0, 0x1.45a4f6p0, 0x1.0cd75ep0, 0x1.074ed4p0, 0x1.9d95d4p-1, -0x1.fd7264p-4, 0x1.dd707ep0, 0x1.d6250cp0, 0x1.7004bcp-3, -0x1.cd7744p-2, -0x1.a1232ep-2, 0x1.0e75ap0, -0x1.aefca6p0, -0x1.fc3664p-1 };
float keras_dense_16_test3_array[1] = { 0x1.16715ep-1 };
float c_dense_16_test3_array[1];
float test4_dense_13_input_input_array[20] = { 0x1.f58748p0, -0x1.377772p0, -0x1.2b883ap-2, -0x1.0a10b8p0, 0x1.ee79acp-1, -0x1.000f46p0, -0x1.a4971cp-3, -0x1.5046p-9, -0x1.d85538p0, 0x1.f133acp-2, 0x1.4518f4p0, -0x1.0b5042p-1, -0x1.484128p-2, -0x1.a45ac8p0, -0x1.9b70bp-2, 0x1.36f734p0, 0x1.fd865p-1, -0x1.d4e7aap-3, -0x1.b3720ap0, -0x1.0f3ceap0 };
float c_dense_16_test4_array[1];
float test5_dense_13_input_input_array[20] = { -0x1.8b442cp0, -0x1.2f68cp0, -0x1.53616ap0, 0x1.532b4ap-2, 0x1.0ed8cep-3, 0x1.8999aap-2, 0x1.0be6f6p-3, -0x1.1d056cp-3, -0x1.060d6p-1, -0x1.53edc8p0, -0x1.015796p-2, 0x1.605f24p0, -0x1.35d8d8p-1, -0x1.8c837cp0, 0x1.58b57p0, -0x1.d5ff6cp-1, 0x1.4d3664p0, 0x1.1be0d8p0, 0x1.8b8cecp0, -0x1.4a0152p-2 };
float keras_dense_16_test5_array[1] = { 0x1.50ce14p-2 };
float test10_dense_13_input_input_array[20] = { -0x1.f8ea8p-2, -0x1.3f4c98p-4, -0x1.645366p0, -0x1.7b12cap0, 0x1.d161ecp0, 0x1.dc4294p-2, 0x1.538658p0, 0x1.8161acp0, 0x1.d5882cp-3, -0x1.30948cp-2, 0x1.db5bb2p-1, -0x1.fb89d2p0, 0x1.4004b4p-1, -0x1.4172cp-1, 0x1.6aba2ap0, -0x1.c85246p-1, 0x1.320734p0, -0x1.deb70ep0, 0x1.11cc3ep0, -0x1.a1c1eep0 };
l_struct_OC_k2c_tensor test2_dense_13_input_input __ATTRIBUTE_WEAK__;
float keras_dense_16_test6_array[1] = { 0x1.d08566p-1 };
l_struct_OC_k2c_tensor c_dense_16_test7 __ATTRIBUTE_WEAK__;
float c_dense_16_test7_array[1];
float keras_dense_16_test10_array[1] = { 0x1.8bd64cp-5 };
l_struct_OC_k2c_tensor keras_dense_16_test1 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test2 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test2 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test3_dense_13_input_input __ATTRIBUTE_WEAK__;
float test8_dense_13_input_input_array[20] = { 0x1.629a66p-2, -0x1.fe9ff4p-1, -0x1.a451dap-3, 0x1.10a7fcp-2, 0x1.89a7eap-6, 0x1.eb9dcep-1, 0x1.06be56p-2, -0x1.752fep0, 0x1.4b74d4p0, -0x1.979adep-5, 0x1.5e979ep-3, -0x1.a15cp0, -0x1.5acd1p0, -0x1.b81dfep0, 0x1.f8cc44p-2, 0x1.fda1b4p-2, -0x1.b7002cp0, 0x1.63e4eap0, 0x1.5939a2p0, 0x1.dcf1acp0 };
float c_dense_16_test10_array[1];
float keras_dense_16_test9_array[1] = { 0x1.ce2b1ep-2 };
float test7_dense_13_input_input_array[20] = { -0x1.ce9a8cp-1, 0x1.12a532p-1, 0x1.8447f2p0, 0x1.a30e34p-1, -0x1.b53176p-1, -0x1.a9d2e4p0, -0x1.2a680ap0, 0x1.f004fep-2, 0x1.dcc316p-1, -0x1.e12b8cp-1, -0x1.f9038ap0, 0x1.6e763ep-1, -0x1.2051c6p0, -0x1.7f2e5p0, -0x1.765246p0, -0x1.31cf34p-1, -0x1.9f36c6p-1, -0x1.cf12fcp-3, -0x1.a6530ap-2, 0x1.a3fep0 };
float c_dense_16_test5_array[1];
float keras_dense_16_test7_array[1] = { 0x1.91d832p-4 };
float keras_dense_16_test8_array[1] = { 0x1.a92bf8p-1 };
unsigned long long i __ATTRIBUTE_WEAK__;
float test9_dense_13_input_input_array[20] = { -0x1.b5fc64p-2, -0x1.fb9f36p-4, -0x1.df2766p0, 0x1.fb5c22p-2, 0x1.94c8b6p-2, -0x1.9c4792p-2, 0x1.5446aap-1, 0x1.8dd48ep0, 0x1.0e46ccp-1, 0x1.1db1dap-2, 0x1.dff4cap0, 0x1.cf0dc6p-2, 0x1.92b482p-3, 0x1.76d2bep0, -0x1.7b6a12p0, -0x1.cece6p-1, -0x1.f2631cp-1, -0x1.a564ap-1, 0x1.8c15dap0, 0x1.82447p-2 };
l_struct_OC_k2c_tensor test1_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test1 __ATTRIBUTE_WEAK__;
float c_dense_16_test8_array[1];
float test6_dense_13_input_input_array[20] = { -0x1.b66fb6p-1, -0x1.2f4628p-2, -0x1.5c433ap-4, -0x1.56eb3p-3, -0x1.1f00fep0, 0x1.d1ce76p-2, 0x1.20537p-1, 0x1.4f7a1p0, -0x1.f92ca2p0, 0x1.0723bep0, -0x1.a8f63p0, -0x1.872206p-1, 0x1.ec6276p0, -0x1.5942a4p-1, 0x1.2b8904p-1, -0x1.e27b96p0, -0x1.e14942p0, -0x1.4af97p0, -0x1.7f7538p0, -0x1.ba5a6p-1 };
float c_dense_16_test6_array[1];
float c_dense_16_test9_array[1];
l_struct_OC_k2c_tensor c_dense_16_test5 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test6 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test4_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test9_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test6_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test8_dense_13_input_input __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str1[38] = "Max absolute error for 10 tests: %e \n";
l_struct_OC_k2c_tensor c_dense_16_test8 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test5_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test10 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor test7_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test4 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test3 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test5 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test9 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test10 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test4 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test3 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test7 __ATTRIBUTE_WEAK__;
static  char aesl_internal__OC_str[35] = "Average time over 10 tests: %e s \n";
l_struct_OC_k2c_tensor test10_dense_13_input_input __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test6 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor c_dense_16_test9 __ATTRIBUTE_WEAK__;
l_struct_OC_k2c_tensor keras_dense_16_test8 __ATTRIBUTE_WEAK__;


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  float llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  float llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  float llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  float llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  float llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  float llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  float llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  float llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  float llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  float llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  float llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  float llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  float llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  float llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  float llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  float llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  float llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  float llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  float llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  float llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  float llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  float llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  float llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  float llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  float llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  float llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  float llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  float llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  float llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  float llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  float llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  float llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  float llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  float llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  float llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  float llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  float llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  float llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  float llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  float llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  float llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  float llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  float llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  float llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  float llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  float llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  float llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  float llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  float llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  float llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  float llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  float llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  float llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  float llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  float llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  float llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  float llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  float llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  float llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  float llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  float llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  float llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  float llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  float llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  float llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  float llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  float llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  float llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  float llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  float llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  float llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  float llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  float llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  float llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  float llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  float llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  float llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  float llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  float llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  float llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  float llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  float llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  float llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  float llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  float llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  float llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  float llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  float llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  float llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  float llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  float llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  float llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  float llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  float llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  float llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  float llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  float llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  float llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  float llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  float llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  float llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  float llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  float llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  float llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  float llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  float llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  float llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  float llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  float llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  float llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  float llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  float llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  float llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  float llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  float llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  float llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  float llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  float llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  float llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  float llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  float llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  float llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  float llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  float llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  float llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  float llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  float llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  float llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  float llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  float llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  float llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  float llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  float llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  float llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  float llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  float llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  float llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  float llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  float llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  float llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  float llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  float llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  float llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  float llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  float llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  float llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  float llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  float llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  float llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  float llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  float llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  float llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  float llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  float llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  float llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  float llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  float llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  float llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  float llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  float llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  float llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  float llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  float llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  float llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  float llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  float llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  float llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  float llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  float llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  float llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  float llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  float llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  float llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  float llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  float llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  float llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  float llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  float llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  float llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  float llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  float llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  float llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  float llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  float llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  float llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  float llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  float llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  float llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  float llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  float llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  float llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  float llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  float llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  float llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  float llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  float llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  float llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  float llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  float llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  float llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  unsigned int llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  unsigned int llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  double llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  double llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  double llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  double llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  double llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  unsigned int llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  float llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  unsigned int llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test7_array, i64 0, i64 0), align 4, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1_count);
  llvm_cbe_tmp__1 = (float )*((&c_dense_16_test7_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__1, *(int*)(&llvm_cbe_tmp__1));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%1, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 0, i64 0), align 8, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2_count);
  *((&c_dense_16_test7.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 1), align 8, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_3_count);
  *((&c_dense_16_test7.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 2), align 8, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_4_count);
  *((&c_dense_16_test7.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 3, i64 0), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_5_count);
  *((&c_dense_16_test7.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 3, i64 1), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_6_count);
  *((&c_dense_16_test7.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 3, i64 2), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_7_count);
  *((&c_dense_16_test7.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 3, i64 3), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_8_count);
  *((&c_dense_16_test7.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test7, i64 0, i32 3, i64 4), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_9_count);
  *((&c_dense_16_test7.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__2 = (float )*((&test1_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__2, *(int*)(&llvm_cbe_tmp__2));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%2, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_11_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__3 = (float )*((&test1_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__3, *(int*)(&llvm_cbe_tmp__3));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%3, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_13_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_14_count);
  llvm_cbe_tmp__4 = (float )*((&test1_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__4, *(int*)(&llvm_cbe_tmp__4));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%4, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_15_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__5 = (float )*((&test1_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__5, *(int*)(&llvm_cbe_tmp__5));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%5, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_17_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__6 = (float )*((&test1_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__6, *(int*)(&llvm_cbe_tmp__6));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%6, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_19_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__7 = (float )*((&test1_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__7, *(int*)(&llvm_cbe_tmp__7));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%7, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_21_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__8 = (float )*((&test1_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__8, *(int*)(&llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%8, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_23_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__9 = (float )*((&test1_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__9, *(int*)(&llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%9, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_25_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_26_count);
  llvm_cbe_tmp__10 = (float )*((&test1_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__10, *(int*)(&llvm_cbe_tmp__10));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%10, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_27_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__11 = (float )*((&test1_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%11, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_29_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__12 = (float )*((&test1_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__12, *(int*)(&llvm_cbe_tmp__12));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_31_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__13 = (float )*((&test1_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%13, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_33_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__14 = (float )*((&test1_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__14, *(int*)(&llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%14, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_35_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__15 = (float )*((&test1_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__15, *(int*)(&llvm_cbe_tmp__15));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%15, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_37_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__16 = (float )*((&test1_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__16, *(int*)(&llvm_cbe_tmp__16));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%16, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_39_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__17 = (float )*((&test1_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_41_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__18 = (float )*((&test1_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__18, *(int*)(&llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%18, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_43_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__19 = (float )*((&test1_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_45_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__20 = (float )*((&test1_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__20, *(int*)(&llvm_cbe_tmp__20));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%20, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_47_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__21 = (float )*((&test1_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%21, float* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_49_count);
  *((&test1_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 1), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_50_count);
  *((&test1_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 2), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_51_count);
  *((&test1_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_52_count);
  *((&test1_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_53_count);
  *((&test1_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_54_count);
  *((&test1_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_55_count);
  *((&test1_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_56_count);
  *((&test1_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test1_array, i64 0, i64 0), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__22 = (float )*((&keras_dense_16_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__22, *(int*)(&llvm_cbe_tmp__22));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%22, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 0, i64 0), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_58_count);
  *((&keras_dense_16_test1.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 1), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_59_count);
  *((&keras_dense_16_test1.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 2), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_60_count);
  *((&keras_dense_16_test1.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 3, i64 0), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_61_count);
  *((&keras_dense_16_test1.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 3, i64 1), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_62_count);
  *((&keras_dense_16_test1.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 3, i64 2), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_63_count);
  *((&keras_dense_16_test1.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 3, i64 3), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_64_count);
  *((&keras_dense_16_test1.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test1, i64 0, i32 3, i64 4), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_65_count);
  *((&keras_dense_16_test1.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test1_array, i64 0, i64 0), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__23 = (float )*((&c_dense_16_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%23, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 0, i64 0), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_67_count);
  *((&c_dense_16_test1.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 1), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_68_count);
  *((&c_dense_16_test1.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 2), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_69_count);
  *((&c_dense_16_test1.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 3, i64 0), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_70_count);
  *((&c_dense_16_test1.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 3, i64 1), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_71_count);
  *((&c_dense_16_test1.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 3, i64 2), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_72_count);
  *((&c_dense_16_test1.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 3, i64 3), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_73_count);
  *((&c_dense_16_test1.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test1, i64 0, i32 3, i64 4), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_74_count);
  *((&c_dense_16_test1.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__24 = (float )*((&test2_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__24, *(int*)(&llvm_cbe_tmp__24));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_76_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_77_count);
  llvm_cbe_tmp__25 = (float )*((&test2_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__25, *(int*)(&llvm_cbe_tmp__25));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%25, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_78_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__26 = (float )*((&test2_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__26, *(int*)(&llvm_cbe_tmp__26));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_80_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__26;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__27 = (float )*((&test2_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__27, *(int*)(&llvm_cbe_tmp__27));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%27, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_82_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__28 = (float )*((&test2_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__28, *(int*)(&llvm_cbe_tmp__28));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%28, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_84_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__29 = (float )*((&test2_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__29, *(int*)(&llvm_cbe_tmp__29));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%29, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_86_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__29;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__30 = (float )*((&test2_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__30, *(int*)(&llvm_cbe_tmp__30));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%30, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_88_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__31 = (float )*((&test2_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__31, *(int*)(&llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%31, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_90_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_91_count);
  llvm_cbe_tmp__32 = (float )*((&test2_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__32, *(int*)(&llvm_cbe_tmp__32));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%32, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_92_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_93_count);
  llvm_cbe_tmp__33 = (float )*((&test2_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__33, *(int*)(&llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%33, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_94_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__34 = (float )*((&test2_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__34, *(int*)(&llvm_cbe_tmp__34));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%34, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_96_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__35 = (float )*((&test2_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%35, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_98_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_99_count);
  llvm_cbe_tmp__36 = (float )*((&test2_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__36, *(int*)(&llvm_cbe_tmp__36));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%36, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_100_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__37 = (float )*((&test2_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%37, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_102_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__38 = (float )*((&test2_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__38, *(int*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%38, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_104_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_105_count);
  llvm_cbe_tmp__39 = (float )*((&test2_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__39, *(int*)(&llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%39, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_106_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__40 = (float )*((&test2_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__40, *(int*)(&llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%40, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_108_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__40;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_109_count);
  llvm_cbe_tmp__41 = (float )*((&test2_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%41, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_110_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_111_count);
  llvm_cbe_tmp__42 = (float )*((&test2_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__42, *(int*)(&llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%42, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_112_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* getelementptr inbounds ([20 x float]* @test2_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__43 = (float )*((&test2_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%43, float* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_114_count);
  *((&test2_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 1), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_115_count);
  *((&test2_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 2), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_116_count);
  *((&test2_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_117_count);
  *((&test2_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_118_count);
  *((&test2_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_119_count);
  *((&test2_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_120_count);
  *((&test2_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_121_count);
  *((&test2_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test2_array, i64 0, i64 0), align 4, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_122_count);
  llvm_cbe_tmp__44 = (float )*((&keras_dense_16_test2_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__44, *(int*)(&llvm_cbe_tmp__44));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%44, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 0, i64 0), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_123_count);
  *((&keras_dense_16_test2.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 1), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_124_count);
  *((&keras_dense_16_test2.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 2), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_125_count);
  *((&keras_dense_16_test2.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 3, i64 0), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_126_count);
  *((&keras_dense_16_test2.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 3, i64 1), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_127_count);
  *((&keras_dense_16_test2.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 3, i64 2), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_128_count);
  *((&keras_dense_16_test2.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 3, i64 3), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_129_count);
  *((&keras_dense_16_test2.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test2, i64 0, i32 3, i64 4), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_130_count);
  *((&keras_dense_16_test2.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test2_array, i64 0, i64 0), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_131_count);
  llvm_cbe_tmp__45 = (float )*((&c_dense_16_test2_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__45, *(int*)(&llvm_cbe_tmp__45));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%45, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 0, i64 0), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_132_count);
  *((&c_dense_16_test2.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 1), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_133_count);
  *((&c_dense_16_test2.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 2), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_134_count);
  *((&c_dense_16_test2.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 3, i64 0), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_135_count);
  *((&c_dense_16_test2.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 3, i64 1), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_136_count);
  *((&c_dense_16_test2.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 3, i64 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_137_count);
  *((&c_dense_16_test2.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 3, i64 3), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_138_count);
  *((&c_dense_16_test2.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test2, i64 0, i32 3, i64 4), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_139_count);
  *((&c_dense_16_test2.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_140_count);
  llvm_cbe_tmp__46 = (float )*((&test3_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__46, *(int*)(&llvm_cbe_tmp__46));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%46, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_141_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_142_count);
  llvm_cbe_tmp__47 = (float )*((&test3_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%47, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_143_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__47;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__48 = (float )*((&test3_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__48, *(int*)(&llvm_cbe_tmp__48));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_145_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__49 = (float )*((&test3_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%49, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_147_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__49;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__50 = (float )*((&test3_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__50, *(int*)(&llvm_cbe_tmp__50));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%50, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_149_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_150_count);
  llvm_cbe_tmp__51 = (float )*((&test3_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__51, *(int*)(&llvm_cbe_tmp__51));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%51, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_151_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__52 = (float )*((&test3_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__52, *(int*)(&llvm_cbe_tmp__52));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%52, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_153_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__53 = (float )*((&test3_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%53, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_155_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__54 = (float )*((&test3_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__54, *(int*)(&llvm_cbe_tmp__54));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%54, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_157_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__55 = (float )*((&test3_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__55, *(int*)(&llvm_cbe_tmp__55));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%55, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_159_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__55;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__56 = (float )*((&test3_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__56, *(int*)(&llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%56, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_161_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__57 = (float )*((&test3_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__57, *(int*)(&llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%57, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_163_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__57;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_164_count);
  llvm_cbe_tmp__58 = (float )*((&test3_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__58, *(int*)(&llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%58, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_165_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__59 = (float )*((&test3_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%59, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_167_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__59;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__60 = (float )*((&test3_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__60, *(int*)(&llvm_cbe_tmp__60));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%60, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_169_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__61 = (float )*((&test3_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%61, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_171_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__61;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__62 = (float )*((&test3_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__62, *(int*)(&llvm_cbe_tmp__62));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%62, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_173_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__63 = (float )*((&test3_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%63, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_175_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__64 = (float )*((&test3_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__64, *(int*)(&llvm_cbe_tmp__64));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%64, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_177_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* getelementptr inbounds ([20 x float]* @test3_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_178_count);
  llvm_cbe_tmp__65 = (float )*((&test3_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%65, float* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_179_count);
  *((&test3_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 1), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_180_count);
  *((&test3_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_181_count);
  *((&test3_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_182_count);
  *((&test3_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_183_count);
  *((&test3_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_184_count);
  *((&test3_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_185_count);
  *((&test3_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_186_count);
  *((&test3_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test3_array, i64 0, i64 0), align 4, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__66 = (float )*((&keras_dense_16_test3_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__66, *(int*)(&llvm_cbe_tmp__66));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%66, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 0, i64 0), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_188_count);
  *((&keras_dense_16_test3.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 1), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_189_count);
  *((&keras_dense_16_test3.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 2), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_190_count);
  *((&keras_dense_16_test3.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 3, i64 0), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_191_count);
  *((&keras_dense_16_test3.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 3, i64 1), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_192_count);
  *((&keras_dense_16_test3.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 3, i64 2), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_193_count);
  *((&keras_dense_16_test3.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 3, i64 3), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_194_count);
  *((&keras_dense_16_test3.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test3, i64 0, i32 3, i64 4), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_195_count);
  *((&keras_dense_16_test3.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test3_array, i64 0, i64 0), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__67 = (float )*((&c_dense_16_test3_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%67, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 0, i64 0), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_197_count);
  *((&c_dense_16_test3.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 1), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_198_count);
  *((&c_dense_16_test3.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 2), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_199_count);
  *((&c_dense_16_test3.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 3, i64 0), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_200_count);
  *((&c_dense_16_test3.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 3, i64 1), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_201_count);
  *((&c_dense_16_test3.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 3, i64 2), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_202_count);
  *((&c_dense_16_test3.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 3, i64 3), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_203_count);
  *((&c_dense_16_test3.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test3, i64 0, i32 3, i64 4), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_204_count);
  *((&c_dense_16_test3.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__68 = (float )*((&test4_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__68, *(int*)(&llvm_cbe_tmp__68));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%68, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_206_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__69 = (float )*((&test4_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__69, *(int*)(&llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%69, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_208_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__69;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__70 = (float )*((&test4_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__70, *(int*)(&llvm_cbe_tmp__70));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%70, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_210_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__71 = (float )*((&test4_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%71, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_212_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_213_count);
  llvm_cbe_tmp__72 = (float )*((&test4_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__72, *(int*)(&llvm_cbe_tmp__72));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%72, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_214_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__72;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__73 = (float )*((&test4_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%73, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_216_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__73;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__74 = (float )*((&test4_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__74, *(int*)(&llvm_cbe_tmp__74));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_218_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__75 = (float )*((&test4_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__75, *(int*)(&llvm_cbe_tmp__75));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%75, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_220_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__76 = (float )*((&test4_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__76, *(int*)(&llvm_cbe_tmp__76));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%76, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_222_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__76;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_223_count);
  llvm_cbe_tmp__77 = (float )*((&test4_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__77, *(int*)(&llvm_cbe_tmp__77));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%77, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_224_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_225_count);
  llvm_cbe_tmp__78 = (float )*((&test4_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__78, *(int*)(&llvm_cbe_tmp__78));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%78, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_226_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__79 = (float )*((&test4_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__79, *(int*)(&llvm_cbe_tmp__79));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%79, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_228_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__79;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_229_count);
  llvm_cbe_tmp__80 = (float )*((&test4_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__80, *(int*)(&llvm_cbe_tmp__80));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%80, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_230_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__80;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_231_count);
  llvm_cbe_tmp__81 = (float )*((&test4_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__81, *(int*)(&llvm_cbe_tmp__81));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%81, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_232_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_233_count);
  llvm_cbe_tmp__82 = (float )*((&test4_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__82, *(int*)(&llvm_cbe_tmp__82));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%82, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_234_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__83 = (float )*((&test4_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__83, *(int*)(&llvm_cbe_tmp__83));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%83, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_236_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_237_count);
  llvm_cbe_tmp__84 = (float )*((&test4_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__84, *(int*)(&llvm_cbe_tmp__84));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%84, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_238_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_239_count);
  llvm_cbe_tmp__85 = (float )*((&test4_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__85, *(int*)(&llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%85, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_240_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__86 = (float )*((&test4_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__86, *(int*)(&llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%86, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_242_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__86;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = load float* getelementptr inbounds ([20 x float]* @test4_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_243_count);
  llvm_cbe_tmp__87 = (float )*((&test4_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__87, *(int*)(&llvm_cbe_tmp__87));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%87, float* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_244_count);
  *((&test4_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 1), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_245_count);
  *((&test4_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 2), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_246_count);
  *((&test4_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_247_count);
  *((&test4_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_248_count);
  *((&test4_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_249_count);
  *((&test4_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_250_count);
  *((&test4_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_251_count);
  *((&test4_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test4_array, i64 0, i64 0), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__88 = (float )*((&keras_dense_16_test4_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__88, *(int*)(&llvm_cbe_tmp__88));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%88, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 0, i64 0), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_253_count);
  *((&keras_dense_16_test4.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 1), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_254_count);
  *((&keras_dense_16_test4.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 2), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_255_count);
  *((&keras_dense_16_test4.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 3, i64 0), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_256_count);
  *((&keras_dense_16_test4.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 3, i64 1), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_257_count);
  *((&keras_dense_16_test4.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 3, i64 2), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_258_count);
  *((&keras_dense_16_test4.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 3, i64 3), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_259_count);
  *((&keras_dense_16_test4.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test4, i64 0, i32 3, i64 4), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_260_count);
  *((&keras_dense_16_test4.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test4_array, i64 0, i64 0), align 4, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__89 = (float )*((&c_dense_16_test4_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__89, *(int*)(&llvm_cbe_tmp__89));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%89, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 0, i64 0), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_262_count);
  *((&c_dense_16_test4.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 1), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_263_count);
  *((&c_dense_16_test4.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 2), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_264_count);
  *((&c_dense_16_test4.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 3, i64 0), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_265_count);
  *((&c_dense_16_test4.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 3, i64 1), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_266_count);
  *((&c_dense_16_test4.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 3, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_267_count);
  *((&c_dense_16_test4.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 3, i64 3), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_268_count);
  *((&c_dense_16_test4.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test4, i64 0, i32 3, i64 4), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_269_count);
  *((&c_dense_16_test4.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_270_count);
  llvm_cbe_tmp__90 = (float )*((&test5_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__90, *(int*)(&llvm_cbe_tmp__90));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%90, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_271_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__90;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_272_count);
  llvm_cbe_tmp__91 = (float )*((&test5_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__91, *(int*)(&llvm_cbe_tmp__91));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%91, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_273_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_274_count);
  llvm_cbe_tmp__92 = (float )*((&test5_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__92, *(int*)(&llvm_cbe_tmp__92));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%92, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_275_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__93 = (float )*((&test5_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__93, *(int*)(&llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%93, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_277_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__93;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_278_count);
  llvm_cbe_tmp__94 = (float )*((&test5_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__94, *(int*)(&llvm_cbe_tmp__94));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%94, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_279_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_280_count);
  llvm_cbe_tmp__95 = (float )*((&test5_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__95, *(int*)(&llvm_cbe_tmp__95));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%95, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_281_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_282_count);
  llvm_cbe_tmp__96 = (float )*((&test5_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__96, *(int*)(&llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%96, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_283_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__97 = (float )*((&test5_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__97, *(int*)(&llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%97, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_285_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__98 = (float )*((&test5_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__98, *(int*)(&llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%98, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_287_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__98;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__99 = (float )*((&test5_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__99, *(int*)(&llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%99, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_289_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__99;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__100 = (float )*((&test5_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__100, *(int*)(&llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%100, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_291_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__101 = (float )*((&test5_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__101, *(int*)(&llvm_cbe_tmp__101));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%101, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_293_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__101;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_294_count);
  llvm_cbe_tmp__102 = (float )*((&test5_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__102, *(int*)(&llvm_cbe_tmp__102));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%102, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_295_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__102);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__103 = (float )*((&test5_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__103, *(int*)(&llvm_cbe_tmp__103));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%103, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_297_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_298_count);
  llvm_cbe_tmp__104 = (float )*((&test5_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__104, *(int*)(&llvm_cbe_tmp__104));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%104, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_299_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__104);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_300_count);
  llvm_cbe_tmp__105 = (float )*((&test5_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__105, *(int*)(&llvm_cbe_tmp__105));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%105, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_301_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__105;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__106 = (float )*((&test5_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__106, *(int*)(&llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%106, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_303_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__107 = (float )*((&test5_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__107, *(int*)(&llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%107, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_305_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__107;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__108 = (float )*((&test5_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__108, *(int*)(&llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%108, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_307_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = load float* getelementptr inbounds ([20 x float]* @test5_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__109 = (float )*((&test5_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__109, *(int*)(&llvm_cbe_tmp__109));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%109, float* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_309_count);
  *((&test5_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 1), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_310_count);
  *((&test5_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_311_count);
  *((&test5_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_312_count);
  *((&test5_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_313_count);
  *((&test5_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_314_count);
  *((&test5_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_315_count);
  *((&test5_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_316_count);
  *((&test5_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test5_array, i64 0, i64 0), align 4, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_317_count);
  llvm_cbe_tmp__110 = (float )*((&keras_dense_16_test5_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__110, *(int*)(&llvm_cbe_tmp__110));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%110, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 0, i64 0), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_318_count);
  *((&keras_dense_16_test5.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 1), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_319_count);
  *((&keras_dense_16_test5.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 2), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_320_count);
  *((&keras_dense_16_test5.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 3, i64 0), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_321_count);
  *((&keras_dense_16_test5.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 3, i64 1), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_322_count);
  *((&keras_dense_16_test5.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 3, i64 2), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_323_count);
  *((&keras_dense_16_test5.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 3, i64 3), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_324_count);
  *((&keras_dense_16_test5.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test5, i64 0, i32 3, i64 4), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_325_count);
  *((&keras_dense_16_test5.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test5_array, i64 0, i64 0), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_326_count);
  llvm_cbe_tmp__111 = (float )*((&c_dense_16_test5_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__111, *(int*)(&llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%111, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 0, i64 0), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_327_count);
  *((&c_dense_16_test5.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__111;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 1), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_328_count);
  *((&c_dense_16_test5.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 2), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_329_count);
  *((&c_dense_16_test5.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 3, i64 0), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_330_count);
  *((&c_dense_16_test5.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 3, i64 1), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_331_count);
  *((&c_dense_16_test5.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 3, i64 2), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_332_count);
  *((&c_dense_16_test5.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 3, i64 3), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_333_count);
  *((&c_dense_16_test5.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test5, i64 0, i32 3, i64 4), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_334_count);
  *((&c_dense_16_test5.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_335_count);
  llvm_cbe_tmp__112 = (float )*((&test6_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__112, *(int*)(&llvm_cbe_tmp__112));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%112, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_336_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__112;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_337_count);
  llvm_cbe_tmp__113 = (float )*((&test6_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__113, *(int*)(&llvm_cbe_tmp__113));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%113, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_338_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_339_count);
  llvm_cbe_tmp__114 = (float )*((&test6_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%114, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_340_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_341_count);
  llvm_cbe_tmp__115 = (float )*((&test6_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__115, *(int*)(&llvm_cbe_tmp__115));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%115, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_342_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_343_count);
  llvm_cbe_tmp__116 = (float )*((&test6_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__116, *(int*)(&llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%116, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_344_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__116;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_345_count);
  llvm_cbe_tmp__117 = (float )*((&test6_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%117, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_346_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__117;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_347_count);
  llvm_cbe_tmp__118 = (float )*((&test6_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__118, *(int*)(&llvm_cbe_tmp__118));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%118, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_348_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_349_count);
  llvm_cbe_tmp__119 = (float )*((&test6_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__119, *(int*)(&llvm_cbe_tmp__119));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%119, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_350_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__120 = (float )*((&test6_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__120, *(int*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%120, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_352_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_353_count);
  llvm_cbe_tmp__121 = (float )*((&test6_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__121, *(int*)(&llvm_cbe_tmp__121));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%121, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_354_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_355_count);
  llvm_cbe_tmp__122 = (float )*((&test6_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__122, *(int*)(&llvm_cbe_tmp__122));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%122, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_356_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_357_count);
  llvm_cbe_tmp__123 = (float )*((&test6_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__123, *(int*)(&llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%123, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_358_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_359_count);
  llvm_cbe_tmp__124 = (float )*((&test6_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__124, *(int*)(&llvm_cbe_tmp__124));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%124, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_360_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_361_count);
  llvm_cbe_tmp__125 = (float )*((&test6_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__125, *(int*)(&llvm_cbe_tmp__125));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%125, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_362_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_363_count);
  llvm_cbe_tmp__126 = (float )*((&test6_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__126, *(int*)(&llvm_cbe_tmp__126));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%126, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_364_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__126;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__127 = (float )*((&test6_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__127, *(int*)(&llvm_cbe_tmp__127));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%127, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_366_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_367_count);
  llvm_cbe_tmp__128 = (float )*((&test6_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__128, *(int*)(&llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%128, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_368_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__128;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_369_count);
  llvm_cbe_tmp__129 = (float )*((&test6_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__129, *(int*)(&llvm_cbe_tmp__129));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%129, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_370_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__129;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__129);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_371_count);
  llvm_cbe_tmp__130 = (float )*((&test6_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__130, *(int*)(&llvm_cbe_tmp__130));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%130, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_372_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__130;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = load float* getelementptr inbounds ([20 x float]* @test6_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_373_count);
  llvm_cbe_tmp__131 = (float )*((&test6_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__131, *(int*)(&llvm_cbe_tmp__131));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%131, float* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_374_count);
  *((&test6_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 1), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_375_count);
  *((&test6_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 2), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_376_count);
  *((&test6_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_377_count);
  *((&test6_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_378_count);
  *((&test6_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_379_count);
  *((&test6_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_380_count);
  *((&test6_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_381_count);
  *((&test6_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test6_array, i64 0, i64 0), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_382_count);
  llvm_cbe_tmp__132 = (float )*((&keras_dense_16_test6_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__132, *(int*)(&llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%132, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 0, i64 0), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_383_count);
  *((&keras_dense_16_test6.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 1), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_384_count);
  *((&keras_dense_16_test6.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 2), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_385_count);
  *((&keras_dense_16_test6.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 3, i64 0), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_386_count);
  *((&keras_dense_16_test6.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 3, i64 1), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_387_count);
  *((&keras_dense_16_test6.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 3, i64 2), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_388_count);
  *((&keras_dense_16_test6.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 3, i64 3), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_389_count);
  *((&keras_dense_16_test6.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test6, i64 0, i32 3, i64 4), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_390_count);
  *((&keras_dense_16_test6.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test6_array, i64 0, i64 0), align 4, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_391_count);
  llvm_cbe_tmp__133 = (float )*((&c_dense_16_test6_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__133, *(int*)(&llvm_cbe_tmp__133));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%133, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 0, i64 0), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_392_count);
  *((&c_dense_16_test6.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 1), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_393_count);
  *((&c_dense_16_test6.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 2), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_394_count);
  *((&c_dense_16_test6.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 3, i64 0), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_395_count);
  *((&c_dense_16_test6.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 3, i64 1), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_396_count);
  *((&c_dense_16_test6.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 3, i64 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_397_count);
  *((&c_dense_16_test6.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 3, i64 3), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_398_count);
  *((&c_dense_16_test6.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test6, i64 0, i32 3, i64 4), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_399_count);
  *((&c_dense_16_test6.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_400_count);
  llvm_cbe_tmp__134 = (float )*((&test7_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__134, *(int*)(&llvm_cbe_tmp__134));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%134, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_401_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__134;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_402_count);
  llvm_cbe_tmp__135 = (float )*((&test7_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__135, *(int*)(&llvm_cbe_tmp__135));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%135, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_403_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_404_count);
  llvm_cbe_tmp__136 = (float )*((&test7_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__136, *(int*)(&llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%136, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_405_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__136;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_406_count);
  llvm_cbe_tmp__137 = (float )*((&test7_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__137, *(int*)(&llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%137, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_407_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_408_count);
  llvm_cbe_tmp__138 = (float )*((&test7_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__138, *(int*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%138, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_409_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__138;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_410_count);
  llvm_cbe_tmp__139 = (float )*((&test7_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__139, *(int*)(&llvm_cbe_tmp__139));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%139, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_411_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_412_count);
  llvm_cbe_tmp__140 = (float )*((&test7_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__140, *(int*)(&llvm_cbe_tmp__140));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%140, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_413_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_414_count);
  llvm_cbe_tmp__141 = (float )*((&test7_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__141, *(int*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%141, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_415_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__141;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__142 = (float )*((&test7_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__142, *(int*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%142, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_417_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__142;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_418_count);
  llvm_cbe_tmp__143 = (float )*((&test7_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__143, *(int*)(&llvm_cbe_tmp__143));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%143, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_419_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_420_count);
  llvm_cbe_tmp__144 = (float )*((&test7_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__144, *(int*)(&llvm_cbe_tmp__144));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%144, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_421_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__144;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_422_count);
  llvm_cbe_tmp__145 = (float )*((&test7_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__145, *(int*)(&llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%145, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_423_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__145;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_424_count);
  llvm_cbe_tmp__146 = (float )*((&test7_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__146, *(int*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%146, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_425_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_426_count);
  llvm_cbe_tmp__147 = (float )*((&test7_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__147, *(int*)(&llvm_cbe_tmp__147));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%147, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_427_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_428_count);
  llvm_cbe_tmp__148 = (float )*((&test7_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__148, *(int*)(&llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%148, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_429_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__148;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__149 = (float )*((&test7_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__149, *(int*)(&llvm_cbe_tmp__149));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%149, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_431_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_432_count);
  llvm_cbe_tmp__150 = (float )*((&test7_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__150, *(int*)(&llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%150, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_433_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_434_count);
  llvm_cbe_tmp__151 = (float )*((&test7_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__151, *(int*)(&llvm_cbe_tmp__151));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%151, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_435_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_436_count);
  llvm_cbe_tmp__152 = (float )*((&test7_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__152, *(int*)(&llvm_cbe_tmp__152));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%152, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_437_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = load float* getelementptr inbounds ([20 x float]* @test7_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_438_count);
  llvm_cbe_tmp__153 = (float )*((&test7_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__153, *(int*)(&llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%153, float* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_439_count);
  *((&test7_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 1), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_440_count);
  *((&test7_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_441_count);
  *((&test7_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_442_count);
  *((&test7_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_443_count);
  *((&test7_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_444_count);
  *((&test7_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_445_count);
  *((&test7_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_446_count);
  *((&test7_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test7_array, i64 0, i64 0), align 4, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_447_count);
  llvm_cbe_tmp__154 = (float )*((&keras_dense_16_test7_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__154, *(int*)(&llvm_cbe_tmp__154));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%154, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 0, i64 0), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_448_count);
  *((&keras_dense_16_test7.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__154;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__154);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 1), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_449_count);
  *((&keras_dense_16_test7.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 2), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_450_count);
  *((&keras_dense_16_test7.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 3, i64 0), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_451_count);
  *((&keras_dense_16_test7.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 3, i64 1), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_452_count);
  *((&keras_dense_16_test7.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 3, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_453_count);
  *((&keras_dense_16_test7.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 3, i64 3), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_454_count);
  *((&keras_dense_16_test7.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test7, i64 0, i32 3, i64 4), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_455_count);
  *((&keras_dense_16_test7.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_456_count);
  llvm_cbe_tmp__155 = (float )*((&test8_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__155, *(int*)(&llvm_cbe_tmp__155));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%155, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_457_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__155;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_458_count);
  llvm_cbe_tmp__156 = (float )*((&test8_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__156, *(int*)(&llvm_cbe_tmp__156));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%156, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_459_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_460_count);
  llvm_cbe_tmp__157 = (float )*((&test8_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__157, *(int*)(&llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%157, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_461_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_462_count);
  llvm_cbe_tmp__158 = (float )*((&test8_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__158, *(int*)(&llvm_cbe_tmp__158));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%158, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_463_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_464_count);
  llvm_cbe_tmp__159 = (float )*((&test8_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__159, *(int*)(&llvm_cbe_tmp__159));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%159, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_465_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_466_count);
  llvm_cbe_tmp__160 = (float )*((&test8_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__160, *(int*)(&llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%160, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_467_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__161 = (float )*((&test8_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__161, *(int*)(&llvm_cbe_tmp__161));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%161, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_469_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_470_count);
  llvm_cbe_tmp__162 = (float )*((&test8_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%162, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_471_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__163 = (float )*((&test8_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__163, *(int*)(&llvm_cbe_tmp__163));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%163, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_473_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__164 = (float )*((&test8_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__164, *(int*)(&llvm_cbe_tmp__164));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%164, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_475_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_476_count);
  llvm_cbe_tmp__165 = (float )*((&test8_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__165, *(int*)(&llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%165, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_477_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__166 = (float )*((&test8_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__166, *(int*)(&llvm_cbe_tmp__166));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%166, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_479_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_480_count);
  llvm_cbe_tmp__167 = (float )*((&test8_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__167, *(int*)(&llvm_cbe_tmp__167));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%167, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_481_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__168 = (float )*((&test8_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__168, *(int*)(&llvm_cbe_tmp__168));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%168, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_483_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__169 = (float )*((&test8_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%169, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_485_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__169;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_486_count);
  llvm_cbe_tmp__170 = (float )*((&test8_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__170, *(int*)(&llvm_cbe_tmp__170));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%170, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_487_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_488_count);
  llvm_cbe_tmp__171 = (float )*((&test8_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__171, *(int*)(&llvm_cbe_tmp__171));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%171, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_489_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__171;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_490_count);
  llvm_cbe_tmp__172 = (float )*((&test8_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__172, *(int*)(&llvm_cbe_tmp__172));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%172, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_491_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_492_count);
  llvm_cbe_tmp__173 = (float )*((&test8_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__173, *(int*)(&llvm_cbe_tmp__173));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%173, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_493_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__173;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = load float* getelementptr inbounds ([20 x float]* @test8_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_494_count);
  llvm_cbe_tmp__174 = (float )*((&test8_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__174, *(int*)(&llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%174, float* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_495_count);
  *((&test8_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__174;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 1), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_496_count);
  *((&test8_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_497_count);
  *((&test8_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_498_count);
  *((&test8_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_499_count);
  *((&test8_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_500_count);
  *((&test8_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_501_count);
  *((&test8_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_502_count);
  *((&test8_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test8_array, i64 0, i64 0), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_503_count);
  llvm_cbe_tmp__175 = (float )*((&keras_dense_16_test8_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__175, *(int*)(&llvm_cbe_tmp__175));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%175, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 0, i64 0), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_504_count);
  *((&keras_dense_16_test8.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__175;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 1), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_505_count);
  *((&keras_dense_16_test8.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 2), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_506_count);
  *((&keras_dense_16_test8.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 3, i64 0), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_507_count);
  *((&keras_dense_16_test8.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 3, i64 1), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_508_count);
  *((&keras_dense_16_test8.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 3, i64 2), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_509_count);
  *((&keras_dense_16_test8.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 3, i64 3), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_510_count);
  *((&keras_dense_16_test8.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test8, i64 0, i32 3, i64 4), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_511_count);
  *((&keras_dense_16_test8.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test8_array, i64 0, i64 0), align 4, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_512_count);
  llvm_cbe_tmp__176 = (float )*((&c_dense_16_test8_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__176, *(int*)(&llvm_cbe_tmp__176));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%176, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 0, i64 0), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_513_count);
  *((&c_dense_16_test8.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__176;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 1), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_514_count);
  *((&c_dense_16_test8.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 2), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_515_count);
  *((&c_dense_16_test8.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 3, i64 0), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_516_count);
  *((&c_dense_16_test8.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 3, i64 1), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_517_count);
  *((&c_dense_16_test8.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 3, i64 2), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_518_count);
  *((&c_dense_16_test8.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 3, i64 3), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_519_count);
  *((&c_dense_16_test8.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test8, i64 0, i32 3, i64 4), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_520_count);
  *((&c_dense_16_test8.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%177 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_521_count);
  llvm_cbe_tmp__177 = (float )*((&test9_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__177, *(int*)(&llvm_cbe_tmp__177));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%177, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_522_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__177;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__177);
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_523_count);
  llvm_cbe_tmp__178 = (float )*((&test9_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__178, *(int*)(&llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%178, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_524_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_525_count);
  llvm_cbe_tmp__179 = (float )*((&test9_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__179, *(int*)(&llvm_cbe_tmp__179));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%179, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_526_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__179;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__179);
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_527_count);
  llvm_cbe_tmp__180 = (float )*((&test9_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__180, *(int*)(&llvm_cbe_tmp__180));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%180, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_528_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__180;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__180);
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_529_count);
  llvm_cbe_tmp__181 = (float )*((&test9_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__181, *(int*)(&llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%181, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_530_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_531_count);
  llvm_cbe_tmp__182 = (float )*((&test9_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__182, *(int*)(&llvm_cbe_tmp__182));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%182, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_532_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__182;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__183 = (float )*((&test9_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__183, *(int*)(&llvm_cbe_tmp__183));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%183, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_534_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__183;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_535_count);
  llvm_cbe_tmp__184 = (float )*((&test9_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__184, *(int*)(&llvm_cbe_tmp__184));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%184, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_536_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_537_count);
  llvm_cbe_tmp__185 = (float )*((&test9_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__185, *(int*)(&llvm_cbe_tmp__185));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%185, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_538_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__185;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_539_count);
  llvm_cbe_tmp__186 = (float )*((&test9_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__186, *(int*)(&llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%186, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_540_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_541_count);
  llvm_cbe_tmp__187 = (float )*((&test9_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__187, *(int*)(&llvm_cbe_tmp__187));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%187, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_542_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__187;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_543_count);
  llvm_cbe_tmp__188 = (float )*((&test9_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__188, *(int*)(&llvm_cbe_tmp__188));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%188, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_544_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__188;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_545_count);
  llvm_cbe_tmp__189 = (float )*((&test9_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__189, *(int*)(&llvm_cbe_tmp__189));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%189, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_546_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__189;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_547_count);
  llvm_cbe_tmp__190 = (float )*((&test9_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__190, *(int*)(&llvm_cbe_tmp__190));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%190, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_548_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__190;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_549_count);
  llvm_cbe_tmp__191 = (float )*((&test9_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__191, *(int*)(&llvm_cbe_tmp__191));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%191, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_550_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__191;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_551_count);
  llvm_cbe_tmp__192 = (float )*((&test9_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__192, *(int*)(&llvm_cbe_tmp__192));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%192, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_552_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__192;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_553_count);
  llvm_cbe_tmp__193 = (float )*((&test9_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__193, *(int*)(&llvm_cbe_tmp__193));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%193, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_554_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__193;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_555_count);
  llvm_cbe_tmp__194 = (float )*((&test9_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__194, *(int*)(&llvm_cbe_tmp__194));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%194, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_556_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_557_count);
  llvm_cbe_tmp__195 = (float )*((&test9_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__195, *(int*)(&llvm_cbe_tmp__195));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%195, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_558_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__195;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%196 = load float* getelementptr inbounds ([20 x float]* @test9_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_559_count);
  llvm_cbe_tmp__196 = (float )*((&test9_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__196, *(int*)(&llvm_cbe_tmp__196));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%196, float* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_560_count);
  *((&test9_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 1), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_561_count);
  *((&test9_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 2), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_562_count);
  *((&test9_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_563_count);
  *((&test9_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_564_count);
  *((&test9_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_565_count);
  *((&test9_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_566_count);
  *((&test9_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_567_count);
  *((&test9_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test9_array, i64 0, i64 0), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_568_count);
  llvm_cbe_tmp__197 = (float )*((&keras_dense_16_test9_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__197, *(int*)(&llvm_cbe_tmp__197));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%197, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 0, i64 0), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_569_count);
  *((&keras_dense_16_test9.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__197;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 1), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_570_count);
  *((&keras_dense_16_test9.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 2), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_571_count);
  *((&keras_dense_16_test9.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 3, i64 0), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_572_count);
  *((&keras_dense_16_test9.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 3, i64 1), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_573_count);
  *((&keras_dense_16_test9.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 3, i64 2), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_574_count);
  *((&keras_dense_16_test9.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 3, i64 3), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_575_count);
  *((&keras_dense_16_test9.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test9, i64 0, i32 3, i64 4), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_576_count);
  *((&keras_dense_16_test9.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%198 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test9_array, i64 0, i64 0), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__198 = (float )*((&c_dense_16_test9_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__198, *(int*)(&llvm_cbe_tmp__198));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%198, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 0, i64 0), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_578_count);
  *((&c_dense_16_test9.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 1), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_579_count);
  *((&c_dense_16_test9.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 2), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_580_count);
  *((&c_dense_16_test9.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 3, i64 0), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_581_count);
  *((&c_dense_16_test9.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 3, i64 1), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_582_count);
  *((&c_dense_16_test9.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 3, i64 2), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_583_count);
  *((&c_dense_16_test9.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 3, i64 3), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_584_count);
  *((&c_dense_16_test9.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test9, i64 0, i32 3, i64 4), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_585_count);
  *((&c_dense_16_test9.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%199 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 0), align 16, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_586_count);
  llvm_cbe_tmp__199 = (float )*((&test10_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__199, *(int*)(&llvm_cbe_tmp__199));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%199, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 0), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_587_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__199;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%200 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 1), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_588_count);
  llvm_cbe_tmp__200 = (float )*((&test10_dense_13_input_input_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__200, *(int*)(&llvm_cbe_tmp__200));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%200, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 1), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_589_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 2), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_590_count);
  llvm_cbe_tmp__201 = (float )*((&test10_dense_13_input_input_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__201, *(int*)(&llvm_cbe_tmp__201));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%201, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 2), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_591_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 3), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_592_count);
  llvm_cbe_tmp__202 = (float )*((&test10_dense_13_input_input_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__202, *(int*)(&llvm_cbe_tmp__202));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%202, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 3), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_593_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 4), align 16, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_594_count);
  llvm_cbe_tmp__203 = (float )*((&test10_dense_13_input_input_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__203, *(int*)(&llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%203, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 4), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_595_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__203;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 5), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_596_count);
  llvm_cbe_tmp__204 = (float )*((&test10_dense_13_input_input_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__204, *(int*)(&llvm_cbe_tmp__204));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%204, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 5), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_597_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__204;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__204);
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 6), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_598_count);
  llvm_cbe_tmp__205 = (float )*((&test10_dense_13_input_input_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__205, *(int*)(&llvm_cbe_tmp__205));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%205, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 6), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_599_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__205;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 7), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_600_count);
  llvm_cbe_tmp__206 = (float )*((&test10_dense_13_input_input_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__206, *(int*)(&llvm_cbe_tmp__206));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%206, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 7), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_601_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__206;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%207 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 8), align 16, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_602_count);
  llvm_cbe_tmp__207 = (float )*((&test10_dense_13_input_input_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__207, *(int*)(&llvm_cbe_tmp__207));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%207, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 8), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_603_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__207;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 9), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_604_count);
  llvm_cbe_tmp__208 = (float )*((&test10_dense_13_input_input_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__208, *(int*)(&llvm_cbe_tmp__208));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%208, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 9), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_605_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 10), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_606_count);
  llvm_cbe_tmp__209 = (float )*((&test10_dense_13_input_input_array[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__209, *(int*)(&llvm_cbe_tmp__209));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%209, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 10), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_607_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )10ull))])) = llvm_cbe_tmp__209;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  %%210 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 11), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_608_count);
  llvm_cbe_tmp__210 = (float )*((&test10_dense_13_input_input_array[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__210, *(int*)(&llvm_cbe_tmp__210));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%210, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 11), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_609_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )11ull))])) = llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%211 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 12), align 16, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_610_count);
  llvm_cbe_tmp__211 = (float )*((&test10_dense_13_input_input_array[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__211, *(int*)(&llvm_cbe_tmp__211));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%211, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 12), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_611_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )12ull))])) = llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%212 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 13), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__212 = (float )*((&test10_dense_13_input_input_array[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__212, *(int*)(&llvm_cbe_tmp__212));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%212, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 13), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_613_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )13ull))])) = llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%213 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 14), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_614_count);
  llvm_cbe_tmp__213 = (float )*((&test10_dense_13_input_input_array[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__213, *(int*)(&llvm_cbe_tmp__213));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%213, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 14), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_615_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )14ull))])) = llvm_cbe_tmp__213;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 15), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_616_count);
  llvm_cbe_tmp__214 = (float )*((&test10_dense_13_input_input_array[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__214, *(int*)(&llvm_cbe_tmp__214));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%214, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 15), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_617_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )15ull))])) = llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 16), align 16, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_618_count);
  llvm_cbe_tmp__215 = (float )*((&test10_dense_13_input_input_array[(((signed long long )16ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__215, *(int*)(&llvm_cbe_tmp__215));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%215, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 16), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_619_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )16ull))])) = llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 17), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__216 = (float )*((&test10_dense_13_input_input_array[(((signed long long )17ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__216, *(int*)(&llvm_cbe_tmp__216));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%216, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 17), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_621_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )17ull))])) = llvm_cbe_tmp__216;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%217 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 18), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_622_count);
  llvm_cbe_tmp__217 = (float )*((&test10_dense_13_input_input_array[(((signed long long )18ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__217, *(int*)(&llvm_cbe_tmp__217));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%217, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 18), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_623_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )18ull))])) = llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%218 = load float* getelementptr inbounds ([20 x float]* @test10_dense_13_input_input_array, i64 0, i64 19), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_624_count);
  llvm_cbe_tmp__218 = (float )*((&test10_dense_13_input_input_array[(((signed long long )19ull))
#ifdef AESL_BC_SIM
 % 20
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__218, *(int*)(&llvm_cbe_tmp__218));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%218, float* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 0, i64 19), align 4, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_625_count);
  *((&test10_dense_13_input_input.field0[(((signed long long )19ull))])) = llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__218);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 1), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_626_count);
  *((&test10_dense_13_input_input.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 2), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_627_count);
  *((&test10_dense_13_input_input.field2)) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 20, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 3, i64 0), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_628_count);
  *((&test10_dense_13_input_input.field3[(((signed long long )0ull))])) = 20ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 20ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 3, i64 1), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_629_count);
  *((&test10_dense_13_input_input.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 3, i64 2), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_630_count);
  *((&test10_dense_13_input_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 3, i64 3), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_631_count);
  *((&test10_dense_13_input_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_dense_13_input_input, i64 0, i32 3, i64 4), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_632_count);
  *((&test10_dense_13_input_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%219 = load float* getelementptr inbounds ([1 x float]* @keras_dense_16_test10_array, i64 0, i64 0), align 4, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_633_count);
  llvm_cbe_tmp__219 = (float )*((&keras_dense_16_test10_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__219, *(int*)(&llvm_cbe_tmp__219));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%219, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 0, i64 0), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_634_count);
  *((&keras_dense_16_test10.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__219;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 1), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_635_count);
  *((&keras_dense_16_test10.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 2), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_636_count);
  *((&keras_dense_16_test10.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 3, i64 0), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_637_count);
  *((&keras_dense_16_test10.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 3, i64 1), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_638_count);
  *((&keras_dense_16_test10.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 3, i64 2), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_639_count);
  *((&keras_dense_16_test10.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 3, i64 3), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_640_count);
  *((&keras_dense_16_test10.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_16_test10, i64 0, i32 3, i64 4), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_641_count);
  *((&keras_dense_16_test10.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = load float* getelementptr inbounds ([1 x float]* @c_dense_16_test10_array, i64 0, i64 0), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_642_count);
  llvm_cbe_tmp__220 = (float )*((&c_dense_16_test10_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__220, *(int*)(&llvm_cbe_tmp__220));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%220, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 0, i64 0), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_643_count);
  *((&c_dense_16_test10.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__220;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* @i, align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_644_count);
  *(&i) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 1), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_645_count);
  *((&c_dense_16_test10.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 2), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_646_count);
  *((&c_dense_16_test10.field2)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 3, i64 0), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_647_count);
  *((&c_dense_16_test10.field3[(((signed long long )0ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 3, i64 1), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_648_count);
  *((&c_dense_16_test10.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 3, i64 2), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_649_count);
  *((&c_dense_16_test10.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 3, i64 3), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_650_count);
  *((&c_dense_16_test10.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_16_test10, i64 0, i32 3, i64 4), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_651_count);
  *((&c_dense_16_test10.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  call void bitcast (void (...)* @sample0_initialize to void ()*)() nounwind, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_657_count);
  sample0_initialize();
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = call i32 @clock() nounwind, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_658_count);
  llvm_cbe_tmp__221 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__221);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @AESL_WRAP_sample0(%%struct.k2c_tensor* @test1_dense_13_input_input, %%struct.k2c_tensor* @c_dense_16_test1) nounwind, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_661_count);
  AESL_WRAP_sample0((l_struct_OC_k2c_tensor *)(&test1_dense_13_input_input), (l_struct_OC_k2c_tensor *)(&c_dense_16_test1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = call i32 @clock() nounwind, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_662_count);
  llvm_cbe_tmp__222 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__222);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%223 = sitofp i32 %%222 to double, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_665_count);
  llvm_cbe_tmp__223 = (double )((double )(signed int )llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__223, *(long long*)(&llvm_cbe_tmp__223));
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = sitofp i32 %%221 to double, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_666_count);
  llvm_cbe_tmp__224 = (double )((double )(signed int )llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__224, *(long long*)(&llvm_cbe_tmp__224));
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = fsub double %%223, %%224, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_667_count);
  llvm_cbe_tmp__225 = (double )llvm_cbe_tmp__223 - llvm_cbe_tmp__224;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__225, *(long long*)(&llvm_cbe_tmp__225));
if (AESL_DEBUG_TRACE)
printf("\n  %%226 = fdiv double %%225, 1.000000e+03, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_668_count);
  llvm_cbe_tmp__226 = (double )llvm_cbe_tmp__225 / 0x1.f4p9;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__226, *(long long*)(&llvm_cbe_tmp__226));
if (AESL_DEBUG_TRACE)
printf("\n  %%227 = fdiv double %%226, 1.000000e+01, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_669_count);
  llvm_cbe_tmp__227 = (double )llvm_cbe_tmp__226 / 0x1.4p3;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__227, *(long long*)(&llvm_cbe_tmp__227));
if (AESL_DEBUG_TRACE)
printf("\n  %%228 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([35 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%227) nounwind, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_670_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 35
#endif
])), llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__227, *(long long*)(&llvm_cbe_tmp__227));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__228);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%229 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_16_test1, %%struct.k2c_tensor* @c_dense_16_test1), !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_671_count);
  maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_16_test1), (l_struct_OC_k2c_tensor *)(&c_dense_16_test1));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__229);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%230 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([38 x i8]* @aesl_internal_.str1, i64 0, i64 0), double undef) nounwind, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_771_count);
  printf(( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 38
#endif
])), ((double )/*UNDEF*/0));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf",((double )/*UNDEF*/0));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__230);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void bitcast (void (...)* @sample0_terminate to void ()*)() nounwind, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_772_count);
  sample0_terminate();
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}


float maxabs(l_struct_OC_k2c_tensor *llvm_cbe_tensor1, l_struct_OC_k2c_tensor *llvm_cbe_tensor2) {
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  signed long long *llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  unsigned long long llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  float llvm_cbe_tmp__233;
  float llvm_cbe_tmp__233__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  float *llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  float llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  float *llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  float llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  float llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  float llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  float llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  unsigned long long llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  unsigned long long llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  float llvm_cbe__2e_lcssa;
  float llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxabs\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor* %%tensor1, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_790_count);
  llvm_cbe_tmp__231 = (signed long long *)(&llvm_cbe_tensor1->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_791_count);
  llvm_cbe_tmp__232 = (unsigned long long )*llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__232);
  if (((llvm_cbe_tmp__232&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__233__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%13, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__241);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = phi float [ %%12, %%.lr.ph ], [ 0.000000e+00, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__233 = (float )llvm_cbe_tmp__233__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__233);
printf("\n = %f",llvm_cbe_tmp__240);
printf("\n = %f",0x0p0);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.k2c_tensor* %%tensor1, i64 0, i32 0, i64 %%storemerge1, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_795_count);
  llvm_cbe_tmp__234 = (float *)(&llvm_cbe_tensor1->field0[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load float* %%5, align 4, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_796_count);
  llvm_cbe_tmp__235 = (float )*llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__235, *(int*)(&llvm_cbe_tmp__235));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.k2c_tensor* %%tensor2, i64 0, i32 0, i64 %%storemerge1, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_797_count);
  llvm_cbe_tmp__236 = (float *)(&llvm_cbe_tensor2->field0[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_798_count);
  llvm_cbe_tmp__237 = (float )*llvm_cbe_tmp__236;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__237, *(int*)(&llvm_cbe_tmp__237));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = fsub float %%6, %%8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_799_count);
  llvm_cbe_tmp__238 = (float )((float )(llvm_cbe_tmp__235 - llvm_cbe_tmp__237));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__238, *(int*)(&llvm_cbe_tmp__238));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = tail call float @fabsf(float %%9) nounwind, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_800_count);
  llvm_cbe_tmp__239 = (float ) /*tail*/ fabsf(llvm_cbe_tmp__238);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__238, *(int*)(&llvm_cbe_tmp__238));
printf("\nReturn  = %f",llvm_cbe_tmp__239);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = select i1 %%11, float %%10, float %%4, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__240 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__239, llvm_cbe_tmp__233))) ? ((float )llvm_cbe_tmp__239) : ((float )llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__240, *(int*)(&llvm_cbe_tmp__240));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_810_count);
  llvm_cbe_tmp__241 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__241&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_816_count);
  llvm_cbe_tmp__242 = (unsigned long long )*llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__242);
  if ((((unsigned long long )llvm_cbe_tmp__241&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__242&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__241;   /* for PHI node */
    llvm_cbe_tmp__233__PHI_TEMPORARY = (float )llvm_cbe_tmp__240;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )llvm_cbe_tmp__240;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi float [ 0.000000e+00, %%0 ], [ %%12, %%.lr.ph  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (float )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = %f",llvm_cbe__2e_lcssa);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__240);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxabs}\n");
  return llvm_cbe__2e_lcssa;
}

