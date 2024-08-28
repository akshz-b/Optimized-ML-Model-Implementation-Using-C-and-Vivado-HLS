#include <stdio.h> 
#include <math.h> 
#include <time.h> 

#include "sample.h" 
size_t i;
// float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2);
float maxabs(float tensor1_array[],size_t tensor1_dim, size_t * tensor1_numel, size_t tensor1_shape[],
float tensor2_array[], size_t tensor2_dim, size_t * tensor2_numel, size_t tensor2_shape[]);
struct timeval GetTimeStamp(); 
 
float test1_dense_13_input_input_array[20] = {
+2.02831695e-01f,+1.01865302e+00f,-8.21569232e-01f,+1.83654108e+00f,-8.14420296e-01f,
-1.31919675e+00f,-1.93770518e+00f,+9.28978905e-01f,+6.62669656e-01f,-8.46713673e-01f,
-6.26504945e-01f,+1.39562574e+00f,-4.47697964e-01f,+1.53872922e+00f,-9.98935406e-01f,
-9.45898890e-01f,-1.19887288e+00f,-1.05285635e+00f,+1.83218515e+00f,-1.07710781e+00f,
}; 

// k2c_tensor test1_dense_13_input_input = {&test1_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}};
// k2c_tensor test1_dense_13_input_input;
size_t test1_dense_13_input_input_dim = 1;
size_t test1_dense_13_input_input_numel = 20;
size_t test1_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test1_array[1] = {
+6.14199154e-02f,}; 
// k2c_tensor keras_dense_16_test1 = {&keras_dense_16_test1_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test1;
size_t keras_dense_16_test1_dim = 1;
size_t keras_dense_16_test1_numel = 1;
size_t keras_dense_16_test1_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test1_array[1] = {0}; 
// k2c_tensor c_dense_16_test1 = {&c_dense_16_test1_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test1;
size_t c_dense_16_test1_dim = 1;
size_t c_dense_16_test1_numel = 1;
size_t c_dense_16_test1_shape[5] = {1, 1, 1, 1, 1};

float test2_dense_13_input_input_array[20] = {
-5.40619749e-01f,+1.59339089e+00f,-3.30029647e-01f,+3.82556035e-01f,-1.86966734e+00f,
+8.43869281e-01f,+1.64753377e+00f,-9.80119745e-01f,+9.80414588e-01f,-1.98547605e+00f,
+3.52554965e-01f,+2.27091449e-01f,-1.08291502e+00f,-1.64441358e+00f,+6.91262331e-01f,
+1.61779224e+00f,+3.39813066e-02f,-9.08063906e-02f,-2.47226805e-01f,+1.79962597e+00f,
}; 
// k2c_tensor test2_dense_13_input_input = {&test2_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test2_dense_13_input_input;
size_t test2_dense_13_input_input_dim = 1;
size_t test2_dense_13_input_input_numel = 20;
size_t test2_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test2_array[1] = {
+5.76209724e-01f,}; 
// k2c_tensor keras_dense_16_test2 = {&keras_dense_16_test2_array[0],1,1,{1,1,1,1,1}};
// k2c_tensor keras_dense_16_test2;
size_t keras_dense_16_test2_dim = 1;
size_t keras_dense_16_test2_numel = 1;
size_t keras_dense_16_test2_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test2_array[1] = {0}; 
// k2c_tensor c_dense_16_test2 = {&c_dense_16_test2_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test2;
size_t c_dense_16_test2_dim = 1;
size_t c_dense_16_test2_numel = 1;
size_t c_dense_16_test2_shape[5] = {1, 1, 1, 1, 1};

float test3_dense_13_input_input_array[20] = {
-1.11972898e+00f,+3.02383809e-01f,-5.16328324e-01f,+1.36950399e+00f,-6.25130859e-01f,
-1.39836108e+00f,-1.28206813e+00f,+1.27204832e+00f,+1.05016128e+00f,+1.02854655e+00f,
+8.07783724e-01f,-1.24376673e-01f,+1.86499778e+00f,+1.83650278e+00f,+1.79696537e-01f,
-4.50650268e-01f,-4.07360750e-01f,+1.05648232e+00f,-1.68354255e+00f,-9.92602449e-01f,
}; 

// k2c_tensor test3_dense_13_input_input = {&test3_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test3_dense_13_input_input;
size_t test3_dense_13_input_input_dim = 1;
size_t test3_dense_13_input_input_numel = 20;
size_t test3_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test3_array[1] = {
+5.43833673e-01f,}; 
// k2c_tensor keras_dense_16_test3;
// k2c_tensor keras_dense_16_test3 = {&keras_dense_16_test3_array[0],1,1,{1,1,1,1,1}}; 
size_t keras_dense_16_test3_dim = 1;
size_t keras_dense_16_test3_numel = 1;
size_t keras_dense_16_test3_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test3_array[1] = {0}; 
// k2c_tensor c_dense_16_test3 = {&c_dense_16_test3_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test3;
size_t c_dense_16_test3_dim = 1;
size_t c_dense_16_test3_numel = 1;
size_t c_dense_16_test3_shape[5] = {1, 1, 1, 1, 1};

float test4_dense_13_input_input_array[20] = {
+1.95909551e+00f,-1.21666637e+00f,-2.92511851e-01f,-1.03931766e+00f,+9.65772003e-01f,
-1.00023311e+00f,-2.05366342e-01f,-2.56556284e-03f,-1.84505028e+00f,+4.85548661e-01f,
+1.26991203e+00f,-5.22096688e-01f,-3.20561058e-01f,-1.64201020e+00f,-4.01797059e-01f,
+1.21470956e+00f,+9.95165367e-01f,-2.28957485e-01f,-1.70095879e+00f,-1.05952327e+00f,
}; 
// k2c_tensor test4_dense_13_input_input = {&test4_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test4_dense_13_input_input;
size_t test4_dense_13_input_input_dim = 1;
size_t test4_dense_13_input_input_numel = 20;
size_t test4_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test4_array[1] = {
+8.00153017e-01f,}; 
// k2c_tensor keras_dense_16_test4 = {&keras_dense_16_test4_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test4;
size_t keras_dense_16_test4_dim = 1;
size_t keras_dense_16_test4_numel = 1;
size_t keras_dense_16_test4_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test4_array[1] = {0}; 
// k2c_tensor c_dense_16_test4 = {&c_dense_16_test4_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test4;
size_t c_dense_16_test4_dim = 1;
size_t c_dense_16_test4_numel = 1;
size_t c_dense_16_test4_shape[5] = {1, 1, 1, 1, 1};

float test5_dense_13_input_input_array[20] = {
-1.54400894e+00f,-1.18519206e+00f,-1.32570523e+00f,+3.31219837e-01f,+1.32249462e-01f,
+3.84375233e-01f,+1.30811612e-01f,-1.39170502e-01f,-5.11820793e-01f,-1.32784703e+00f,
-2.51310691e-01f,+1.37645173e+00f,-6.05170031e-01f,-1.54888130e+00f,+1.34651850e+00f,
-9.17964360e-01f,+1.30161122e+00f,+1.10889959e+00f,+1.54511910e+00f,-3.22270665e-01f,
}; 
// k2c_tensor test5_dense_13_input_input = {&test5_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test5_dense_13_input_input;
size_t test5_dense_13_input_input_dim = 1;
size_t test5_dense_13_input_input_numel = 20;
size_t test5_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test5_array[1] = {
+3.28911126e-01f,}; 
// k2c_tensor keras_dense_16_test5 = {&keras_dense_16_test5_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test5;
size_t keras_dense_16_test5_dim = 1;
size_t keras_dense_16_test5_numel = 1;
size_t keras_dense_16_test5_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test5_array[1] = {0}; 
// k2c_tensor c_dense_16_test5 = {&c_dense_16_test5_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test5;
size_t c_dense_16_test5_dim = 1;
size_t c_dense_16_test5_numel = 1;
size_t c_dense_16_test5_shape[5] = {1, 1, 1, 1, 1};

float test6_dense_13_input_input_array[20] = {
-8.56321059e-01f,-2.96166052e-01f,-8.50250522e-02f,-1.67440779e-01f,-1.12110883e+00f,
+4.54889134e-01f,+5.63136595e-01f,+1.31045623e+00f,-1.97333734e+00f,+1.02788914e+00f,
-1.66000656e+00f,-7.63931430e-01f,+1.92337743e+00f,-6.74336566e-01f,+5.85029718e-01f,
-1.88469829e+00f,-1.88002407e+00f,-1.29286863e+00f,-1.49788232e+00f,-8.63970758e-01f,
}; 
// k2c_tensor test6_dense_13_input_input = {&test6_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test6_dense_13_input_input;
size_t test6_dense_13_input_input_dim = 1;
size_t test6_dense_13_input_input_numel = 20;
size_t test6_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test6_array[1] = {
+9.07267749e-01f,}; 
// k2c_tensor keras_dense_16_test6 = {&keras_dense_16_test6_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test6;
size_t keras_dense_16_test6_dim = 1;
size_t keras_dense_16_test6_numel = 1;
size_t keras_dense_16_test6_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test6_array[1] = {0}; 
// k2c_tensor c_dense_16_test6 = {&c_dense_16_test6_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test6;
size_t c_dense_16_test6_dim = 1;
size_t c_dense_16_test6_numel = 1;
size_t c_dense_16_test6_shape[5] = {1, 1, 1, 1, 1};

float test7_dense_13_input_input_array[20] = {
-9.03522847e-01f,+5.36416592e-01f,+1.51672285e+00f,+8.18467751e-01f,-8.53892990e-01f,
-1.66337422e+00f,-1.16565002e+00f,+4.84394042e-01f,+9.31175888e-01f,-9.39785390e-01f,
-1.97271022e+00f,+7.15745852e-01f,-1.12624774e+00f,-1.49680039e+00f,-1.46219286e+00f,
-5.97283962e-01f,-8.10964789e-01f,-2.26110422e-01f,-4.12426148e-01f,+1.64059453e+00f,
}; 
// k2c_tensor test7_dense_13_input_input = {&test7_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test7_dense_13_input_input;
size_t test7_dense_13_input_input_dim = 1;
size_t test7_dense_13_input_input_numel = 20;
size_t test7_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test7_array[1] = {
+9.81065705e-02f,}; 
// k2c_tensor keras_dense_16_test7 = {&keras_dense_16_test7_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test7;
size_t keras_dense_16_test7_dim = 1;
size_t keras_dense_16_test7_numel = 1;
size_t keras_dense_16_test7_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test7_array[1] = {0}; 
// k2c_tensor c_dense_16_test7 = {&c_dense_16_test7_array[0],1,1,{1,1,1,1,1}};
// k2c_tensor c_dense_16_test7; 
size_t c_dense_16_test7_dim = 1;
size_t c_dense_16_test7_numel = 1;
size_t c_dense_16_test7_shape[5] = {1, 1, 1, 1, 1};

float test8_dense_13_input_input_array[20] = {
+3.46292123e-01f,-9.97314122e-01f,-2.05234248e-01f,+2.66265811e-01f,+2.40268494e-02f,
+9.60188343e-01f,+2.56585457e-01f,-1.45776179e+00f,+1.29475143e+00f,-4.97564623e-02f,
+1.71187621e-01f,-1.63031003e+00f,-1.35469155e+00f,-1.71920759e+00f,+4.92966710e-01f,
+4.97687166e-01f,-1.71484635e+00f,+1.39021165e+00f,+1.34853570e+00f,+1.86306262e+00f,
}; 
// k2c_tensor test8_dense_13_input_input = {&test8_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}};
// k2c_tensor test8_dense_13_input_input;
size_t test8_dense_13_input_input_dim = 1;
size_t test8_dense_13_input_input_numel = 20;
size_t test8_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test8_array[1] = {
+8.30413580e-01f,}; 
// k2c_tensor keras_dense_16_test8 = {&keras_dense_16_test8_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test8;
size_t keras_dense_16_test8_dim = 1;
size_t keras_dense_16_test8_numel = 1;
size_t keras_dense_16_test8_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test8_array[1] = {0}; 
// k2c_tensor c_dense_16_test8 = {&c_dense_16_test8_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test8;
size_t c_dense_16_test8_dim = 1;
size_t c_dense_16_test8_numel = 1;
size_t c_dense_16_test8_shape[5] = {1, 1, 1, 1, 1};

float test9_dense_13_input_input_array[20] = {
-4.27720602e-01f,-1.23931129e-01f,-1.87169496e+00f,+4.95468644e-01f,+3.95296900e-01f,
-4.02616774e-01f,+6.64601610e-01f,+1.55402457e+00f,+5.27883862e-01f,+2.78998757e-01f,
+1.87482889e+00f,+4.52200983e-01f,+1.96633360e-01f,+1.46415316e+00f,-1.48208725e+00f,
-9.03918249e-01f,-9.73412385e-01f,-8.23033345e-01f,+1.54720838e+00f,+3.77214183e-01f,
}; 
// k2c_tensor test9_dense_13_input_input = {&test9_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}}; 
// k2c_tensor test9_dense_13_input_input;
size_t test9_dense_13_input_input_dim = 1;
size_t test9_dense_13_input_input_numel = 20;
size_t test9_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test9_array[1] = {
+4.51336354e-01f,}; 
// k2c_tensor keras_dense_16_test9 = {&keras_dense_16_test9_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test9;
size_t keras_dense_16_test9_dim = 1;
size_t keras_dense_16_test9_numel = 1;
size_t keras_dense_16_test9_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test9_array[1] = {0}; 
// k2c_tensor c_dense_16_test9 = {&c_dense_16_test9_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test9;
size_t c_dense_16_test9_dim = 1;
size_t c_dense_16_test9_numel = 1;
size_t c_dense_16_test9_shape[5] = {1, 1, 1, 1, 1};

float test10_dense_13_input_input_array[20] = {
-4.93082052e-01f,-7.79539085e-02f,-1.39189750e+00f,-1.48075545e+00f,+1.81790040e+00f,
+4.65097724e-01f,+1.32626863e+00f,+1.50539655e+00f,+2.29263635e-01f,-2.97441674e-01f,
+9.28433968e-01f,-1.98257169e+00f,+6.25035874e-01f,-6.27828592e-01f,+1.41690315e+00f,
-8.91252709e-01f,+1.19542244e+00f,-1.86998066e+00f,+1.06952269e+00f,-1.63186537e+00f,
}; 
// k2c_tensor test10_dense_13_input_input = {&test10_dense_13_input_input_array[0],1,20,{20, 1, 1, 1, 1}};
// k2c_tensor test10_dense_13_input_input;
size_t test10_dense_13_input_input_dim = 1;
size_t test10_dense_13_input_input_numel = 20;
size_t test10_dense_13_input_input_shape[5] = {20, 1, 1, 1, 1};

float keras_dense_16_test10_array[1] = {
+4.83199582e-02f,}; 
// k2c_tensor keras_dense_16_test10 = {&keras_dense_16_test10_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor keras_dense_16_test10;
size_t keras_dense_16_test10_dim = 1;
size_t keras_dense_16_test10_numel = 1;
size_t keras_dense_16_test10_shape[5] = {1, 1, 1, 1, 1};

float c_dense_16_test10_array[1] = {0}; 
// k2c_tensor c_dense_16_test10 = {&c_dense_16_test10_array[0],1,1,{1,1,1,1,1}}; 
// k2c_tensor c_dense_16_test10;
size_t c_dense_16_test10_dim = 1;
size_t c_dense_16_test10_numel = 1;
size_t c_dense_16_test10_shape[5] = {1, 1, 1, 1, 1};

int main(){
float errors[10];
size_t num_tests = 10; 
size_t num_outputs = 1; 
sample_initialize(); 
clock_t t0 = clock(); 
// // sample(&test1_dense_13_input_input,&c_dense_16_test1); 
sample(test1_dense_13_input_input_array,test1_dense_13_input_input_dim,&test1_dense_13_input_input_numel,test1_dense_13_input_input_shape,
c_dense_16_test1_array,c_dense_16_test1_dim,&c_dense_16_test1_numel, c_dense_16_test1_shape  );
// // sample(&test2_dense_13_input_input,&c_dense_16_test2);
// sample(test2_dense_13_input_input_array,test2_dense_13_input_input_dim,&test2_dense_13_input_input_numel,test2_dense_13_input_input_shape,
// c_dense_16_test2_array,c_dense_16_test2_dim,&c_dense_16_test2_numel, c_dense_16_test2_shape  );
// // sample(&test3_dense_13_input_input,&c_dense_16_test3); 
// sample(test3_dense_13_input_input_array,test3_dense_13_input_input_dim,&test3_dense_13_input_input_numel,test3_dense_13_input_input_shape,
// c_dense_16_test3_array,c_dense_16_test3_dim,&c_dense_16_test3_numel, c_dense_16_test3_shape  );
// // sample(&test4_dense_13_input_input,&c_dense_16_test4); 
// sample(test4_dense_13_input_input_array,test4_dense_13_input_input_dim,&test4_dense_13_input_input_numel,test4_dense_13_input_input_shape,
// c_dense_16_test4_array,c_dense_16_test4_dim,&c_dense_16_test4_numel, c_dense_16_test4_shape  );
// // sample(&test5_dense_13_input_input,&c_dense_16_test5); 
// sample(test5_dense_13_input_input_array,test5_dense_13_input_input_dim,&test5_dense_13_input_input_numel,test5_dense_13_input_input_shape,
// c_dense_16_test5_array,c_dense_16_test5_dim,&c_dense_16_test5_numel, c_dense_16_test5_shape  );
// // sample(&test6_dense_13_input_input,&c_dense_16_test6); 
// sample(test6_dense_13_input_input_array,test6_dense_13_input_input_dim,&test6_dense_13_input_input_numel,test6_dense_13_input_input_shape,
// c_dense_16_test6_array,c_dense_16_test6_dim,&c_dense_16_test6_numel, c_dense_16_test6_shape  );
// // sample(&test7_dense_13_input_input,&c_dense_16_test7); 
// sample(test7_dense_13_input_input_array,test7_dense_13_input_input_dim,&test7_dense_13_input_input_numel,test7_dense_13_input_input_shape,
// c_dense_16_test7_array,c_dense_16_test7_dim,&c_dense_16_test7_numel, c_dense_16_test7_shape  );
// // sample(&test8_dense_13_input_input,&c_dense_16_test8); 
// sample(test8_dense_13_input_input_array,test8_dense_13_input_input_dim,&test8_dense_13_input_input_numel,test8_dense_13_input_input_shape,
// c_dense_16_test8_array,c_dense_16_test8_dim,&c_dense_16_test8_numel, c_dense_16_test8_shape  );
// // sample(&test9_dense_13_input_input,&c_dense_16_test9); 
// sample(test9_dense_13_input_input_array,test9_dense_13_input_input_dim,&test9_dense_13_input_input_numel,test9_dense_13_input_input_shape,
// c_dense_16_test9_array,c_dense_16_test9_dim,&c_dense_16_test9_numel, c_dense_16_test9_shape  );
// // sample(&test10_dense_13_input_input,&c_dense_16_test10);
// sample(test10_dense_13_input_input_array,test10_dense_13_input_input_dim,&test10_dense_13_input_input_numel,test10_dense_13_input_input_shape,
// c_dense_16_test10_array,c_dense_16_test10_dim,&c_dense_16_test10_numel, c_dense_16_test10_shape  ); 

clock_t t1 = clock(); 
printf("Average time over 10 tests: %e s \n", 
 ((double)t1-t0)/(double)CLOCKS_PER_SEC/(double)10); 
// errors[0] = maxabs(&keras_dense_16_test1,&c_dense_16_test1); 
errors[0]= maxabs(keras_dense_16_test1_array,keras_dense_16_test1_dim,&keras_dense_16_test1_numel,keras_dense_16_test1_shape,
c_dense_16_test1_array,c_dense_16_test1_dim, &c_dense_16_test1_numel, c_dense_16_test1_shape);
// // errors[1] = maxabs(&keras_dense_16_test2,&c_dense_16_test2); 
// errors[1]= maxabs(keras_dense_16_test2_array,keras_dense_16_test2_dim,&keras_dense_16_test2_numel,keras_dense_16_test2_shape,
// c_dense_16_test2_array,c_dense_16_test2_dim, &c_dense_16_test2_numel, c_dense_16_test2_shape);
// // errors[2] = maxabs(&keras_dense_16_test3,&c_dense_16_test3); 
// errors[2]= maxabs(keras_dense_16_test3_array,keras_dense_16_test3_dim,&keras_dense_16_test3_numel,keras_dense_16_test3_shape,
// c_dense_16_test3_array,c_dense_16_test3_dim, &c_dense_16_test3_numel, c_dense_16_test3_shape);
// // errors[3] = maxabs(&keras_dense_16_test4,&c_dense_16_test4); 
// errors[3]= maxabs(keras_dense_16_test4_array,keras_dense_16_test4_dim,&keras_dense_16_test4_numel,keras_dense_16_test4_shape,
// c_dense_16_test4_array,c_dense_16_test4_dim, &c_dense_16_test4_numel, c_dense_16_test4_shape);
// // errors[4] = maxabs(&keras_dense_16_test5,&c_dense_16_test5); 
// errors[4]= maxabs(keras_dense_16_test5_array,keras_dense_16_test5_dim,&keras_dense_16_test5_numel,keras_dense_16_test5_shape,
// c_dense_16_test5_array,c_dense_16_test5_dim, &c_dense_16_test5_numel, c_dense_16_test5_shape);
// // errors[5] = maxabs(&keras_dense_16_test6,&c_dense_16_test6); 
// errors[5]= maxabs(keras_dense_16_test6_array,keras_dense_16_test6_dim,&keras_dense_16_test6_numel,keras_dense_16_test6_shape,
// c_dense_16_test6_array,c_dense_16_test6_dim, &c_dense_16_test6_numel, c_dense_16_test6_shape);
// // errors[6] = maxabs(&keras_dense_16_test7,&c_dense_16_test7);
// errors[6]= maxabs(keras_dense_16_test7_array,keras_dense_16_test7_dim,&keras_dense_16_test7_numel,keras_dense_16_test7_shape,
// c_dense_16_test7_array,c_dense_16_test7_dim, &c_dense_16_test7_numel, c_dense_16_test7_shape); 
// // errors[7] = maxabs(&keras_dense_16_test8,&c_dense_16_test8);
// errors[7]= maxabs(keras_dense_16_test8_array,keras_dense_16_test8_dim,&keras_dense_16_test8_numel,keras_dense_16_test8_shape,
// c_dense_16_test8_array,c_dense_16_test8_dim, &c_dense_16_test8_numel, c_dense_16_test8_shape); 
// // errors[8] = maxabs(&keras_dense_16_test9,&c_dense_16_test9); 
// errors[8]= maxabs(keras_dense_16_test9_array,keras_dense_16_test9_dim,&keras_dense_16_test9_numel,keras_dense_16_test9_shape,
// c_dense_16_test9_array,c_dense_16_test9_dim, &c_dense_16_test9_numel, c_dense_16_test9_shape);
// // errors[9] = maxabs(&keras_dense_16_test10,&c_dense_16_test10); 
// errors[9]= maxabs(keras_dense_16_test10_array,keras_dense_16_test10_dim,&keras_dense_16_test10_numel,keras_dense_16_test10_shape,
// c_dense_16_test10_array,c_dense_16_test10_dim, &c_dense_16_test10_numel, c_dense_16_test10_shape);
float maxerror = errors[0]; 
for(size_t i=1; i< num_tests*num_outputs;i++){ 
    #pragma HLS unroll factor=2
if (errors[i] > maxerror) { 
maxerror = errors[i];}} 
printf("Max absolute error for 10 tests: %e \n", maxerror);
sample_terminate(); 
if (maxerror > 1e-05) { 
return 0;} 
return 0;
} 

// float maxabs(k2c_tensor *tensor1, k2c_tensor *tensor2)
float maxabs(float tensor1_array[],size_t tensor1_dim, size_t * tensor1_numel, size_t tensor1_shape[],
float tensor2_array[], size_t tensor2_dim, size_t * tensor2_numel, size_t tensor2_shape[]){ 
    float x = 0; 
    float y = 0; 
    for(size_t i=0; i<*tensor1_numel; i++){
        #pragma HLS unroll factor=2
    y = fabsf(tensor1_array[i]-tensor2_array[i]);
    if (y>x) {x=y;}}
    return x;
    }

