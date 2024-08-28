#include "k2c_affine_matmul_3.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void k2c_affine_matmul_3::thread_merge_i3_fu_5233_p3() {
    merge_i3_fu_5233_p3 = (!tmp_80_fu_5227_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_80_fu_5227_p2.read()[0].to_bool())? tmp_639_i3_fu_5219_p3.read(): tmp_637_i3_fu_5201_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i4_fu_4884_p3() {
    merge_i4_fu_4884_p3 = (!tmp_168_fu_4878_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_168_fu_4878_p2.read()[0].to_bool())? tmp_639_i4_fu_4870_p3.read(): tmp_637_i4_fu_4852_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i5_fu_6151_p3() {
    merge_i5_fu_6151_p3 = (!tmp_186_fu_6145_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_186_fu_6145_p2.read()[0].to_bool())? tmp_639_i5_fu_6137_p3.read(): tmp_637_i5_fu_6119_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i6_fu_3870_p3() {
    merge_i6_fu_3870_p3 = (!tmp_92_fu_3864_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_92_fu_3864_p2.read()[0].to_bool())? tmp_639_i6_fu_3856_p3.read(): tmp_637_i6_fu_3838_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i7_fu_9163_p3() {
    merge_i7_fu_9163_p3 = (!tmp_194_fu_9157_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_194_fu_9157_p2.read()[0].to_bool())? tmp_639_i7_fu_9149_p3.read(): tmp_637_i7_fu_9131_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i8_fu_4208_p3() {
    merge_i8_fu_4208_p3 = (!tmp_107_fu_4202_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_107_fu_4202_p2.read()[0].to_bool())? tmp_639_i8_fu_4194_p3.read(): tmp_637_i8_fu_4176_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i9_fu_7190_p3() {
    merge_i9_fu_7190_p3 = (!tmp_120_fu_7184_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_120_fu_7184_p2.read()[0].to_bool())? tmp_639_i9_fu_7176_p3.read(): tmp_637_i9_fu_7158_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i_fu_3320_p3() {
    merge_i_fu_3320_p3 = (!tmp_69_fu_3314_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_69_fu_3314_p2.read()[0].to_bool())? tmp_639_i_fu_3306_p3.read(): tmp_637_i_fu_3288_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex10_fu_9367_p1() {
    newIndex10_fu_9367_p1 = esl_sext<3,2>(tmp_346_fu_9357_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex11_cast_fu_4944_p1() {
    newIndex11_cast_fu_4944_p1 = esl_zext<64,2>(tmp_154_fu_4934_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex11_fu_8161_p3() {
    newIndex11_fu_8161_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_27_fu_8151_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex12_fu_9449_p1() {
    newIndex12_fu_9449_p1 = esl_sext<3,2>(tmp_353_fu_9439_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex13_cast_fu_3503_p1() {
    newIndex13_cast_fu_3503_p1 = esl_zext<64,2>(tmp_16_fu_3493_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex13_fu_8507_p3() {
    newIndex13_fu_8507_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_28_fu_8497_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex14_fu_9797_p1() {
    newIndex14_fu_9797_p1 = esl_sext<3,2>(tmp_360_fu_9787_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex15_cast_fu_5296_p1() {
    newIndex15_cast_fu_5296_p1 = esl_zext<64,2>(tmp_178_fu_5286_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex15_fu_10145_p1() {
    newIndex15_fu_10145_p1 = esl_sext<3,2>(tmp_364_fu_10135_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex17_cast_fu_3575_p1() {
    newIndex17_cast_fu_3575_p1 = esl_zext<64,2>(tmp_17_fu_3565_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex19_cast_fu_5365_p1() {
    newIndex19_cast_fu_5365_p1 = esl_zext<64,2>(tmp_293_fu_5355_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex1_fu_8870_p1() {
    newIndex1_fu_8870_p1 = esl_sext<3,2>(tmp_323_fu_8860_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex21_cast_fu_3913_p1() {
    newIndex21_cast_fu_3913_p1 = esl_zext<64,2>(tmp_18_fu_3903_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex23_cast_fu_6901_p1() {
    newIndex23_cast_fu_6901_p1 = esl_zext<64,6>(newIndex4_fu_6893_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex24_cast_fu_10149_p1() {
    newIndex24_cast_fu_10149_p1 = esl_zext<64,3>(newIndex15_fu_10145_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex26_cast_fu_5434_p1() {
    newIndex26_cast_fu_5434_p1 = esl_zext<64,2>(tmp_302_fu_5424_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex28_cast_fu_4251_p1() {
    newIndex28_cast_fu_4251_p1 = esl_zext<64,2>(tmp_20_fu_4241_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex2_fu_7389_p3() {
    newIndex2_fu_7389_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_24_fu_7379_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex30_cast_fu_7255_p1() {
    newIndex30_cast_fu_7255_p1 = esl_zext<64,6>(newIndex6_fu_7247_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex32_cast_fu_5512_p1() {
    newIndex32_cast_fu_5512_p1 = esl_zext<64,2>(tmp_309_fu_5502_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex34_cast_fu_4589_p1() {
    newIndex34_cast_fu_4589_p1 = esl_zext<64,2>(tmp_22_fu_4579_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex35_cast_fu_9801_p1() {
    newIndex35_cast_fu_9801_p1 = esl_zext<64,3>(newIndex14_fu_9797_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex37_cast_fu_7326_p1() {
    newIndex37_cast_fu_7326_p1 = esl_zext<64,6>(newIndex8_fu_7318_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex39_cast_fu_5856_p1() {
    newIndex39_cast_fu_5856_p1 = esl_zext<64,2>(tmp_319_fu_5846_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex3_fu_9221_p1() {
    newIndex3_fu_9221_p1 = esl_sext<3,2>(tmp_331_fu_9211_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex41_cast_fu_8874_p1() {
    newIndex41_cast_fu_8874_p1 = esl_zext<64,3>(newIndex1_fu_8870_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex43_cast_fu_7397_p1() {
    newIndex43_cast_fu_7397_p1 = esl_zext<64,6>(newIndex2_fu_7389_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex45_cast_fu_6200_p1() {
    newIndex45_cast_fu_6200_p1 = esl_zext<64,2>(tmp_328_fu_6190_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex46_cast_fu_9453_p1() {
    newIndex46_cast_fu_9453_p1 = esl_zext<64,3>(newIndex12_fu_9449_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex48_cast_fu_9225_p1() {
    newIndex48_cast_fu_9225_p1 = esl_zext<64,3>(newIndex3_fu_9221_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex4_fu_6893_p3() {
    newIndex4_fu_6893_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_19_fu_6883_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex50_cast_fu_7477_p1() {
    newIndex50_cast_fu_7477_p1 = esl_zext<64,6>(newIndex5_fu_7469_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex52_cast_fu_6544_p1() {
    newIndex52_cast_fu_6544_p1 = esl_zext<64,2>(tmp_338_fu_6534_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex54_cast_fu_9298_p1() {
    newIndex54_cast_fu_9298_p1 = esl_zext<64,3>(newIndex7_fu_9294_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex56_cast_fu_7823_p1() {
    newIndex56_cast_fu_7823_p1 = esl_zext<64,6>(newIndex9_fu_7815_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex57_cast_fu_9371_p1() {
    newIndex57_cast_fu_9371_p1 = esl_zext<64,3>(newIndex10_fu_9367_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex5_cast_fu_3031_p1() {
    newIndex5_cast_fu_3031_p1 = esl_zext<64,2>(tmp_fu_3021_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex5_fu_7469_p3() {
    newIndex5_fu_7469_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_25_fu_7459_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex60_cast_fu_8169_p1() {
    newIndex60_cast_fu_8169_p1 = esl_zext<64,6>(newIndex11_fu_8161_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex63_cast_fu_8515_p1() {
    newIndex63_cast_fu_8515_p1 = esl_zext<64,6>(newIndex13_fu_8507_p3.read());
}

void k2c_affine_matmul_3::thread_newIndex6_fu_7247_p3() {
    newIndex6_fu_7247_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_21_fu_7237_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex7_cast_fu_3377_p1() {
    newIndex7_cast_fu_3377_p1 = esl_zext<64,2>(tmp_14_fu_3367_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex7_fu_9294_p1() {
    newIndex7_fu_9294_p1 = esl_sext<3,2>(tmp_341_fu_9284_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex8_fu_7318_p3() {
    newIndex8_fu_7318_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_23_fu_7308_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex9_cast_fu_3440_p1() {
    newIndex9_cast_fu_3440_p1 = esl_zext<64,2>(tmp_15_fu_3430_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex9_fu_7815_p3() {
    newIndex9_fu_7815_p3 = esl_concat<4,2>(ap_const_lv4_1, tmp_26_fu_7805_p4.read());
}

void k2c_affine_matmul_3::thread_newIndex_cast_fu_10497_p1() {
    newIndex_cast_fu_10497_p1 = esl_zext<64,3>(newIndex_fu_10493_p1.read());
}

void k2c_affine_matmul_3::thread_newIndex_fu_10493_p1() {
    newIndex_fu_10493_p1 = esl_sext<3,2>(tmp_368_fu_10483_p4.read());
}

void k2c_affine_matmul_3::thread_outrows_cast_fu_2982_p1() {
    outrows_cast_fu_2982_p1 = esl_zext<64,5>(outrows.read());
}

void k2c_affine_matmul_3::thread_sum5_1_1_fu_5280_p2() {
    sum5_1_1_fu_5280_p2 = (k_1_1_reg_2490.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_2_fu_5349_p2() {
    sum5_1_2_fu_5349_p2 = (k_1_2_reg_2501.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_3_fu_5418_p2() {
    sum5_1_3_fu_5418_p2 = (k_1_3_reg_2512.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_4_fu_5496_p2() {
    sum5_1_4_fu_5496_p2 = (ap_phi_mux_k_1_4_phi_fu_2540_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_5_fu_5840_p2() {
    sum5_1_5_fu_5840_p2 = (ap_phi_mux_k_1_5_phi_fu_2564_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_6_fu_6184_p2() {
    sum5_1_6_fu_6184_p2 = (ap_phi_mux_k_1_6_phi_fu_2588_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_7_fu_6528_p2() {
    sum5_1_7_fu_6528_p2 = (ap_phi_mux_k_1_7_phi_fu_2612_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_1_fu_4928_p2() {
    sum5_1_fu_4928_p2 = (ap_phi_mux_k_1_phi_fu_2483_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_1_fu_9205_p2() {
    sum5_3_1_fu_9205_p2 = (k_3_1_reg_2820.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_2_fu_9278_p2() {
    sum5_3_2_fu_9278_p2 = (k_3_2_reg_2831.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_3_fu_9351_p2() {
    sum5_3_3_fu_9351_p2 = (k_3_3_reg_2842.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_4_fu_9433_p2() {
    sum5_3_4_fu_9433_p2 = (ap_phi_mux_k_3_4_phi_fu_2870_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_5_fu_9781_p2() {
    sum5_3_5_fu_9781_p2 = (ap_phi_mux_k_3_5_phi_fu_2894_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_6_fu_10129_p2() {
    sum5_3_6_fu_10129_p2 = (ap_phi_mux_k_3_6_phi_fu_2918_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_7_fu_10477_p2() {
    sum5_3_7_fu_10477_p2 = (ap_phi_mux_k_3_7_phi_fu_2942_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum5_3_fu_8854_p2() {
    sum5_3_fu_8854_p2 = (ap_phi_mux_k_3_phi_fu_2813_p4.read() ^ ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_sum8_0_4_fu_3587_p2() {
    sum8_0_4_fu_3587_p2 = (!j_14_0_3_reg_11124.read().is_01() || !tmp_184_fu_3557_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_0_3_reg_11124.read()) + sc_biguint<4>(tmp_184_fu_3557_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_0_5_fu_3925_p2() {
    sum8_0_5_fu_3925_p2 = (!j_14_0_4_reg_11235.read().is_01() || !tmp_294_fu_3895_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_0_4_reg_11235.read()) + sc_biguint<4>(tmp_294_fu_3895_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_0_6_fu_4263_p2() {
    sum8_0_6_fu_4263_p2 = (!j_14_0_5_reg_11346.read().is_01() || !tmp_303_fu_4233_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_0_5_reg_11346.read()) + sc_biguint<4>(tmp_303_fu_4233_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_0_7_fu_4601_p2() {
    sum8_0_7_fu_4601_p2 = (!j_14_0_6_reg_11457.read().is_01() || !tmp_311_fu_4571_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_0_6_reg_11457.read()) + sc_biguint<4>(tmp_311_fu_4571_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_1_4_fu_5524_p2() {
    sum8_1_4_fu_5524_p2 = (!tmp_307_fu_5488_p1.read().is_01() || !j_14_1_3_reg_11859.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_307_fu_5488_p1.read()) + sc_biguint<4>(j_14_1_3_reg_11859.read()));
}

void k2c_affine_matmul_3::thread_sum8_1_5_fu_5868_p2() {
    sum8_1_5_fu_5868_p2 = (!tmp_317_fu_5832_p1.read().is_01() || !j_14_1_4_reg_11970.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_317_fu_5832_p1.read()) + sc_biguint<4>(j_14_1_4_reg_11970.read()));
}

void k2c_affine_matmul_3::thread_sum8_1_6_fu_6212_p2() {
    sum8_1_6_fu_6212_p2 = (!tmp_326_fu_6176_p1.read().is_01() || !j_14_1_5_reg_12081.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_326_fu_6176_p1.read()) + sc_biguint<4>(j_14_1_5_reg_12081.read()));
}

void k2c_affine_matmul_3::thread_sum8_1_7_fu_6556_p2() {
    sum8_1_7_fu_6556_p2 = (!tmp_335_fu_6520_p1.read().is_01() || !j_14_1_6_reg_12192.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_335_fu_6520_p1.read()) + sc_biguint<4>(j_14_1_6_reg_12192.read()));
}

void k2c_affine_matmul_3::thread_sum8_1_fu_4956_p2() {
    sum8_1_fu_4956_p2 = (!tmp_142_fu_4920_p1.read().is_01() || !tmp_130_reg_11577.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_142_fu_4920_p1.read()) + sc_biguint<4>(tmp_130_reg_11577.read()));
}

void k2c_affine_matmul_3::thread_sum8_2_4_fu_7489_p2() {
    sum8_2_4_fu_7489_p2 = (!j_14_2_3_reg_12593.read().is_01() || !tmp_332_fu_7451_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_2_3_reg_12593.read()) + sc_biguint<4>(tmp_332_fu_7451_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_2_5_fu_7835_p2() {
    sum8_2_5_fu_7835_p2 = (!j_14_2_4_reg_12704.read().is_01() || !tmp_342_fu_7797_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_2_4_reg_12704.read()) + sc_biguint<4>(tmp_342_fu_7797_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_2_6_fu_8181_p2() {
    sum8_2_6_fu_8181_p2 = (!j_14_2_5_reg_12815.read().is_01() || !tmp_347_fu_8143_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_2_5_reg_12815.read()) + sc_biguint<4>(tmp_347_fu_8143_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_2_7_fu_8527_p2() {
    sum8_2_7_fu_8527_p2 = (!j_14_2_6_reg_12926.read().is_01() || !tmp_355_fu_8489_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_2_6_reg_12926.read()) + sc_biguint<4>(tmp_355_fu_8489_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_2_fu_6913_p2() {
    sum8_2_fu_6913_p2 = (!tmp_291_reg_12312.read().is_01() || !tmp_298_fu_6875_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_291_reg_12312.read()) + sc_biguint<4>(tmp_298_fu_6875_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_3_4_fu_9465_p2() {
    sum8_3_4_fu_9465_p2 = (!j_14_3_3_reg_13329.read().is_01() || !tmp_350_fu_9425_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_3_3_reg_13329.read()) + sc_biguint<4>(tmp_350_fu_9425_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_3_5_fu_9813_p2() {
    sum8_3_5_fu_9813_p2 = (!j_14_3_4_reg_13440.read().is_01() || !tmp_358_fu_9773_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_3_4_reg_13440.read()) + sc_biguint<4>(tmp_358_fu_9773_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_3_6_fu_10161_p2() {
    sum8_3_6_fu_10161_p2 = (!j_14_3_5_reg_13551.read().is_01() || !tmp_362_fu_10121_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_3_5_reg_13551.read()) + sc_biguint<4>(tmp_362_fu_10121_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_3_7_fu_10509_p2() {
    sum8_3_7_fu_10509_p2 = (!j_14_3_6_reg_13662.read().is_01() || !tmp_366_fu_10469_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_14_3_6_reg_13662.read()) + sc_biguint<4>(tmp_366_fu_10469_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_3_fu_8886_p2() {
    sum8_3_fu_8886_p2 = (!tmp_315_reg_13046.read().is_01() || !tmp_321_fu_8846_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_315_reg_13046.read()) + sc_biguint<4>(tmp_321_fu_8846_p1.read()));
}

void k2c_affine_matmul_3::thread_sum8_fu_3043_p2() {
    sum8_fu_3043_p2 = (!tmp_100_reg_10842.read().is_01() || !tmp_106_fu_3013_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_100_reg_10842.read()) + sc_biguint<4>(tmp_106_fu_3013_p1.read()));
}

void k2c_affine_matmul_3::thread_tmp_100_fu_2997_p1() {
    tmp_100_fu_2997_p1 = j_reg_2289.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_101_fu_8899_p3() {
    tmp_101_fu_8899_p3 = esl_concat<3,1>(tmp_322_fu_8850_p1.read(), tmp_324_fu_8891_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_102_fu_4108_p2() {
    tmp_102_fu_4108_p2 = (tmp_628_i8_reg_11325.read() | tmp_626_i8_reg_11320.read());
}

void k2c_affine_matmul_3::thread_tmp_104_fu_4138_p2() {
    tmp_104_fu_4138_p2 = (tmp_632_i8_fu_4125_p2.read() | tmp_630_i8_fu_4120_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_105_fu_4170_p2() {
    tmp_105_fu_4170_p2 = (tmp_636_i8_fu_4157_p2.read() | tmp_634_i8_fu_4152_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_106_fu_3013_p1() {
    tmp_106_fu_3013_p1 = ap_phi_mux_k_phi_fu_2318_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_107_fu_4202_p2() {
    tmp_107_fu_4202_p2 = (tmp_640_i8_fu_4189_p2.read() | tmp_638_i8_fu_4184_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_108_fu_7043_p9() {
    tmp_108_fu_7043_p9 = esl_zext<64,3>(tmp_299_reg_12330.read());
}

void k2c_affine_matmul_3::thread_tmp_110_fu_6968_p2() {
    tmp_110_fu_6968_p2 = (tmp_616_i9_fu_6954_p2.read() | tmp_614_i9_fu_6948_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_111_fu_7002_p2() {
    tmp_111_fu_7002_p2 = (tmp_620_i9_fu_6988_p2.read() | tmp_618_i9_fu_6982_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_112_fu_3017_p1() {
    tmp_112_fu_3017_p1 = ap_phi_mux_k_phi_fu_2318_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_113_fu_6231_p3() {
    tmp_113_fu_6231_p3 = esl_concat<3,1>(arrayNo_trunc5_fu_6217_p2.read(), tmp_329_fu_6223_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_114_fu_7072_p2() {
    tmp_114_fu_7072_p2 = (tmp_624_i9_reg_12395.read() | tmp_622_i9_reg_12390.read());
}

void k2c_affine_matmul_3::thread_tmp_116_fu_7090_p2() {
    tmp_116_fu_7090_p2 = (tmp_628_i9_reg_12406.read() | tmp_626_i9_reg_12401.read());
}

void k2c_affine_matmul_3::thread_tmp_117_fu_7120_p2() {
    tmp_117_fu_7120_p2 = (tmp_632_i9_fu_7107_p2.read() | tmp_630_i9_fu_7102_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_118_fu_3048_p3() {
    tmp_118_fu_3048_p3 = sum8_fu_3043_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_119_fu_7152_p2() {
    tmp_119_fu_7152_p2 = (tmp_636_i9_fu_7139_p2.read() | tmp_634_i9_fu_7134_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_120_fu_7184_p2() {
    tmp_120_fu_7184_p2 = (tmp_640_i9_fu_7171_p2.read() | tmp_638_i9_fu_7166_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_122_fu_4399_p9() {
    tmp_122_fu_4399_p9 = esl_zext<64,3>(tmp_304_reg_11360.read());
}

void k2c_affine_matmul_3::thread_tmp_123_fu_4324_p2() {
    tmp_123_fu_4324_p2 = (tmp_616_i1_fu_4310_p2.read() | tmp_614_i1_fu_4304_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_124_fu_3363_p1() {
    tmp_124_fu_3363_p1 = k_0_1_reg_2325.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_125_fu_7508_p3() {
    tmp_125_fu_7508_p3 = esl_concat<3,1>(arrayNo_trunc6_fu_7494_p2.read(), tmp_334_fu_7500_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_126_fu_4358_p2() {
    tmp_126_fu_4358_p2 = (tmp_620_i1_fu_4344_p2.read() | tmp_618_i1_fu_4338_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_128_fu_4428_p2() {
    tmp_128_fu_4428_p2 = (tmp_624_i1_reg_11425.read() | tmp_622_i1_reg_11420.read());
}

void k2c_affine_matmul_3::thread_tmp_129_fu_4446_p2() {
    tmp_129_fu_4446_p2 = (tmp_628_i1_reg_11436.read() | tmp_626_i1_reg_11431.read());
}

void k2c_affine_matmul_3::thread_tmp_130_fu_4904_p1() {
    tmp_130_fu_4904_p1 = j_1_reg_2454.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_131_fu_6575_p3() {
    tmp_131_fu_6575_p3 = esl_concat<3,1>(arrayNo_trunc7_fu_6561_p2.read(), tmp_339_fu_6567_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_132_fu_4476_p2() {
    tmp_132_fu_4476_p2 = (tmp_632_i1_fu_4463_p2.read() | tmp_630_i1_fu_4458_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_134_fu_3518_p9() {
    tmp_134_fu_3518_p9 = esl_zext<64,3>(tmp_166_reg_11079.read());
}

void k2c_affine_matmul_3::thread_tmp_135_fu_4508_p2() {
    tmp_135_fu_4508_p2 = (tmp_636_i1_fu_4495_p2.read() | tmp_634_i1_fu_4490_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_136_fu_3426_p1() {
    tmp_136_fu_3426_p1 = k_0_2_reg_2336.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_137_fu_4540_p2() {
    tmp_137_fu_4540_p2 = (tmp_640_i1_fu_4527_p2.read() | tmp_638_i1_fu_4522_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_138_fu_5660_p9() {
    tmp_138_fu_5660_p9 = esl_zext<64,3>(tmp_308_reg_11873.read());
}

void k2c_affine_matmul_3::thread_tmp_140_fu_5585_p2() {
    tmp_140_fu_5585_p2 = (tmp_616_i3_fu_5571_p2.read() | tmp_614_i3_fu_5565_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_141_fu_5619_p2() {
    tmp_141_fu_5619_p2 = (tmp_620_i3_fu_5605_p2.read() | tmp_618_i3_fu_5599_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_142_fu_4920_p1() {
    tmp_142_fu_4920_p1 = ap_phi_mux_k_1_phi_fu_2483_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_143_fu_7854_p3() {
    tmp_143_fu_7854_p3 = esl_concat<3,1>(arrayNo_trunc9_fu_7840_p2.read(), tmp_344_fu_7846_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_144_fu_5689_p2() {
    tmp_144_fu_5689_p2 = (tmp_624_i2_reg_11938.read() | tmp_622_i2_reg_11933.read());
}

void k2c_affine_matmul_3::thread_tmp_146_fu_5707_p2() {
    tmp_146_fu_5707_p2 = (tmp_628_i2_reg_11949.read() | tmp_626_i2_reg_11944.read());
}

void k2c_affine_matmul_3::thread_tmp_147_fu_5737_p2() {
    tmp_147_fu_5737_p2 = (tmp_632_i2_fu_5724_p2.read() | tmp_630_i2_fu_5719_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_148_fu_4924_p1() {
    tmp_148_fu_4924_p1 = ap_phi_mux_k_1_phi_fu_2483_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_149_fu_5769_p2() {
    tmp_149_fu_5769_p2 = (tmp_636_i2_fu_5756_p2.read() | tmp_634_i2_fu_5751_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_14_fu_3367_p4() {
    tmp_14_fu_3367_p4 = k_0_1_reg_2325.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_150_fu_5311_p9() {
    tmp_150_fu_5311_p9 = esl_zext<64,3>(tmp_172_reg_11708.read());
}

void k2c_affine_matmul_3::thread_tmp_152_fu_5801_p2() {
    tmp_152_fu_5801_p2 = (tmp_640_i2_fu_5788_p2.read() | tmp_638_i2_fu_5783_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_153_fu_4737_p9() {
    tmp_153_fu_4737_p9 = esl_zext<64,3>(tmp_313_reg_11471.read());
}

void k2c_affine_matmul_3::thread_tmp_154_fu_4934_p4() {
    tmp_154_fu_4934_p4 = sum5_1_fu_4928_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_155_fu_8200_p3() {
    tmp_155_fu_8200_p3 = esl_concat<3,1>(arrayNo_trunc10_fu_8186_p2.read(), tmp_349_fu_8192_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_156_fu_4662_p2() {
    tmp_156_fu_4662_p2 = (tmp_616_i4_fu_4648_p2.read() | tmp_614_i4_fu_4642_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_158_fu_4696_p2() {
    tmp_158_fu_4696_p2 = (tmp_620_i4_fu_4682_p2.read() | tmp_618_i4_fu_4676_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_159_fu_4766_p2() {
    tmp_159_fu_4766_p2 = (tmp_624_i4_reg_11536.read() | tmp_622_i4_reg_11531.read());
}

void k2c_affine_matmul_3::thread_tmp_15_fu_3430_p4() {
    tmp_15_fu_3430_p4 = k_0_2_reg_2336.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_160_fu_4961_p3() {
    tmp_160_fu_4961_p3 = sum8_1_fu_4956_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_161_fu_9484_p3() {
    tmp_161_fu_9484_p3 = esl_concat<3,1>(arrayNo_trunc11_fu_9470_p2.read(), tmp_354_fu_9476_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_162_fu_4784_p2() {
    tmp_162_fu_4784_p2 = (tmp_628_i4_reg_11547.read() | tmp_626_i4_reg_11542.read());
}

void k2c_affine_matmul_3::thread_tmp_164_fu_4814_p2() {
    tmp_164_fu_4814_p2 = (tmp_632_i4_fu_4801_p2.read() | tmp_630_i4_fu_4796_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_165_fu_4846_p2() {
    tmp_165_fu_4846_p2 = (tmp_636_i4_fu_4833_p2.read() | tmp_634_i4_fu_4828_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_166_fu_3489_p1() {
    tmp_166_fu_3489_p1 = k_0_3_reg_2347.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_167_fu_8546_p3() {
    tmp_167_fu_8546_p3 = esl_concat<3,1>(arrayNo_trunc12_fu_8532_p2.read(), tmp_357_fu_8538_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_168_fu_4878_p2() {
    tmp_168_fu_4878_p2 = (tmp_640_i4_fu_4865_p2.read() | tmp_638_i4_fu_4860_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_16_fu_3493_p4() {
    tmp_16_fu_3493_p4 = k_0_3_reg_2347.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_170_fu_6004_p9() {
    tmp_170_fu_6004_p9 = esl_zext<64,3>(tmp_318_reg_11984.read());
}

void k2c_affine_matmul_3::thread_tmp_171_fu_5929_p2() {
    tmp_171_fu_5929_p2 = (tmp_616_i5_fu_5915_p2.read() | tmp_614_i5_fu_5909_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_172_fu_5276_p1() {
    tmp_172_fu_5276_p1 = k_1_1_reg_2490.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_173_fu_9832_p3() {
    tmp_173_fu_9832_p3 = esl_concat<3,1>(arrayNo_trunc13_fu_9818_p2.read(), tmp_361_fu_9824_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_174_fu_5963_p2() {
    tmp_174_fu_5963_p2 = (tmp_620_i6_fu_5949_p2.read() | tmp_618_i6_fu_5943_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_176_fu_6033_p2() {
    tmp_176_fu_6033_p2 = (tmp_624_i5_reg_12049.read() | tmp_622_i5_reg_12044.read());
}

void k2c_affine_matmul_3::thread_tmp_177_fu_6051_p2() {
    tmp_177_fu_6051_p2 = (tmp_628_i5_reg_12060.read() | tmp_626_i5_reg_12055.read());
}

void k2c_affine_matmul_3::thread_tmp_178_fu_5286_p4() {
    tmp_178_fu_5286_p4 = sum5_1_1_fu_5280_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_179_fu_10180_p3() {
    tmp_179_fu_10180_p3 = esl_concat<3,1>(arrayNo_trunc14_fu_10166_p2.read(), tmp_365_fu_10172_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_17_fu_3565_p4() {
    tmp_17_fu_3565_p4 = ap_phi_mux_k_0_4_phi_fu_2375_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_180_fu_6081_p2() {
    tmp_180_fu_6081_p2 = (tmp_632_i5_fu_6068_p2.read() | tmp_630_i5_fu_6063_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_182_fu_5380_p9() {
    tmp_182_fu_5380_p9 = esl_zext<64,3>(tmp_292_reg_11761.read());
}

void k2c_affine_matmul_3::thread_tmp_183_fu_6113_p2() {
    tmp_183_fu_6113_p2 = (tmp_636_i5_fu_6100_p2.read() | tmp_634_i5_fu_6095_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_184_fu_3557_p1() {
    tmp_184_fu_3557_p1 = ap_phi_mux_k_0_4_phi_fu_2375_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_185_fu_10528_p3() {
    tmp_185_fu_10528_p3 = esl_concat<3,1>(arrayNo_trunc15_fu_10514_p2.read(), tmp_369_fu_10520_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_186_fu_6145_p2() {
    tmp_186_fu_6145_p2 = (tmp_640_i5_fu_6132_p2.read() | tmp_638_i5_fu_6127_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_187_fu_9016_p9() {
    tmp_187_fu_9016_p9 = esl_zext<64,3>(tmp_322_reg_13064.read());
}

void k2c_affine_matmul_3::thread_tmp_188_fu_8941_p2() {
    tmp_188_fu_8941_p2 = (tmp_616_i7_fu_8927_p2.read() | tmp_614_i7_fu_8921_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_189_fu_8975_p2() {
    tmp_189_fu_8975_p2 = (tmp_620_i8_fu_8961_p2.read() | tmp_618_i7_fu_8955_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_18_fu_3903_p4() {
    tmp_18_fu_3903_p4 = ap_phi_mux_k_0_5_phi_fu_2399_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_190_fu_9045_p2() {
    tmp_190_fu_9045_p2 = (tmp_624_i7_reg_13129.read() | tmp_622_i7_reg_13124.read());
}

void k2c_affine_matmul_3::thread_tmp_191_fu_9063_p2() {
    tmp_191_fu_9063_p2 = (tmp_628_i7_reg_13140.read() | tmp_626_i7_reg_13135.read());
}

void k2c_affine_matmul_3::thread_tmp_192_fu_9093_p2() {
    tmp_192_fu_9093_p2 = (tmp_632_i7_fu_9080_p2.read() | tmp_630_i7_fu_9075_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_193_fu_9125_p2() {
    tmp_193_fu_9125_p2 = (tmp_636_i7_fu_9112_p2.read() | tmp_634_i7_fu_9107_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_194_fu_9157_p2() {
    tmp_194_fu_9157_p2 = (tmp_640_i7_fu_9144_p2.read() | tmp_638_i7_fu_9139_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_195_fu_6348_p9() {
    tmp_195_fu_6348_p9 = esl_zext<64,3>(tmp_327_reg_12095.read());
}

void k2c_affine_matmul_3::thread_tmp_196_fu_6273_p2() {
    tmp_196_fu_6273_p2 = (tmp_616_i10_fu_6259_p2.read() | tmp_614_i10_fu_6253_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_197_fu_6307_p2() {
    tmp_197_fu_6307_p2 = (tmp_620_i10_fu_6293_p2.read() | tmp_618_i10_fu_6287_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_198_fu_6377_p2() {
    tmp_198_fu_6377_p2 = (tmp_624_i10_reg_12160.read() | tmp_622_i10_reg_12155.read());
}

void k2c_affine_matmul_3::thread_tmp_199_fu_6395_p2() {
    tmp_199_fu_6395_p2 = (tmp_628_i10_reg_12171.read() | tmp_626_i10_reg_12166.read());
}

void k2c_affine_matmul_3::thread_tmp_19_fu_6883_p4() {
    tmp_19_fu_6883_p4 = ap_phi_mux_k_s_phi_fu_2648_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_200_fu_6425_p2() {
    tmp_200_fu_6425_p2 = (tmp_632_i10_fu_6412_p2.read() | tmp_630_i10_fu_6407_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_201_fu_6457_p2() {
    tmp_201_fu_6457_p2 = (tmp_636_i10_fu_6444_p2.read() | tmp_634_i10_fu_6439_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_202_fu_6489_p2() {
    tmp_202_fu_6489_p2 = (tmp_640_i10_fu_6476_p2.read() | tmp_638_i10_fu_6471_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_203_fu_7625_p9() {
    tmp_203_fu_7625_p9 = esl_zext<64,3>(tmp_333_reg_12607.read());
}

void k2c_affine_matmul_3::thread_tmp_204_fu_7550_p2() {
    tmp_204_fu_7550_p2 = (tmp_616_i11_fu_7536_p2.read() | tmp_614_i11_fu_7530_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_205_fu_7584_p2() {
    tmp_205_fu_7584_p2 = (tmp_620_i11_fu_7570_p2.read() | tmp_618_i11_fu_7564_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_206_fu_7654_p2() {
    tmp_206_fu_7654_p2 = (tmp_624_i11_reg_12672.read() | tmp_622_i11_reg_12667.read());
}

void k2c_affine_matmul_3::thread_tmp_207_fu_7672_p2() {
    tmp_207_fu_7672_p2 = (tmp_628_i11_reg_12683.read() | tmp_626_i11_reg_12678.read());
}

void k2c_affine_matmul_3::thread_tmp_208_fu_7702_p2() {
    tmp_208_fu_7702_p2 = (tmp_632_i11_fu_7689_p2.read() | tmp_630_i11_fu_7684_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_209_fu_7734_p2() {
    tmp_209_fu_7734_p2 = (tmp_636_i11_fu_7721_p2.read() | tmp_634_i11_fu_7716_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_20_fu_4241_p4() {
    tmp_20_fu_4241_p4 = ap_phi_mux_k_0_6_phi_fu_2423_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_210_fu_7766_p2() {
    tmp_210_fu_7766_p2 = (tmp_640_i11_fu_7753_p2.read() | tmp_638_i11_fu_7748_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_211_fu_6692_p9() {
    tmp_211_fu_6692_p9 = esl_zext<64,3>(tmp_337_reg_12206.read());
}

void k2c_affine_matmul_3::thread_tmp_212_fu_6617_p2() {
    tmp_212_fu_6617_p2 = (tmp_616_i12_fu_6603_p2.read() | tmp_614_i12_fu_6597_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_213_fu_6651_p2() {
    tmp_213_fu_6651_p2 = (tmp_620_i12_fu_6637_p2.read() | tmp_618_i12_fu_6631_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_214_fu_6721_p2() {
    tmp_214_fu_6721_p2 = (tmp_624_i12_reg_12271.read() | tmp_622_i12_reg_12266.read());
}

void k2c_affine_matmul_3::thread_tmp_215_fu_6739_p2() {
    tmp_215_fu_6739_p2 = (tmp_628_i12_reg_12282.read() | tmp_626_i12_reg_12277.read());
}

void k2c_affine_matmul_3::thread_tmp_216_fu_6769_p2() {
    tmp_216_fu_6769_p2 = (tmp_632_i12_fu_6756_p2.read() | tmp_630_i12_fu_6751_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_217_fu_6801_p2() {
    tmp_217_fu_6801_p2 = (tmp_636_i12_fu_6788_p2.read() | tmp_634_i12_fu_6783_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_218_fu_6833_p2() {
    tmp_218_fu_6833_p2 = (tmp_640_i12_fu_6820_p2.read() | tmp_638_i12_fu_6815_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_219_fu_7971_p9() {
    tmp_219_fu_7971_p9 = esl_zext<64,3>(tmp_343_reg_12718.read());
}

void k2c_affine_matmul_3::thread_tmp_21_fu_7237_p4() {
    tmp_21_fu_7237_p4 = k_214_1_reg_2655.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_220_fu_7896_p2() {
    tmp_220_fu_7896_p2 = (tmp_616_i13_fu_7882_p2.read() | tmp_614_i13_fu_7876_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_221_fu_7930_p2() {
    tmp_221_fu_7930_p2 = (tmp_620_i13_fu_7916_p2.read() | tmp_618_i13_fu_7910_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_222_fu_8000_p2() {
    tmp_222_fu_8000_p2 = (tmp_624_i13_reg_12783.read() | tmp_622_i13_reg_12778.read());
}

void k2c_affine_matmul_3::thread_tmp_223_fu_8018_p2() {
    tmp_223_fu_8018_p2 = (tmp_628_i13_reg_12794.read() | tmp_626_i13_reg_12789.read());
}

void k2c_affine_matmul_3::thread_tmp_224_fu_8048_p2() {
    tmp_224_fu_8048_p2 = (tmp_632_i13_fu_8035_p2.read() | tmp_630_i13_fu_8030_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_225_fu_8080_p2() {
    tmp_225_fu_8080_p2 = (tmp_636_i13_fu_8067_p2.read() | tmp_634_i13_fu_8062_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_226_fu_8112_p2() {
    tmp_226_fu_8112_p2 = (tmp_640_i13_fu_8099_p2.read() | tmp_638_i13_fu_8094_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_227_fu_8317_p9() {
    tmp_227_fu_8317_p9 = esl_zext<64,3>(tmp_348_reg_12829.read());
}

void k2c_affine_matmul_3::thread_tmp_228_fu_8242_p2() {
    tmp_228_fu_8242_p2 = (tmp_616_i14_fu_8228_p2.read() | tmp_614_i14_fu_8222_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_229_fu_8276_p2() {
    tmp_229_fu_8276_p2 = (tmp_620_i14_fu_8262_p2.read() | tmp_618_i14_fu_8256_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_22_fu_4579_p4() {
    tmp_22_fu_4579_p4 = ap_phi_mux_k_0_7_phi_fu_2447_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_230_fu_8346_p2() {
    tmp_230_fu_8346_p2 = (tmp_624_i14_reg_12894.read() | tmp_622_i14_reg_12889.read());
}

void k2c_affine_matmul_3::thread_tmp_231_fu_5449_p9() {
    tmp_231_fu_5449_p9 = esl_zext<64,3>(tmp_301_reg_11814.read());
}

void k2c_affine_matmul_3::thread_tmp_232_fu_8364_p2() {
    tmp_232_fu_8364_p2 = (tmp_628_i14_reg_12905.read() | tmp_626_i14_reg_12900.read());
}

void k2c_affine_matmul_3::thread_tmp_233_fu_8394_p2() {
    tmp_233_fu_8394_p2 = (tmp_632_i14_fu_8381_p2.read() | tmp_630_i14_fu_8376_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_234_fu_8426_p2() {
    tmp_234_fu_8426_p2 = (tmp_636_i14_fu_8413_p2.read() | tmp_634_i14_fu_8408_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_235_fu_8458_p2() {
    tmp_235_fu_8458_p2 = (tmp_640_i14_fu_8445_p2.read() | tmp_638_i14_fu_8440_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_236_fu_9601_p9() {
    tmp_236_fu_9601_p9 = esl_zext<64,3>(tmp_351_reg_13343.read());
}

void k2c_affine_matmul_3::thread_tmp_237_fu_9526_p2() {
    tmp_237_fu_9526_p2 = (tmp_616_i15_fu_9512_p2.read() | tmp_614_i15_fu_9506_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_238_fu_9560_p2() {
    tmp_238_fu_9560_p2 = (tmp_620_i15_fu_9546_p2.read() | tmp_618_i15_fu_9540_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_239_fu_9630_p2() {
    tmp_239_fu_9630_p2 = (tmp_624_i15_reg_13408.read() | tmp_622_i15_reg_13403.read());
}

void k2c_affine_matmul_3::thread_tmp_23_fu_7308_p4() {
    tmp_23_fu_7308_p4 = k_214_2_reg_2666.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_240_fu_9648_p2() {
    tmp_240_fu_9648_p2 = (tmp_628_i15_reg_13419.read() | tmp_626_i15_reg_13414.read());
}

void k2c_affine_matmul_3::thread_tmp_241_fu_9678_p2() {
    tmp_241_fu_9678_p2 = (tmp_632_i15_fu_9665_p2.read() | tmp_630_i15_fu_9660_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_242_fu_9710_p2() {
    tmp_242_fu_9710_p2 = (tmp_636_i15_fu_9697_p2.read() | tmp_634_i15_fu_9692_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_243_fu_9742_p2() {
    tmp_243_fu_9742_p2 = (tmp_640_i15_fu_9729_p2.read() | tmp_638_i15_fu_9724_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_244_fu_8663_p9() {
    tmp_244_fu_8663_p9 = esl_zext<64,3>(tmp_356_reg_12940.read());
}

void k2c_affine_matmul_3::thread_tmp_245_fu_8588_p2() {
    tmp_245_fu_8588_p2 = (tmp_616_i16_fu_8574_p2.read() | tmp_614_i16_fu_8568_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_246_fu_8622_p2() {
    tmp_246_fu_8622_p2 = (tmp_620_i16_fu_8608_p2.read() | tmp_618_i16_fu_8602_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_247_fu_7270_p9() {
    tmp_247_fu_7270_p9 = esl_zext<64,3>(tmp_306_reg_12442.read());
}

void k2c_affine_matmul_3::thread_tmp_248_fu_8692_p2() {
    tmp_248_fu_8692_p2 = (tmp_624_i16_reg_13005.read() | tmp_622_i16_reg_13000.read());
}

void k2c_affine_matmul_3::thread_tmp_249_fu_8710_p2() {
    tmp_249_fu_8710_p2 = (tmp_628_i16_reg_13016.read() | tmp_626_i16_reg_13011.read());
}

void k2c_affine_matmul_3::thread_tmp_24_fu_7379_p4() {
    tmp_24_fu_7379_p4 = k_214_3_reg_2677.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_250_fu_8740_p2() {
    tmp_250_fu_8740_p2 = (tmp_632_i16_fu_8727_p2.read() | tmp_630_i16_fu_8722_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_251_fu_8772_p2() {
    tmp_251_fu_8772_p2 = (tmp_636_i16_fu_8759_p2.read() | tmp_634_i16_fu_8754_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_252_fu_8804_p2() {
    tmp_252_fu_8804_p2 = (tmp_640_i16_fu_8791_p2.read() | tmp_638_i16_fu_8786_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_253_fu_9949_p9() {
    tmp_253_fu_9949_p9 = esl_zext<64,3>(tmp_359_reg_13454.read());
}

void k2c_affine_matmul_3::thread_tmp_254_fu_9874_p2() {
    tmp_254_fu_9874_p2 = (tmp_616_i17_fu_9860_p2.read() | tmp_614_i17_fu_9854_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_255_fu_9908_p2() {
    tmp_255_fu_9908_p2 = (tmp_620_i17_fu_9894_p2.read() | tmp_618_i17_fu_9888_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_256_fu_9978_p2() {
    tmp_256_fu_9978_p2 = (tmp_624_i17_reg_13519.read() | tmp_622_i17_reg_13514.read());
}

void k2c_affine_matmul_3::thread_tmp_257_fu_9996_p2() {
    tmp_257_fu_9996_p2 = (tmp_628_i17_reg_13530.read() | tmp_626_i17_reg_13525.read());
}

void k2c_affine_matmul_3::thread_tmp_258_fu_10026_p2() {
    tmp_258_fu_10026_p2 = (tmp_632_i17_fu_10013_p2.read() | tmp_630_i17_fu_10008_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_259_fu_10058_p2() {
    tmp_259_fu_10058_p2 = (tmp_636_i17_fu_10045_p2.read() | tmp_634_i17_fu_10040_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_25_fu_7459_p4() {
    tmp_25_fu_7459_p4 = ap_phi_mux_k_214_4_phi_fu_2705_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_260_fu_10090_p2() {
    tmp_260_fu_10090_p2 = (tmp_640_i17_fu_10077_p2.read() | tmp_638_i17_fu_10072_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_261_fu_10297_p9() {
    tmp_261_fu_10297_p9 = esl_zext<64,3>(tmp_363_reg_13565.read());
}

void k2c_affine_matmul_3::thread_tmp_262_fu_10222_p2() {
    tmp_262_fu_10222_p2 = (tmp_616_i18_fu_10208_p2.read() | tmp_614_i18_fu_10202_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_263_fu_10256_p2() {
    tmp_263_fu_10256_p2 = (tmp_620_i18_fu_10242_p2.read() | tmp_618_i18_fu_10236_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_264_fu_10326_p2() {
    tmp_264_fu_10326_p2 = (tmp_624_i18_reg_13630.read() | tmp_622_i18_reg_13625.read());
}

void k2c_affine_matmul_3::thread_tmp_265_fu_10344_p2() {
    tmp_265_fu_10344_p2 = (tmp_628_i18_reg_13641.read() | tmp_626_i18_reg_13636.read());
}

void k2c_affine_matmul_3::thread_tmp_266_fu_10374_p2() {
    tmp_266_fu_10374_p2 = (tmp_632_i18_fu_10361_p2.read() | tmp_630_i18_fu_10356_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_267_fu_10406_p2() {
    tmp_267_fu_10406_p2 = (tmp_636_i18_fu_10393_p2.read() | tmp_634_i18_fu_10388_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_268_fu_10438_p2() {
    tmp_268_fu_10438_p2 = (tmp_640_i18_fu_10425_p2.read() | tmp_638_i18_fu_10420_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_269_fu_10645_p9() {
    tmp_269_fu_10645_p9 = esl_zext<64,3>(tmp_367_reg_13676.read());
}

void k2c_affine_matmul_3::thread_tmp_26_fu_7805_p4() {
    tmp_26_fu_7805_p4 = ap_phi_mux_k_214_5_phi_fu_2729_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_270_fu_10570_p2() {
    tmp_270_fu_10570_p2 = (tmp_616_i19_fu_10556_p2.read() | tmp_614_i19_fu_10550_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_271_fu_7341_p9() {
    tmp_271_fu_7341_p9 = esl_zext<64,3>(tmp_316_reg_12495.read());
}

void k2c_affine_matmul_3::thread_tmp_272_fu_10604_p2() {
    tmp_272_fu_10604_p2 = (tmp_620_i19_fu_10590_p2.read() | tmp_618_i19_fu_10584_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_273_fu_10674_p2() {
    tmp_273_fu_10674_p2 = (tmp_624_i19_reg_13741.read() | tmp_622_i19_reg_13736.read());
}

void k2c_affine_matmul_3::thread_tmp_274_fu_10692_p2() {
    tmp_274_fu_10692_p2 = (tmp_628_i19_reg_13752.read() | tmp_626_i19_reg_13747.read());
}

void k2c_affine_matmul_3::thread_tmp_275_fu_10722_p2() {
    tmp_275_fu_10722_p2 = (tmp_632_i19_fu_10709_p2.read() | tmp_630_i19_fu_10704_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_276_fu_10754_p2() {
    tmp_276_fu_10754_p2 = (tmp_636_i19_fu_10741_p2.read() | tmp_634_i19_fu_10736_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_277_fu_10786_p2() {
    tmp_277_fu_10786_p2 = (tmp_640_i19_fu_10773_p2.read() | tmp_638_i19_fu_10768_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_27_fu_8151_p4() {
    tmp_27_fu_8151_p4 = ap_phi_mux_k_214_6_phi_fu_2753_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_289_fu_3561_p1() {
    tmp_289_fu_3561_p1 = ap_phi_mux_k_0_4_phi_fu_2375_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_28_fu_8497_p4() {
    tmp_28_fu_8497_p4 = ap_phi_mux_k_214_7_phi_fu_2777_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_290_fu_3598_p3() {
    tmp_290_fu_3598_p3 = sum8_0_4_fu_3587_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_291_fu_6859_p1() {
    tmp_291_fu_6859_p1 = j_2_reg_2619.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_292_fu_5345_p1() {
    tmp_292_fu_5345_p1 = k_1_2_reg_2501.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_293_fu_5355_p4() {
    tmp_293_fu_5355_p4 = sum5_1_2_fu_5349_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_294_fu_3895_p1() {
    tmp_294_fu_3895_p1 = ap_phi_mux_k_0_5_phi_fu_2399_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_295_fu_3899_p1() {
    tmp_295_fu_3899_p1 = ap_phi_mux_k_0_5_phi_fu_2399_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_296_fu_7412_p9() {
    tmp_296_fu_7412_p9 = esl_zext<64,3>(tmp_325_reg_12548.read());
}

void k2c_affine_matmul_3::thread_tmp_297_fu_3936_p3() {
    tmp_297_fu_3936_p3 = sum8_0_5_fu_3925_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_298_fu_6875_p1() {
    tmp_298_fu_6875_p1 = ap_phi_mux_k_s_phi_fu_2648_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_299_fu_6879_p1() {
    tmp_299_fu_6879_p1 = ap_phi_mux_k_s_phi_fu_2648_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_300_fu_6918_p3() {
    tmp_300_fu_6918_p3 = sum8_2_fu_6913_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_301_fu_5414_p1() {
    tmp_301_fu_5414_p1 = k_1_3_reg_2512.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_302_fu_5424_p4() {
    tmp_302_fu_5424_p4 = sum5_1_3_fu_5418_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_303_fu_4233_p1() {
    tmp_303_fu_4233_p1 = ap_phi_mux_k_0_6_phi_fu_2423_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_304_fu_4237_p1() {
    tmp_304_fu_4237_p1 = ap_phi_mux_k_0_6_phi_fu_2423_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_305_fu_4274_p3() {
    tmp_305_fu_4274_p3 = sum8_0_6_fu_4263_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_306_fu_7233_p1() {
    tmp_306_fu_7233_p1 = k_214_1_reg_2655.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_307_fu_5488_p1() {
    tmp_307_fu_5488_p1 = ap_phi_mux_k_1_4_phi_fu_2540_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_308_fu_5492_p1() {
    tmp_308_fu_5492_p1 = ap_phi_mux_k_1_4_phi_fu_2540_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_309_fu_5502_p4() {
    tmp_309_fu_5502_p4 = sum5_1_4_fu_5496_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_310_fu_5535_p3() {
    tmp_310_fu_5535_p3 = sum8_1_4_fu_5524_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_311_fu_4571_p1() {
    tmp_311_fu_4571_p1 = ap_phi_mux_k_0_7_phi_fu_2447_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_312_fu_9240_p9() {
    tmp_312_fu_9240_p9 = esl_zext<64,3>(tmp_330_reg_13178.read());
}

void k2c_affine_matmul_3::thread_tmp_313_fu_4575_p1() {
    tmp_313_fu_4575_p1 = ap_phi_mux_k_0_7_phi_fu_2447_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_314_fu_4612_p3() {
    tmp_314_fu_4612_p3 = sum8_0_7_fu_4601_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_315_fu_8830_p1() {
    tmp_315_fu_8830_p1 = j_3_reg_2784.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_316_fu_7304_p1() {
    tmp_316_fu_7304_p1 = k_214_2_reg_2666.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_317_fu_5832_p1() {
    tmp_317_fu_5832_p1 = ap_phi_mux_k_1_5_phi_fu_2564_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_318_fu_5836_p1() {
    tmp_318_fu_5836_p1 = ap_phi_mux_k_1_5_phi_fu_2564_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_319_fu_5846_p4() {
    tmp_319_fu_5846_p4 = sum5_1_5_fu_5840_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_320_fu_5879_p3() {
    tmp_320_fu_5879_p3 = sum8_1_5_fu_5868_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_321_fu_8846_p1() {
    tmp_321_fu_8846_p1 = ap_phi_mux_k_3_phi_fu_2813_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_322_fu_8850_p1() {
    tmp_322_fu_8850_p1 = ap_phi_mux_k_3_phi_fu_2813_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_323_fu_8860_p4() {
    tmp_323_fu_8860_p4 = sum5_3_fu_8854_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_324_fu_8891_p3() {
    tmp_324_fu_8891_p3 = sum8_3_fu_8886_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_325_fu_7375_p1() {
    tmp_325_fu_7375_p1 = k_214_3_reg_2677.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_326_fu_6176_p1() {
    tmp_326_fu_6176_p1 = ap_phi_mux_k_1_6_phi_fu_2588_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_327_fu_6180_p1() {
    tmp_327_fu_6180_p1 = ap_phi_mux_k_1_6_phi_fu_2588_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_328_fu_6190_p4() {
    tmp_328_fu_6190_p4 = sum5_1_6_fu_6184_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_329_fu_6223_p3() {
    tmp_329_fu_6223_p3 = sum8_1_6_fu_6212_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_32_fu_3056_p3() {
    tmp_32_fu_3056_p3 = esl_concat<3,1>(tmp_112_fu_3017_p1.read(), tmp_118_fu_3048_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_330_fu_9201_p1() {
    tmp_330_fu_9201_p1 = k_3_1_reg_2820.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_331_fu_9211_p4() {
    tmp_331_fu_9211_p4 = sum5_3_1_fu_9205_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_332_fu_7451_p1() {
    tmp_332_fu_7451_p1 = ap_phi_mux_k_214_4_phi_fu_2705_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_333_fu_7455_p1() {
    tmp_333_fu_7455_p1 = ap_phi_mux_k_214_4_phi_fu_2705_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_334_fu_7500_p3() {
    tmp_334_fu_7500_p3 = sum8_2_4_fu_7489_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_335_fu_6520_p1() {
    tmp_335_fu_6520_p1 = ap_phi_mux_k_1_7_phi_fu_2612_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_336_fu_9313_p9() {
    tmp_336_fu_9313_p9 = esl_zext<64,3>(tmp_340_reg_13231.read());
}

void k2c_affine_matmul_3::thread_tmp_337_fu_6524_p1() {
    tmp_337_fu_6524_p1 = ap_phi_mux_k_1_7_phi_fu_2612_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_338_fu_6534_p4() {
    tmp_338_fu_6534_p4 = sum5_1_7_fu_6528_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_339_fu_6567_p3() {
    tmp_339_fu_6567_p3 = sum8_1_7_fu_6556_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_340_fu_9274_p1() {
    tmp_340_fu_9274_p1 = k_3_2_reg_2831.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_341_fu_9284_p4() {
    tmp_341_fu_9284_p4 = sum5_3_2_fu_9278_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_342_fu_7797_p1() {
    tmp_342_fu_7797_p1 = ap_phi_mux_k_214_5_phi_fu_2729_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_343_fu_7801_p1() {
    tmp_343_fu_7801_p1 = ap_phi_mux_k_214_5_phi_fu_2729_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_344_fu_7846_p3() {
    tmp_344_fu_7846_p3 = sum8_2_5_fu_7835_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_345_fu_9347_p1() {
    tmp_345_fu_9347_p1 = k_3_3_reg_2842.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_346_fu_9357_p4() {
    tmp_346_fu_9357_p4 = sum5_3_3_fu_9351_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_347_fu_8143_p1() {
    tmp_347_fu_8143_p1 = ap_phi_mux_k_214_6_phi_fu_2753_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_348_fu_8147_p1() {
    tmp_348_fu_8147_p1 = ap_phi_mux_k_214_6_phi_fu_2753_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_349_fu_8192_p3() {
    tmp_349_fu_8192_p3 = sum8_2_6_fu_8181_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_350_fu_9425_p1() {
    tmp_350_fu_9425_p1 = ap_phi_mux_k_3_4_phi_fu_2870_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_351_fu_9429_p1() {
    tmp_351_fu_9429_p1 = ap_phi_mux_k_3_4_phi_fu_2870_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_352_fu_9386_p9() {
    tmp_352_fu_9386_p9 = esl_zext<64,3>(tmp_345_reg_13284.read());
}

void k2c_affine_matmul_3::thread_tmp_353_fu_9439_p4() {
    tmp_353_fu_9439_p4 = sum5_3_4_fu_9433_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_354_fu_9476_p3() {
    tmp_354_fu_9476_p3 = sum8_3_4_fu_9465_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_355_fu_8489_p1() {
    tmp_355_fu_8489_p1 = ap_phi_mux_k_214_7_phi_fu_2777_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_356_fu_8493_p1() {
    tmp_356_fu_8493_p1 = ap_phi_mux_k_214_7_phi_fu_2777_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_357_fu_8538_p3() {
    tmp_357_fu_8538_p3 = sum8_2_7_fu_8527_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_358_fu_9773_p1() {
    tmp_358_fu_9773_p1 = ap_phi_mux_k_3_5_phi_fu_2894_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_359_fu_9777_p1() {
    tmp_359_fu_9777_p1 = ap_phi_mux_k_3_5_phi_fu_2894_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_360_fu_9787_p4() {
    tmp_360_fu_9787_p4 = sum5_3_5_fu_9781_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_361_fu_9824_p3() {
    tmp_361_fu_9824_p3 = sum8_3_5_fu_9813_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_362_fu_10121_p1() {
    tmp_362_fu_10121_p1 = ap_phi_mux_k_3_6_phi_fu_2918_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_363_fu_10125_p1() {
    tmp_363_fu_10125_p1 = ap_phi_mux_k_3_6_phi_fu_2918_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_364_fu_10135_p4() {
    tmp_364_fu_10135_p4 = sum5_3_6_fu_10129_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_365_fu_10172_p3() {
    tmp_365_fu_10172_p3 = sum8_3_6_fu_10161_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_366_fu_10469_p1() {
    tmp_366_fu_10469_p1 = ap_phi_mux_k_3_7_phi_fu_2942_p4.read().range(4-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_367_fu_10473_p1() {
    tmp_367_fu_10473_p1 = ap_phi_mux_k_3_7_phi_fu_2942_p4.read().range(3-1, 0);
}

void k2c_affine_matmul_3::thread_tmp_368_fu_10483_p4() {
    tmp_368_fu_10483_p4 = sum5_3_7_fu_10477_p2.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_369_fu_10520_p3() {
    tmp_369_fu_10520_p3 = sum8_3_7_fu_10509_p2.read().range(3, 3);
}

void k2c_affine_matmul_3::thread_tmp_42_fu_4969_p3() {
    tmp_42_fu_4969_p3 = esl_concat<3,1>(tmp_148_fu_4924_p1.read(), tmp_160_fu_4961_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_51_fu_3606_p3() {
    tmp_51_fu_3606_p3 = esl_concat<3,1>(arrayNo_trunc8_fu_3592_p2.read(), tmp_290_fu_3598_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_54_fu_3173_p9() {
    tmp_54_fu_3173_p9 = esl_zext<64,3>(tmp_112_reg_10860.read());
}

void k2c_affine_matmul_3::thread_tmp_56_fu_3098_p2() {
    tmp_56_fu_3098_p2 = (tmp_616_i_fu_3084_p2.read() | tmp_614_i_fu_3078_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_57_fu_3944_p3() {
    tmp_57_fu_3944_p3 = esl_concat<3,1>(arrayNo_trunc1_fu_3930_p2.read(), tmp_297_fu_3936_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_59_fu_3132_p2() {
    tmp_59_fu_3132_p2 = (tmp_620_i_fu_3118_p2.read() | tmp_618_i_fu_3112_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_60_fu_6926_p3() {
    tmp_60_fu_6926_p3 = esl_concat<3,1>(tmp_299_fu_6879_p1.read(), tmp_300_fu_6918_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_614_i10_fu_6253_p2() {
    tmp_614_i10_fu_6253_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i11_fu_7530_p2() {
    tmp_614_i11_fu_7530_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i12_fu_6597_p2() {
    tmp_614_i12_fu_6597_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i13_fu_7876_p2() {
    tmp_614_i13_fu_7876_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i14_fu_8222_p2() {
    tmp_614_i14_fu_8222_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i15_fu_9506_p2() {
    tmp_614_i15_fu_9506_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i16_fu_8568_p2() {
    tmp_614_i16_fu_8568_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i17_fu_9854_p2() {
    tmp_614_i17_fu_9854_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i18_fu_10202_p2() {
    tmp_614_i18_fu_10202_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i19_fu_10550_p2() {
    tmp_614_i19_fu_10550_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i1_fu_4304_p2() {
    tmp_614_i1_fu_4304_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i2_fu_4991_p2() {
    tmp_614_i2_fu_4991_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i3_fu_5565_p2() {
    tmp_614_i3_fu_5565_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i4_fu_4642_p2() {
    tmp_614_i4_fu_4642_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i5_fu_5909_p2() {
    tmp_614_i5_fu_5909_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i6_fu_3628_p2() {
    tmp_614_i6_fu_3628_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i7_fu_8921_p2() {
    tmp_614_i7_fu_8921_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i8_fu_3966_p2() {
    tmp_614_i8_fu_3966_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i9_fu_6948_p2() {
    tmp_614_i9_fu_6948_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_614_i_fu_3078_p2() {
    tmp_614_i_fu_3078_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_1);
}

void k2c_affine_matmul_3::thread_tmp_615_i10_fu_6265_p3() {
    tmp_615_i10_fu_6265_p3 = (!tmp_616_i10_fu_6259_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i10_fu_6259_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i11_fu_7542_p3() {
    tmp_615_i11_fu_7542_p3 = (!tmp_616_i11_fu_7536_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i11_fu_7536_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i12_fu_6609_p3() {
    tmp_615_i12_fu_6609_p3 = (!tmp_616_i12_fu_6603_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i12_fu_6603_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i13_fu_7888_p3() {
    tmp_615_i13_fu_7888_p3 = (!tmp_616_i13_fu_7882_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i13_fu_7882_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i14_fu_8234_p3() {
    tmp_615_i14_fu_8234_p3 = (!tmp_616_i14_fu_8228_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i14_fu_8228_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i15_fu_9518_p3() {
    tmp_615_i15_fu_9518_p3 = (!tmp_616_i15_fu_9512_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i15_fu_9512_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i16_fu_8580_p3() {
    tmp_615_i16_fu_8580_p3 = (!tmp_616_i16_fu_8574_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i16_fu_8574_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i17_fu_9866_p3() {
    tmp_615_i17_fu_9866_p3 = (!tmp_616_i17_fu_9860_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i17_fu_9860_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i18_fu_10214_p3() {
    tmp_615_i18_fu_10214_p3 = (!tmp_616_i18_fu_10208_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i18_fu_10208_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i19_fu_10562_p3() {
    tmp_615_i19_fu_10562_p3 = (!tmp_616_i19_fu_10556_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i19_fu_10556_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i1_fu_4316_p3() {
    tmp_615_i1_fu_4316_p3 = (!tmp_616_i1_fu_4310_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i1_fu_4310_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i2_fu_5003_p3() {
    tmp_615_i2_fu_5003_p3 = (!tmp_616_i2_fu_4997_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i2_fu_4997_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i3_fu_5577_p3() {
    tmp_615_i3_fu_5577_p3 = (!tmp_616_i3_fu_5571_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i3_fu_5571_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i4_fu_4654_p3() {
    tmp_615_i4_fu_4654_p3 = (!tmp_616_i4_fu_4648_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i4_fu_4648_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i5_fu_5921_p3() {
    tmp_615_i5_fu_5921_p3 = (!tmp_616_i5_fu_5915_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i5_fu_5915_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i6_fu_3640_p3() {
    tmp_615_i6_fu_3640_p3 = (!tmp_616_i6_fu_3634_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i6_fu_3634_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i7_fu_8933_p3() {
    tmp_615_i7_fu_8933_p3 = (!tmp_616_i7_fu_8927_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i7_fu_8927_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i8_fu_3978_p3() {
    tmp_615_i8_fu_3978_p3 = (!tmp_616_i8_fu_3972_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i8_fu_3972_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i9_fu_6960_p3() {
    tmp_615_i9_fu_6960_p3 = (!tmp_616_i9_fu_6954_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i9_fu_6954_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_615_i_fu_3090_p3() {
    tmp_615_i_fu_3090_p3 = (!tmp_616_i_fu_3084_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_616_i_fu_3084_p2.read()[0].to_bool())? ap_const_lv32_3F11B963: ap_const_lv32_3F04C347);
}

void k2c_affine_matmul_3::thread_tmp_616_i10_fu_6259_p2() {
    tmp_616_i10_fu_6259_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i11_fu_7536_p2() {
    tmp_616_i11_fu_7536_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i12_fu_6603_p2() {
    tmp_616_i12_fu_6603_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i13_fu_7882_p2() {
    tmp_616_i13_fu_7882_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i14_fu_8228_p2() {
    tmp_616_i14_fu_8228_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i15_fu_9512_p2() {
    tmp_616_i15_fu_9512_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i16_fu_8574_p2() {
    tmp_616_i16_fu_8574_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i17_fu_9860_p2() {
    tmp_616_i17_fu_9860_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i18_fu_10208_p2() {
    tmp_616_i18_fu_10208_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i19_fu_10556_p2() {
    tmp_616_i19_fu_10556_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i1_fu_4310_p2() {
    tmp_616_i1_fu_4310_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i2_fu_4997_p2() {
    tmp_616_i2_fu_4997_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i3_fu_5571_p2() {
    tmp_616_i3_fu_5571_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i4_fu_4648_p2() {
    tmp_616_i4_fu_4648_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i5_fu_5915_p2() {
    tmp_616_i5_fu_5915_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i6_fu_3634_p2() {
    tmp_616_i6_fu_3634_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i7_fu_8927_p2() {
    tmp_616_i7_fu_8927_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i8_fu_3972_p2() {
    tmp_616_i8_fu_3972_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i9_fu_6954_p2() {
    tmp_616_i9_fu_6954_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_616_i_fu_3084_p2() {
    tmp_616_i_fu_3084_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_2);
}

void k2c_affine_matmul_3::thread_tmp_617_i10_fu_6279_p3() {
    tmp_617_i10_fu_6279_p3 = (!tmp_196_fu_6273_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_196_fu_6273_p2.read()[0].to_bool())? tmp_615_i10_fu_6265_p3.read(): tmp_i10_65_fu_6245_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i11_fu_7556_p3() {
    tmp_617_i11_fu_7556_p3 = (!tmp_204_fu_7550_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_204_fu_7550_p2.read()[0].to_bool())? tmp_615_i11_fu_7542_p3.read(): tmp_i11_80_fu_7522_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i12_fu_6623_p3() {
    tmp_617_i12_fu_6623_p3 = (!tmp_212_fu_6617_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_212_fu_6617_p2.read()[0].to_bool())? tmp_615_i12_fu_6609_p3.read(): tmp_i12_68_fu_6589_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i13_fu_7902_p3() {
    tmp_617_i13_fu_7902_p3 = (!tmp_220_fu_7896_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_220_fu_7896_p2.read()[0].to_bool())? tmp_615_i13_fu_7888_p3.read(): tmp_i13_83_fu_7868_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i14_fu_8248_p3() {
    tmp_617_i14_fu_8248_p3 = (!tmp_228_fu_8242_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_228_fu_8242_p2.read()[0].to_bool())? tmp_615_i14_fu_8234_p3.read(): tmp_i14_86_fu_8214_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i15_fu_9532_p3() {
    tmp_617_i15_fu_9532_p3 = (!tmp_237_fu_9526_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_237_fu_9526_p2.read()[0].to_bool())? tmp_615_i15_fu_9518_p3.read(): tmp_i15_101_fu_9498_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i16_fu_8594_p3() {
    tmp_617_i16_fu_8594_p3 = (!tmp_245_fu_8588_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_245_fu_8588_p2.read()[0].to_bool())? tmp_615_i16_fu_8580_p3.read(): tmp_i16_89_fu_8560_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i17_fu_9880_p3() {
    tmp_617_i17_fu_9880_p3 = (!tmp_254_fu_9874_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_254_fu_9874_p2.read()[0].to_bool())? tmp_615_i17_fu_9866_p3.read(): tmp_i17_104_fu_9846_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i18_fu_10228_p3() {
    tmp_617_i18_fu_10228_p3 = (!tmp_262_fu_10222_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_262_fu_10222_p2.read()[0].to_bool())? tmp_615_i18_fu_10214_p3.read(): tmp_i18_107_fu_10194_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i19_fu_10576_p3() {
    tmp_617_i19_fu_10576_p3 = (!tmp_270_fu_10570_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_270_fu_10570_p2.read()[0].to_bool())? tmp_615_i19_fu_10562_p3.read(): tmp_i19_110_fu_10542_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i1_fu_4330_p3() {
    tmp_617_i1_fu_4330_p3 = (!tmp_123_fu_4324_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_123_fu_4324_p2.read()[0].to_bool())? tmp_615_i1_fu_4316_p3.read(): tmp_i1_44_fu_4296_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i2_fu_5017_p3() {
    tmp_617_i2_fu_5017_p3 = (!tmp_71_fu_5011_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_71_fu_5011_p2.read()[0].to_bool())? tmp_615_i2_fu_5003_p3.read(): tmp_i3_50_fu_4983_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i3_fu_5591_p3() {
    tmp_617_i3_fu_5591_p3 = (!tmp_140_fu_5585_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_140_fu_5585_p2.read()[0].to_bool())? tmp_615_i3_fu_5577_p3.read(): tmp_i2_59_fu_5557_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i4_fu_4668_p3() {
    tmp_617_i4_fu_4668_p3 = (!tmp_156_fu_4662_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_156_fu_4662_p2.read()[0].to_bool())? tmp_615_i4_fu_4654_p3.read(): tmp_i4_47_fu_4634_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i5_fu_3654_p3() {
    tmp_617_i5_fu_3654_p3 = (!tmp_82_fu_3648_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_82_fu_3648_p2.read()[0].to_bool())? tmp_615_i6_fu_3640_p3.read(): tmp_i6_38_fu_3620_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i6_fu_5935_p3() {
    tmp_617_i6_fu_5935_p3 = (!tmp_171_fu_5929_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_171_fu_5929_p2.read()[0].to_bool())? tmp_615_i5_fu_5921_p3.read(): tmp_i5_62_fu_5901_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i7_fu_8947_p3() {
    tmp_617_i7_fu_8947_p3 = (!tmp_188_fu_8941_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_188_fu_8941_p2.read()[0].to_bool())? tmp_615_i7_fu_8933_p3.read(): tmp_i7_92_fu_8913_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i8_fu_3992_p3() {
    tmp_617_i8_fu_3992_p3 = (!tmp_94_fu_3986_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_94_fu_3986_p2.read()[0].to_bool())? tmp_615_i8_fu_3978_p3.read(): tmp_i8_41_fu_3958_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i9_fu_6974_p3() {
    tmp_617_i9_fu_6974_p3 = (!tmp_110_fu_6968_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_110_fu_6968_p2.read()[0].to_bool())? tmp_615_i9_fu_6960_p3.read(): tmp_i9_71_fu_6940_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_617_i_fu_3104_p3() {
    tmp_617_i_fu_3104_p3 = (!tmp_56_fu_3098_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_56_fu_3098_p2.read()[0].to_bool())? tmp_615_i_fu_3090_p3.read(): tmp_i_29_fu_3070_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_618_i10_fu_6287_p2() {
    tmp_618_i10_fu_6287_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i11_fu_7564_p2() {
    tmp_618_i11_fu_7564_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i12_fu_6631_p2() {
    tmp_618_i12_fu_6631_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i13_fu_7910_p2() {
    tmp_618_i13_fu_7910_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i14_fu_8256_p2() {
    tmp_618_i14_fu_8256_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i15_fu_9540_p2() {
    tmp_618_i15_fu_9540_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i16_fu_8602_p2() {
    tmp_618_i16_fu_8602_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i17_fu_9888_p2() {
    tmp_618_i17_fu_9888_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i18_fu_10236_p2() {
    tmp_618_i18_fu_10236_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i19_fu_10584_p2() {
    tmp_618_i19_fu_10584_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i1_fu_4338_p2() {
    tmp_618_i1_fu_4338_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i2_fu_5025_p2() {
    tmp_618_i2_fu_5025_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i3_fu_5599_p2() {
    tmp_618_i3_fu_5599_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i4_fu_4676_p2() {
    tmp_618_i4_fu_4676_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i5_fu_3662_p2() {
    tmp_618_i5_fu_3662_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i6_fu_5943_p2() {
    tmp_618_i6_fu_5943_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i7_fu_8955_p2() {
    tmp_618_i7_fu_8955_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i8_fu_4000_p2() {
    tmp_618_i8_fu_4000_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i9_fu_6982_p2() {
    tmp_618_i9_fu_6982_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_618_i_fu_3112_p2() {
    tmp_618_i_fu_3112_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_3);
}

void k2c_affine_matmul_3::thread_tmp_619_i10_fu_6299_p3() {
    tmp_619_i10_fu_6299_p3 = (!tmp_620_i10_fu_6293_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i10_fu_6293_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i11_fu_7576_p3() {
    tmp_619_i11_fu_7576_p3 = (!tmp_620_i11_fu_7570_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i11_fu_7570_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i12_fu_6643_p3() {
    tmp_619_i12_fu_6643_p3 = (!tmp_620_i12_fu_6637_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i12_fu_6637_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i13_fu_7922_p3() {
    tmp_619_i13_fu_7922_p3 = (!tmp_620_i13_fu_7916_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i13_fu_7916_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i14_fu_8268_p3() {
    tmp_619_i14_fu_8268_p3 = (!tmp_620_i14_fu_8262_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i14_fu_8262_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i15_fu_9552_p3() {
    tmp_619_i15_fu_9552_p3 = (!tmp_620_i15_fu_9546_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i15_fu_9546_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i16_fu_8614_p3() {
    tmp_619_i16_fu_8614_p3 = (!tmp_620_i16_fu_8608_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i16_fu_8608_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i17_fu_9900_p3() {
    tmp_619_i17_fu_9900_p3 = (!tmp_620_i17_fu_9894_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i17_fu_9894_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i18_fu_10248_p3() {
    tmp_619_i18_fu_10248_p3 = (!tmp_620_i18_fu_10242_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i18_fu_10242_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i19_fu_10596_p3() {
    tmp_619_i19_fu_10596_p3 = (!tmp_620_i19_fu_10590_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i19_fu_10590_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i1_fu_4350_p3() {
    tmp_619_i1_fu_4350_p3 = (!tmp_620_i1_fu_4344_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i1_fu_4344_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i2_fu_5037_p3() {
    tmp_619_i2_fu_5037_p3 = (!tmp_620_i2_fu_5031_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i2_fu_5031_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i3_fu_5611_p3() {
    tmp_619_i3_fu_5611_p3 = (!tmp_620_i3_fu_5605_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i3_fu_5605_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i4_fu_4688_p3() {
    tmp_619_i4_fu_4688_p3 = (!tmp_620_i4_fu_4682_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i4_fu_4682_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i5_fu_3674_p3() {
    tmp_619_i5_fu_3674_p3 = (!tmp_620_i5_fu_3668_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i5_fu_3668_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i6_fu_5955_p3() {
    tmp_619_i6_fu_5955_p3 = (!tmp_620_i6_fu_5949_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i6_fu_5949_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i7_fu_4012_p3() {
    tmp_619_i7_fu_4012_p3 = (!tmp_620_i7_fu_4006_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i7_fu_4006_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i8_fu_6994_p3() {
    tmp_619_i8_fu_6994_p3 = (!tmp_620_i9_fu_6988_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i9_fu_6988_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i9_fu_8967_p3() {
    tmp_619_i9_fu_8967_p3 = (!tmp_620_i8_fu_8961_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i8_fu_8961_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_619_i_fu_3124_p3() {
    tmp_619_i_fu_3124_p3 = (!tmp_620_i_fu_3118_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_620_i_fu_3118_p2.read()[0].to_bool())? ap_const_lv32_3F030BC6: ap_const_lv32_3D9B8713);
}

void k2c_affine_matmul_3::thread_tmp_620_i10_fu_6293_p2() {
    tmp_620_i10_fu_6293_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i11_fu_7570_p2() {
    tmp_620_i11_fu_7570_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i12_fu_6637_p2() {
    tmp_620_i12_fu_6637_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i13_fu_7916_p2() {
    tmp_620_i13_fu_7916_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i14_fu_8262_p2() {
    tmp_620_i14_fu_8262_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i15_fu_9546_p2() {
    tmp_620_i15_fu_9546_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i16_fu_8608_p2() {
    tmp_620_i16_fu_8608_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i17_fu_9894_p2() {
    tmp_620_i17_fu_9894_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i18_fu_10242_p2() {
    tmp_620_i18_fu_10242_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i19_fu_10590_p2() {
    tmp_620_i19_fu_10590_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i1_fu_4344_p2() {
    tmp_620_i1_fu_4344_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i2_fu_5031_p2() {
    tmp_620_i2_fu_5031_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i3_fu_5605_p2() {
    tmp_620_i3_fu_5605_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i4_fu_4682_p2() {
    tmp_620_i4_fu_4682_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i5_fu_3668_p2() {
    tmp_620_i5_fu_3668_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i6_fu_5949_p2() {
    tmp_620_i6_fu_5949_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i7_fu_4006_p2() {
    tmp_620_i7_fu_4006_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i8_fu_8961_p2() {
    tmp_620_i8_fu_8961_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i9_fu_6988_p2() {
    tmp_620_i9_fu_6988_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_620_i_fu_3118_p2() {
    tmp_620_i_fu_3118_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_tmp_621_i10_fu_6313_p3() {
    tmp_621_i10_fu_6313_p3 = (!tmp_197_fu_6307_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_197_fu_6307_p2.read()[0].to_bool())? tmp_619_i10_fu_6299_p3.read(): tmp_617_i10_fu_6279_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i11_fu_7590_p3() {
    tmp_621_i11_fu_7590_p3 = (!tmp_205_fu_7584_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_205_fu_7584_p2.read()[0].to_bool())? tmp_619_i11_fu_7576_p3.read(): tmp_617_i11_fu_7556_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i12_fu_6657_p3() {
    tmp_621_i12_fu_6657_p3 = (!tmp_213_fu_6651_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_213_fu_6651_p2.read()[0].to_bool())? tmp_619_i12_fu_6643_p3.read(): tmp_617_i12_fu_6623_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i13_fu_7936_p3() {
    tmp_621_i13_fu_7936_p3 = (!tmp_221_fu_7930_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_221_fu_7930_p2.read()[0].to_bool())? tmp_619_i13_fu_7922_p3.read(): tmp_617_i13_fu_7902_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i14_fu_8282_p3() {
    tmp_621_i14_fu_8282_p3 = (!tmp_229_fu_8276_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_229_fu_8276_p2.read()[0].to_bool())? tmp_619_i14_fu_8268_p3.read(): tmp_617_i14_fu_8248_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i15_fu_9566_p3() {
    tmp_621_i15_fu_9566_p3 = (!tmp_238_fu_9560_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_238_fu_9560_p2.read()[0].to_bool())? tmp_619_i15_fu_9552_p3.read(): tmp_617_i15_fu_9532_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i16_fu_8628_p3() {
    tmp_621_i16_fu_8628_p3 = (!tmp_246_fu_8622_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_246_fu_8622_p2.read()[0].to_bool())? tmp_619_i16_fu_8614_p3.read(): tmp_617_i16_fu_8594_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i17_fu_9914_p3() {
    tmp_621_i17_fu_9914_p3 = (!tmp_255_fu_9908_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_255_fu_9908_p2.read()[0].to_bool())? tmp_619_i17_fu_9900_p3.read(): tmp_617_i17_fu_9880_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i18_fu_10262_p3() {
    tmp_621_i18_fu_10262_p3 = (!tmp_263_fu_10256_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_263_fu_10256_p2.read()[0].to_bool())? tmp_619_i18_fu_10248_p3.read(): tmp_617_i18_fu_10228_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i19_fu_10610_p3() {
    tmp_621_i19_fu_10610_p3 = (!tmp_272_fu_10604_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_272_fu_10604_p2.read()[0].to_bool())? tmp_619_i19_fu_10596_p3.read(): tmp_617_i19_fu_10576_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i1_fu_4364_p3() {
    tmp_621_i1_fu_4364_p3 = (!tmp_126_fu_4358_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_126_fu_4358_p2.read()[0].to_bool())? tmp_619_i1_fu_4350_p3.read(): tmp_617_i1_fu_4330_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i2_fu_5625_p3() {
    tmp_621_i2_fu_5625_p3 = (!tmp_141_fu_5619_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_141_fu_5619_p2.read()[0].to_bool())? tmp_619_i3_fu_5611_p3.read(): tmp_617_i3_fu_5591_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i3_fu_5051_p3() {
    tmp_621_i3_fu_5051_p3 = (!tmp_72_fu_5045_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_72_fu_5045_p2.read()[0].to_bool())? tmp_619_i2_fu_5037_p3.read(): tmp_617_i2_fu_5017_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i4_fu_4702_p3() {
    tmp_621_i4_fu_4702_p3 = (!tmp_158_fu_4696_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_158_fu_4696_p2.read()[0].to_bool())? tmp_619_i4_fu_4688_p3.read(): tmp_617_i4_fu_4668_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i5_fu_5969_p3() {
    tmp_621_i5_fu_5969_p3 = (!tmp_174_fu_5963_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_174_fu_5963_p2.read()[0].to_bool())? tmp_619_i6_fu_5955_p3.read(): tmp_617_i6_fu_5935_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i6_fu_3688_p3() {
    tmp_621_i6_fu_3688_p3 = (!tmp_86_fu_3682_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_86_fu_3682_p2.read()[0].to_bool())? tmp_619_i5_fu_3674_p3.read(): tmp_617_i5_fu_3654_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i7_fu_8981_p3() {
    tmp_621_i7_fu_8981_p3 = (!tmp_189_fu_8975_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_189_fu_8975_p2.read()[0].to_bool())? tmp_619_i9_fu_8967_p3.read(): tmp_617_i7_fu_8947_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i8_fu_4026_p3() {
    tmp_621_i8_fu_4026_p3 = (!tmp_96_fu_4020_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_96_fu_4020_p2.read()[0].to_bool())? tmp_619_i7_fu_4012_p3.read(): tmp_617_i8_fu_3992_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i9_fu_7008_p3() {
    tmp_621_i9_fu_7008_p3 = (!tmp_111_fu_7002_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_111_fu_7002_p2.read()[0].to_bool())? tmp_619_i8_fu_6994_p3.read(): tmp_617_i9_fu_6974_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_621_i_fu_3138_p3() {
    tmp_621_i_fu_3138_p3 = (!tmp_59_fu_3132_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_59_fu_3132_p2.read()[0].to_bool())? tmp_619_i_fu_3124_p3.read(): tmp_617_i_fu_3104_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_622_i10_fu_6321_p2() {
    tmp_622_i10_fu_6321_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i11_fu_7598_p2() {
    tmp_622_i11_fu_7598_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i12_fu_6665_p2() {
    tmp_622_i12_fu_6665_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i13_fu_7944_p2() {
    tmp_622_i13_fu_7944_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i14_fu_8290_p2() {
    tmp_622_i14_fu_8290_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i15_fu_9574_p2() {
    tmp_622_i15_fu_9574_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i16_fu_8636_p2() {
    tmp_622_i16_fu_8636_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i17_fu_9922_p2() {
    tmp_622_i17_fu_9922_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i18_fu_10270_p2() {
    tmp_622_i18_fu_10270_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i19_fu_10618_p2() {
    tmp_622_i19_fu_10618_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i1_fu_4372_p2() {
    tmp_622_i1_fu_4372_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i2_fu_5633_p2() {
    tmp_622_i2_fu_5633_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i3_fu_5059_p2() {
    tmp_622_i3_fu_5059_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i4_fu_4710_p2() {
    tmp_622_i4_fu_4710_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i5_fu_5977_p2() {
    tmp_622_i5_fu_5977_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i6_fu_3696_p2() {
    tmp_622_i6_fu_3696_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i7_fu_8989_p2() {
    tmp_622_i7_fu_8989_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i8_fu_4034_p2() {
    tmp_622_i8_fu_4034_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i9_fu_7016_p2() {
    tmp_622_i9_fu_7016_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_622_i_fu_3146_p2() {
    tmp_622_i_fu_3146_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_tmp_623_i10_fu_6370_p3() {
    tmp_623_i10_fu_6370_p3 = (!tmp_624_i10_reg_12160.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i10_reg_12160.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i11_fu_7647_p3() {
    tmp_623_i11_fu_7647_p3 = (!tmp_624_i11_reg_12672.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i11_reg_12672.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i12_fu_6714_p3() {
    tmp_623_i12_fu_6714_p3 = (!tmp_624_i12_reg_12271.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i12_reg_12271.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i13_fu_7993_p3() {
    tmp_623_i13_fu_7993_p3 = (!tmp_624_i13_reg_12783.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i13_reg_12783.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i14_fu_8339_p3() {
    tmp_623_i14_fu_8339_p3 = (!tmp_624_i14_reg_12894.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i14_reg_12894.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i15_fu_9623_p3() {
    tmp_623_i15_fu_9623_p3 = (!tmp_624_i15_reg_13408.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i15_reg_13408.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i16_fu_8685_p3() {
    tmp_623_i16_fu_8685_p3 = (!tmp_624_i16_reg_13005.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i16_reg_13005.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i17_fu_9971_p3() {
    tmp_623_i17_fu_9971_p3 = (!tmp_624_i17_reg_13519.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i17_reg_13519.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i18_fu_10319_p3() {
    tmp_623_i18_fu_10319_p3 = (!tmp_624_i18_reg_13630.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i18_reg_13630.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i19_fu_10667_p3() {
    tmp_623_i19_fu_10667_p3 = (!tmp_624_i19_reg_13741.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i19_reg_13741.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i1_fu_4421_p3() {
    tmp_623_i1_fu_4421_p3 = (!tmp_624_i1_reg_11425.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i1_reg_11425.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i2_fu_5682_p3() {
    tmp_623_i2_fu_5682_p3 = (!tmp_624_i2_reg_11938.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i2_reg_11938.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i3_fu_5108_p3() {
    tmp_623_i3_fu_5108_p3 = (!tmp_624_i3_reg_11660.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i3_reg_11660.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i4_fu_4759_p3() {
    tmp_623_i4_fu_4759_p3 = (!tmp_624_i4_reg_11536.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i4_reg_11536.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i5_fu_6026_p3() {
    tmp_623_i5_fu_6026_p3 = (!tmp_624_i5_reg_12049.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i5_reg_12049.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i6_fu_3745_p3() {
    tmp_623_i6_fu_3745_p3 = (!tmp_624_i6_reg_11203.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i6_reg_11203.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i7_fu_9038_p3() {
    tmp_623_i7_fu_9038_p3 = (!tmp_624_i7_reg_13129.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i7_reg_13129.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i8_fu_4083_p3() {
    tmp_623_i8_fu_4083_p3 = (!tmp_624_i8_reg_11314.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i8_reg_11314.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i9_fu_7065_p3() {
    tmp_623_i9_fu_7065_p3 = (!tmp_624_i9_reg_12395.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i9_reg_12395.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_623_i_fu_3195_p3() {
    tmp_623_i_fu_3195_p3 = (!tmp_624_i_reg_10925.read()[0].is_01())? sc_lv<32>(): ((tmp_624_i_reg_10925.read()[0].to_bool())? ap_const_lv32_BE9F6F6B: ap_const_lv32_BF22AE22);
}

void k2c_affine_matmul_3::thread_tmp_624_i10_fu_6327_p2() {
    tmp_624_i10_fu_6327_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i11_fu_7604_p2() {
    tmp_624_i11_fu_7604_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i12_fu_6671_p2() {
    tmp_624_i12_fu_6671_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i13_fu_7950_p2() {
    tmp_624_i13_fu_7950_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i14_fu_8296_p2() {
    tmp_624_i14_fu_8296_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i15_fu_9580_p2() {
    tmp_624_i15_fu_9580_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i16_fu_8642_p2() {
    tmp_624_i16_fu_8642_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i17_fu_9928_p2() {
    tmp_624_i17_fu_9928_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i18_fu_10276_p2() {
    tmp_624_i18_fu_10276_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i19_fu_10624_p2() {
    tmp_624_i19_fu_10624_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i1_fu_4378_p2() {
    tmp_624_i1_fu_4378_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i2_fu_5639_p2() {
    tmp_624_i2_fu_5639_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i3_fu_5065_p2() {
    tmp_624_i3_fu_5065_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i4_fu_4716_p2() {
    tmp_624_i4_fu_4716_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i5_fu_5983_p2() {
    tmp_624_i5_fu_5983_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i6_fu_3702_p2() {
    tmp_624_i6_fu_3702_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i7_fu_8995_p2() {
    tmp_624_i7_fu_8995_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i8_fu_4040_p2() {
    tmp_624_i8_fu_4040_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i9_fu_7022_p2() {
    tmp_624_i9_fu_7022_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_624_i_fu_3152_p2() {
    tmp_624_i_fu_3152_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_tmp_625_i10_fu_6381_p3() {
    tmp_625_i10_fu_6381_p3 = (!tmp_198_fu_6377_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_198_fu_6377_p2.read()[0].to_bool())? tmp_623_i10_fu_6370_p3.read(): tmp_621_i10_reg_12150.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i11_fu_7658_p3() {
    tmp_625_i11_fu_7658_p3 = (!tmp_206_fu_7654_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_206_fu_7654_p2.read()[0].to_bool())? tmp_623_i11_fu_7647_p3.read(): tmp_621_i11_reg_12662.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i12_fu_6725_p3() {
    tmp_625_i12_fu_6725_p3 = (!tmp_214_fu_6721_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_214_fu_6721_p2.read()[0].to_bool())? tmp_623_i12_fu_6714_p3.read(): tmp_621_i12_reg_12261.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i13_fu_8004_p3() {
    tmp_625_i13_fu_8004_p3 = (!tmp_222_fu_8000_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_222_fu_8000_p2.read()[0].to_bool())? tmp_623_i13_fu_7993_p3.read(): tmp_621_i13_reg_12773.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i14_fu_8350_p3() {
    tmp_625_i14_fu_8350_p3 = (!tmp_230_fu_8346_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_230_fu_8346_p2.read()[0].to_bool())? tmp_623_i14_fu_8339_p3.read(): tmp_621_i14_reg_12884.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i15_fu_9634_p3() {
    tmp_625_i15_fu_9634_p3 = (!tmp_239_fu_9630_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_239_fu_9630_p2.read()[0].to_bool())? tmp_623_i15_fu_9623_p3.read(): tmp_621_i15_reg_13398.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i16_fu_8696_p3() {
    tmp_625_i16_fu_8696_p3 = (!tmp_248_fu_8692_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_248_fu_8692_p2.read()[0].to_bool())? tmp_623_i16_fu_8685_p3.read(): tmp_621_i16_reg_12995.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i17_fu_9982_p3() {
    tmp_625_i17_fu_9982_p3 = (!tmp_256_fu_9978_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_256_fu_9978_p2.read()[0].to_bool())? tmp_623_i17_fu_9971_p3.read(): tmp_621_i17_reg_13509.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i18_fu_10330_p3() {
    tmp_625_i18_fu_10330_p3 = (!tmp_264_fu_10326_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_264_fu_10326_p2.read()[0].to_bool())? tmp_623_i18_fu_10319_p3.read(): tmp_621_i18_reg_13620.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i19_fu_10678_p3() {
    tmp_625_i19_fu_10678_p3 = (!tmp_273_fu_10674_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_273_fu_10674_p2.read()[0].to_bool())? tmp_623_i19_fu_10667_p3.read(): tmp_621_i19_reg_13731.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i1_fu_4432_p3() {
    tmp_625_i1_fu_4432_p3 = (!tmp_128_fu_4428_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_128_fu_4428_p2.read()[0].to_bool())? tmp_623_i1_fu_4421_p3.read(): tmp_621_i1_reg_11415.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i2_fu_5693_p3() {
    tmp_625_i2_fu_5693_p3 = (!tmp_144_fu_5689_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_144_fu_5689_p2.read()[0].to_bool())? tmp_623_i2_fu_5682_p3.read(): tmp_621_i2_reg_11928.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i3_fu_5119_p3() {
    tmp_625_i3_fu_5119_p3 = (!tmp_74_fu_5115_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_74_fu_5115_p2.read()[0].to_bool())? tmp_623_i3_fu_5108_p3.read(): tmp_621_i3_reg_11650.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i4_fu_4770_p3() {
    tmp_625_i4_fu_4770_p3 = (!tmp_159_fu_4766_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_159_fu_4766_p2.read()[0].to_bool())? tmp_623_i4_fu_4759_p3.read(): tmp_621_i4_reg_11526.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i5_fu_6037_p3() {
    tmp_625_i5_fu_6037_p3 = (!tmp_176_fu_6033_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_176_fu_6033_p2.read()[0].to_bool())? tmp_623_i5_fu_6026_p3.read(): tmp_621_i5_reg_12039.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i6_fu_3756_p3() {
    tmp_625_i6_fu_3756_p3 = (!tmp_87_fu_3752_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_87_fu_3752_p2.read()[0].to_bool())? tmp_623_i6_fu_3745_p3.read(): tmp_621_i6_reg_11193.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i7_fu_9049_p3() {
    tmp_625_i7_fu_9049_p3 = (!tmp_190_fu_9045_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_190_fu_9045_p2.read()[0].to_bool())? tmp_623_i7_fu_9038_p3.read(): tmp_621_i7_reg_13119.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i8_fu_4094_p3() {
    tmp_625_i8_fu_4094_p3 = (!tmp_98_fu_4090_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_98_fu_4090_p2.read()[0].to_bool())? tmp_623_i8_fu_4083_p3.read(): tmp_621_i8_reg_11304.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i9_fu_7076_p3() {
    tmp_625_i9_fu_7076_p3 = (!tmp_114_fu_7072_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_114_fu_7072_p2.read()[0].to_bool())? tmp_623_i9_fu_7065_p3.read(): tmp_621_i9_reg_12385.read());
}

void k2c_affine_matmul_3::thread_tmp_625_i_fu_3206_p3() {
    tmp_625_i_fu_3206_p3 = (!tmp_62_fu_3202_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_62_fu_3202_p2.read()[0].to_bool())? tmp_623_i_fu_3195_p3.read(): tmp_621_i_reg_10915.read());
}

void k2c_affine_matmul_3::thread_tmp_626_i10_fu_6333_p2() {
    tmp_626_i10_fu_6333_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i11_fu_7610_p2() {
    tmp_626_i11_fu_7610_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i12_fu_6677_p2() {
    tmp_626_i12_fu_6677_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i13_fu_7956_p2() {
    tmp_626_i13_fu_7956_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i14_fu_8302_p2() {
    tmp_626_i14_fu_8302_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i15_fu_9586_p2() {
    tmp_626_i15_fu_9586_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i16_fu_8648_p2() {
    tmp_626_i16_fu_8648_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i17_fu_9934_p2() {
    tmp_626_i17_fu_9934_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i18_fu_10282_p2() {
    tmp_626_i18_fu_10282_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i19_fu_10630_p2() {
    tmp_626_i19_fu_10630_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i1_fu_4384_p2() {
    tmp_626_i1_fu_4384_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i2_fu_5645_p2() {
    tmp_626_i2_fu_5645_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i3_fu_5071_p2() {
    tmp_626_i3_fu_5071_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i4_fu_4722_p2() {
    tmp_626_i4_fu_4722_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i5_fu_5989_p2() {
    tmp_626_i5_fu_5989_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i6_fu_3708_p2() {
    tmp_626_i6_fu_3708_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i7_fu_9001_p2() {
    tmp_626_i7_fu_9001_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i8_fu_4046_p2() {
    tmp_626_i8_fu_4046_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i9_fu_7028_p2() {
    tmp_626_i9_fu_7028_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_626_i_fu_3158_p2() {
    tmp_626_i_fu_3158_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_tmp_627_i10_fu_6388_p3() {
    tmp_627_i10_fu_6388_p3 = (!tmp_628_i10_reg_12171.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i10_reg_12171.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i11_fu_7665_p3() {
    tmp_627_i11_fu_7665_p3 = (!tmp_628_i11_reg_12683.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i11_reg_12683.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i12_fu_6732_p3() {
    tmp_627_i12_fu_6732_p3 = (!tmp_628_i12_reg_12282.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i12_reg_12282.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i13_fu_8011_p3() {
    tmp_627_i13_fu_8011_p3 = (!tmp_628_i13_reg_12794.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i13_reg_12794.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i14_fu_8357_p3() {
    tmp_627_i14_fu_8357_p3 = (!tmp_628_i14_reg_12905.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i14_reg_12905.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i15_fu_9641_p3() {
    tmp_627_i15_fu_9641_p3 = (!tmp_628_i15_reg_13419.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i15_reg_13419.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i16_fu_8703_p3() {
    tmp_627_i16_fu_8703_p3 = (!tmp_628_i16_reg_13016.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i16_reg_13016.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i17_fu_9989_p3() {
    tmp_627_i17_fu_9989_p3 = (!tmp_628_i17_reg_13530.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i17_reg_13530.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i18_fu_10337_p3() {
    tmp_627_i18_fu_10337_p3 = (!tmp_628_i18_reg_13641.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i18_reg_13641.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i19_fu_10685_p3() {
    tmp_627_i19_fu_10685_p3 = (!tmp_628_i19_reg_13752.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i19_reg_13752.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i1_fu_4439_p3() {
    tmp_627_i1_fu_4439_p3 = (!tmp_628_i1_reg_11436.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i1_reg_11436.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i2_fu_5700_p3() {
    tmp_627_i2_fu_5700_p3 = (!tmp_628_i2_reg_11949.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i2_reg_11949.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i3_fu_5126_p3() {
    tmp_627_i3_fu_5126_p3 = (!tmp_628_i3_reg_11671.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i3_reg_11671.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i4_fu_4777_p3() {
    tmp_627_i4_fu_4777_p3 = (!tmp_628_i4_reg_11547.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i4_reg_11547.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i5_fu_6044_p3() {
    tmp_627_i5_fu_6044_p3 = (!tmp_628_i5_reg_12060.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i5_reg_12060.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i6_fu_3763_p3() {
    tmp_627_i6_fu_3763_p3 = (!tmp_628_i6_reg_11214.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i6_reg_11214.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i7_fu_9056_p3() {
    tmp_627_i7_fu_9056_p3 = (!tmp_628_i7_reg_13140.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i7_reg_13140.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i8_fu_4101_p3() {
    tmp_627_i8_fu_4101_p3 = (!tmp_628_i8_reg_11325.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i8_reg_11325.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i9_fu_7083_p3() {
    tmp_627_i9_fu_7083_p3 = (!tmp_628_i9_reg_12406.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i9_reg_12406.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_627_i_fu_3213_p3() {
    tmp_627_i_fu_3213_p3 = (!tmp_628_i_reg_10936.read()[0].is_01())? sc_lv<32>(): ((tmp_628_i_reg_10936.read()[0].to_bool())? ap_const_lv32_BE97C77F: ap_const_lv32_3E6FDC74);
}

void k2c_affine_matmul_3::thread_tmp_628_i10_fu_6339_p2() {
    tmp_628_i10_fu_6339_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i11_fu_7616_p2() {
    tmp_628_i11_fu_7616_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i12_fu_6683_p2() {
    tmp_628_i12_fu_6683_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i13_fu_7962_p2() {
    tmp_628_i13_fu_7962_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i14_fu_8308_p2() {
    tmp_628_i14_fu_8308_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i15_fu_9592_p2() {
    tmp_628_i15_fu_9592_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i16_fu_8654_p2() {
    tmp_628_i16_fu_8654_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i17_fu_9940_p2() {
    tmp_628_i17_fu_9940_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i18_fu_10288_p2() {
    tmp_628_i18_fu_10288_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i19_fu_10636_p2() {
    tmp_628_i19_fu_10636_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i1_fu_4390_p2() {
    tmp_628_i1_fu_4390_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i2_fu_5651_p2() {
    tmp_628_i2_fu_5651_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i3_fu_5077_p2() {
    tmp_628_i3_fu_5077_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i4_fu_4728_p2() {
    tmp_628_i4_fu_4728_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i5_fu_5995_p2() {
    tmp_628_i5_fu_5995_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i6_fu_3714_p2() {
    tmp_628_i6_fu_3714_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i7_fu_9007_p2() {
    tmp_628_i7_fu_9007_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i8_fu_4052_p2() {
    tmp_628_i8_fu_4052_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i9_fu_7034_p2() {
    tmp_628_i9_fu_7034_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_628_i_fu_3164_p2() {
    tmp_628_i_fu_3164_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_8);
}

void k2c_affine_matmul_3::thread_tmp_629_i10_fu_6399_p3() {
    tmp_629_i10_fu_6399_p3 = (!tmp_199_fu_6395_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_199_fu_6395_p2.read()[0].to_bool())? tmp_627_i10_fu_6388_p3.read(): tmp_625_i10_fu_6381_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i11_fu_7676_p3() {
    tmp_629_i11_fu_7676_p3 = (!tmp_207_fu_7672_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_207_fu_7672_p2.read()[0].to_bool())? tmp_627_i11_fu_7665_p3.read(): tmp_625_i11_fu_7658_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i12_fu_6743_p3() {
    tmp_629_i12_fu_6743_p3 = (!tmp_215_fu_6739_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_215_fu_6739_p2.read()[0].to_bool())? tmp_627_i12_fu_6732_p3.read(): tmp_625_i12_fu_6725_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i13_fu_8022_p3() {
    tmp_629_i13_fu_8022_p3 = (!tmp_223_fu_8018_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_223_fu_8018_p2.read()[0].to_bool())? tmp_627_i13_fu_8011_p3.read(): tmp_625_i13_fu_8004_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i14_fu_8368_p3() {
    tmp_629_i14_fu_8368_p3 = (!tmp_232_fu_8364_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_232_fu_8364_p2.read()[0].to_bool())? tmp_627_i14_fu_8357_p3.read(): tmp_625_i14_fu_8350_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i15_fu_9652_p3() {
    tmp_629_i15_fu_9652_p3 = (!tmp_240_fu_9648_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_240_fu_9648_p2.read()[0].to_bool())? tmp_627_i15_fu_9641_p3.read(): tmp_625_i15_fu_9634_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i16_fu_8714_p3() {
    tmp_629_i16_fu_8714_p3 = (!tmp_249_fu_8710_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_249_fu_8710_p2.read()[0].to_bool())? tmp_627_i16_fu_8703_p3.read(): tmp_625_i16_fu_8696_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i17_fu_10000_p3() {
    tmp_629_i17_fu_10000_p3 = (!tmp_257_fu_9996_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_257_fu_9996_p2.read()[0].to_bool())? tmp_627_i17_fu_9989_p3.read(): tmp_625_i17_fu_9982_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i18_fu_10348_p3() {
    tmp_629_i18_fu_10348_p3 = (!tmp_265_fu_10344_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_265_fu_10344_p2.read()[0].to_bool())? tmp_627_i18_fu_10337_p3.read(): tmp_625_i18_fu_10330_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i19_fu_10696_p3() {
    tmp_629_i19_fu_10696_p3 = (!tmp_274_fu_10692_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_274_fu_10692_p2.read()[0].to_bool())? tmp_627_i19_fu_10685_p3.read(): tmp_625_i19_fu_10678_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i1_fu_4450_p3() {
    tmp_629_i1_fu_4450_p3 = (!tmp_129_fu_4446_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_129_fu_4446_p2.read()[0].to_bool())? tmp_627_i1_fu_4439_p3.read(): tmp_625_i1_fu_4432_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i2_fu_5711_p3() {
    tmp_629_i2_fu_5711_p3 = (!tmp_146_fu_5707_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_146_fu_5707_p2.read()[0].to_bool())? tmp_627_i2_fu_5700_p3.read(): tmp_625_i2_fu_5693_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i3_fu_5137_p3() {
    tmp_629_i3_fu_5137_p3 = (!tmp_75_fu_5133_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_75_fu_5133_p2.read()[0].to_bool())? tmp_627_i3_fu_5126_p3.read(): tmp_625_i3_fu_5119_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i4_fu_4788_p3() {
    tmp_629_i4_fu_4788_p3 = (!tmp_162_fu_4784_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_162_fu_4784_p2.read()[0].to_bool())? tmp_627_i4_fu_4777_p3.read(): tmp_625_i4_fu_4770_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i5_fu_6055_p3() {
    tmp_629_i5_fu_6055_p3 = (!tmp_177_fu_6051_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_177_fu_6051_p2.read()[0].to_bool())? tmp_627_i5_fu_6044_p3.read(): tmp_625_i5_fu_6037_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i6_fu_3774_p3() {
    tmp_629_i6_fu_3774_p3 = (!tmp_88_fu_3770_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_88_fu_3770_p2.read()[0].to_bool())? tmp_627_i6_fu_3763_p3.read(): tmp_625_i6_fu_3756_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i7_fu_9067_p3() {
    tmp_629_i7_fu_9067_p3 = (!tmp_191_fu_9063_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_191_fu_9063_p2.read()[0].to_bool())? tmp_627_i7_fu_9056_p3.read(): tmp_625_i7_fu_9049_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i8_fu_4112_p3() {
    tmp_629_i8_fu_4112_p3 = (!tmp_102_fu_4108_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_102_fu_4108_p2.read()[0].to_bool())? tmp_627_i8_fu_4101_p3.read(): tmp_625_i8_fu_4094_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i9_fu_7094_p3() {
    tmp_629_i9_fu_7094_p3 = (!tmp_116_fu_7090_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_116_fu_7090_p2.read()[0].to_bool())? tmp_627_i9_fu_7083_p3.read(): tmp_625_i9_fu_7076_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_629_i_fu_3224_p3() {
    tmp_629_i_fu_3224_p3 = (!tmp_63_fu_3220_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_63_fu_3220_p2.read()[0].to_bool())? tmp_627_i_fu_3213_p3.read(): tmp_625_i_fu_3206_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_62_fu_3202_p2() {
    tmp_62_fu_3202_p2 = (tmp_624_i_reg_10925.read() | tmp_622_i_reg_10920.read());
}

void k2c_affine_matmul_3::thread_tmp_630_i10_fu_6407_p2() {
    tmp_630_i10_fu_6407_p2 = (!tmp_113_reg_12140.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_reg_12140.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i11_fu_7684_p2() {
    tmp_630_i11_fu_7684_p2 = (!tmp_125_reg_12652.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_reg_12652.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i12_fu_6751_p2() {
    tmp_630_i12_fu_6751_p2 = (!tmp_131_reg_12251.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_reg_12251.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i13_fu_8030_p2() {
    tmp_630_i13_fu_8030_p2 = (!tmp_143_reg_12763.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_reg_12763.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i14_fu_8376_p2() {
    tmp_630_i14_fu_8376_p2 = (!tmp_155_reg_12874.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_reg_12874.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i15_fu_9660_p2() {
    tmp_630_i15_fu_9660_p2 = (!tmp_161_reg_13388.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_reg_13388.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i16_fu_8722_p2() {
    tmp_630_i16_fu_8722_p2 = (!tmp_167_reg_12985.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_reg_12985.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i17_fu_10008_p2() {
    tmp_630_i17_fu_10008_p2 = (!tmp_173_reg_13499.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_reg_13499.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i18_fu_10356_p2() {
    tmp_630_i18_fu_10356_p2 = (!tmp_179_reg_13610.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_reg_13610.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i19_fu_10704_p2() {
    tmp_630_i19_fu_10704_p2 = (!tmp_185_reg_13721.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_reg_13721.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i1_fu_4458_p2() {
    tmp_630_i1_fu_4458_p2 = (!tmp_66_reg_11405.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_11405.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i2_fu_5719_p2() {
    tmp_630_i2_fu_5719_p2 = (!tmp_77_reg_11918.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_11918.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i3_fu_5145_p2() {
    tmp_630_i3_fu_5145_p2 = (!tmp_42_reg_11640.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_11640.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i4_fu_4796_p2() {
    tmp_630_i4_fu_4796_p2 = (!tmp_83_reg_11516.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_11516.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i5_fu_6063_p2() {
    tmp_630_i5_fu_6063_p2 = (!tmp_95_reg_12029.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_12029.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i6_fu_3782_p2() {
    tmp_630_i6_fu_3782_p2 = (!tmp_51_reg_11183.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_11183.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i7_fu_9075_p2() {
    tmp_630_i7_fu_9075_p2 = (!tmp_101_reg_13109.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_13109.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i8_fu_4120_p2() {
    tmp_630_i8_fu_4120_p2 = (!tmp_57_reg_11294.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_11294.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i9_fu_7102_p2() {
    tmp_630_i9_fu_7102_p2 = (!tmp_60_reg_12375.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_reg_12375.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_630_i_fu_3232_p2() {
    tmp_630_i_fu_3232_p2 = (!tmp_32_reg_10905.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_10905.read() == ap_const_lv4_9);
}

void k2c_affine_matmul_3::thread_tmp_631_i10_fu_6417_p3() {
    tmp_631_i10_fu_6417_p3 = (!tmp_632_i10_fu_6412_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i10_fu_6412_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i11_fu_7694_p3() {
    tmp_631_i11_fu_7694_p3 = (!tmp_632_i11_fu_7689_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i11_fu_7689_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i12_fu_6761_p3() {
    tmp_631_i12_fu_6761_p3 = (!tmp_632_i12_fu_6756_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i12_fu_6756_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i13_fu_8040_p3() {
    tmp_631_i13_fu_8040_p3 = (!tmp_632_i13_fu_8035_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i13_fu_8035_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i14_fu_8386_p3() {
    tmp_631_i14_fu_8386_p3 = (!tmp_632_i14_fu_8381_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i14_fu_8381_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i15_fu_9670_p3() {
    tmp_631_i15_fu_9670_p3 = (!tmp_632_i15_fu_9665_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i15_fu_9665_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i16_fu_8732_p3() {
    tmp_631_i16_fu_8732_p3 = (!tmp_632_i16_fu_8727_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i16_fu_8727_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i17_fu_10018_p3() {
    tmp_631_i17_fu_10018_p3 = (!tmp_632_i17_fu_10013_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i17_fu_10013_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i18_fu_10366_p3() {
    tmp_631_i18_fu_10366_p3 = (!tmp_632_i18_fu_10361_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i18_fu_10361_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i19_fu_10714_p3() {
    tmp_631_i19_fu_10714_p3 = (!tmp_632_i19_fu_10709_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i19_fu_10709_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i1_fu_4468_p3() {
    tmp_631_i1_fu_4468_p3 = (!tmp_632_i1_fu_4463_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i1_fu_4463_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i2_fu_5729_p3() {
    tmp_631_i2_fu_5729_p3 = (!tmp_632_i2_fu_5724_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i2_fu_5724_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i3_fu_5155_p3() {
    tmp_631_i3_fu_5155_p3 = (!tmp_632_i3_fu_5150_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i3_fu_5150_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i4_fu_4806_p3() {
    tmp_631_i4_fu_4806_p3 = (!tmp_632_i4_fu_4801_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i4_fu_4801_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i5_fu_6073_p3() {
    tmp_631_i5_fu_6073_p3 = (!tmp_632_i5_fu_6068_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i5_fu_6068_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i6_fu_3792_p3() {
    tmp_631_i6_fu_3792_p3 = (!tmp_632_i6_fu_3787_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i6_fu_3787_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i7_fu_9085_p3() {
    tmp_631_i7_fu_9085_p3 = (!tmp_632_i7_fu_9080_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i7_fu_9080_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i8_fu_4130_p3() {
    tmp_631_i8_fu_4130_p3 = (!tmp_632_i8_fu_4125_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i8_fu_4125_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i9_fu_7112_p3() {
    tmp_631_i9_fu_7112_p3 = (!tmp_632_i9_fu_7107_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i9_fu_7107_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_631_i_fu_3242_p3() {
    tmp_631_i_fu_3242_p3 = (!tmp_632_i_fu_3237_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_632_i_fu_3237_p2.read()[0].to_bool())? ap_const_lv32_3E907CAE: ap_const_lv32_BEEC8A04);
}

void k2c_affine_matmul_3::thread_tmp_632_i10_fu_6412_p2() {
    tmp_632_i10_fu_6412_p2 = (!tmp_113_reg_12140.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_reg_12140.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i11_fu_7689_p2() {
    tmp_632_i11_fu_7689_p2 = (!tmp_125_reg_12652.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_reg_12652.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i12_fu_6756_p2() {
    tmp_632_i12_fu_6756_p2 = (!tmp_131_reg_12251.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_reg_12251.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i13_fu_8035_p2() {
    tmp_632_i13_fu_8035_p2 = (!tmp_143_reg_12763.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_reg_12763.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i14_fu_8381_p2() {
    tmp_632_i14_fu_8381_p2 = (!tmp_155_reg_12874.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_reg_12874.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i15_fu_9665_p2() {
    tmp_632_i15_fu_9665_p2 = (!tmp_161_reg_13388.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_reg_13388.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i16_fu_8727_p2() {
    tmp_632_i16_fu_8727_p2 = (!tmp_167_reg_12985.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_reg_12985.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i17_fu_10013_p2() {
    tmp_632_i17_fu_10013_p2 = (!tmp_173_reg_13499.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_reg_13499.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i18_fu_10361_p2() {
    tmp_632_i18_fu_10361_p2 = (!tmp_179_reg_13610.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_reg_13610.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i19_fu_10709_p2() {
    tmp_632_i19_fu_10709_p2 = (!tmp_185_reg_13721.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_reg_13721.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i1_fu_4463_p2() {
    tmp_632_i1_fu_4463_p2 = (!tmp_66_reg_11405.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_11405.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i2_fu_5724_p2() {
    tmp_632_i2_fu_5724_p2 = (!tmp_77_reg_11918.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_11918.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i3_fu_5150_p2() {
    tmp_632_i3_fu_5150_p2 = (!tmp_42_reg_11640.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_11640.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i4_fu_4801_p2() {
    tmp_632_i4_fu_4801_p2 = (!tmp_83_reg_11516.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_11516.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i5_fu_6068_p2() {
    tmp_632_i5_fu_6068_p2 = (!tmp_95_reg_12029.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_12029.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i6_fu_3787_p2() {
    tmp_632_i6_fu_3787_p2 = (!tmp_51_reg_11183.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_11183.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i7_fu_9080_p2() {
    tmp_632_i7_fu_9080_p2 = (!tmp_101_reg_13109.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_13109.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i8_fu_4125_p2() {
    tmp_632_i8_fu_4125_p2 = (!tmp_57_reg_11294.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_11294.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i9_fu_7107_p2() {
    tmp_632_i9_fu_7107_p2 = (!tmp_60_reg_12375.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_reg_12375.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_632_i_fu_3237_p2() {
    tmp_632_i_fu_3237_p2 = (!tmp_32_reg_10905.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_10905.read() == ap_const_lv4_A);
}

void k2c_affine_matmul_3::thread_tmp_633_i10_fu_6431_p3() {
    tmp_633_i10_fu_6431_p3 = (!tmp_200_fu_6425_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_200_fu_6425_p2.read()[0].to_bool())? tmp_631_i10_fu_6417_p3.read(): tmp_629_i10_fu_6399_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i11_fu_7708_p3() {
    tmp_633_i11_fu_7708_p3 = (!tmp_208_fu_7702_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_208_fu_7702_p2.read()[0].to_bool())? tmp_631_i11_fu_7694_p3.read(): tmp_629_i11_fu_7676_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i12_fu_6775_p3() {
    tmp_633_i12_fu_6775_p3 = (!tmp_216_fu_6769_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_216_fu_6769_p2.read()[0].to_bool())? tmp_631_i12_fu_6761_p3.read(): tmp_629_i12_fu_6743_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i13_fu_8054_p3() {
    tmp_633_i13_fu_8054_p3 = (!tmp_224_fu_8048_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_224_fu_8048_p2.read()[0].to_bool())? tmp_631_i13_fu_8040_p3.read(): tmp_629_i13_fu_8022_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i14_fu_8400_p3() {
    tmp_633_i14_fu_8400_p3 = (!tmp_233_fu_8394_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_233_fu_8394_p2.read()[0].to_bool())? tmp_631_i14_fu_8386_p3.read(): tmp_629_i14_fu_8368_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i15_fu_9684_p3() {
    tmp_633_i15_fu_9684_p3 = (!tmp_241_fu_9678_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_241_fu_9678_p2.read()[0].to_bool())? tmp_631_i15_fu_9670_p3.read(): tmp_629_i15_fu_9652_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i16_fu_8746_p3() {
    tmp_633_i16_fu_8746_p3 = (!tmp_250_fu_8740_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_250_fu_8740_p2.read()[0].to_bool())? tmp_631_i16_fu_8732_p3.read(): tmp_629_i16_fu_8714_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i17_fu_10032_p3() {
    tmp_633_i17_fu_10032_p3 = (!tmp_258_fu_10026_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_258_fu_10026_p2.read()[0].to_bool())? tmp_631_i17_fu_10018_p3.read(): tmp_629_i17_fu_10000_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i18_fu_10380_p3() {
    tmp_633_i18_fu_10380_p3 = (!tmp_266_fu_10374_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_266_fu_10374_p2.read()[0].to_bool())? tmp_631_i18_fu_10366_p3.read(): tmp_629_i18_fu_10348_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i19_fu_10728_p3() {
    tmp_633_i19_fu_10728_p3 = (!tmp_275_fu_10722_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_275_fu_10722_p2.read()[0].to_bool())? tmp_631_i19_fu_10714_p3.read(): tmp_629_i19_fu_10696_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i1_fu_4482_p3() {
    tmp_633_i1_fu_4482_p3 = (!tmp_132_fu_4476_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_132_fu_4476_p2.read()[0].to_bool())? tmp_631_i1_fu_4468_p3.read(): tmp_629_i1_fu_4450_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i2_fu_5743_p3() {
    tmp_633_i2_fu_5743_p3 = (!tmp_147_fu_5737_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_147_fu_5737_p2.read()[0].to_bool())? tmp_631_i2_fu_5729_p3.read(): tmp_629_i2_fu_5711_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i3_fu_5169_p3() {
    tmp_633_i3_fu_5169_p3 = (!tmp_76_fu_5163_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_76_fu_5163_p2.read()[0].to_bool())? tmp_631_i3_fu_5155_p3.read(): tmp_629_i3_fu_5137_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i4_fu_4820_p3() {
    tmp_633_i4_fu_4820_p3 = (!tmp_164_fu_4814_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_164_fu_4814_p2.read()[0].to_bool())? tmp_631_i4_fu_4806_p3.read(): tmp_629_i4_fu_4788_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i5_fu_6087_p3() {
    tmp_633_i5_fu_6087_p3 = (!tmp_180_fu_6081_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_180_fu_6081_p2.read()[0].to_bool())? tmp_631_i5_fu_6073_p3.read(): tmp_629_i5_fu_6055_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i6_fu_3806_p3() {
    tmp_633_i6_fu_3806_p3 = (!tmp_89_fu_3800_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_89_fu_3800_p2.read()[0].to_bool())? tmp_631_i6_fu_3792_p3.read(): tmp_629_i6_fu_3774_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i7_fu_9099_p3() {
    tmp_633_i7_fu_9099_p3 = (!tmp_192_fu_9093_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_192_fu_9093_p2.read()[0].to_bool())? tmp_631_i7_fu_9085_p3.read(): tmp_629_i7_fu_9067_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i8_fu_4144_p3() {
    tmp_633_i8_fu_4144_p3 = (!tmp_104_fu_4138_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_104_fu_4138_p2.read()[0].to_bool())? tmp_631_i8_fu_4130_p3.read(): tmp_629_i8_fu_4112_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i9_fu_7126_p3() {
    tmp_633_i9_fu_7126_p3 = (!tmp_117_fu_7120_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_117_fu_7120_p2.read()[0].to_bool())? tmp_631_i9_fu_7112_p3.read(): tmp_629_i9_fu_7094_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_633_i_fu_3256_p3() {
    tmp_633_i_fu_3256_p3 = (!tmp_65_fu_3250_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_65_fu_3250_p2.read()[0].to_bool())? tmp_631_i_fu_3242_p3.read(): tmp_629_i_fu_3224_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_634_i10_fu_6439_p2() {
    tmp_634_i10_fu_6439_p2 = (!tmp_113_reg_12140.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_reg_12140.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i11_fu_7716_p2() {
    tmp_634_i11_fu_7716_p2 = (!tmp_125_reg_12652.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_reg_12652.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i12_fu_6783_p2() {
    tmp_634_i12_fu_6783_p2 = (!tmp_131_reg_12251.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_reg_12251.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i13_fu_8062_p2() {
    tmp_634_i13_fu_8062_p2 = (!tmp_143_reg_12763.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_reg_12763.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i14_fu_8408_p2() {
    tmp_634_i14_fu_8408_p2 = (!tmp_155_reg_12874.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_reg_12874.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i15_fu_9692_p2() {
    tmp_634_i15_fu_9692_p2 = (!tmp_161_reg_13388.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_reg_13388.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i16_fu_8754_p2() {
    tmp_634_i16_fu_8754_p2 = (!tmp_167_reg_12985.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_reg_12985.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i17_fu_10040_p2() {
    tmp_634_i17_fu_10040_p2 = (!tmp_173_reg_13499.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_reg_13499.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i18_fu_10388_p2() {
    tmp_634_i18_fu_10388_p2 = (!tmp_179_reg_13610.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_reg_13610.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i19_fu_10736_p2() {
    tmp_634_i19_fu_10736_p2 = (!tmp_185_reg_13721.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_reg_13721.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i1_fu_4490_p2() {
    tmp_634_i1_fu_4490_p2 = (!tmp_66_reg_11405.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_11405.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i2_fu_5751_p2() {
    tmp_634_i2_fu_5751_p2 = (!tmp_77_reg_11918.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_11918.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i3_fu_5177_p2() {
    tmp_634_i3_fu_5177_p2 = (!tmp_42_reg_11640.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_11640.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i4_fu_4828_p2() {
    tmp_634_i4_fu_4828_p2 = (!tmp_83_reg_11516.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_11516.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i5_fu_6095_p2() {
    tmp_634_i5_fu_6095_p2 = (!tmp_95_reg_12029.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_12029.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i6_fu_3814_p2() {
    tmp_634_i6_fu_3814_p2 = (!tmp_51_reg_11183.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_11183.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i7_fu_9107_p2() {
    tmp_634_i7_fu_9107_p2 = (!tmp_101_reg_13109.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_13109.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i8_fu_4152_p2() {
    tmp_634_i8_fu_4152_p2 = (!tmp_57_reg_11294.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_11294.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i9_fu_7134_p2() {
    tmp_634_i9_fu_7134_p2 = (!tmp_60_reg_12375.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_reg_12375.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_634_i_fu_3264_p2() {
    tmp_634_i_fu_3264_p2 = (!tmp_32_reg_10905.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_10905.read() == ap_const_lv4_B);
}

void k2c_affine_matmul_3::thread_tmp_635_i10_fu_6449_p3() {
    tmp_635_i10_fu_6449_p3 = (!tmp_636_i10_fu_6444_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i10_fu_6444_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i11_fu_7726_p3() {
    tmp_635_i11_fu_7726_p3 = (!tmp_636_i11_fu_7721_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i11_fu_7721_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i12_fu_6793_p3() {
    tmp_635_i12_fu_6793_p3 = (!tmp_636_i12_fu_6788_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i12_fu_6788_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i13_fu_8072_p3() {
    tmp_635_i13_fu_8072_p3 = (!tmp_636_i13_fu_8067_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i13_fu_8067_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i14_fu_8418_p3() {
    tmp_635_i14_fu_8418_p3 = (!tmp_636_i14_fu_8413_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i14_fu_8413_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i15_fu_9702_p3() {
    tmp_635_i15_fu_9702_p3 = (!tmp_636_i15_fu_9697_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i15_fu_9697_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i16_fu_8764_p3() {
    tmp_635_i16_fu_8764_p3 = (!tmp_636_i16_fu_8759_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i16_fu_8759_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i17_fu_10050_p3() {
    tmp_635_i17_fu_10050_p3 = (!tmp_636_i17_fu_10045_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i17_fu_10045_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i18_fu_10398_p3() {
    tmp_635_i18_fu_10398_p3 = (!tmp_636_i18_fu_10393_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i18_fu_10393_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i19_fu_10746_p3() {
    tmp_635_i19_fu_10746_p3 = (!tmp_636_i19_fu_10741_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i19_fu_10741_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i1_fu_4500_p3() {
    tmp_635_i1_fu_4500_p3 = (!tmp_636_i1_fu_4495_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i1_fu_4495_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i2_fu_5761_p3() {
    tmp_635_i2_fu_5761_p3 = (!tmp_636_i2_fu_5756_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i2_fu_5756_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i3_fu_5187_p3() {
    tmp_635_i3_fu_5187_p3 = (!tmp_636_i3_fu_5182_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i3_fu_5182_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i4_fu_4838_p3() {
    tmp_635_i4_fu_4838_p3 = (!tmp_636_i4_fu_4833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i4_fu_4833_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i5_fu_6105_p3() {
    tmp_635_i5_fu_6105_p3 = (!tmp_636_i5_fu_6100_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i5_fu_6100_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i6_fu_3824_p3() {
    tmp_635_i6_fu_3824_p3 = (!tmp_636_i6_fu_3819_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i6_fu_3819_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i7_fu_9117_p3() {
    tmp_635_i7_fu_9117_p3 = (!tmp_636_i7_fu_9112_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i7_fu_9112_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i8_fu_4162_p3() {
    tmp_635_i8_fu_4162_p3 = (!tmp_636_i8_fu_4157_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i8_fu_4157_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i9_fu_7144_p3() {
    tmp_635_i9_fu_7144_p3 = (!tmp_636_i9_fu_7139_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i9_fu_7139_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_635_i_fu_3274_p3() {
    tmp_635_i_fu_3274_p3 = (!tmp_636_i_fu_3269_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_636_i_fu_3269_p2.read()[0].to_bool())? ap_const_lv32_3D16A363: ap_const_lv32_3E381D23);
}

void k2c_affine_matmul_3::thread_tmp_636_i10_fu_6444_p2() {
    tmp_636_i10_fu_6444_p2 = (!tmp_113_reg_12140.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_reg_12140.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i11_fu_7721_p2() {
    tmp_636_i11_fu_7721_p2 = (!tmp_125_reg_12652.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_reg_12652.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i12_fu_6788_p2() {
    tmp_636_i12_fu_6788_p2 = (!tmp_131_reg_12251.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_reg_12251.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i13_fu_8067_p2() {
    tmp_636_i13_fu_8067_p2 = (!tmp_143_reg_12763.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_reg_12763.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i14_fu_8413_p2() {
    tmp_636_i14_fu_8413_p2 = (!tmp_155_reg_12874.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_reg_12874.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i15_fu_9697_p2() {
    tmp_636_i15_fu_9697_p2 = (!tmp_161_reg_13388.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_reg_13388.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i16_fu_8759_p2() {
    tmp_636_i16_fu_8759_p2 = (!tmp_167_reg_12985.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_reg_12985.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i17_fu_10045_p2() {
    tmp_636_i17_fu_10045_p2 = (!tmp_173_reg_13499.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_reg_13499.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i18_fu_10393_p2() {
    tmp_636_i18_fu_10393_p2 = (!tmp_179_reg_13610.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_reg_13610.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i19_fu_10741_p2() {
    tmp_636_i19_fu_10741_p2 = (!tmp_185_reg_13721.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_reg_13721.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i1_fu_4495_p2() {
    tmp_636_i1_fu_4495_p2 = (!tmp_66_reg_11405.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_11405.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i2_fu_5756_p2() {
    tmp_636_i2_fu_5756_p2 = (!tmp_77_reg_11918.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_11918.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i3_fu_5182_p2() {
    tmp_636_i3_fu_5182_p2 = (!tmp_42_reg_11640.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_11640.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i4_fu_4833_p2() {
    tmp_636_i4_fu_4833_p2 = (!tmp_83_reg_11516.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_11516.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i5_fu_6100_p2() {
    tmp_636_i5_fu_6100_p2 = (!tmp_95_reg_12029.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_12029.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i6_fu_3819_p2() {
    tmp_636_i6_fu_3819_p2 = (!tmp_51_reg_11183.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_11183.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i7_fu_9112_p2() {
    tmp_636_i7_fu_9112_p2 = (!tmp_101_reg_13109.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_13109.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i8_fu_4157_p2() {
    tmp_636_i8_fu_4157_p2 = (!tmp_57_reg_11294.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_11294.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i9_fu_7139_p2() {
    tmp_636_i9_fu_7139_p2 = (!tmp_60_reg_12375.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_reg_12375.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_636_i_fu_3269_p2() {
    tmp_636_i_fu_3269_p2 = (!tmp_32_reg_10905.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_10905.read() == ap_const_lv4_C);
}

void k2c_affine_matmul_3::thread_tmp_637_i10_fu_6463_p3() {
    tmp_637_i10_fu_6463_p3 = (!tmp_201_fu_6457_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_201_fu_6457_p2.read()[0].to_bool())? tmp_635_i10_fu_6449_p3.read(): tmp_633_i10_fu_6431_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i11_fu_7740_p3() {
    tmp_637_i11_fu_7740_p3 = (!tmp_209_fu_7734_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_209_fu_7734_p2.read()[0].to_bool())? tmp_635_i11_fu_7726_p3.read(): tmp_633_i11_fu_7708_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i12_fu_6807_p3() {
    tmp_637_i12_fu_6807_p3 = (!tmp_217_fu_6801_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_217_fu_6801_p2.read()[0].to_bool())? tmp_635_i12_fu_6793_p3.read(): tmp_633_i12_fu_6775_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i13_fu_8086_p3() {
    tmp_637_i13_fu_8086_p3 = (!tmp_225_fu_8080_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_225_fu_8080_p2.read()[0].to_bool())? tmp_635_i13_fu_8072_p3.read(): tmp_633_i13_fu_8054_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i14_fu_8432_p3() {
    tmp_637_i14_fu_8432_p3 = (!tmp_234_fu_8426_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_234_fu_8426_p2.read()[0].to_bool())? tmp_635_i14_fu_8418_p3.read(): tmp_633_i14_fu_8400_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i15_fu_9716_p3() {
    tmp_637_i15_fu_9716_p3 = (!tmp_242_fu_9710_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_242_fu_9710_p2.read()[0].to_bool())? tmp_635_i15_fu_9702_p3.read(): tmp_633_i15_fu_9684_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i16_fu_8778_p3() {
    tmp_637_i16_fu_8778_p3 = (!tmp_251_fu_8772_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_251_fu_8772_p2.read()[0].to_bool())? tmp_635_i16_fu_8764_p3.read(): tmp_633_i16_fu_8746_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i17_fu_10064_p3() {
    tmp_637_i17_fu_10064_p3 = (!tmp_259_fu_10058_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_259_fu_10058_p2.read()[0].to_bool())? tmp_635_i17_fu_10050_p3.read(): tmp_633_i17_fu_10032_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i18_fu_10412_p3() {
    tmp_637_i18_fu_10412_p3 = (!tmp_267_fu_10406_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_267_fu_10406_p2.read()[0].to_bool())? tmp_635_i18_fu_10398_p3.read(): tmp_633_i18_fu_10380_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i19_fu_10760_p3() {
    tmp_637_i19_fu_10760_p3 = (!tmp_276_fu_10754_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_276_fu_10754_p2.read()[0].to_bool())? tmp_635_i19_fu_10746_p3.read(): tmp_633_i19_fu_10728_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i1_fu_4514_p3() {
    tmp_637_i1_fu_4514_p3 = (!tmp_135_fu_4508_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_135_fu_4508_p2.read()[0].to_bool())? tmp_635_i1_fu_4500_p3.read(): tmp_633_i1_fu_4482_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i2_fu_5775_p3() {
    tmp_637_i2_fu_5775_p3 = (!tmp_149_fu_5769_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_149_fu_5769_p2.read()[0].to_bool())? tmp_635_i2_fu_5761_p3.read(): tmp_633_i2_fu_5743_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i3_fu_5201_p3() {
    tmp_637_i3_fu_5201_p3 = (!tmp_78_fu_5195_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_78_fu_5195_p2.read()[0].to_bool())? tmp_635_i3_fu_5187_p3.read(): tmp_633_i3_fu_5169_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i4_fu_4852_p3() {
    tmp_637_i4_fu_4852_p3 = (!tmp_165_fu_4846_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_165_fu_4846_p2.read()[0].to_bool())? tmp_635_i4_fu_4838_p3.read(): tmp_633_i4_fu_4820_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i5_fu_6119_p3() {
    tmp_637_i5_fu_6119_p3 = (!tmp_183_fu_6113_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_183_fu_6113_p2.read()[0].to_bool())? tmp_635_i5_fu_6105_p3.read(): tmp_633_i5_fu_6087_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i6_fu_3838_p3() {
    tmp_637_i6_fu_3838_p3 = (!tmp_90_fu_3832_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_90_fu_3832_p2.read()[0].to_bool())? tmp_635_i6_fu_3824_p3.read(): tmp_633_i6_fu_3806_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i7_fu_9131_p3() {
    tmp_637_i7_fu_9131_p3 = (!tmp_193_fu_9125_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_193_fu_9125_p2.read()[0].to_bool())? tmp_635_i7_fu_9117_p3.read(): tmp_633_i7_fu_9099_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i8_fu_4176_p3() {
    tmp_637_i8_fu_4176_p3 = (!tmp_105_fu_4170_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_105_fu_4170_p2.read()[0].to_bool())? tmp_635_i8_fu_4162_p3.read(): tmp_633_i8_fu_4144_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i9_fu_7158_p3() {
    tmp_637_i9_fu_7158_p3 = (!tmp_119_fu_7152_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_119_fu_7152_p2.read()[0].to_bool())? tmp_635_i9_fu_7144_p3.read(): tmp_633_i9_fu_7126_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_637_i_fu_3288_p3() {
    tmp_637_i_fu_3288_p3 = (!tmp_68_fu_3282_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_68_fu_3282_p2.read()[0].to_bool())? tmp_635_i_fu_3274_p3.read(): tmp_633_i_fu_3256_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_638_i10_fu_6471_p2() {
    tmp_638_i10_fu_6471_p2 = (!tmp_113_reg_12140.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_reg_12140.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i11_fu_7748_p2() {
    tmp_638_i11_fu_7748_p2 = (!tmp_125_reg_12652.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_reg_12652.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i12_fu_6815_p2() {
    tmp_638_i12_fu_6815_p2 = (!tmp_131_reg_12251.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_reg_12251.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i13_fu_8094_p2() {
    tmp_638_i13_fu_8094_p2 = (!tmp_143_reg_12763.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_reg_12763.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i14_fu_8440_p2() {
    tmp_638_i14_fu_8440_p2 = (!tmp_155_reg_12874.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_reg_12874.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i15_fu_9724_p2() {
    tmp_638_i15_fu_9724_p2 = (!tmp_161_reg_13388.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_reg_13388.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i16_fu_8786_p2() {
    tmp_638_i16_fu_8786_p2 = (!tmp_167_reg_12985.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_reg_12985.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i17_fu_10072_p2() {
    tmp_638_i17_fu_10072_p2 = (!tmp_173_reg_13499.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_reg_13499.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i18_fu_10420_p2() {
    tmp_638_i18_fu_10420_p2 = (!tmp_179_reg_13610.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_reg_13610.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i19_fu_10768_p2() {
    tmp_638_i19_fu_10768_p2 = (!tmp_185_reg_13721.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_reg_13721.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i1_fu_4522_p2() {
    tmp_638_i1_fu_4522_p2 = (!tmp_66_reg_11405.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_11405.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i2_fu_5783_p2() {
    tmp_638_i2_fu_5783_p2 = (!tmp_77_reg_11918.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_11918.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i3_fu_5209_p2() {
    tmp_638_i3_fu_5209_p2 = (!tmp_42_reg_11640.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_11640.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i4_fu_4860_p2() {
    tmp_638_i4_fu_4860_p2 = (!tmp_83_reg_11516.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_11516.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i5_fu_6127_p2() {
    tmp_638_i5_fu_6127_p2 = (!tmp_95_reg_12029.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_12029.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i6_fu_3846_p2() {
    tmp_638_i6_fu_3846_p2 = (!tmp_51_reg_11183.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_11183.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i7_fu_9139_p2() {
    tmp_638_i7_fu_9139_p2 = (!tmp_101_reg_13109.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_13109.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i8_fu_4184_p2() {
    tmp_638_i8_fu_4184_p2 = (!tmp_57_reg_11294.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_11294.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i9_fu_7166_p2() {
    tmp_638_i9_fu_7166_p2 = (!tmp_60_reg_12375.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_reg_12375.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_638_i_fu_3296_p2() {
    tmp_638_i_fu_3296_p2 = (!tmp_32_reg_10905.read().is_01() || !ap_const_lv4_D.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_10905.read() == ap_const_lv4_D);
}

void k2c_affine_matmul_3::thread_tmp_639_i10_fu_6481_p3() {
    tmp_639_i10_fu_6481_p3 = (!tmp_640_i10_fu_6476_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i10_fu_6476_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i11_fu_7758_p3() {
    tmp_639_i11_fu_7758_p3 = (!tmp_640_i11_fu_7753_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i11_fu_7753_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i12_fu_6825_p3() {
    tmp_639_i12_fu_6825_p3 = (!tmp_640_i12_fu_6820_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i12_fu_6820_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i13_fu_8104_p3() {
    tmp_639_i13_fu_8104_p3 = (!tmp_640_i13_fu_8099_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i13_fu_8099_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i14_fu_8450_p3() {
    tmp_639_i14_fu_8450_p3 = (!tmp_640_i14_fu_8445_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i14_fu_8445_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i15_fu_9734_p3() {
    tmp_639_i15_fu_9734_p3 = (!tmp_640_i15_fu_9729_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i15_fu_9729_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i16_fu_8796_p3() {
    tmp_639_i16_fu_8796_p3 = (!tmp_640_i16_fu_8791_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i16_fu_8791_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i17_fu_10082_p3() {
    tmp_639_i17_fu_10082_p3 = (!tmp_640_i17_fu_10077_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i17_fu_10077_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i18_fu_10430_p3() {
    tmp_639_i18_fu_10430_p3 = (!tmp_640_i18_fu_10425_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i18_fu_10425_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i19_fu_10778_p3() {
    tmp_639_i19_fu_10778_p3 = (!tmp_640_i19_fu_10773_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i19_fu_10773_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i1_fu_4532_p3() {
    tmp_639_i1_fu_4532_p3 = (!tmp_640_i1_fu_4527_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i1_fu_4527_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i2_fu_5793_p3() {
    tmp_639_i2_fu_5793_p3 = (!tmp_640_i2_fu_5788_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i2_fu_5788_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i3_fu_5219_p3() {
    tmp_639_i3_fu_5219_p3 = (!tmp_640_i3_fu_5214_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i3_fu_5214_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i4_fu_4870_p3() {
    tmp_639_i4_fu_4870_p3 = (!tmp_640_i4_fu_4865_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i4_fu_4865_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i5_fu_6137_p3() {
    tmp_639_i5_fu_6137_p3 = (!tmp_640_i5_fu_6132_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i5_fu_6132_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i6_fu_3856_p3() {
    tmp_639_i6_fu_3856_p3 = (!tmp_640_i6_fu_3851_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i6_fu_3851_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i7_fu_9149_p3() {
    tmp_639_i7_fu_9149_p3 = (!tmp_640_i7_fu_9144_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i7_fu_9144_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i8_fu_4194_p3() {
    tmp_639_i8_fu_4194_p3 = (!tmp_640_i8_fu_4189_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i8_fu_4189_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i9_fu_7176_p3() {
    tmp_639_i9_fu_7176_p3 = (!tmp_640_i9_fu_7171_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i9_fu_7171_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_639_i_fu_3306_p3() {
    tmp_639_i_fu_3306_p3 = (!tmp_640_i_fu_3301_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_640_i_fu_3301_p2.read()[0].to_bool())? ap_const_lv32_BD687D6C: ap_const_lv32_3EE2C315);
}

void k2c_affine_matmul_3::thread_tmp_63_fu_3220_p2() {
    tmp_63_fu_3220_p2 = (tmp_628_i_reg_10936.read() | tmp_626_i_reg_10931.read());
}

void k2c_affine_matmul_3::thread_tmp_640_i10_fu_6476_p2() {
    tmp_640_i10_fu_6476_p2 = (!tmp_113_reg_12140.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_reg_12140.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i11_fu_7753_p2() {
    tmp_640_i11_fu_7753_p2 = (!tmp_125_reg_12652.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_reg_12652.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i12_fu_6820_p2() {
    tmp_640_i12_fu_6820_p2 = (!tmp_131_reg_12251.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_reg_12251.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i13_fu_8099_p2() {
    tmp_640_i13_fu_8099_p2 = (!tmp_143_reg_12763.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_reg_12763.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i14_fu_8445_p2() {
    tmp_640_i14_fu_8445_p2 = (!tmp_155_reg_12874.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_reg_12874.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i15_fu_9729_p2() {
    tmp_640_i15_fu_9729_p2 = (!tmp_161_reg_13388.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_reg_13388.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i16_fu_8791_p2() {
    tmp_640_i16_fu_8791_p2 = (!tmp_167_reg_12985.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_reg_12985.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i17_fu_10077_p2() {
    tmp_640_i17_fu_10077_p2 = (!tmp_173_reg_13499.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_reg_13499.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i18_fu_10425_p2() {
    tmp_640_i18_fu_10425_p2 = (!tmp_179_reg_13610.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_reg_13610.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i19_fu_10773_p2() {
    tmp_640_i19_fu_10773_p2 = (!tmp_185_reg_13721.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_reg_13721.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i1_fu_4527_p2() {
    tmp_640_i1_fu_4527_p2 = (!tmp_66_reg_11405.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_reg_11405.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i2_fu_5788_p2() {
    tmp_640_i2_fu_5788_p2 = (!tmp_77_reg_11918.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_reg_11918.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i3_fu_5214_p2() {
    tmp_640_i3_fu_5214_p2 = (!tmp_42_reg_11640.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_reg_11640.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i4_fu_4865_p2() {
    tmp_640_i4_fu_4865_p2 = (!tmp_83_reg_11516.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_reg_11516.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i5_fu_6132_p2() {
    tmp_640_i5_fu_6132_p2 = (!tmp_95_reg_12029.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_reg_12029.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i6_fu_3851_p2() {
    tmp_640_i6_fu_3851_p2 = (!tmp_51_reg_11183.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_reg_11183.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i7_fu_9144_p2() {
    tmp_640_i7_fu_9144_p2 = (!tmp_101_reg_13109.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_reg_13109.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i8_fu_4189_p2() {
    tmp_640_i8_fu_4189_p2 = (!tmp_57_reg_11294.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_reg_11294.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i9_fu_7171_p2() {
    tmp_640_i9_fu_7171_p2 = (!tmp_60_reg_12375.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_reg_12375.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_640_i_fu_3301_p2() {
    tmp_640_i_fu_3301_p2 = (!tmp_32_reg_10905.read().is_01() || !ap_const_lv4_E.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_reg_10905.read() == ap_const_lv4_E);
}

void k2c_affine_matmul_3::thread_tmp_65_fu_3250_p2() {
    tmp_65_fu_3250_p2 = (tmp_632_i_fu_3237_p2.read() | tmp_630_i_fu_3232_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_66_fu_4282_p3() {
    tmp_66_fu_4282_p3 = esl_concat<3,1>(arrayNo_trunc3_fu_4268_p2.read(), tmp_305_fu_4274_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_68_fu_3282_p2() {
    tmp_68_fu_3282_p2 = (tmp_636_i_fu_3269_p2.read() | tmp_634_i_fu_3264_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_69_fu_3314_p2() {
    tmp_69_fu_3314_p2 = (tmp_640_i_fu_3301_p2.read() | tmp_638_i_fu_3296_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_70_fu_5086_p9() {
    tmp_70_fu_5086_p9 = esl_zext<64,3>(tmp_148_reg_11595.read());
}

void k2c_affine_matmul_3::thread_tmp_71_fu_5011_p2() {
    tmp_71_fu_5011_p2 = (tmp_616_i2_fu_4997_p2.read() | tmp_614_i2_fu_4991_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_72_fu_5045_p2() {
    tmp_72_fu_5045_p2 = (tmp_620_i2_fu_5031_p2.read() | tmp_618_i2_fu_5025_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_74_fu_5115_p2() {
    tmp_74_fu_5115_p2 = (tmp_624_i3_reg_11660.read() | tmp_622_i3_reg_11655.read());
}

void k2c_affine_matmul_3::thread_tmp_75_fu_5133_p2() {
    tmp_75_fu_5133_p2 = (tmp_628_i3_reg_11671.read() | tmp_626_i3_reg_11666.read());
}

void k2c_affine_matmul_3::thread_tmp_76_fu_5163_p2() {
    tmp_76_fu_5163_p2 = (tmp_632_i3_fu_5150_p2.read() | tmp_630_i3_fu_5145_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_77_fu_5543_p3() {
    tmp_77_fu_5543_p3 = esl_concat<3,1>(arrayNo_trunc_fu_5529_p2.read(), tmp_310_fu_5535_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_78_fu_5195_p2() {
    tmp_78_fu_5195_p2 = (tmp_636_i3_fu_5182_p2.read() | tmp_634_i3_fu_5177_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_80_fu_5227_p2() {
    tmp_80_fu_5227_p2 = (tmp_640_i3_fu_5214_p2.read() | tmp_638_i3_fu_5209_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_81_fu_3723_p9() {
    tmp_81_fu_3723_p9 = esl_zext<64,3>(tmp_289_reg_11138.read());
}

void k2c_affine_matmul_3::thread_tmp_82_fu_3648_p2() {
    tmp_82_fu_3648_p2 = (tmp_616_i6_fu_3634_p2.read() | tmp_614_i6_fu_3628_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_83_fu_4620_p3() {
    tmp_83_fu_4620_p3 = esl_concat<3,1>(arrayNo_trunc2_fu_4606_p2.read(), tmp_314_fu_4612_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_84_fu_3392_p9() {
    tmp_84_fu_3392_p9 = esl_zext<64,3>(tmp_124_reg_10973.read());
}

void k2c_affine_matmul_3::thread_tmp_86_fu_3682_p2() {
    tmp_86_fu_3682_p2 = (tmp_620_i5_fu_3668_p2.read() | tmp_618_i5_fu_3662_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_87_fu_3752_p2() {
    tmp_87_fu_3752_p2 = (tmp_624_i6_reg_11203.read() | tmp_622_i6_reg_11198.read());
}

void k2c_affine_matmul_3::thread_tmp_88_fu_3770_p2() {
    tmp_88_fu_3770_p2 = (tmp_628_i6_reg_11214.read() | tmp_626_i6_reg_11209.read());
}

void k2c_affine_matmul_3::thread_tmp_89_fu_3800_p2() {
    tmp_89_fu_3800_p2 = (tmp_632_i6_fu_3787_p2.read() | tmp_630_i6_fu_3782_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_90_fu_3832_p2() {
    tmp_90_fu_3832_p2 = (tmp_636_i6_fu_3819_p2.read() | tmp_634_i6_fu_3814_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_92_fu_3864_p2() {
    tmp_92_fu_3864_p2 = (tmp_640_i6_fu_3851_p2.read() | tmp_638_i6_fu_3846_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_93_fu_4061_p9() {
    tmp_93_fu_4061_p9 = esl_zext<64,3>(tmp_295_reg_11249.read());
}

void k2c_affine_matmul_3::thread_tmp_94_fu_3986_p2() {
    tmp_94_fu_3986_p2 = (tmp_616_i8_fu_3972_p2.read() | tmp_614_i8_fu_3966_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_95_fu_5887_p3() {
    tmp_95_fu_5887_p3 = esl_concat<3,1>(arrayNo_trunc4_fu_5873_p2.read(), tmp_320_fu_5879_p3.read());
}

void k2c_affine_matmul_3::thread_tmp_96_fu_4020_p2() {
    tmp_96_fu_4020_p2 = (tmp_620_i7_fu_4006_p2.read() | tmp_618_i8_fu_4000_p2.read());
}

void k2c_affine_matmul_3::thread_tmp_98_fu_4090_p2() {
    tmp_98_fu_4090_p2 = (tmp_624_i8_reg_11314.read() | tmp_622_i8_reg_11309.read());
}

void k2c_affine_matmul_3::thread_tmp_99_fu_3455_p9() {
    tmp_99_fu_3455_p9 = esl_zext<64,3>(tmp_136_reg_11026.read());
}

void k2c_affine_matmul_3::thread_tmp_fu_3021_p4() {
    tmp_fu_3021_p4 = ap_phi_mux_k_phi_fu_2318_p4.read().range(4, 3);
}

void k2c_affine_matmul_3::thread_tmp_i10_65_fu_6245_p3() {
    tmp_i10_65_fu_6245_p3 = (!tmp_i10_fu_6239_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i10_fu_6239_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i10_fu_6239_p2() {
    tmp_i10_fu_6239_p2 = (!tmp_113_fu_6231_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_113_fu_6231_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i11_80_fu_7522_p3() {
    tmp_i11_80_fu_7522_p3 = (!tmp_i11_fu_7516_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i11_fu_7516_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i11_fu_7516_p2() {
    tmp_i11_fu_7516_p2 = (!tmp_125_fu_7508_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_125_fu_7508_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i12_68_fu_6589_p3() {
    tmp_i12_68_fu_6589_p3 = (!tmp_i12_fu_6583_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i12_fu_6583_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i12_fu_6583_p2() {
    tmp_i12_fu_6583_p2 = (!tmp_131_fu_6575_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_131_fu_6575_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i13_83_fu_7868_p3() {
    tmp_i13_83_fu_7868_p3 = (!tmp_i13_fu_7862_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i13_fu_7862_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i13_fu_7862_p2() {
    tmp_i13_fu_7862_p2 = (!tmp_143_fu_7854_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_143_fu_7854_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i14_86_fu_8214_p3() {
    tmp_i14_86_fu_8214_p3 = (!tmp_i14_fu_8208_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i14_fu_8208_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i14_fu_8208_p2() {
    tmp_i14_fu_8208_p2 = (!tmp_155_fu_8200_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_155_fu_8200_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i15_101_fu_9498_p3() {
    tmp_i15_101_fu_9498_p3 = (!tmp_i15_fu_9492_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i15_fu_9492_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i15_fu_9492_p2() {
    tmp_i15_fu_9492_p2 = (!tmp_161_fu_9484_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_161_fu_9484_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i16_89_fu_8560_p3() {
    tmp_i16_89_fu_8560_p3 = (!tmp_i16_fu_8554_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i16_fu_8554_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i16_fu_8554_p2() {
    tmp_i16_fu_8554_p2 = (!tmp_167_fu_8546_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_167_fu_8546_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i17_104_fu_9846_p3() {
    tmp_i17_104_fu_9846_p3 = (!tmp_i17_fu_9840_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i17_fu_9840_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i17_fu_9840_p2() {
    tmp_i17_fu_9840_p2 = (!tmp_173_fu_9832_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_173_fu_9832_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i18_107_fu_10194_p3() {
    tmp_i18_107_fu_10194_p3 = (!tmp_i18_fu_10188_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i18_fu_10188_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i18_fu_10188_p2() {
    tmp_i18_fu_10188_p2 = (!tmp_179_fu_10180_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_179_fu_10180_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i19_110_fu_10542_p3() {
    tmp_i19_110_fu_10542_p3 = (!tmp_i19_fu_10536_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i19_fu_10536_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i19_fu_10536_p2() {
    tmp_i19_fu_10536_p2 = (!tmp_185_fu_10528_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_185_fu_10528_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i1_44_fu_4296_p3() {
    tmp_i1_44_fu_4296_p3 = (!tmp_i1_fu_4290_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i1_fu_4290_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i1_fu_4290_p2() {
    tmp_i1_fu_4290_p2 = (!tmp_66_fu_4282_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_66_fu_4282_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i2_59_fu_5557_p3() {
    tmp_i2_59_fu_5557_p3 = (!tmp_i2_fu_5551_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i2_fu_5551_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i2_fu_5551_p2() {
    tmp_i2_fu_5551_p2 = (!tmp_77_fu_5543_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_77_fu_5543_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i3_50_fu_4983_p3() {
    tmp_i3_50_fu_4983_p3 = (!tmp_i3_fu_4977_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i3_fu_4977_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i3_fu_4977_p2() {
    tmp_i3_fu_4977_p2 = (!tmp_42_fu_4969_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_42_fu_4969_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i4_47_fu_4634_p3() {
    tmp_i4_47_fu_4634_p3 = (!tmp_i4_fu_4628_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i4_fu_4628_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i4_fu_4628_p2() {
    tmp_i4_fu_4628_p2 = (!tmp_83_fu_4620_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_83_fu_4620_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i5_62_fu_5901_p3() {
    tmp_i5_62_fu_5901_p3 = (!tmp_i5_fu_5895_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i5_fu_5895_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i5_fu_5895_p2() {
    tmp_i5_fu_5895_p2 = (!tmp_95_fu_5887_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_95_fu_5887_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i6_38_fu_3620_p3() {
    tmp_i6_38_fu_3620_p3 = (!tmp_i6_fu_3614_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i6_fu_3614_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i6_fu_3614_p2() {
    tmp_i6_fu_3614_p2 = (!tmp_51_fu_3606_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_51_fu_3606_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i7_92_fu_8913_p3() {
    tmp_i7_92_fu_8913_p3 = (!tmp_i7_fu_8907_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i7_fu_8907_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i7_fu_8907_p2() {
    tmp_i7_fu_8907_p2 = (!tmp_101_fu_8899_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_101_fu_8899_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i8_41_fu_3958_p3() {
    tmp_i8_41_fu_3958_p3 = (!tmp_i8_fu_3952_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i8_fu_3952_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i8_fu_3952_p2() {
    tmp_i8_fu_3952_p2 = (!tmp_57_fu_3944_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_57_fu_3944_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i9_71_fu_6940_p3() {
    tmp_i9_71_fu_6940_p3 = (!tmp_i9_fu_6934_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i9_fu_6934_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i9_fu_6934_p2() {
    tmp_i9_fu_6934_p2 = (!tmp_60_fu_6926_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_60_fu_6926_p3.read() == ap_const_lv4_0);
}

void k2c_affine_matmul_3::thread_tmp_i_29_fu_3070_p3() {
    tmp_i_29_fu_3070_p3 = (!tmp_i_fu_3064_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_i_fu_3064_p2.read()[0].to_bool())? ap_const_lv32_3C9F6B1E: ap_const_lv32_3F14DED2);
}

void k2c_affine_matmul_3::thread_tmp_i_fu_3064_p2() {
    tmp_i_fu_3064_p2 = (!tmp_32_fu_3056_p3.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_32_fu_3056_p3.read() == ap_const_lv4_0);
}

}

