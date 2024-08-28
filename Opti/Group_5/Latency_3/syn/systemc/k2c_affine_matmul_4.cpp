#include "k2c_affine_matmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void k2c_affine_matmul::thread_tmp_307_fu_4659_p2() {
    tmp_307_fu_4659_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_3_reg_2295.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_308_fu_4665_p2() {
    tmp_308_fu_4665_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_3_reg_2295.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_309_fu_4705_p2() {
    tmp_309_fu_4705_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_s_fu_4694_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_310_fu_4711_p2() {
    tmp_310_fu_4711_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_s_fu_4694_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_311_fu_4751_p2() {
    tmp_311_fu_4751_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_3_fu_4740_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_312_fu_4757_p2() {
    tmp_312_fu_4757_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_3_fu_4740_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_313_fu_4797_p2() {
    tmp_313_fu_4797_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_4_fu_4786_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_314_fu_4803_p2() {
    tmp_314_fu_4803_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_4_fu_4786_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_315_fu_4843_p2() {
    tmp_315_fu_4843_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_5_fu_4832_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_316_fu_4849_p2() {
    tmp_316_fu_4849_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_5_fu_4832_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_317_fu_4889_p2() {
    tmp_317_fu_4889_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_6_fu_4878_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_318_fu_4895_p2() {
    tmp_318_fu_4895_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_6_fu_4878_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_319_fu_4935_p2() {
    tmp_319_fu_4935_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_8_fu_4924_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_320_fu_4941_p2() {
    tmp_320_fu_4941_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_8_fu_4924_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_321_fu_4981_p2() {
    tmp_321_fu_4981_p2 = (!ap_const_lv64_4.is_01())? sc_lv<64>(): i_33_3_9_fu_4970_p2.read() << (unsigned short)ap_const_lv64_4.to_uint();
}

void k2c_affine_matmul::thread_tmp_322_fu_4987_p2() {
    tmp_322_fu_4987_p2 = (!ap_const_lv64_2.is_01())? sc_lv<64>(): i_33_3_9_fu_4970_p2.read() << (unsigned short)ap_const_lv64_2.to_uint();
}

void k2c_affine_matmul::thread_tmp_37_0_1_fu_2980_p2() {
    tmp_37_0_1_fu_2980_p2 = (!j_2_0_1_reg_1256.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_1_reg_1256.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_0_2_fu_3026_p2() {
    tmp_37_0_2_fu_3026_p2 = (!j_2_0_2_reg_1286.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_2_reg_1286.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_0_3_fu_3072_p2() {
    tmp_37_0_3_fu_3072_p2 = (!j_2_0_3_reg_1316.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_3_reg_1316.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_0_4_fu_3118_p2() {
    tmp_37_0_4_fu_3118_p2 = (!j_2_0_4_reg_1346.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_4_reg_1346.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_0_5_fu_3164_p2() {
    tmp_37_0_5_fu_3164_p2 = (!j_2_0_5_reg_1376.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_5_reg_1376.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_0_6_fu_3210_p2() {
    tmp_37_0_6_fu_3210_p2 = (!j_2_0_6_reg_1406.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_6_reg_1406.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_0_7_fu_3256_p2() {
    tmp_37_0_7_fu_3256_p2 = (!j_2_0_7_reg_1436.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_0_7_reg_1436.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_1_fu_3563_p2() {
    tmp_37_1_1_fu_3563_p2 = (!j_2_1_1_reg_1628.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_1_reg_1628.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_2_fu_3609_p2() {
    tmp_37_1_2_fu_3609_p2 = (!j_2_1_2_reg_1658.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_2_reg_1658.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_3_fu_3655_p2() {
    tmp_37_1_3_fu_3655_p2 = (!j_2_1_3_reg_1688.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_3_reg_1688.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_4_fu_3701_p2() {
    tmp_37_1_4_fu_3701_p2 = (!j_2_1_4_reg_1718.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_4_reg_1718.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_5_fu_3747_p2() {
    tmp_37_1_5_fu_3747_p2 = (!j_2_1_5_reg_1748.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_5_reg_1748.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_6_fu_3793_p2() {
    tmp_37_1_6_fu_3793_p2 = (!j_2_1_6_reg_1778.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_6_reg_1778.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_7_fu_3839_p2() {
    tmp_37_1_7_fu_3839_p2 = (!j_2_1_7_reg_1808.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_7_reg_1808.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_1_fu_3517_p2() {
    tmp_37_1_fu_3517_p2 = (!j_2_1_reg_1598.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_1_reg_1598.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_1_fu_4146_p2() {
    tmp_37_2_1_fu_4146_p2 = (!j_2_2_1_reg_2000.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_1_reg_2000.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_2_fu_4192_p2() {
    tmp_37_2_2_fu_4192_p2 = (!j_2_2_2_reg_2030.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_2_reg_2030.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_3_fu_4238_p2() {
    tmp_37_2_3_fu_4238_p2 = (!j_2_2_3_reg_2060.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_3_reg_2060.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_4_fu_4284_p2() {
    tmp_37_2_4_fu_4284_p2 = (!j_2_2_4_reg_2090.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_4_reg_2090.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_5_fu_4330_p2() {
    tmp_37_2_5_fu_4330_p2 = (!j_2_2_5_reg_2120.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_5_reg_2120.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_6_fu_4376_p2() {
    tmp_37_2_6_fu_4376_p2 = (!j_2_2_6_reg_2150.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_6_reg_2150.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_7_fu_4422_p2() {
    tmp_37_2_7_fu_4422_p2 = (!j_2_2_7_reg_2180.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_7_reg_2180.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_2_fu_4100_p2() {
    tmp_37_2_fu_4100_p2 = (!j_2_2_reg_1970.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_2_reg_1970.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_1_fu_4729_p2() {
    tmp_37_3_1_fu_4729_p2 = (!j_2_3_1_reg_2372.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_1_reg_2372.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_2_fu_4775_p2() {
    tmp_37_3_2_fu_4775_p2 = (!j_2_3_2_reg_2402.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_2_reg_2402.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_3_fu_4821_p2() {
    tmp_37_3_3_fu_4821_p2 = (!j_2_3_3_reg_2432.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_3_reg_2432.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_4_fu_4867_p2() {
    tmp_37_3_4_fu_4867_p2 = (!j_2_3_4_reg_2462.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_4_reg_2462.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_5_fu_4913_p2() {
    tmp_37_3_5_fu_4913_p2 = (!j_2_3_5_reg_2492.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_5_reg_2492.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_6_fu_4959_p2() {
    tmp_37_3_6_fu_4959_p2 = (!j_2_3_6_reg_2522.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_6_reg_2522.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_7_fu_5005_p2() {
    tmp_37_3_7_fu_5005_p2 = (!j_2_3_7_reg_2552.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_7_reg_2552.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_3_fu_4683_p2() {
    tmp_37_3_fu_4683_p2 = (!j_2_3_reg_2342.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_3_reg_2342.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_37_fu_2934_p2() {
    tmp_37_fu_2934_p2 = (!j_2_reg_1226.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_2_reg_1226.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void k2c_affine_matmul::thread_tmp_3_cast_cast_fu_4496_p1() {
    tmp_3_cast_cast_fu_4496_p1 = esl_zext<13,12>(tmp_3_fu_4488_p3.read());
}

void k2c_affine_matmul::thread_tmp_3_fu_4488_p3() {
    tmp_3_fu_4488_p3 = esl_concat<5,7>(k_2_9_fu_4447_p2.read(), ap_const_lv7_0);
}

void k2c_affine_matmul::thread_tmp_fu_2735_p1() {
    tmp_fu_2735_p1 = inneridx_reg_1155.read().range(9-1, 0);
}

void k2c_affine_matmul::thread_tmp_s_fu_2845_p9() {
    tmp_s_fu_2845_p9 = esl_zext<64,3>(arrayNo_trunc_fu_2835_p2.read());
}

}

