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

/* External Global Variable Declarations */
extern float test1_dense_13_input_input_array[20];
extern unsigned long long test1_dense_13_input_input_dim;
extern unsigned long long test1_dense_13_input_input_numel;
extern signed long long test1_dense_13_input_input_shape[5];
extern float keras_dense_16_test1_array[1];
extern unsigned long long keras_dense_16_test1_dim;
extern unsigned long long keras_dense_16_test1_numel;
extern signed long long keras_dense_16_test1_shape[5];
extern float c_dense_16_test1_array[1];
extern unsigned long long c_dense_16_test1_dim;
extern unsigned long long c_dense_16_test1_numel;
extern signed long long c_dense_16_test1_shape[5];
extern float test2_dense_13_input_input_array[20];
extern unsigned long long test2_dense_13_input_input_dim;
extern unsigned long long test2_dense_13_input_input_numel;
extern signed long long test2_dense_13_input_input_shape[5];
extern float keras_dense_16_test2_array[1];
extern unsigned long long keras_dense_16_test2_dim;
extern unsigned long long keras_dense_16_test2_numel;
extern signed long long keras_dense_16_test2_shape[5];
extern float c_dense_16_test2_array[1];
extern unsigned long long c_dense_16_test2_dim;
extern unsigned long long c_dense_16_test2_numel;
extern signed long long c_dense_16_test2_shape[5];
extern float test3_dense_13_input_input_array[20];
extern unsigned long long test3_dense_13_input_input_dim;
extern unsigned long long test3_dense_13_input_input_numel;
extern signed long long test3_dense_13_input_input_shape[5];
extern float keras_dense_16_test3_array[1];
extern unsigned long long keras_dense_16_test3_dim;
extern unsigned long long keras_dense_16_test3_numel;
extern signed long long keras_dense_16_test3_shape[5];
extern float c_dense_16_test3_array[1];
extern unsigned long long c_dense_16_test3_dim;
extern unsigned long long c_dense_16_test3_numel;
extern signed long long c_dense_16_test3_shape[5];
extern float test4_dense_13_input_input_array[20];
extern unsigned long long test4_dense_13_input_input_dim;
extern unsigned long long test4_dense_13_input_input_numel;
extern signed long long test4_dense_13_input_input_shape[5];
extern float keras_dense_16_test4_array[1];
extern unsigned long long keras_dense_16_test4_dim;
extern unsigned long long keras_dense_16_test4_numel;
extern signed long long keras_dense_16_test4_shape[5];
extern float c_dense_16_test4_array[1];
extern unsigned long long c_dense_16_test4_dim;
extern unsigned long long c_dense_16_test4_numel;
extern signed long long c_dense_16_test4_shape[5];
extern float test5_dense_13_input_input_array[20];
extern unsigned long long test5_dense_13_input_input_dim;
extern unsigned long long test5_dense_13_input_input_numel;
extern signed long long test5_dense_13_input_input_shape[5];
extern float keras_dense_16_test5_array[1];
extern unsigned long long keras_dense_16_test5_dim;
extern unsigned long long keras_dense_16_test5_numel;
extern signed long long keras_dense_16_test5_shape[5];
extern float c_dense_16_test5_array[1];
extern unsigned long long c_dense_16_test5_dim;
extern unsigned long long c_dense_16_test5_numel;
extern signed long long c_dense_16_test5_shape[5];
extern float test6_dense_13_input_input_array[20];
extern unsigned long long test6_dense_13_input_input_dim;
extern unsigned long long test6_dense_13_input_input_numel;
extern signed long long test6_dense_13_input_input_shape[5];
extern float keras_dense_16_test6_array[1];
extern unsigned long long keras_dense_16_test6_dim;
extern unsigned long long keras_dense_16_test6_numel;
extern signed long long keras_dense_16_test6_shape[5];
extern float c_dense_16_test6_array[1];
extern unsigned long long c_dense_16_test6_dim;
extern unsigned long long c_dense_16_test6_numel;
extern signed long long c_dense_16_test6_shape[5];
extern float test7_dense_13_input_input_array[20];
extern unsigned long long test7_dense_13_input_input_dim;
extern unsigned long long test7_dense_13_input_input_numel;
extern signed long long test7_dense_13_input_input_shape[5];
extern float keras_dense_16_test7_array[1];
extern unsigned long long keras_dense_16_test7_dim;
extern unsigned long long keras_dense_16_test7_numel;
extern signed long long keras_dense_16_test7_shape[5];
extern float c_dense_16_test7_array[1];
extern unsigned long long c_dense_16_test7_dim;
extern unsigned long long c_dense_16_test7_numel;
extern signed long long c_dense_16_test7_shape[5];
extern float test8_dense_13_input_input_array[20];
extern unsigned long long test8_dense_13_input_input_dim;
extern unsigned long long test8_dense_13_input_input_numel;
extern signed long long test8_dense_13_input_input_shape[5];
extern float keras_dense_16_test8_array[1];
extern unsigned long long keras_dense_16_test8_dim;
extern unsigned long long keras_dense_16_test8_numel;
extern signed long long keras_dense_16_test8_shape[5];
extern float c_dense_16_test8_array[1];
extern unsigned long long c_dense_16_test8_dim;
extern unsigned long long c_dense_16_test8_numel;
extern signed long long c_dense_16_test8_shape[5];
extern float test9_dense_13_input_input_array[20];
extern unsigned long long test9_dense_13_input_input_dim;
extern unsigned long long test9_dense_13_input_input_numel;
extern signed long long test9_dense_13_input_input_shape[5];
extern float keras_dense_16_test9_array[1];
extern unsigned long long keras_dense_16_test9_dim;
extern unsigned long long keras_dense_16_test9_numel;
extern signed long long keras_dense_16_test9_shape[5];
extern float c_dense_16_test9_array[1];
extern unsigned long long c_dense_16_test9_dim;
extern unsigned long long c_dense_16_test9_numel;
extern signed long long c_dense_16_test9_shape[5];
extern float test10_dense_13_input_input_array[20];
extern unsigned long long test10_dense_13_input_input_dim;
extern unsigned long long test10_dense_13_input_input_numel;
extern signed long long test10_dense_13_input_input_shape[5];
extern float keras_dense_16_test10_array[1];
extern unsigned long long keras_dense_16_test10_dim;
extern unsigned long long keras_dense_16_test10_numel;
extern signed long long keras_dense_16_test10_shape[5];
extern float c_dense_16_test10_array[1];
extern unsigned long long c_dense_16_test10_dim;
extern unsigned long long c_dense_16_test10_numel;
extern signed long long c_dense_16_test10_shape[5];
extern unsigned long long i;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int main(void);
void sample_initialize();
void sample(float *, signed long long , signed long long *, signed long long *, float *, signed long long , signed long long *, signed long long *);
float maxabs(float *llvm_cbe_tensor1_array, signed long long llvm_cbe_tensor1_dim, signed long long *llvm_cbe_tensor1_numel, signed long long *llvm_cbe_tensor1_shape, float *llvm_cbe_tensor2_array, signed long long llvm_cbe_tensor2_dim, signed long long *llvm_cbe_tensor2_numel, signed long long *llvm_cbe_tensor2_shape);
void sample_terminate();
float fabsf(float );


/* Global Variable Definitions and Initialization */
unsigned long long test1_dense_13_input_input_dim = 1ull;
float test1_dense_13_input_input_array[20] = { 0x1.9f663ap-3, 0x1.04c672p0, -0x1.a4a4b8p-1, 0x1.d6278ep0, -0x1.a0fbb2p-1, -0x1.51b6ep0, -0x1.f00d72p0, 0x1.dba32p-1, 0x1.53497p-1, -0x1.b18474p-1, -0x1.40c542p-1, 0x1.6547bap0, -0x1.ca7156p-2, 0x1.89ea28p0, -0x1.ff7476p-1, -0x1.e44cdcp-1, -0x1.32e956p0, -0x1.0d87fep0, 0x1.d50a16p0, -0x1.13bd56p0 };
unsigned long long test1_dense_13_input_input_numel = 20ull;
signed long long test1_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
float keras_dense_16_test1_array[1] = { 0x1.f726e6p-5 };
unsigned long long c_dense_16_test1_numel = 1ull;
unsigned long long keras_dense_16_test1_dim = 1ull;
unsigned long long keras_dense_16_test1_numel = 1ull;
signed long long keras_dense_16_test1_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
float c_dense_16_test1_array[1];
unsigned long long c_dense_16_test1_dim = 1ull;
signed long long c_dense_16_test1_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long keras_dense_16_test2_dim = 1ull;
unsigned long long c_dense_16_test2_dim = 1ull;
float test3_dense_13_input_input_array[20] = { -0x1.1ea68ep0, 0x1.35a41ap-2, -0x1.085c3p-1, 0x1.5e97dp0, -0x1.401126p-1, -0x1.65fafep0, -0x1.48359ep0, 0x1.45a4f6p0, 0x1.0cd75ep0, 0x1.074ed4p0, 0x1.9d95d4p-1, -0x1.fd7264p-4, 0x1.dd707ep0, 0x1.d6250cp0, 0x1.7004bcp-3, -0x1.cd7744p-2, -0x1.a1232ep-2, 0x1.0e75ap0, -0x1.aefca6p0, -0x1.fc3664p-1 };
signed long long keras_dense_16_test3_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
signed long long c_dense_16_test2_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long c_dense_16_test3_dim = 1ull;
signed long long c_dense_16_test3_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long c_dense_16_test3_numel = 1ull;
unsigned long long test3_dense_13_input_input_numel = 20ull;
signed long long test2_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
signed long long test3_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
float keras_dense_16_test3_array[1] = { 0x1.16715ep-1 };
unsigned long long test2_dense_13_input_input_dim = 1ull;
unsigned long long keras_dense_16_test3_dim = 1ull;
float c_dense_16_test3_array[1];
float test4_dense_13_input_input_array[20] = { 0x1.f58748p0, -0x1.377772p0, -0x1.2b883ap-2, -0x1.0a10b8p0, 0x1.ee79acp-1, -0x1.000f46p0, -0x1.a4971cp-3, -0x1.5046p-9, -0x1.d85538p0, 0x1.f133acp-2, 0x1.4518f4p0, -0x1.0b5042p-1, -0x1.484128p-2, -0x1.a45ac8p0, -0x1.9b70bp-2, 0x1.36f734p0, 0x1.fd865p-1, -0x1.d4e7aap-3, -0x1.b3720ap0, -0x1.0f3ceap0 };
signed long long keras_dense_16_test2_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
float test2_dense_13_input_input_array[20] = { -0x1.14cc1cp-1, 0x1.97e878p0, -0x1.51f34ap-2, 0x1.87bcc4p-2, -0x1.dea284p0, 0x1.b00fa2p-1, 0x1.a5c4c6p0, -0x1.f5d242p-1, 0x1.f5f8e6p-1, -0x1.fc4828p0, 0x1.69042cp-2, 0x1.d11552p-3, -0x1.1539ecp0, -0x1.a4f84ap0, 0x1.61ed22p-1, 0x1.9e27a2p0, 0x1.165ff8p-5, -0x1.73f166p-4, -0x1.fa520cp-3, 0x1.ccb44ap0 };
unsigned long long keras_dense_16_test2_numel = 1ull;
float c_dense_16_test2_array[1];
unsigned long long test3_dense_13_input_input_dim = 1ull;
float keras_dense_16_test2_array[1] = { 0x1.2704f6p-1 };
unsigned long long c_dense_16_test2_numel = 1ull;
unsigned long long keras_dense_16_test3_numel = 1ull;
unsigned long long test2_dense_13_input_input_numel = 20ull;
unsigned long long c_dense_16_test7_numel = 1ull;
unsigned long long keras_dense_16_test4_dim = 1ull;
float c_dense_16_test4_array[1];
unsigned long long test5_dense_13_input_input_dim = 1ull;
signed long long test5_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long keras_dense_16_test5_dim = 1ull;
float c_dense_16_test5_array[1];
signed long long c_dense_16_test6_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test7_dense_13_input_input_dim = 1ull;
unsigned long long test4_dense_13_input_input_numel = 20ull;
unsigned long long test4_dense_13_input_input_dim = 1ull;
float test5_dense_13_input_input_array[20] = { -0x1.8b442cp0, -0x1.2f68cp0, -0x1.53616ap0, 0x1.532b4ap-2, 0x1.0ed8cep-3, 0x1.8999aap-2, 0x1.0be6f6p-3, -0x1.1d056cp-3, -0x1.060d6p-1, -0x1.53edc8p0, -0x1.015796p-2, 0x1.605f24p0, -0x1.35d8d8p-1, -0x1.8c837cp0, 0x1.58b57p0, -0x1.d5ff6cp-1, 0x1.4d3664p0, 0x1.1be0d8p0, 0x1.8b8cecp0, -0x1.4a0152p-2 };
float keras_dense_16_test5_array[1] = { 0x1.50ce14p-2 };
unsigned long long c_dense_16_test6_dim = 1ull;
signed long long keras_dense_16_test6_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test7_dense_13_input_input_numel = 20ull;
unsigned long long keras_dense_16_test6_numel = 1ull;
float test7_dense_13_input_input_array[20] = { -0x1.ce9a8cp-1, 0x1.12a532p-1, 0x1.8447f2p0, 0x1.a30e34p-1, -0x1.b53176p-1, -0x1.a9d2e4p0, -0x1.2a680ap0, 0x1.f004fep-2, 0x1.dcc316p-1, -0x1.e12b8cp-1, -0x1.f9038ap0, 0x1.6e763ep-1, -0x1.2051c6p0, -0x1.7f2e5p0, -0x1.765246p0, -0x1.31cf34p-1, -0x1.9f36c6p-1, -0x1.cf12fcp-3, -0x1.a6530ap-2, 0x1.a3fep0 };
float test8_dense_13_input_input_array[20] = { 0x1.629a66p-2, -0x1.fe9ff4p-1, -0x1.a451dap-3, 0x1.10a7fcp-2, 0x1.89a7eap-6, 0x1.eb9dcep-1, 0x1.06be56p-2, -0x1.752fep0, 0x1.4b74d4p0, -0x1.979adep-5, 0x1.5e979ep-3, -0x1.a15cp0, -0x1.5acd1p0, -0x1.b81dfep0, 0x1.f8cc44p-2, 0x1.fda1b4p-2, -0x1.b7002cp0, 0x1.63e4eap0, 0x1.5939a2p0, 0x1.dcf1acp0 };
unsigned long long keras_dense_16_test5_numel = 1ull;
signed long long keras_dense_16_test5_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test8_dense_13_input_input_numel = 20ull;
unsigned long long test6_dense_13_input_input_numel = 20ull;
signed long long keras_dense_16_test7_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
signed long long c_dense_16_test7_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test5_dense_13_input_input_numel = 20ull;
unsigned long long c_dense_16_test4_numel = 1ull;
unsigned long long c_dense_16_test5_dim = 1ull;
float keras_dense_16_test6_array[1] = { 0x1.d08566p-1 };
float test6_dense_13_input_input_array[20] = { -0x1.b66fb6p-1, -0x1.2f4628p-2, -0x1.5c433ap-4, -0x1.56eb3p-3, -0x1.1f00fep0, 0x1.d1ce76p-2, 0x1.20537p-1, 0x1.4f7a1p0, -0x1.f92ca2p0, 0x1.0723bep0, -0x1.a8f63p0, -0x1.872206p-1, 0x1.ec6276p0, -0x1.5942a4p-1, 0x1.2b8904p-1, -0x1.e27b96p0, -0x1.e14942p0, -0x1.4af97p0, -0x1.7f7538p0, -0x1.ba5a6p-1 };
float c_dense_16_test6_array[1];
signed long long c_dense_16_test4_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
signed long long keras_dense_16_test4_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long c_dense_16_test4_dim = 1ull;
unsigned long long c_dense_16_test5_numel = 1ull;
signed long long test6_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long keras_dense_16_test7_dim = 1ull;
float c_dense_16_test7_array[1];
unsigned long long c_dense_16_test7_dim = 1ull;
unsigned long long keras_dense_16_test4_numel = 1ull;
signed long long test7_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long keras_dense_16_test6_dim = 1ull;
float keras_dense_16_test7_array[1] = { 0x1.91d832p-4 };
signed long long c_dense_16_test5_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test6_dense_13_input_input_dim = 1ull;
float keras_dense_16_test4_array[1] = { 0x1.99ada8p-1 };
unsigned long long c_dense_16_test6_numel = 1ull;
unsigned long long keras_dense_16_test7_numel = 1ull;
unsigned long long test8_dense_13_input_input_dim = 1ull;
signed long long test4_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
float test9_dense_13_input_input_array[20] = { -0x1.b5fc64p-2, -0x1.fb9f36p-4, -0x1.df2766p0, 0x1.fb5c22p-2, 0x1.94c8b6p-2, -0x1.9c4792p-2, 0x1.5446aap-1, 0x1.8dd48ep0, 0x1.0e46ccp-1, 0x1.1db1dap-2, 0x1.dff4cap0, 0x1.cf0dc6p-2, 0x1.92b482p-3, 0x1.76d2bep0, -0x1.7b6a12p0, -0x1.cece6p-1, -0x1.f2631cp-1, -0x1.a564ap-1, 0x1.8c15dap0, 0x1.82447p-2 };
signed long long c_dense_16_test9_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test10_dense_13_input_input_numel = 20ull;
float keras_dense_16_test9_array[1] = { 0x1.ce2b1ep-2 };
signed long long keras_dense_16_test9_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test10_dense_13_input_input_dim = 1ull;
signed long long test10_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
signed long long c_dense_16_test10_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long c_dense_16_test10_numel = 1ull;
signed long long keras_dense_16_test8_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test9_dense_13_input_input_numel = 20ull;
unsigned long long keras_dense_16_test9_dim = 1ull;
float test10_dense_13_input_input_array[20] = { -0x1.f8ea8p-2, -0x1.3f4c98p-4, -0x1.645366p0, -0x1.7b12cap0, 0x1.d161ecp0, 0x1.dc4294p-2, 0x1.538658p0, 0x1.8161acp0, 0x1.d5882cp-3, -0x1.30948cp-2, 0x1.db5bb2p-1, -0x1.fb89d2p0, 0x1.4004b4p-1, -0x1.4172cp-1, 0x1.6aba2ap0, -0x1.c85246p-1, 0x1.320734p0, -0x1.deb70ep0, 0x1.11cc3ep0, -0x1.a1c1eep0 };
float keras_dense_16_test10_array[1] = { 0x1.8bd64cp-5 };
signed long long test8_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long c_dense_16_test8_numel = 1ull;
float c_dense_16_test9_array[1];
static  char aesl_internal__OC_str[35] = "Average time over 10 tests: %e s \n";
signed long long keras_dense_16_test10_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long i __ATTRIBUTE_WEAK__;
signed long long c_dense_16_test8_shape[5] = { 1ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long keras_dense_16_test9_numel = 1ull;
float keras_dense_16_test8_array[1] = { 0x1.a92bf8p-1 };
float c_dense_16_test8_array[1];
signed long long test9_dense_13_input_input_shape[5] = { 20ull, 1ull, 1ull, 1ull, 1ull };
unsigned long long test9_dense_13_input_input_dim = 1ull;
unsigned long long c_dense_16_test9_numel = 1ull;
unsigned long long keras_dense_16_test8_numel = 1ull;
unsigned long long keras_dense_16_test10_numel = 1ull;
unsigned long long keras_dense_16_test8_dim = 1ull;
unsigned long long c_dense_16_test9_dim = 1ull;
unsigned long long c_dense_16_test10_dim = 1ull;
unsigned long long c_dense_16_test8_dim = 1ull;
static  char aesl_internal__OC_str1[38] = "Max absolute error for 10 tests: %e \n";
float c_dense_16_test10_array[1];
unsigned long long keras_dense_16_test10_dim = 1ull;


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
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  unsigned long long llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  unsigned int llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  double llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  double llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  double llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  double llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  double llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned int llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  unsigned long long llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  call void bitcast (void (...)* @sample_initialize to void ()*)() nounwind, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_6_count);
  sample_initialize();
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = call i32 @clock() nounwind, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__1 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__1);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* @test1_dense_13_input_input_dim, align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__2 = (unsigned long long )*(&test1_dense_13_input_input_dim);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i64* @c_dense_16_test1_dim, align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__3 = (unsigned long long )*(&c_dense_16_test1_dim);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  call void @sample(float* getelementptr inbounds ([20 x float]* @test1_dense_13_input_input_array, i64 0, i64 0), i64 %%2, i64* @test1_dense_13_input_input_numel, i64* getelementptr inbounds ([5 x i64]* @test1_dense_13_input_input_shape, i64 0, i64 0), float* getelementptr inbounds ([1 x float]* @c_dense_16_test1_array, i64 0, i64 0), i64 %%3, i64* @c_dense_16_test1_numel, i64* getelementptr inbounds ([5 x i64]* @c_dense_16_test1_shape, i64 0, i64 0)) nounwind, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_12_count);
  sample((float *)((&test1_dense_13_input_input_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 20
#endif
])), llvm_cbe_tmp__2, (signed long long *)(&test1_dense_13_input_input_numel), (signed long long *)((&test1_dense_13_input_input_shape[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), (float *)((&c_dense_16_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
])), llvm_cbe_tmp__3, (signed long long *)(&c_dense_16_test1_numel), (signed long long *)((&c_dense_16_test1_shape[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__2);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__3);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = call i32 @clock() nounwind, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_13_count);
  llvm_cbe_tmp__4 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sitofp i32 %%4 to double, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_16_count);
  llvm_cbe_tmp__5 = (double )((double )(signed int )llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__5, *(long long*)(&llvm_cbe_tmp__5));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sitofp i32 %%1 to double, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_17_count);
  llvm_cbe_tmp__6 = (double )((double )(signed int )llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__6, *(long long*)(&llvm_cbe_tmp__6));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = fsub double %%5, %%6, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__7 = (double )llvm_cbe_tmp__5 - llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__7, *(long long*)(&llvm_cbe_tmp__7));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = fdiv double %%7, 1.000000e+03, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_19_count);
  llvm_cbe_tmp__8 = (double )llvm_cbe_tmp__7 / 0x1.f4p9;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__8, *(long long*)(&llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = fdiv double %%8, 1.000000e+01, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__9 = (double )llvm_cbe_tmp__8 / 0x1.4p3;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__9, *(long long*)(&llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([35 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%9) nounwind, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_21_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 35
#endif
])), llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__9, *(long long*)(&llvm_cbe_tmp__9));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__10);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load i64* @keras_dense_16_test1_dim, align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__11 = (unsigned long long )*(&keras_dense_16_test1_dim);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load i64* @c_dense_16_test1_dim, align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__12 = (unsigned long long )*(&c_dense_16_test1_dim);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = call float @maxabs(float* getelementptr inbounds ([1 x float]* @keras_dense_16_test1_array, i64 0, i64 0), i64 %%11, i64* @keras_dense_16_test1_numel, i64* getelementptr inbounds ([5 x i64]* @keras_dense_16_test1_shape, i64 0, i64 0), float* getelementptr inbounds ([1 x float]* @c_dense_16_test1_array, i64 0, i64 0), i64 %%12, i64* @c_dense_16_test1_numel, i64* getelementptr inbounds ([5 x i64]* @c_dense_16_test1_shape, i64 0, i64 0)), !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_24_count);
  maxabs((float *)((&keras_dense_16_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
])), llvm_cbe_tmp__11, (signed long long *)(&keras_dense_16_test1_numel), (signed long long *)((&keras_dense_16_test1_shape[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])), (float *)((&c_dense_16_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 1
#endif
])), llvm_cbe_tmp__12, (signed long long *)(&c_dense_16_test1_numel), (signed long long *)((&c_dense_16_test1_shape[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 5
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__11);
printf("\nArgument  = 0x%I64X",llvm_cbe_tmp__12);
printf("\nReturn  = %f",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([38 x i8]* @aesl_internal_.str1, i64 0, i64 0), double undef) nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_124_count);
  printf(( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 38
#endif
])), ((double )/*UNDEF*/0));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf",((double )/*UNDEF*/0));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void bitcast (void (...)* @sample_terminate to void ()*)() nounwind, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_125_count);
  sample_terminate();
if (AESL_DEBUG_TRACE) {
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}


float maxabs(float *llvm_cbe_tensor1_array, signed long long llvm_cbe_tensor1_dim, signed long long *llvm_cbe_tensor1_numel, signed long long *llvm_cbe_tensor1_shape, float *llvm_cbe_tensor2_array, signed long long llvm_cbe_tensor2_dim, signed long long *llvm_cbe_tensor2_numel, signed long long *llvm_cbe_tensor2_shape) {
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  unsigned long long llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  float llvm_cbe_tmp__16;
  float llvm_cbe_tmp__16__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  float *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  float *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  float llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  float llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  float llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  unsigned long long llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned long long llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  float llvm_cbe__2e_lcssa;
  float llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxabs\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i64* %%tensor1_numel, align 8, !dbg !18 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_149_count);
  llvm_cbe_tmp__15 = (unsigned long long )*llvm_cbe_tensor1_numel;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__15);
  if (((llvm_cbe_tmp__15&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__16__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%12, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__24);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = phi float [ %%11, %%.lr.ph ], [ 0.000000e+00, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_152_count);
  llvm_cbe_tmp__16 = (float )llvm_cbe_tmp__16__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__16);
printf("\n = %f",llvm_cbe_tmp__23);
printf("\n = %f",0x0p0);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds float* %%tensor1_array, i64 %%storemerge1, !dbg !17 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__17 = (float *)(&llvm_cbe_tensor1_array[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = load float* %%4, align 4, !dbg !17 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_154_count);
  llvm_cbe_tmp__18 = (float )*llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__18, *(int*)(&llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds float* %%tensor2_array, i64 %%storemerge1, !dbg !17 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__19 = (float *)(&llvm_cbe_tensor2_array[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = load float* %%6, align 4, !dbg !17 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_156_count);
  llvm_cbe_tmp__20 = (float )*llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__20, *(int*)(&llvm_cbe_tmp__20));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = fsub float %%5, %%7, !dbg !17 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__21 = (float )((float )(llvm_cbe_tmp__18 - llvm_cbe_tmp__20));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = tail call float @fabsf(float %%8) nounwind, !dbg !17 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_158_count);
  llvm_cbe_tmp__22 = (float ) /*tail*/ fabsf(llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
printf("\nReturn  = %f",llvm_cbe_tmp__22);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = select i1 %%10, float %%9, float %%3, !dbg !19 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_166_count);
  llvm_cbe_tmp__23 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__22, llvm_cbe_tmp__16))) ? ((float )llvm_cbe_tmp__22) : ((float )llvm_cbe_tmp__16));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add i64 %%storemerge1, 1, !dbg !20 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_168_count);
  llvm_cbe_tmp__24 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__24&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i64* %%tensor1_numel, align 8, !dbg !18 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__25 = (unsigned long long )*llvm_cbe_tensor1_numel;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__25);
  if ((((unsigned long long )llvm_cbe_tmp__24&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__25&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__24;   /* for PHI node */
    llvm_cbe_tmp__16__PHI_TEMPORARY = (float )llvm_cbe_tmp__23;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )llvm_cbe_tmp__23;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi float [ 0.000000e+00, %%0 ], [ %%11, %%.lr.ph  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (float )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = %f",llvm_cbe__2e_lcssa);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__23);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxabs}\n");
  return llvm_cbe__2e_lcssa;
}

