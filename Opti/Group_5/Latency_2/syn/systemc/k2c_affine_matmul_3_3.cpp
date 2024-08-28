#include "k2c_affine_matmul_3.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void k2c_affine_matmul_3::thread_A1_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A1_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A1_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A1_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A1_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A1_ce0 = ap_const_logic_1;
    } else {
        A1_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A2_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A2_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A2_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A2_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A2_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A2_ce0 = ap_const_logic_1;
    } else {
        A2_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A3_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A3_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A3_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A3_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A3_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A3_ce0 = ap_const_logic_1;
    } else {
        A3_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A4_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A4_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A4_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A4_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A4_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A4_ce0 = ap_const_logic_1;
    } else {
        A4_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A5_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A5_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A5_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A5_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A5_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A5_ce0 = ap_const_logic_1;
    } else {
        A5_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A6_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A6_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A6_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A6_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A6_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A6_ce0 = ap_const_logic_1;
    } else {
        A6_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A7_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A7_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A7_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A7_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A7_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A7_ce0 = ap_const_logic_1;
    } else {
        A7_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_A_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex_cast_fu_10497_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex24_cast_fu_10149_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex35_cast_fu_9801_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex46_cast_fu_9453_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read())) {
        A_address0 =  (sc_lv<1>) (newIndex57_cast_fu_9371_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read())) {
        A_address0 =  (sc_lv<1>) (newIndex54_cast_fu_9298_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read())) {
        A_address0 =  (sc_lv<1>) (newIndex48_cast_fu_9225_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex41_cast_fu_8874_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex63_cast_fu_8515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex60_cast_fu_8169_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex56_cast_fu_7823_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex50_cast_fu_7477_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read())) {
        A_address0 =  (sc_lv<1>) (newIndex43_cast_fu_7397_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read())) {
        A_address0 =  (sc_lv<1>) (newIndex37_cast_fu_7326_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read())) {
        A_address0 =  (sc_lv<1>) (newIndex30_cast_fu_7255_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex23_cast_fu_6901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex52_cast_fu_6544_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex45_cast_fu_6200_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex39_cast_fu_5856_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex32_cast_fu_5512_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read())) {
        A_address0 =  (sc_lv<1>) (newIndex26_cast_fu_5434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read())) {
        A_address0 =  (sc_lv<1>) (newIndex19_cast_fu_5365_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read())) {
        A_address0 =  (sc_lv<1>) (newIndex15_cast_fu_5296_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex11_cast_fu_4944_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex34_cast_fu_4589_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex28_cast_fu_4251_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex21_cast_fu_3913_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex17_cast_fu_3575_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        A_address0 =  (sc_lv<1>) (newIndex13_cast_fu_3503_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        A_address0 =  (sc_lv<1>) (newIndex9_cast_fu_3440_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        A_address0 =  (sc_lv<1>) (newIndex7_cast_fu_3377_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        A_address0 =  (sc_lv<1>) (newIndex5_cast_fu_3031_p1.read());
    } else {
        A_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_A_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp5_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp6_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp7_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state110.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state113.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state116.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp12_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp13_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp14_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp15_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state200.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state203.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state206.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp20_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp21_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp22_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp23_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage0_11001.read(), ap_const_boolean_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state290.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state293.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state296.read()) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp28_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp29_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp30_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)))) {
        A_ce0 = ap_const_logic_1;
    } else {
        A_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_C_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read()))) {
        C_address0 =  (sc_lv<1>) (ap_const_lv64_3);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state362.read()))) {
        C_address0 =  (sc_lv<1>) (ap_const_lv64_2);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read()))) {
        C_address0 =  (sc_lv<1>) (ap_const_lv64_1);
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()))) {
        C_address0 =  (sc_lv<1>) (ap_const_lv64_0);
    } else {
        C_address0 = "X";
    }
}

void k2c_affine_matmul_3::thread_C_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state362.read()))) {
        C_ce0 = ap_const_logic_1;
    } else {
        C_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_C_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state362.read())) {
        C_d0 = sum1_3_7_reg_2925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read())) {
        C_d0 = sum1_3_6_reg_2901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read())) {
        C_d0 = sum1_3_5_reg_2877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read())) {
        C_d0 = sum1_3_4_reg_2853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read())) {
        C_d0 = sum1_3_reg_2796.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read())) {
        C_d0 = sum1_2_7_reg_2760.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read())) {
        C_d0 = sum1_2_6_reg_2736.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read())) {
        C_d0 = sum1_2_5_reg_2712.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read())) {
        C_d0 = sum1_2_4_reg_2688.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read())) {
        C_d0 = sum1_2_reg_2631.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read())) {
        C_d0 = sum1_1_7_reg_2595.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        C_d0 = sum1_1_6_reg_2571.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        C_d0 = sum1_1_5_reg_2547.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read())) {
        C_d0 = sum1_1_4_reg_2523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read())) {
        C_d0 = sum1_1_reg_2466.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read())) {
        C_d0 = sum1_0_7_reg_2430.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read())) {
        C_d0 = sum1_0_6_reg_2406.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        C_d0 = sum1_0_5_reg_2382.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        C_d0 = sum1_0_4_reg_2358.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        C_d0 = sum1_reg_2301.read();
    } else {
        C_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_3::thread_C_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) && 
          esl_seteq<1,1,1>(exitcond1_reg_10838.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state76.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state92.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state109.read()) && 
          esl_seteq<1,1,1>(exitcond1_1_reg_11573.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state134.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state182.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) && 
          esl_seteq<1,1,1>(exitcond2_reg_10834.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond2_1_reg_10961.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond2_2_reg_11696.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(exitcond1_2_reg_12308.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state224.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state240.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state256.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state272.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state289.read()) && 
          esl_seteq<1,1,1>(exitcond1_3_reg_13042.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state314.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state330.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state346.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state362.read()))) {
        C_we0 = ap_const_logic_1;
    } else {
        C_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[3];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[4];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[5];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[9];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[10];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp12_stage0() {
    ap_CS_fsm_pp12_stage0 = ap_CS_fsm.read()[76];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp12_stage1() {
    ap_CS_fsm_pp12_stage1 = ap_CS_fsm.read()[77];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp12_stage2() {
    ap_CS_fsm_pp12_stage2 = ap_CS_fsm.read()[78];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp12_stage6() {
    ap_CS_fsm_pp12_stage6 = ap_CS_fsm.read()[82];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp12_stage7() {
    ap_CS_fsm_pp12_stage7 = ap_CS_fsm.read()[83];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp13_stage0() {
    ap_CS_fsm_pp13_stage0 = ap_CS_fsm.read()[85];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp13_stage1() {
    ap_CS_fsm_pp13_stage1 = ap_CS_fsm.read()[86];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp13_stage2() {
    ap_CS_fsm_pp13_stage2 = ap_CS_fsm.read()[87];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp13_stage6() {
    ap_CS_fsm_pp13_stage6 = ap_CS_fsm.read()[91];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp13_stage7() {
    ap_CS_fsm_pp13_stage7 = ap_CS_fsm.read()[92];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp14_stage0() {
    ap_CS_fsm_pp14_stage0 = ap_CS_fsm.read()[94];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp14_stage1() {
    ap_CS_fsm_pp14_stage1 = ap_CS_fsm.read()[95];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp14_stage2() {
    ap_CS_fsm_pp14_stage2 = ap_CS_fsm.read()[96];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp14_stage6() {
    ap_CS_fsm_pp14_stage6 = ap_CS_fsm.read()[100];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp14_stage7() {
    ap_CS_fsm_pp14_stage7 = ap_CS_fsm.read()[101];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp15_stage0() {
    ap_CS_fsm_pp15_stage0 = ap_CS_fsm.read()[103];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp15_stage1() {
    ap_CS_fsm_pp15_stage1 = ap_CS_fsm.read()[104];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp15_stage2() {
    ap_CS_fsm_pp15_stage2 = ap_CS_fsm.read()[105];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp15_stage6() {
    ap_CS_fsm_pp15_stage6 = ap_CS_fsm.read()[109];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp15_stage7() {
    ap_CS_fsm_pp15_stage7 = ap_CS_fsm.read()[110];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp16_stage0() {
    ap_CS_fsm_pp16_stage0 = ap_CS_fsm.read()[113];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp16_stage1() {
    ap_CS_fsm_pp16_stage1 = ap_CS_fsm.read()[114];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp16_stage2() {
    ap_CS_fsm_pp16_stage2 = ap_CS_fsm.read()[115];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp16_stage6() {
    ap_CS_fsm_pp16_stage6 = ap_CS_fsm.read()[119];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp16_stage7() {
    ap_CS_fsm_pp16_stage7 = ap_CS_fsm.read()[120];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp20_stage0() {
    ap_CS_fsm_pp20_stage0 = ap_CS_fsm.read()[131];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp20_stage1() {
    ap_CS_fsm_pp20_stage1 = ap_CS_fsm.read()[132];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp20_stage2() {
    ap_CS_fsm_pp20_stage2 = ap_CS_fsm.read()[133];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp20_stage6() {
    ap_CS_fsm_pp20_stage6 = ap_CS_fsm.read()[137];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp20_stage7() {
    ap_CS_fsm_pp20_stage7 = ap_CS_fsm.read()[138];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp21_stage0() {
    ap_CS_fsm_pp21_stage0 = ap_CS_fsm.read()[140];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp21_stage1() {
    ap_CS_fsm_pp21_stage1 = ap_CS_fsm.read()[141];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp21_stage2() {
    ap_CS_fsm_pp21_stage2 = ap_CS_fsm.read()[142];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp21_stage6() {
    ap_CS_fsm_pp21_stage6 = ap_CS_fsm.read()[146];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp21_stage7() {
    ap_CS_fsm_pp21_stage7 = ap_CS_fsm.read()[147];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp22_stage0() {
    ap_CS_fsm_pp22_stage0 = ap_CS_fsm.read()[149];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp22_stage1() {
    ap_CS_fsm_pp22_stage1 = ap_CS_fsm.read()[150];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp22_stage2() {
    ap_CS_fsm_pp22_stage2 = ap_CS_fsm.read()[151];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp22_stage6() {
    ap_CS_fsm_pp22_stage6 = ap_CS_fsm.read()[155];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp22_stage7() {
    ap_CS_fsm_pp22_stage7 = ap_CS_fsm.read()[156];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp23_stage0() {
    ap_CS_fsm_pp23_stage0 = ap_CS_fsm.read()[158];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp23_stage1() {
    ap_CS_fsm_pp23_stage1 = ap_CS_fsm.read()[159];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp23_stage2() {
    ap_CS_fsm_pp23_stage2 = ap_CS_fsm.read()[160];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp23_stage6() {
    ap_CS_fsm_pp23_stage6 = ap_CS_fsm.read()[164];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp23_stage7() {
    ap_CS_fsm_pp23_stage7 = ap_CS_fsm.read()[165];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp24_stage0() {
    ap_CS_fsm_pp24_stage0 = ap_CS_fsm.read()[168];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp24_stage1() {
    ap_CS_fsm_pp24_stage1 = ap_CS_fsm.read()[169];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp24_stage2() {
    ap_CS_fsm_pp24_stage2 = ap_CS_fsm.read()[170];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp24_stage6() {
    ap_CS_fsm_pp24_stage6 = ap_CS_fsm.read()[174];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp24_stage7() {
    ap_CS_fsm_pp24_stage7 = ap_CS_fsm.read()[175];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp28_stage0() {
    ap_CS_fsm_pp28_stage0 = ap_CS_fsm.read()[186];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp28_stage1() {
    ap_CS_fsm_pp28_stage1 = ap_CS_fsm.read()[187];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp28_stage2() {
    ap_CS_fsm_pp28_stage2 = ap_CS_fsm.read()[188];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp28_stage6() {
    ap_CS_fsm_pp28_stage6 = ap_CS_fsm.read()[192];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp28_stage7() {
    ap_CS_fsm_pp28_stage7 = ap_CS_fsm.read()[193];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp29_stage0() {
    ap_CS_fsm_pp29_stage0 = ap_CS_fsm.read()[195];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp29_stage1() {
    ap_CS_fsm_pp29_stage1 = ap_CS_fsm.read()[196];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp29_stage2() {
    ap_CS_fsm_pp29_stage2 = ap_CS_fsm.read()[197];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp29_stage6() {
    ap_CS_fsm_pp29_stage6 = ap_CS_fsm.read()[201];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp29_stage7() {
    ap_CS_fsm_pp29_stage7 = ap_CS_fsm.read()[202];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp30_stage0() {
    ap_CS_fsm_pp30_stage0 = ap_CS_fsm.read()[204];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp30_stage1() {
    ap_CS_fsm_pp30_stage1 = ap_CS_fsm.read()[205];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp30_stage2() {
    ap_CS_fsm_pp30_stage2 = ap_CS_fsm.read()[206];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp30_stage6() {
    ap_CS_fsm_pp30_stage6 = ap_CS_fsm.read()[210];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp30_stage7() {
    ap_CS_fsm_pp30_stage7 = ap_CS_fsm.read()[211];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp31_stage0() {
    ap_CS_fsm_pp31_stage0 = ap_CS_fsm.read()[213];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp31_stage1() {
    ap_CS_fsm_pp31_stage1 = ap_CS_fsm.read()[214];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp31_stage2() {
    ap_CS_fsm_pp31_stage2 = ap_CS_fsm.read()[215];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp31_stage6() {
    ap_CS_fsm_pp31_stage6 = ap_CS_fsm.read()[219];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp31_stage7() {
    ap_CS_fsm_pp31_stage7 = ap_CS_fsm.read()[220];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[21];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp4_stage1() {
    ap_CS_fsm_pp4_stage1 = ap_CS_fsm.read()[22];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp4_stage2() {
    ap_CS_fsm_pp4_stage2 = ap_CS_fsm.read()[23];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp4_stage6() {
    ap_CS_fsm_pp4_stage6 = ap_CS_fsm.read()[27];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp4_stage7() {
    ap_CS_fsm_pp4_stage7 = ap_CS_fsm.read()[28];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[30];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp5_stage1() {
    ap_CS_fsm_pp5_stage1 = ap_CS_fsm.read()[31];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp5_stage2() {
    ap_CS_fsm_pp5_stage2 = ap_CS_fsm.read()[32];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp5_stage6() {
    ap_CS_fsm_pp5_stage6 = ap_CS_fsm.read()[36];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp5_stage7() {
    ap_CS_fsm_pp5_stage7 = ap_CS_fsm.read()[37];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[39];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[40];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp6_stage2() {
    ap_CS_fsm_pp6_stage2 = ap_CS_fsm.read()[41];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp6_stage6() {
    ap_CS_fsm_pp6_stage6 = ap_CS_fsm.read()[45];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp6_stage7() {
    ap_CS_fsm_pp6_stage7 = ap_CS_fsm.read()[46];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[48];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp7_stage1() {
    ap_CS_fsm_pp7_stage1 = ap_CS_fsm.read()[49];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp7_stage2() {
    ap_CS_fsm_pp7_stage2 = ap_CS_fsm.read()[50];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp7_stage6() {
    ap_CS_fsm_pp7_stage6 = ap_CS_fsm.read()[54];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp7_stage7() {
    ap_CS_fsm_pp7_stage7 = ap_CS_fsm.read()[55];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[58];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp8_stage1() {
    ap_CS_fsm_pp8_stage1 = ap_CS_fsm.read()[59];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp8_stage2() {
    ap_CS_fsm_pp8_stage2 = ap_CS_fsm.read()[60];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp8_stage6() {
    ap_CS_fsm_pp8_stage6 = ap_CS_fsm.read()[64];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_pp8_stage7() {
    ap_CS_fsm_pp8_stage7 = ap_CS_fsm.read()[65];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state109() {
    ap_CS_fsm_state109 = ap_CS_fsm.read()[66];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state110() {
    ap_CS_fsm_state110 = ap_CS_fsm.read()[67];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state111() {
    ap_CS_fsm_state111 = ap_CS_fsm.read()[68];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state112() {
    ap_CS_fsm_state112 = ap_CS_fsm.read()[69];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state113() {
    ap_CS_fsm_state113 = ap_CS_fsm.read()[70];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state114() {
    ap_CS_fsm_state114 = ap_CS_fsm.read()[71];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state115() {
    ap_CS_fsm_state115 = ap_CS_fsm.read()[72];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state116() {
    ap_CS_fsm_state116 = ap_CS_fsm.read()[73];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state117() {
    ap_CS_fsm_state117 = ap_CS_fsm.read()[74];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state118() {
    ap_CS_fsm_state118 = ap_CS_fsm.read()[75];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state134() {
    ap_CS_fsm_state134 = ap_CS_fsm.read()[84];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state150() {
    ap_CS_fsm_state150 = ap_CS_fsm.read()[93];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state166() {
    ap_CS_fsm_state166 = ap_CS_fsm.read()[102];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state182() {
    ap_CS_fsm_state182 = ap_CS_fsm.read()[111];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state183() {
    ap_CS_fsm_state183 = ap_CS_fsm.read()[112];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[11];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state199() {
    ap_CS_fsm_state199 = ap_CS_fsm.read()[121];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[12];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state200() {
    ap_CS_fsm_state200 = ap_CS_fsm.read()[122];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state201() {
    ap_CS_fsm_state201 = ap_CS_fsm.read()[123];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state202() {
    ap_CS_fsm_state202 = ap_CS_fsm.read()[124];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state203() {
    ap_CS_fsm_state203 = ap_CS_fsm.read()[125];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state204() {
    ap_CS_fsm_state204 = ap_CS_fsm.read()[126];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state205() {
    ap_CS_fsm_state205 = ap_CS_fsm.read()[127];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state206() {
    ap_CS_fsm_state206 = ap_CS_fsm.read()[128];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state207() {
    ap_CS_fsm_state207 = ap_CS_fsm.read()[129];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state208() {
    ap_CS_fsm_state208 = ap_CS_fsm.read()[130];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[13];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[14];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state224() {
    ap_CS_fsm_state224 = ap_CS_fsm.read()[139];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[15];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[16];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state240() {
    ap_CS_fsm_state240 = ap_CS_fsm.read()[148];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[17];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state256() {
    ap_CS_fsm_state256 = ap_CS_fsm.read()[157];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[18];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[19];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state272() {
    ap_CS_fsm_state272 = ap_CS_fsm.read()[166];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state273() {
    ap_CS_fsm_state273 = ap_CS_fsm.read()[167];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[20];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state289() {
    ap_CS_fsm_state289 = ap_CS_fsm.read()[176];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state290() {
    ap_CS_fsm_state290 = ap_CS_fsm.read()[177];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state291() {
    ap_CS_fsm_state291 = ap_CS_fsm.read()[178];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state292() {
    ap_CS_fsm_state292 = ap_CS_fsm.read()[179];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state293() {
    ap_CS_fsm_state293 = ap_CS_fsm.read()[180];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state294() {
    ap_CS_fsm_state294 = ap_CS_fsm.read()[181];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state295() {
    ap_CS_fsm_state295 = ap_CS_fsm.read()[182];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state296() {
    ap_CS_fsm_state296 = ap_CS_fsm.read()[183];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[184];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state298() {
    ap_CS_fsm_state298 = ap_CS_fsm.read()[185];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state314() {
    ap_CS_fsm_state314 = ap_CS_fsm.read()[194];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state330() {
    ap_CS_fsm_state330 = ap_CS_fsm.read()[203];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state346() {
    ap_CS_fsm_state346 = ap_CS_fsm.read()[212];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state362() {
    ap_CS_fsm_state362 = ap_CS_fsm.read()[221];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[29];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[38];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state76() {
    ap_CS_fsm_state76 = ap_CS_fsm.read()[47];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state92() {
    ap_CS_fsm_state92 = ap_CS_fsm.read()[56];
}

void k2c_affine_matmul_3::thread_ap_CS_fsm_state93() {
    ap_CS_fsm_state93 = ap_CS_fsm.read()[57];
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage6_11001() {
    ap_block_pp0_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage7() {
    ap_block_pp0_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage0() {
    ap_block_pp12_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage0_11001() {
    ap_block_pp12_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage0_subdone() {
    ap_block_pp12_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage1() {
    ap_block_pp12_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage1_11001() {
    ap_block_pp12_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage1_subdone() {
    ap_block_pp12_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage2() {
    ap_block_pp12_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage2_subdone() {
    ap_block_pp12_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage3_subdone() {
    ap_block_pp12_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage4_subdone() {
    ap_block_pp12_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage5_subdone() {
    ap_block_pp12_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage6_11001() {
    ap_block_pp12_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage6_subdone() {
    ap_block_pp12_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage7() {
    ap_block_pp12_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp12_stage7_subdone() {
    ap_block_pp12_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage0() {
    ap_block_pp13_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage0_11001() {
    ap_block_pp13_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage0_subdone() {
    ap_block_pp13_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage1() {
    ap_block_pp13_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage1_11001() {
    ap_block_pp13_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage1_subdone() {
    ap_block_pp13_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage2() {
    ap_block_pp13_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage2_subdone() {
    ap_block_pp13_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage3_subdone() {
    ap_block_pp13_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage4_subdone() {
    ap_block_pp13_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage5_subdone() {
    ap_block_pp13_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage6_11001() {
    ap_block_pp13_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage6_subdone() {
    ap_block_pp13_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage7() {
    ap_block_pp13_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp13_stage7_subdone() {
    ap_block_pp13_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage0() {
    ap_block_pp14_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage0_11001() {
    ap_block_pp14_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage0_subdone() {
    ap_block_pp14_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage1() {
    ap_block_pp14_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage1_11001() {
    ap_block_pp14_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage1_subdone() {
    ap_block_pp14_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage2() {
    ap_block_pp14_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage2_subdone() {
    ap_block_pp14_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage3_subdone() {
    ap_block_pp14_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage4_subdone() {
    ap_block_pp14_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage5_subdone() {
    ap_block_pp14_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage6_11001() {
    ap_block_pp14_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage6_subdone() {
    ap_block_pp14_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage7() {
    ap_block_pp14_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp14_stage7_subdone() {
    ap_block_pp14_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage0() {
    ap_block_pp15_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage0_11001() {
    ap_block_pp15_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage0_subdone() {
    ap_block_pp15_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage1() {
    ap_block_pp15_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage1_11001() {
    ap_block_pp15_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage1_subdone() {
    ap_block_pp15_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage2() {
    ap_block_pp15_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage2_subdone() {
    ap_block_pp15_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage3_subdone() {
    ap_block_pp15_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage4_subdone() {
    ap_block_pp15_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage5_subdone() {
    ap_block_pp15_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage6_11001() {
    ap_block_pp15_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage6_subdone() {
    ap_block_pp15_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage7() {
    ap_block_pp15_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp15_stage7_subdone() {
    ap_block_pp15_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage0() {
    ap_block_pp16_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage0_11001() {
    ap_block_pp16_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage0_subdone() {
    ap_block_pp16_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage1() {
    ap_block_pp16_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage1_11001() {
    ap_block_pp16_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage1_subdone() {
    ap_block_pp16_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage2() {
    ap_block_pp16_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage2_subdone() {
    ap_block_pp16_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage3_subdone() {
    ap_block_pp16_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage4_subdone() {
    ap_block_pp16_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage5_subdone() {
    ap_block_pp16_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage6_11001() {
    ap_block_pp16_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage6_subdone() {
    ap_block_pp16_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage7() {
    ap_block_pp16_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp16_stage7_subdone() {
    ap_block_pp16_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage0() {
    ap_block_pp20_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage0_11001() {
    ap_block_pp20_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage0_subdone() {
    ap_block_pp20_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage1() {
    ap_block_pp20_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage1_11001() {
    ap_block_pp20_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage1_subdone() {
    ap_block_pp20_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage2() {
    ap_block_pp20_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage2_subdone() {
    ap_block_pp20_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage3_subdone() {
    ap_block_pp20_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage4_subdone() {
    ap_block_pp20_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage5_subdone() {
    ap_block_pp20_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage6_11001() {
    ap_block_pp20_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage6_subdone() {
    ap_block_pp20_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage7() {
    ap_block_pp20_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp20_stage7_subdone() {
    ap_block_pp20_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage0() {
    ap_block_pp21_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage0_11001() {
    ap_block_pp21_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage0_subdone() {
    ap_block_pp21_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage1() {
    ap_block_pp21_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage1_11001() {
    ap_block_pp21_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage1_subdone() {
    ap_block_pp21_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage2() {
    ap_block_pp21_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage2_subdone() {
    ap_block_pp21_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage3_subdone() {
    ap_block_pp21_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage4_subdone() {
    ap_block_pp21_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage5_subdone() {
    ap_block_pp21_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage6_11001() {
    ap_block_pp21_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage6_subdone() {
    ap_block_pp21_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage7() {
    ap_block_pp21_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp21_stage7_subdone() {
    ap_block_pp21_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage0() {
    ap_block_pp22_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage0_11001() {
    ap_block_pp22_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage0_subdone() {
    ap_block_pp22_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage1() {
    ap_block_pp22_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage1_11001() {
    ap_block_pp22_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage1_subdone() {
    ap_block_pp22_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage2() {
    ap_block_pp22_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage2_subdone() {
    ap_block_pp22_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage3_subdone() {
    ap_block_pp22_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage4_subdone() {
    ap_block_pp22_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage5_subdone() {
    ap_block_pp22_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage6_11001() {
    ap_block_pp22_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage6_subdone() {
    ap_block_pp22_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage7() {
    ap_block_pp22_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp22_stage7_subdone() {
    ap_block_pp22_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage0() {
    ap_block_pp23_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage0_11001() {
    ap_block_pp23_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage0_subdone() {
    ap_block_pp23_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage1() {
    ap_block_pp23_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage1_11001() {
    ap_block_pp23_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage1_subdone() {
    ap_block_pp23_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage2() {
    ap_block_pp23_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage2_subdone() {
    ap_block_pp23_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage3_subdone() {
    ap_block_pp23_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage4_subdone() {
    ap_block_pp23_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage5_subdone() {
    ap_block_pp23_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage6_11001() {
    ap_block_pp23_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage6_subdone() {
    ap_block_pp23_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage7() {
    ap_block_pp23_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp23_stage7_subdone() {
    ap_block_pp23_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage0() {
    ap_block_pp24_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage0_11001() {
    ap_block_pp24_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage0_subdone() {
    ap_block_pp24_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage1() {
    ap_block_pp24_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage1_11001() {
    ap_block_pp24_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage1_subdone() {
    ap_block_pp24_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage2() {
    ap_block_pp24_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage2_subdone() {
    ap_block_pp24_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage3_subdone() {
    ap_block_pp24_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage4_subdone() {
    ap_block_pp24_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage5_subdone() {
    ap_block_pp24_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage6_11001() {
    ap_block_pp24_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage6_subdone() {
    ap_block_pp24_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage7() {
    ap_block_pp24_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp24_stage7_subdone() {
    ap_block_pp24_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage0() {
    ap_block_pp28_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage0_11001() {
    ap_block_pp28_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage0_subdone() {
    ap_block_pp28_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage1() {
    ap_block_pp28_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage1_11001() {
    ap_block_pp28_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage1_subdone() {
    ap_block_pp28_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage2() {
    ap_block_pp28_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage2_subdone() {
    ap_block_pp28_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage3_subdone() {
    ap_block_pp28_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage4_subdone() {
    ap_block_pp28_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage5_subdone() {
    ap_block_pp28_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage6_11001() {
    ap_block_pp28_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage6_subdone() {
    ap_block_pp28_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage7() {
    ap_block_pp28_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp28_stage7_subdone() {
    ap_block_pp28_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage0() {
    ap_block_pp29_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage0_11001() {
    ap_block_pp29_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage0_subdone() {
    ap_block_pp29_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage1() {
    ap_block_pp29_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage1_11001() {
    ap_block_pp29_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage1_subdone() {
    ap_block_pp29_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage2() {
    ap_block_pp29_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage2_subdone() {
    ap_block_pp29_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage3_subdone() {
    ap_block_pp29_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage4_subdone() {
    ap_block_pp29_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage5_subdone() {
    ap_block_pp29_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage6_11001() {
    ap_block_pp29_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage6_subdone() {
    ap_block_pp29_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage7() {
    ap_block_pp29_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp29_stage7_subdone() {
    ap_block_pp29_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage0() {
    ap_block_pp30_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage0_11001() {
    ap_block_pp30_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage0_subdone() {
    ap_block_pp30_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage1() {
    ap_block_pp30_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage1_11001() {
    ap_block_pp30_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage1_subdone() {
    ap_block_pp30_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage2() {
    ap_block_pp30_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage2_subdone() {
    ap_block_pp30_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage3_subdone() {
    ap_block_pp30_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage4_subdone() {
    ap_block_pp30_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage5_subdone() {
    ap_block_pp30_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage6_11001() {
    ap_block_pp30_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage6_subdone() {
    ap_block_pp30_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage7() {
    ap_block_pp30_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp30_stage7_subdone() {
    ap_block_pp30_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage0() {
    ap_block_pp31_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage0_11001() {
    ap_block_pp31_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage0_subdone() {
    ap_block_pp31_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage1() {
    ap_block_pp31_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage1_11001() {
    ap_block_pp31_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage1_subdone() {
    ap_block_pp31_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage2() {
    ap_block_pp31_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage2_subdone() {
    ap_block_pp31_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage3_subdone() {
    ap_block_pp31_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage4_subdone() {
    ap_block_pp31_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage5_subdone() {
    ap_block_pp31_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage6_11001() {
    ap_block_pp31_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage6_subdone() {
    ap_block_pp31_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage7() {
    ap_block_pp31_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp31_stage7_subdone() {
    ap_block_pp31_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage1() {
    ap_block_pp4_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage1_11001() {
    ap_block_pp4_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage1_subdone() {
    ap_block_pp4_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage2() {
    ap_block_pp4_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage2_subdone() {
    ap_block_pp4_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage3_subdone() {
    ap_block_pp4_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage4_subdone() {
    ap_block_pp4_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage5_subdone() {
    ap_block_pp4_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage6_11001() {
    ap_block_pp4_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage6_subdone() {
    ap_block_pp4_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage7() {
    ap_block_pp4_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp4_stage7_subdone() {
    ap_block_pp4_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage1() {
    ap_block_pp5_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage1_11001() {
    ap_block_pp5_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage1_subdone() {
    ap_block_pp5_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage2() {
    ap_block_pp5_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage2_subdone() {
    ap_block_pp5_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage3_subdone() {
    ap_block_pp5_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage4_subdone() {
    ap_block_pp5_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage5_subdone() {
    ap_block_pp5_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage6_11001() {
    ap_block_pp5_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage6_subdone() {
    ap_block_pp5_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage7() {
    ap_block_pp5_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp5_stage7_subdone() {
    ap_block_pp5_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage1() {
    ap_block_pp6_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage1_11001() {
    ap_block_pp6_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage1_subdone() {
    ap_block_pp6_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage2() {
    ap_block_pp6_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage2_subdone() {
    ap_block_pp6_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage3_subdone() {
    ap_block_pp6_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage4_subdone() {
    ap_block_pp6_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage5_subdone() {
    ap_block_pp6_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage6_11001() {
    ap_block_pp6_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage6_subdone() {
    ap_block_pp6_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage7() {
    ap_block_pp6_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp6_stage7_subdone() {
    ap_block_pp6_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage1() {
    ap_block_pp7_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage1_11001() {
    ap_block_pp7_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage1_subdone() {
    ap_block_pp7_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage2() {
    ap_block_pp7_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage2_subdone() {
    ap_block_pp7_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage3_subdone() {
    ap_block_pp7_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage4_subdone() {
    ap_block_pp7_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage5_subdone() {
    ap_block_pp7_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage6_11001() {
    ap_block_pp7_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage6_subdone() {
    ap_block_pp7_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage7() {
    ap_block_pp7_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp7_stage7_subdone() {
    ap_block_pp7_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage1() {
    ap_block_pp8_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage1_11001() {
    ap_block_pp8_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage1_subdone() {
    ap_block_pp8_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage2() {
    ap_block_pp8_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage2_subdone() {
    ap_block_pp8_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage3_subdone() {
    ap_block_pp8_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage4_subdone() {
    ap_block_pp8_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage5_subdone() {
    ap_block_pp8_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage6_11001() {
    ap_block_pp8_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage6_subdone() {
    ap_block_pp8_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage7() {
    ap_block_pp8_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_pp8_stage7_subdone() {
    ap_block_pp8_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state100_pp8_stage6_iter0() {
    ap_block_state100_pp8_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state101_pp8_stage7_iter0() {
    ap_block_state101_pp8_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state102_pp8_stage0_iter1() {
    ap_block_state102_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state103_pp8_stage1_iter1() {
    ap_block_state103_pp8_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state104_pp8_stage2_iter1() {
    ap_block_state104_pp8_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state105_pp8_stage3_iter1() {
    ap_block_state105_pp8_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state106_pp8_stage4_iter1() {
    ap_block_state106_pp8_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state107_pp8_stage5_iter1() {
    ap_block_state107_pp8_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state108_pp8_stage6_iter1() {
    ap_block_state108_pp8_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state10_pp0_stage6_iter0() {
    ap_block_state10_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state119_pp12_stage0_iter0() {
    ap_block_state119_pp12_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state11_pp0_stage7_iter0() {
    ap_block_state11_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state120_pp12_stage1_iter0() {
    ap_block_state120_pp12_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state121_pp12_stage2_iter0() {
    ap_block_state121_pp12_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state122_pp12_stage3_iter0() {
    ap_block_state122_pp12_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state123_pp12_stage4_iter0() {
    ap_block_state123_pp12_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state124_pp12_stage5_iter0() {
    ap_block_state124_pp12_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state125_pp12_stage6_iter0() {
    ap_block_state125_pp12_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state126_pp12_stage7_iter0() {
    ap_block_state126_pp12_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state127_pp12_stage0_iter1() {
    ap_block_state127_pp12_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state128_pp12_stage1_iter1() {
    ap_block_state128_pp12_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state129_pp12_stage2_iter1() {
    ap_block_state129_pp12_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state12_pp0_stage0_iter1() {
    ap_block_state12_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state130_pp12_stage3_iter1() {
    ap_block_state130_pp12_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state131_pp12_stage4_iter1() {
    ap_block_state131_pp12_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state132_pp12_stage5_iter1() {
    ap_block_state132_pp12_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state133_pp12_stage6_iter1() {
    ap_block_state133_pp12_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state135_pp13_stage0_iter0() {
    ap_block_state135_pp13_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state136_pp13_stage1_iter0() {
    ap_block_state136_pp13_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state137_pp13_stage2_iter0() {
    ap_block_state137_pp13_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state138_pp13_stage3_iter0() {
    ap_block_state138_pp13_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state139_pp13_stage4_iter0() {
    ap_block_state139_pp13_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state13_pp0_stage1_iter1() {
    ap_block_state13_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state140_pp13_stage5_iter0() {
    ap_block_state140_pp13_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state141_pp13_stage6_iter0() {
    ap_block_state141_pp13_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state142_pp13_stage7_iter0() {
    ap_block_state142_pp13_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state143_pp13_stage0_iter1() {
    ap_block_state143_pp13_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state144_pp13_stage1_iter1() {
    ap_block_state144_pp13_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state145_pp13_stage2_iter1() {
    ap_block_state145_pp13_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state146_pp13_stage3_iter1() {
    ap_block_state146_pp13_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state147_pp13_stage4_iter1() {
    ap_block_state147_pp13_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state148_pp13_stage5_iter1() {
    ap_block_state148_pp13_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state149_pp13_stage6_iter1() {
    ap_block_state149_pp13_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state14_pp0_stage2_iter1() {
    ap_block_state14_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state151_pp14_stage0_iter0() {
    ap_block_state151_pp14_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state152_pp14_stage1_iter0() {
    ap_block_state152_pp14_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state153_pp14_stage2_iter0() {
    ap_block_state153_pp14_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state154_pp14_stage3_iter0() {
    ap_block_state154_pp14_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state155_pp14_stage4_iter0() {
    ap_block_state155_pp14_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state156_pp14_stage5_iter0() {
    ap_block_state156_pp14_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state157_pp14_stage6_iter0() {
    ap_block_state157_pp14_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state158_pp14_stage7_iter0() {
    ap_block_state158_pp14_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state159_pp14_stage0_iter1() {
    ap_block_state159_pp14_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state15_pp0_stage3_iter1() {
    ap_block_state15_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state160_pp14_stage1_iter1() {
    ap_block_state160_pp14_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state161_pp14_stage2_iter1() {
    ap_block_state161_pp14_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state162_pp14_stage3_iter1() {
    ap_block_state162_pp14_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state163_pp14_stage4_iter1() {
    ap_block_state163_pp14_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state164_pp14_stage5_iter1() {
    ap_block_state164_pp14_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state165_pp14_stage6_iter1() {
    ap_block_state165_pp14_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state167_pp15_stage0_iter0() {
    ap_block_state167_pp15_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state168_pp15_stage1_iter0() {
    ap_block_state168_pp15_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state169_pp15_stage2_iter0() {
    ap_block_state169_pp15_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state16_pp0_stage4_iter1() {
    ap_block_state16_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state170_pp15_stage3_iter0() {
    ap_block_state170_pp15_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state171_pp15_stage4_iter0() {
    ap_block_state171_pp15_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state172_pp15_stage5_iter0() {
    ap_block_state172_pp15_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state173_pp15_stage6_iter0() {
    ap_block_state173_pp15_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state174_pp15_stage7_iter0() {
    ap_block_state174_pp15_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state175_pp15_stage0_iter1() {
    ap_block_state175_pp15_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state176_pp15_stage1_iter1() {
    ap_block_state176_pp15_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state177_pp15_stage2_iter1() {
    ap_block_state177_pp15_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state178_pp15_stage3_iter1() {
    ap_block_state178_pp15_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state179_pp15_stage4_iter1() {
    ap_block_state179_pp15_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state17_pp0_stage5_iter1() {
    ap_block_state17_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state180_pp15_stage5_iter1() {
    ap_block_state180_pp15_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state181_pp15_stage6_iter1() {
    ap_block_state181_pp15_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state184_pp16_stage0_iter0() {
    ap_block_state184_pp16_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state185_pp16_stage1_iter0() {
    ap_block_state185_pp16_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state186_pp16_stage2_iter0() {
    ap_block_state186_pp16_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state187_pp16_stage3_iter0() {
    ap_block_state187_pp16_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state188_pp16_stage4_iter0() {
    ap_block_state188_pp16_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state189_pp16_stage5_iter0() {
    ap_block_state189_pp16_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state18_pp0_stage6_iter1() {
    ap_block_state18_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state190_pp16_stage6_iter0() {
    ap_block_state190_pp16_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state191_pp16_stage7_iter0() {
    ap_block_state191_pp16_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state192_pp16_stage0_iter1() {
    ap_block_state192_pp16_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state193_pp16_stage1_iter1() {
    ap_block_state193_pp16_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state194_pp16_stage2_iter1() {
    ap_block_state194_pp16_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state195_pp16_stage3_iter1() {
    ap_block_state195_pp16_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state196_pp16_stage4_iter1() {
    ap_block_state196_pp16_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state197_pp16_stage5_iter1() {
    ap_block_state197_pp16_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state198_pp16_stage6_iter1() {
    ap_block_state198_pp16_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state209_pp20_stage0_iter0() {
    ap_block_state209_pp20_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state210_pp20_stage1_iter0() {
    ap_block_state210_pp20_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state211_pp20_stage2_iter0() {
    ap_block_state211_pp20_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state212_pp20_stage3_iter0() {
    ap_block_state212_pp20_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state213_pp20_stage4_iter0() {
    ap_block_state213_pp20_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state214_pp20_stage5_iter0() {
    ap_block_state214_pp20_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state215_pp20_stage6_iter0() {
    ap_block_state215_pp20_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state216_pp20_stage7_iter0() {
    ap_block_state216_pp20_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state217_pp20_stage0_iter1() {
    ap_block_state217_pp20_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state218_pp20_stage1_iter1() {
    ap_block_state218_pp20_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state219_pp20_stage2_iter1() {
    ap_block_state219_pp20_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state220_pp20_stage3_iter1() {
    ap_block_state220_pp20_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state221_pp20_stage4_iter1() {
    ap_block_state221_pp20_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state222_pp20_stage5_iter1() {
    ap_block_state222_pp20_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state223_pp20_stage6_iter1() {
    ap_block_state223_pp20_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state225_pp21_stage0_iter0() {
    ap_block_state225_pp21_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state226_pp21_stage1_iter0() {
    ap_block_state226_pp21_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state227_pp21_stage2_iter0() {
    ap_block_state227_pp21_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state228_pp21_stage3_iter0() {
    ap_block_state228_pp21_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state229_pp21_stage4_iter0() {
    ap_block_state229_pp21_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state230_pp21_stage5_iter0() {
    ap_block_state230_pp21_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state231_pp21_stage6_iter0() {
    ap_block_state231_pp21_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state232_pp21_stage7_iter0() {
    ap_block_state232_pp21_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state233_pp21_stage0_iter1() {
    ap_block_state233_pp21_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state234_pp21_stage1_iter1() {
    ap_block_state234_pp21_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state235_pp21_stage2_iter1() {
    ap_block_state235_pp21_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state236_pp21_stage3_iter1() {
    ap_block_state236_pp21_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state237_pp21_stage4_iter1() {
    ap_block_state237_pp21_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state238_pp21_stage5_iter1() {
    ap_block_state238_pp21_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state239_pp21_stage6_iter1() {
    ap_block_state239_pp21_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state241_pp22_stage0_iter0() {
    ap_block_state241_pp22_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state242_pp22_stage1_iter0() {
    ap_block_state242_pp22_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state243_pp22_stage2_iter0() {
    ap_block_state243_pp22_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state244_pp22_stage3_iter0() {
    ap_block_state244_pp22_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state245_pp22_stage4_iter0() {
    ap_block_state245_pp22_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state246_pp22_stage5_iter0() {
    ap_block_state246_pp22_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state247_pp22_stage6_iter0() {
    ap_block_state247_pp22_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state248_pp22_stage7_iter0() {
    ap_block_state248_pp22_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state249_pp22_stage0_iter1() {
    ap_block_state249_pp22_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state250_pp22_stage1_iter1() {
    ap_block_state250_pp22_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state251_pp22_stage2_iter1() {
    ap_block_state251_pp22_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state252_pp22_stage3_iter1() {
    ap_block_state252_pp22_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state253_pp22_stage4_iter1() {
    ap_block_state253_pp22_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state254_pp22_stage5_iter1() {
    ap_block_state254_pp22_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state255_pp22_stage6_iter1() {
    ap_block_state255_pp22_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state257_pp23_stage0_iter0() {
    ap_block_state257_pp23_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state258_pp23_stage1_iter0() {
    ap_block_state258_pp23_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state259_pp23_stage2_iter0() {
    ap_block_state259_pp23_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state260_pp23_stage3_iter0() {
    ap_block_state260_pp23_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state261_pp23_stage4_iter0() {
    ap_block_state261_pp23_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state262_pp23_stage5_iter0() {
    ap_block_state262_pp23_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state263_pp23_stage6_iter0() {
    ap_block_state263_pp23_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state264_pp23_stage7_iter0() {
    ap_block_state264_pp23_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state265_pp23_stage0_iter1() {
    ap_block_state265_pp23_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state266_pp23_stage1_iter1() {
    ap_block_state266_pp23_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state267_pp23_stage2_iter1() {
    ap_block_state267_pp23_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state268_pp23_stage3_iter1() {
    ap_block_state268_pp23_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state269_pp23_stage4_iter1() {
    ap_block_state269_pp23_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state270_pp23_stage5_iter1() {
    ap_block_state270_pp23_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state271_pp23_stage6_iter1() {
    ap_block_state271_pp23_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state274_pp24_stage0_iter0() {
    ap_block_state274_pp24_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state275_pp24_stage1_iter0() {
    ap_block_state275_pp24_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state276_pp24_stage2_iter0() {
    ap_block_state276_pp24_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state277_pp24_stage3_iter0() {
    ap_block_state277_pp24_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state278_pp24_stage4_iter0() {
    ap_block_state278_pp24_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state279_pp24_stage5_iter0() {
    ap_block_state279_pp24_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state280_pp24_stage6_iter0() {
    ap_block_state280_pp24_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state281_pp24_stage7_iter0() {
    ap_block_state281_pp24_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state282_pp24_stage0_iter1() {
    ap_block_state282_pp24_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state283_pp24_stage1_iter1() {
    ap_block_state283_pp24_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state284_pp24_stage2_iter1() {
    ap_block_state284_pp24_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state285_pp24_stage3_iter1() {
    ap_block_state285_pp24_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state286_pp24_stage4_iter1() {
    ap_block_state286_pp24_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state287_pp24_stage5_iter1() {
    ap_block_state287_pp24_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state288_pp24_stage6_iter1() {
    ap_block_state288_pp24_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state299_pp28_stage0_iter0() {
    ap_block_state299_pp28_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state29_pp4_stage0_iter0() {
    ap_block_state29_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state300_pp28_stage1_iter0() {
    ap_block_state300_pp28_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state301_pp28_stage2_iter0() {
    ap_block_state301_pp28_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state302_pp28_stage3_iter0() {
    ap_block_state302_pp28_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state303_pp28_stage4_iter0() {
    ap_block_state303_pp28_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state304_pp28_stage5_iter0() {
    ap_block_state304_pp28_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state305_pp28_stage6_iter0() {
    ap_block_state305_pp28_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state306_pp28_stage7_iter0() {
    ap_block_state306_pp28_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state307_pp28_stage0_iter1() {
    ap_block_state307_pp28_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state308_pp28_stage1_iter1() {
    ap_block_state308_pp28_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state309_pp28_stage2_iter1() {
    ap_block_state309_pp28_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state30_pp4_stage1_iter0() {
    ap_block_state30_pp4_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state310_pp28_stage3_iter1() {
    ap_block_state310_pp28_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state311_pp28_stage4_iter1() {
    ap_block_state311_pp28_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state312_pp28_stage5_iter1() {
    ap_block_state312_pp28_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state313_pp28_stage6_iter1() {
    ap_block_state313_pp28_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state315_pp29_stage0_iter0() {
    ap_block_state315_pp29_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state316_pp29_stage1_iter0() {
    ap_block_state316_pp29_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state317_pp29_stage2_iter0() {
    ap_block_state317_pp29_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state318_pp29_stage3_iter0() {
    ap_block_state318_pp29_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state319_pp29_stage4_iter0() {
    ap_block_state319_pp29_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state31_pp4_stage2_iter0() {
    ap_block_state31_pp4_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state320_pp29_stage5_iter0() {
    ap_block_state320_pp29_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state321_pp29_stage6_iter0() {
    ap_block_state321_pp29_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state322_pp29_stage7_iter0() {
    ap_block_state322_pp29_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state323_pp29_stage0_iter1() {
    ap_block_state323_pp29_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state324_pp29_stage1_iter1() {
    ap_block_state324_pp29_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state325_pp29_stage2_iter1() {
    ap_block_state325_pp29_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state326_pp29_stage3_iter1() {
    ap_block_state326_pp29_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state327_pp29_stage4_iter1() {
    ap_block_state327_pp29_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state328_pp29_stage5_iter1() {
    ap_block_state328_pp29_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state329_pp29_stage6_iter1() {
    ap_block_state329_pp29_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state32_pp4_stage3_iter0() {
    ap_block_state32_pp4_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state331_pp30_stage0_iter0() {
    ap_block_state331_pp30_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state332_pp30_stage1_iter0() {
    ap_block_state332_pp30_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state333_pp30_stage2_iter0() {
    ap_block_state333_pp30_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state334_pp30_stage3_iter0() {
    ap_block_state334_pp30_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state335_pp30_stage4_iter0() {
    ap_block_state335_pp30_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state336_pp30_stage5_iter0() {
    ap_block_state336_pp30_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state337_pp30_stage6_iter0() {
    ap_block_state337_pp30_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state338_pp30_stage7_iter0() {
    ap_block_state338_pp30_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state339_pp30_stage0_iter1() {
    ap_block_state339_pp30_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state33_pp4_stage4_iter0() {
    ap_block_state33_pp4_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state340_pp30_stage1_iter1() {
    ap_block_state340_pp30_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state341_pp30_stage2_iter1() {
    ap_block_state341_pp30_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state342_pp30_stage3_iter1() {
    ap_block_state342_pp30_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state343_pp30_stage4_iter1() {
    ap_block_state343_pp30_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state344_pp30_stage5_iter1() {
    ap_block_state344_pp30_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state345_pp30_stage6_iter1() {
    ap_block_state345_pp30_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state347_pp31_stage0_iter0() {
    ap_block_state347_pp31_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state348_pp31_stage1_iter0() {
    ap_block_state348_pp31_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state349_pp31_stage2_iter0() {
    ap_block_state349_pp31_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state34_pp4_stage5_iter0() {
    ap_block_state34_pp4_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state350_pp31_stage3_iter0() {
    ap_block_state350_pp31_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state351_pp31_stage4_iter0() {
    ap_block_state351_pp31_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state352_pp31_stage5_iter0() {
    ap_block_state352_pp31_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state353_pp31_stage6_iter0() {
    ap_block_state353_pp31_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state354_pp31_stage7_iter0() {
    ap_block_state354_pp31_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state355_pp31_stage0_iter1() {
    ap_block_state355_pp31_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state356_pp31_stage1_iter1() {
    ap_block_state356_pp31_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state357_pp31_stage2_iter1() {
    ap_block_state357_pp31_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state358_pp31_stage3_iter1() {
    ap_block_state358_pp31_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state359_pp31_stage4_iter1() {
    ap_block_state359_pp31_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state35_pp4_stage6_iter0() {
    ap_block_state35_pp4_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state360_pp31_stage5_iter1() {
    ap_block_state360_pp31_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state361_pp31_stage6_iter1() {
    ap_block_state361_pp31_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state36_pp4_stage7_iter0() {
    ap_block_state36_pp4_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state37_pp4_stage0_iter1() {
    ap_block_state37_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state38_pp4_stage1_iter1() {
    ap_block_state38_pp4_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state39_pp4_stage2_iter1() {
    ap_block_state39_pp4_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state40_pp4_stage3_iter1() {
    ap_block_state40_pp4_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state41_pp4_stage4_iter1() {
    ap_block_state41_pp4_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state42_pp4_stage5_iter1() {
    ap_block_state42_pp4_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state43_pp4_stage6_iter1() {
    ap_block_state43_pp4_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state45_pp5_stage0_iter0() {
    ap_block_state45_pp5_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state46_pp5_stage1_iter0() {
    ap_block_state46_pp5_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state47_pp5_stage2_iter0() {
    ap_block_state47_pp5_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state48_pp5_stage3_iter0() {
    ap_block_state48_pp5_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state49_pp5_stage4_iter0() {
    ap_block_state49_pp5_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state4_pp0_stage0_iter0() {
    ap_block_state4_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state50_pp5_stage5_iter0() {
    ap_block_state50_pp5_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state51_pp5_stage6_iter0() {
    ap_block_state51_pp5_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state52_pp5_stage7_iter0() {
    ap_block_state52_pp5_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state53_pp5_stage0_iter1() {
    ap_block_state53_pp5_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state54_pp5_stage1_iter1() {
    ap_block_state54_pp5_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state55_pp5_stage2_iter1() {
    ap_block_state55_pp5_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state56_pp5_stage3_iter1() {
    ap_block_state56_pp5_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state57_pp5_stage4_iter1() {
    ap_block_state57_pp5_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state58_pp5_stage5_iter1() {
    ap_block_state58_pp5_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state59_pp5_stage6_iter1() {
    ap_block_state59_pp5_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state5_pp0_stage1_iter0() {
    ap_block_state5_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state61_pp6_stage0_iter0() {
    ap_block_state61_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state62_pp6_stage1_iter0() {
    ap_block_state62_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state63_pp6_stage2_iter0() {
    ap_block_state63_pp6_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state64_pp6_stage3_iter0() {
    ap_block_state64_pp6_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state65_pp6_stage4_iter0() {
    ap_block_state65_pp6_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state66_pp6_stage5_iter0() {
    ap_block_state66_pp6_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state67_pp6_stage6_iter0() {
    ap_block_state67_pp6_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state68_pp6_stage7_iter0() {
    ap_block_state68_pp6_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state69_pp6_stage0_iter1() {
    ap_block_state69_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state6_pp0_stage2_iter0() {
    ap_block_state6_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state70_pp6_stage1_iter1() {
    ap_block_state70_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state71_pp6_stage2_iter1() {
    ap_block_state71_pp6_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state72_pp6_stage3_iter1() {
    ap_block_state72_pp6_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state73_pp6_stage4_iter1() {
    ap_block_state73_pp6_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state74_pp6_stage5_iter1() {
    ap_block_state74_pp6_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state75_pp6_stage6_iter1() {
    ap_block_state75_pp6_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state77_pp7_stage0_iter0() {
    ap_block_state77_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state78_pp7_stage1_iter0() {
    ap_block_state78_pp7_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state79_pp7_stage2_iter0() {
    ap_block_state79_pp7_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state7_pp0_stage3_iter0() {
    ap_block_state7_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state80_pp7_stage3_iter0() {
    ap_block_state80_pp7_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state81_pp7_stage4_iter0() {
    ap_block_state81_pp7_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state82_pp7_stage5_iter0() {
    ap_block_state82_pp7_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state83_pp7_stage6_iter0() {
    ap_block_state83_pp7_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state84_pp7_stage7_iter0() {
    ap_block_state84_pp7_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state85_pp7_stage0_iter1() {
    ap_block_state85_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state86_pp7_stage1_iter1() {
    ap_block_state86_pp7_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state87_pp7_stage2_iter1() {
    ap_block_state87_pp7_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state88_pp7_stage3_iter1() {
    ap_block_state88_pp7_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state89_pp7_stage4_iter1() {
    ap_block_state89_pp7_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state8_pp0_stage4_iter0() {
    ap_block_state8_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state90_pp7_stage5_iter1() {
    ap_block_state90_pp7_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state91_pp7_stage6_iter1() {
    ap_block_state91_pp7_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state94_pp8_stage0_iter0() {
    ap_block_state94_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state95_pp8_stage1_iter0() {
    ap_block_state95_pp8_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state96_pp8_stage2_iter0() {
    ap_block_state96_pp8_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state97_pp8_stage3_iter0() {
    ap_block_state97_pp8_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state98_pp8_stage4_iter0() {
    ap_block_state98_pp8_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state99_pp8_stage5_iter0() {
    ap_block_state99_pp8_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_block_state9_pp0_stage5_iter0() {
    ap_block_state9_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul_3::thread_ap_condition_pp0_exit_iter0_state4() {
    if (esl_seteq<1,1,1>(exitcond_fu_3001_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp12_exit_iter0_state119() {
    if (esl_seteq<1,1,1>(exitcond_1_4_fu_5476_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp12_exit_iter0_state119 = ap_const_logic_1;
    } else {
        ap_condition_pp12_exit_iter0_state119 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp13_exit_iter0_state135() {
    if (esl_seteq<1,1,1>(exitcond_1_5_fu_5820_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp13_exit_iter0_state135 = ap_const_logic_1;
    } else {
        ap_condition_pp13_exit_iter0_state135 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp14_exit_iter0_state151() {
    if (esl_seteq<1,1,1>(exitcond_1_6_fu_6164_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp14_exit_iter0_state151 = ap_const_logic_1;
    } else {
        ap_condition_pp14_exit_iter0_state151 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp15_exit_iter0_state167() {
    if (esl_seteq<1,1,1>(exitcond_1_7_fu_6508_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp15_exit_iter0_state167 = ap_const_logic_1;
    } else {
        ap_condition_pp15_exit_iter0_state167 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp16_exit_iter0_state184() {
    if (esl_seteq<1,1,1>(exitcond_2_fu_6863_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp16_exit_iter0_state184 = ap_const_logic_1;
    } else {
        ap_condition_pp16_exit_iter0_state184 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp20_exit_iter0_state209() {
    if (esl_seteq<1,1,1>(exitcond_2_4_fu_7439_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp20_exit_iter0_state209 = ap_const_logic_1;
    } else {
        ap_condition_pp20_exit_iter0_state209 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp21_exit_iter0_state225() {
    if (esl_seteq<1,1,1>(exitcond_2_5_fu_7785_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp21_exit_iter0_state225 = ap_const_logic_1;
    } else {
        ap_condition_pp21_exit_iter0_state225 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp22_exit_iter0_state241() {
    if (esl_seteq<1,1,1>(exitcond_2_6_fu_8131_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp22_exit_iter0_state241 = ap_const_logic_1;
    } else {
        ap_condition_pp22_exit_iter0_state241 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp23_exit_iter0_state257() {
    if (esl_seteq<1,1,1>(exitcond_2_7_fu_8477_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp23_exit_iter0_state257 = ap_const_logic_1;
    } else {
        ap_condition_pp23_exit_iter0_state257 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp24_exit_iter0_state274() {
    if (esl_seteq<1,1,1>(exitcond_3_fu_8834_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp24_exit_iter0_state274 = ap_const_logic_1;
    } else {
        ap_condition_pp24_exit_iter0_state274 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp28_exit_iter0_state299() {
    if (esl_seteq<1,1,1>(exitcond_3_4_fu_9413_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp28_exit_iter0_state299 = ap_const_logic_1;
    } else {
        ap_condition_pp28_exit_iter0_state299 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp29_exit_iter0_state315() {
    if (esl_seteq<1,1,1>(exitcond_3_5_fu_9761_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp29_exit_iter0_state315 = ap_const_logic_1;
    } else {
        ap_condition_pp29_exit_iter0_state315 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp30_exit_iter0_state331() {
    if (esl_seteq<1,1,1>(exitcond_3_6_fu_10109_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp30_exit_iter0_state331 = ap_const_logic_1;
    } else {
        ap_condition_pp30_exit_iter0_state331 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp31_exit_iter0_state347() {
    if (esl_seteq<1,1,1>(exitcond_3_7_fu_10457_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp31_exit_iter0_state347 = ap_const_logic_1;
    } else {
        ap_condition_pp31_exit_iter0_state347 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp4_exit_iter0_state29() {
    if (esl_seteq<1,1,1>(exitcond_0_4_fu_3545_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp4_exit_iter0_state29 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state29 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp5_exit_iter0_state45() {
    if (esl_seteq<1,1,1>(exitcond_0_5_fu_3883_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp5_exit_iter0_state45 = ap_const_logic_1;
    } else {
        ap_condition_pp5_exit_iter0_state45 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp6_exit_iter0_state61() {
    if (esl_seteq<1,1,1>(exitcond_0_6_fu_4221_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp6_exit_iter0_state61 = ap_const_logic_1;
    } else {
        ap_condition_pp6_exit_iter0_state61 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp7_exit_iter0_state77() {
    if (esl_seteq<1,1,1>(exitcond_0_7_fu_4559_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp7_exit_iter0_state77 = ap_const_logic_1;
    } else {
        ap_condition_pp7_exit_iter0_state77 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_condition_pp8_exit_iter0_state94() {
    if (esl_seteq<1,1,1>(exitcond_1_fu_4908_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp8_exit_iter0_state94 = ap_const_logic_1;
    } else {
        ap_condition_pp8_exit_iter0_state94 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) && 
          (esl_seteq<1,1,1>(exitcond2_2_reg_11696.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(exitcond2_1_reg_10961.read(), ap_const_lv1_1) || 
           esl_seteq<1,1,1>(exitcond2_reg_10834.read(), ap_const_lv1_1) || 
           (esl_seteq<1,1,1>(exitcond2_3_fu_7216_p2.read(), ap_const_lv1_1) && 
            esl_seteq<1,1,1>(exitcond1_2_1_fu_7204_p2.read(), ap_const_lv1_1)) || 
           (esl_seteq<1,1,1>(exitcond2_3_fu_7216_p2.read(), ap_const_lv1_1) && 
            esl_seteq<1,1,1>(exitcond1_2_reg_12308.read(), ap_const_lv1_1)))))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp12() {
    ap_enable_pp12 = (ap_idle_pp12.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp13() {
    ap_enable_pp13 = (ap_idle_pp13.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp14() {
    ap_enable_pp14 = (ap_idle_pp14.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp15() {
    ap_enable_pp15 = (ap_idle_pp15.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp16() {
    ap_enable_pp16 = (ap_idle_pp16.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp20() {
    ap_enable_pp20 = (ap_idle_pp20.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp21() {
    ap_enable_pp21 = (ap_idle_pp21.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp22() {
    ap_enable_pp22 = (ap_idle_pp22.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp23() {
    ap_enable_pp23 = (ap_idle_pp23.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp24() {
    ap_enable_pp24 = (ap_idle_pp24.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp28() {
    ap_enable_pp28 = (ap_idle_pp28.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp29() {
    ap_enable_pp29 = (ap_idle_pp29.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp30() {
    ap_enable_pp30 = (ap_idle_pp30.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp31() {
    ap_enable_pp31 = (ap_idle_pp31.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp5() {
    ap_enable_pp5 = (ap_idle_pp5.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp6() {
    ap_enable_pp6 = (ap_idle_pp6.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp7() {
    ap_enable_pp7 = (ap_idle_pp7.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_enable_pp8() {
    ap_enable_pp8 = (ap_idle_pp8.read() ^ ap_const_logic_1);
}

void k2c_affine_matmul_3::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp12() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp12_iter1.read()))) {
        ap_idle_pp12 = ap_const_logic_1;
    } else {
        ap_idle_pp12 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp13() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp13_iter1.read()))) {
        ap_idle_pp13 = ap_const_logic_1;
    } else {
        ap_idle_pp13 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp14() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp14_iter1.read()))) {
        ap_idle_pp14 = ap_const_logic_1;
    } else {
        ap_idle_pp14 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp15() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp15_iter1.read()))) {
        ap_idle_pp15 = ap_const_logic_1;
    } else {
        ap_idle_pp15 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp16() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp16_iter1.read()))) {
        ap_idle_pp16 = ap_const_logic_1;
    } else {
        ap_idle_pp16 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp20() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp20_iter1.read()))) {
        ap_idle_pp20 = ap_const_logic_1;
    } else {
        ap_idle_pp20 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp21() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp21_iter1.read()))) {
        ap_idle_pp21 = ap_const_logic_1;
    } else {
        ap_idle_pp21 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp22() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp22_iter1.read()))) {
        ap_idle_pp22 = ap_const_logic_1;
    } else {
        ap_idle_pp22 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp23() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp23_iter1.read()))) {
        ap_idle_pp23 = ap_const_logic_1;
    } else {
        ap_idle_pp23 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp24() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp24_iter1.read()))) {
        ap_idle_pp24 = ap_const_logic_1;
    } else {
        ap_idle_pp24 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp28() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp28_iter1.read()))) {
        ap_idle_pp28 = ap_const_logic_1;
    } else {
        ap_idle_pp28 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp29() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp29_iter1.read()))) {
        ap_idle_pp29 = ap_const_logic_1;
    } else {
        ap_idle_pp29 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp30() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp30_iter1.read()))) {
        ap_idle_pp30 = ap_const_logic_1;
    } else {
        ap_idle_pp30 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp31() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp31_iter1.read()))) {
        ap_idle_pp31 = ap_const_logic_1;
    } else {
        ap_idle_pp31 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp5() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp5_iter1.read()))) {
        ap_idle_pp5 = ap_const_logic_1;
    } else {
        ap_idle_pp5 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp6() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp6_iter1.read()))) {
        ap_idle_pp6 = ap_const_logic_1;
    } else {
        ap_idle_pp6 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp7() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp7_iter1.read()))) {
        ap_idle_pp7 = ap_const_logic_1;
    } else {
        ap_idle_pp7 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_idle_pp8() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp8_iter1.read()))) {
        ap_idle_pp8 = ap_const_logic_1;
    } else {
        ap_idle_pp8 = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_0_4_phi_fu_2375_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_0_4_reg_11129.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp4_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_0_4_phi_fu_2375_p4 = k_2_0_4_reg_11133.read();
    } else {
        ap_phi_mux_k_0_4_phi_fu_2375_p4 = k_0_4_reg_2371.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_0_5_phi_fu_2399_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_0_5_reg_11240.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp5_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_0_5_phi_fu_2399_p4 = k_2_0_5_reg_11244.read();
    } else {
        ap_phi_mux_k_0_5_phi_fu_2399_p4 = k_0_5_reg_2395.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_0_6_phi_fu_2423_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_0_6_reg_11351.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp6_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_0_6_phi_fu_2423_p4 = k_2_0_6_reg_11355.read();
    } else {
        ap_phi_mux_k_0_6_phi_fu_2423_p4 = k_0_6_reg_2419.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_0_7_phi_fu_2447_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_0_7_reg_11462.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp7_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_0_7_phi_fu_2447_p4 = k_2_0_7_reg_11466.read();
    } else {
        ap_phi_mux_k_0_7_phi_fu_2447_p4 = k_0_7_reg_2443.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_1_4_phi_fu_2540_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_4_reg_11864.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp12_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_1_4_phi_fu_2540_p4 = k_2_1_4_reg_11868.read();
    } else {
        ap_phi_mux_k_1_4_phi_fu_2540_p4 = k_1_4_reg_2536.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_1_5_phi_fu_2564_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_5_reg_11975.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp13_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_1_5_phi_fu_2564_p4 = k_2_1_5_reg_11979.read();
    } else {
        ap_phi_mux_k_1_5_phi_fu_2564_p4 = k_1_5_reg_2560.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_1_6_phi_fu_2588_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_6_reg_12086.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp14_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_1_6_phi_fu_2588_p4 = k_2_1_6_reg_12090.read();
    } else {
        ap_phi_mux_k_1_6_phi_fu_2588_p4 = k_1_6_reg_2584.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_1_7_phi_fu_2612_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_7_reg_12197.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp15_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_1_7_phi_fu_2612_p4 = k_2_1_7_reg_12201.read();
    } else {
        ap_phi_mux_k_1_7_phi_fu_2612_p4 = k_1_7_reg_2608.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_1_phi_fu_2483_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_1_reg_11586.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp8_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp8_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_1_phi_fu_2483_p4 = k_2_1_reg_11590.read();
    } else {
        ap_phi_mux_k_1_phi_fu_2483_p4 = k_1_reg_2479.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_214_4_phi_fu_2705_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_4_reg_12598.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp20_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_214_4_phi_fu_2705_p4 = k_2_2_4_reg_12602.read();
    } else {
        ap_phi_mux_k_214_4_phi_fu_2705_p4 = k_214_4_reg_2701.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_214_5_phi_fu_2729_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_5_reg_12709.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp21_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_214_5_phi_fu_2729_p4 = k_2_2_5_reg_12713.read();
    } else {
        ap_phi_mux_k_214_5_phi_fu_2729_p4 = k_214_5_reg_2725.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_214_6_phi_fu_2753_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_6_reg_12820.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp22_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_214_6_phi_fu_2753_p4 = k_2_2_6_reg_12824.read();
    } else {
        ap_phi_mux_k_214_6_phi_fu_2753_p4 = k_214_6_reg_2749.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_214_7_phi_fu_2777_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_7_reg_12931.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp23_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_214_7_phi_fu_2777_p4 = k_2_2_7_reg_12935.read();
    } else {
        ap_phi_mux_k_214_7_phi_fu_2777_p4 = k_214_7_reg_2773.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_3_4_phi_fu_2870_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_3_4_reg_13334.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp28_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_3_4_phi_fu_2870_p4 = k_2_3_4_reg_13338.read();
    } else {
        ap_phi_mux_k_3_4_phi_fu_2870_p4 = k_3_4_reg_2866.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_3_5_phi_fu_2894_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_3_5_reg_13445.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp29_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_3_5_phi_fu_2894_p4 = k_2_3_5_reg_13449.read();
    } else {
        ap_phi_mux_k_3_5_phi_fu_2894_p4 = k_3_5_reg_2890.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_3_6_phi_fu_2918_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_3_6_reg_13556.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp30_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_3_6_phi_fu_2918_p4 = k_2_3_6_reg_13560.read();
    } else {
        ap_phi_mux_k_3_6_phi_fu_2918_p4 = k_3_6_reg_2914.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_3_7_phi_fu_2942_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_3_7_reg_13667.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp31_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_3_7_phi_fu_2942_p4 = k_2_3_7_reg_13671.read();
    } else {
        ap_phi_mux_k_3_7_phi_fu_2942_p4 = k_3_7_reg_2938.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_3_phi_fu_2813_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_3_reg_13055.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp24_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp24_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_3_phi_fu_2813_p4 = k_2_3_reg_13059.read();
    } else {
        ap_phi_mux_k_3_phi_fu_2813_p4 = k_3_reg_2809.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_phi_fu_2318_p4() {
    if ((esl_seteq<1,1,1>(exitcond_reg_10851.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_phi_fu_2318_p4 = k_2_reg_10855.read();
    } else {
        ap_phi_mux_k_phi_fu_2318_p4 = k_reg_2314.read();
    }
}

void k2c_affine_matmul_3::thread_ap_phi_mux_k_s_phi_fu_2648_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_2_reg_12321.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage0.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp16_iter1.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_block_pp16_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_k_s_phi_fu_2648_p4 = k_2_2_reg_12325.read();
    } else {
        ap_phi_mux_k_s_phi_fu_2648_p4 = k_s_reg_2644.read();
    }
}

void k2c_affine_matmul_3::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state199.read()) && 
         (esl_seteq<1,1,1>(exitcond2_2_reg_11696.read(), ap_const_lv1_1) || 
          esl_seteq<1,1,1>(exitcond2_1_reg_10961.read(), ap_const_lv1_1) || 
          esl_seteq<1,1,1>(exitcond2_reg_10834.read(), ap_const_lv1_1) || 
          (esl_seteq<1,1,1>(exitcond2_3_fu_7216_p2.read(), ap_const_lv1_1) && 
           esl_seteq<1,1,1>(exitcond1_2_1_fu_7204_p2.read(), ap_const_lv1_1)) || 
          (esl_seteq<1,1,1>(exitcond2_3_fu_7216_p2.read(), ap_const_lv1_1) && 
           esl_seteq<1,1,1>(exitcond1_2_reg_12308.read(), ap_const_lv1_1))))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void k2c_affine_matmul_3::thread_arrayNo_trunc10_fu_8186_p2() {
    arrayNo_trunc10_fu_8186_p2 = (!ap_const_lv3_6.is_01() || !tmp_348_fu_8147_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_6) + sc_biguint<3>(tmp_348_fu_8147_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc11_fu_9470_p2() {
    arrayNo_trunc11_fu_9470_p2 = (tmp_351_fu_9429_p1.read() ^ ap_const_lv3_4);
}

void k2c_affine_matmul_3::thread_arrayNo_trunc12_fu_8532_p2() {
    arrayNo_trunc12_fu_8532_p2 = (!ap_const_lv3_7.is_01() || !tmp_356_fu_8493_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_7) + sc_biguint<3>(tmp_356_fu_8493_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc13_fu_9818_p2() {
    arrayNo_trunc13_fu_9818_p2 = (!ap_const_lv3_5.is_01() || !tmp_359_fu_9777_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_5) + sc_biguint<3>(tmp_359_fu_9777_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc14_fu_10166_p2() {
    arrayNo_trunc14_fu_10166_p2 = (!ap_const_lv3_6.is_01() || !tmp_363_fu_10125_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_6) + sc_biguint<3>(tmp_363_fu_10125_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc15_fu_10514_p2() {
    arrayNo_trunc15_fu_10514_p2 = (!ap_const_lv3_7.is_01() || !tmp_367_fu_10473_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_7) + sc_biguint<3>(tmp_367_fu_10473_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc1_fu_3930_p2() {
    arrayNo_trunc1_fu_3930_p2 = (!ap_const_lv3_5.is_01() || !tmp_295_fu_3899_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_5) + sc_biguint<3>(tmp_295_fu_3899_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc2_fu_4606_p2() {
    arrayNo_trunc2_fu_4606_p2 = (!ap_const_lv3_7.is_01() || !tmp_313_fu_4575_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_7) + sc_biguint<3>(tmp_313_fu_4575_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc3_fu_4268_p2() {
    arrayNo_trunc3_fu_4268_p2 = (!ap_const_lv3_6.is_01() || !tmp_304_fu_4237_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_6) + sc_biguint<3>(tmp_304_fu_4237_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc4_fu_5873_p2() {
    arrayNo_trunc4_fu_5873_p2 = (!ap_const_lv3_5.is_01() || !tmp_318_fu_5836_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_5) + sc_biguint<3>(tmp_318_fu_5836_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc5_fu_6217_p2() {
    arrayNo_trunc5_fu_6217_p2 = (!ap_const_lv3_6.is_01() || !tmp_327_fu_6180_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_6) + sc_biguint<3>(tmp_327_fu_6180_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc6_fu_7494_p2() {
    arrayNo_trunc6_fu_7494_p2 = (tmp_333_fu_7455_p1.read() ^ ap_const_lv3_4);
}

void k2c_affine_matmul_3::thread_arrayNo_trunc7_fu_6561_p2() {
    arrayNo_trunc7_fu_6561_p2 = (!ap_const_lv3_7.is_01() || !tmp_337_fu_6524_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_7) + sc_biguint<3>(tmp_337_fu_6524_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc8_fu_3592_p2() {
    arrayNo_trunc8_fu_3592_p2 = (tmp_289_fu_3561_p1.read() ^ ap_const_lv3_4);
}

void k2c_affine_matmul_3::thread_arrayNo_trunc9_fu_7840_p2() {
    arrayNo_trunc9_fu_7840_p2 = (!ap_const_lv3_5.is_01() || !tmp_343_fu_7801_p1.read().is_01())? sc_lv<3>(): (sc_bigint<3>(ap_const_lv3_5) + sc_biguint<3>(tmp_343_fu_7801_p1.read()));
}

void k2c_affine_matmul_3::thread_arrayNo_trunc_fu_5529_p2() {
    arrayNo_trunc_fu_5529_p2 = (tmp_308_fu_5492_p1.read() ^ ap_const_lv3_4);
}

void k2c_affine_matmul_3::thread_exitcond1_0_1_fu_3334_p2() {
    exitcond1_0_1_fu_3334_p2 = (!j_14_0_s_fu_3328_p2.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_14_0_s_fu_3328_p2.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_1_1_fu_5247_p2() {
    exitcond1_1_1_fu_5247_p2 = (!j_14_1_s_fu_5241_p2.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_14_1_s_fu_5241_p2.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_1_fu_4898_p2() {
    exitcond1_1_fu_4898_p2 = (!j_1_reg_2454.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_1_reg_2454.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_2_1_fu_7204_p2() {
    exitcond1_2_1_fu_7204_p2 = (!j_14_2_s_fu_7198_p2.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_14_2_s_fu_7198_p2.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_2_fu_6853_p2() {
    exitcond1_2_fu_6853_p2 = (!j_2_reg_2619.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_2_reg_2619.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_3_1_fu_9177_p2() {
    exitcond1_3_1_fu_9177_p2 = (!j_14_3_s_fu_9171_p2.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_14_3_s_fu_9171_p2.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_3_fu_8824_p2() {
    exitcond1_3_fu_8824_p2 = (!j_3_reg_2784.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_3_reg_2784.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond1_fu_2991_p2() {
    exitcond1_fu_2991_p2 = (!j_reg_2289.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_2289.read() == ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_exitcond2_1_fu_3346_p2() {
    exitcond2_1_fu_3346_p2 = (!i_33_s_fu_3340_p2.read().is_01() || !outrows_cast_reg_10806.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_s_fu_3340_p2.read() == outrows_cast_reg_10806.read());
}

void k2c_affine_matmul_3::thread_exitcond2_2_fu_5259_p2() {
    exitcond2_2_fu_5259_p2 = (!i_33_1_fu_5253_p2.read().is_01() || !outrows_cast_reg_10806.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_1_fu_5253_p2.read() == outrows_cast_reg_10806.read());
}

void k2c_affine_matmul_3::thread_exitcond2_3_fu_7216_p2() {
    exitcond2_3_fu_7216_p2 = (!i_33_2_fu_7210_p2.read().is_01() || !outrows_cast_reg_10806.read().is_01())? sc_lv<1>(): sc_lv<1>(i_33_2_fu_7210_p2.read() == outrows_cast_reg_10806.read());
}

void k2c_affine_matmul_3::thread_exitcond2_fu_2986_p2() {
    exitcond2_fu_2986_p2 = (!i_reg_2277.read().is_01() || !outrows_cast_reg_10806.read().is_01())? sc_lv<1>(): sc_lv<1>(i_reg_2277.read() == outrows_cast_reg_10806.read());
}

void k2c_affine_matmul_3::thread_exitcond_0_1_fu_3351_p2() {
    exitcond_0_1_fu_3351_p2 = (!k_0_1_reg_2325.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_0_1_reg_2325.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_0_2_fu_3414_p2() {
    exitcond_0_2_fu_3414_p2 = (!k_0_2_reg_2336.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_0_2_reg_2336.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_0_3_fu_3477_p2() {
    exitcond_0_3_fu_3477_p2 = (!k_0_3_reg_2347.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_0_3_reg_2347.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_0_4_fu_3545_p2() {
    exitcond_0_4_fu_3545_p2 = (!ap_phi_mux_k_0_4_phi_fu_2375_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_4_phi_fu_2375_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_0_5_fu_3883_p2() {
    exitcond_0_5_fu_3883_p2 = (!ap_phi_mux_k_0_5_phi_fu_2399_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_5_phi_fu_2399_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_0_6_fu_4221_p2() {
    exitcond_0_6_fu_4221_p2 = (!ap_phi_mux_k_0_6_phi_fu_2423_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_6_phi_fu_2423_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_0_7_fu_4559_p2() {
    exitcond_0_7_fu_4559_p2 = (!ap_phi_mux_k_0_7_phi_fu_2447_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_0_7_phi_fu_2447_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_1_fu_5264_p2() {
    exitcond_1_1_fu_5264_p2 = (!k_1_1_reg_2490.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_1_1_reg_2490.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_2_fu_5333_p2() {
    exitcond_1_2_fu_5333_p2 = (!k_1_2_reg_2501.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_1_2_reg_2501.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_3_fu_5402_p2() {
    exitcond_1_3_fu_5402_p2 = (!k_1_3_reg_2512.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_1_3_reg_2512.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_4_fu_5476_p2() {
    exitcond_1_4_fu_5476_p2 = (!ap_phi_mux_k_1_4_phi_fu_2540_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_1_4_phi_fu_2540_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_5_fu_5820_p2() {
    exitcond_1_5_fu_5820_p2 = (!ap_phi_mux_k_1_5_phi_fu_2564_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_1_5_phi_fu_2564_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_6_fu_6164_p2() {
    exitcond_1_6_fu_6164_p2 = (!ap_phi_mux_k_1_6_phi_fu_2588_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_1_6_phi_fu_2588_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_7_fu_6508_p2() {
    exitcond_1_7_fu_6508_p2 = (!ap_phi_mux_k_1_7_phi_fu_2612_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_1_7_phi_fu_2612_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_1_fu_4908_p2() {
    exitcond_1_fu_4908_p2 = (!ap_phi_mux_k_1_phi_fu_2483_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_1_phi_fu_2483_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_1_fu_7221_p2() {
    exitcond_2_1_fu_7221_p2 = (!k_214_1_reg_2655.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_214_1_reg_2655.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_2_fu_7292_p2() {
    exitcond_2_2_fu_7292_p2 = (!k_214_2_reg_2666.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_214_2_reg_2666.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_3_fu_7363_p2() {
    exitcond_2_3_fu_7363_p2 = (!k_214_3_reg_2677.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_214_3_reg_2677.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_4_fu_7439_p2() {
    exitcond_2_4_fu_7439_p2 = (!ap_phi_mux_k_214_4_phi_fu_2705_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_214_4_phi_fu_2705_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_5_fu_7785_p2() {
    exitcond_2_5_fu_7785_p2 = (!ap_phi_mux_k_214_5_phi_fu_2729_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_214_5_phi_fu_2729_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_6_fu_8131_p2() {
    exitcond_2_6_fu_8131_p2 = (!ap_phi_mux_k_214_6_phi_fu_2753_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_214_6_phi_fu_2753_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_7_fu_8477_p2() {
    exitcond_2_7_fu_8477_p2 = (!ap_phi_mux_k_214_7_phi_fu_2777_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_214_7_phi_fu_2777_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_2_fu_6863_p2() {
    exitcond_2_fu_6863_p2 = (!ap_phi_mux_k_s_phi_fu_2648_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_s_phi_fu_2648_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_1_fu_9189_p2() {
    exitcond_3_1_fu_9189_p2 = (!k_3_1_reg_2820.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_3_1_reg_2820.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_2_fu_9262_p2() {
    exitcond_3_2_fu_9262_p2 = (!k_3_2_reg_2831.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_3_2_reg_2831.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_3_fu_9335_p2() {
    exitcond_3_3_fu_9335_p2 = (!k_3_3_reg_2842.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_3_3_reg_2842.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_4_fu_9413_p2() {
    exitcond_3_4_fu_9413_p2 = (!ap_phi_mux_k_3_4_phi_fu_2870_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_3_4_phi_fu_2870_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_5_fu_9761_p2() {
    exitcond_3_5_fu_9761_p2 = (!ap_phi_mux_k_3_5_phi_fu_2894_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_3_5_phi_fu_2894_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_6_fu_10109_p2() {
    exitcond_3_6_fu_10109_p2 = (!ap_phi_mux_k_3_6_phi_fu_2918_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_3_6_phi_fu_2918_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_7_fu_10457_p2() {
    exitcond_3_7_fu_10457_p2 = (!ap_phi_mux_k_3_7_phi_fu_2942_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_3_7_phi_fu_2942_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_3_fu_8834_p2() {
    exitcond_3_fu_8834_p2 = (!ap_phi_mux_k_3_phi_fu_2813_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_3_phi_fu_2813_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_exitcond_fu_3001_p2() {
    exitcond_fu_3001_p2 = (!ap_phi_mux_k_phi_fu_2318_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_k_phi_fu_2318_p4.read() == ap_const_lv5_10);
}

void k2c_affine_matmul_3::thread_grp_fu_2949_p0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_3_7_reg_2925.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_3_6_reg_2901.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_3_5_reg_2877.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_3_4_reg_2853.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_3_reg_2796.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_2_7_reg_2760.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_2_6_reg_2736.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_2_5_reg_2712.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_2_4_reg_2688.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_2_reg_2631.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_1_7_reg_2595.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_1_6_reg_2571.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_1_5_reg_2547.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_1_4_reg_2523.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_1_reg_2466.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_0_7_reg_2430.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_0_6_reg_2406.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_0_5_reg_2382.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_0_4_reg_2358.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7.read(), ap_const_boolean_0))) {
        grp_fu_2949_p0 = sum1_reg_2301.read();
    } else {
        grp_fu_2949_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_3::thread_grp_fu_2973_p0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_269_reg_13758.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_261_reg_13647.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_253_reg_13536.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_236_reg_13425.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_187_reg_13146.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_244_reg_13022.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_227_reg_12911.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_219_reg_12800.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_203_reg_12689.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_108_reg_12412.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_211_reg_12288.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_195_reg_12177.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_170_reg_12066.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_138_reg_11955.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_70_reg_11677.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_153_reg_11553.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_122_reg_11442.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_93_reg_11331.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_81_reg_11220.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p0 = tmp_54_reg_10942.read();
    } else {
        grp_fu_2973_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_3::thread_grp_fu_2973_p1() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i19_reg_13763.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i18_reg_13652.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i17_reg_13541.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i15_reg_13430.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i7_reg_13151.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i16_reg_13027.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i14_reg_12916.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i13_reg_12805.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i11_reg_12694.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i9_reg_12417.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i12_reg_12293.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i10_reg_12182.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i5_reg_12071.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i2_reg_11960.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i3_reg_11682.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i4_reg_11558.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i1_reg_11447.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i8_reg_11336.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i6_reg_11225.read();
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2.read(), ap_const_boolean_0))) {
        grp_fu_2973_p1 = merge_i_reg_10947.read();
    } else {
        grp_fu_2973_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul_3::thread_i_33_1_fu_5253_p2() {
    i_33_1_fu_5253_p2 = (i_reg_2277.read() | ap_const_lv64_2);
}

void k2c_affine_matmul_3::thread_i_33_2_fu_7210_p2() {
    i_33_2_fu_7210_p2 = (i_reg_2277.read() | ap_const_lv64_3);
}

void k2c_affine_matmul_3::thread_i_33_3_fu_9183_p2() {
    i_33_3_fu_9183_p2 = (!i_reg_2277.read().is_01() || !ap_const_lv64_4.is_01())? sc_lv<64>(): (sc_biguint<64>(i_reg_2277.read()) + sc_biguint<64>(ap_const_lv64_4));
}

void k2c_affine_matmul_3::thread_i_33_s_fu_3340_p2() {
    i_33_s_fu_3340_p2 = (i_reg_2277.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_j_14_0_3_fu_3540_p2() {
    j_14_0_3_fu_3540_p2 = (tmp_100_reg_10842.read() | ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_j_14_0_4_fu_3878_p2() {
    j_14_0_4_fu_3878_p2 = (tmp_100_reg_10842.read() | ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_j_14_0_5_fu_4216_p2() {
    j_14_0_5_fu_4216_p2 = (tmp_100_reg_10842.read() | ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_j_14_0_6_fu_4554_p2() {
    j_14_0_6_fu_4554_p2 = (tmp_100_reg_10842.read() | ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_j_14_0_7_fu_4892_p2() {
    j_14_0_7_fu_4892_p2 = (!j_reg_2289.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(j_reg_2289.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_3::thread_j_14_0_s_fu_3328_p2() {
    j_14_0_s_fu_3328_p2 = (j_reg_2289.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_j_14_1_3_fu_5471_p2() {
    j_14_1_3_fu_5471_p2 = (tmp_130_reg_11577.read() | ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_j_14_1_4_fu_5815_p2() {
    j_14_1_4_fu_5815_p2 = (tmp_130_reg_11577.read() | ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_j_14_1_5_fu_6159_p2() {
    j_14_1_5_fu_6159_p2 = (tmp_130_reg_11577.read() | ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_j_14_1_6_fu_6503_p2() {
    j_14_1_6_fu_6503_p2 = (tmp_130_reg_11577.read() | ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_j_14_1_7_fu_6847_p2() {
    j_14_1_7_fu_6847_p2 = (!j_1_reg_2454.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(j_1_reg_2454.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_3::thread_j_14_1_s_fu_5241_p2() {
    j_14_1_s_fu_5241_p2 = (j_1_reg_2454.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_j_14_2_3_fu_7434_p2() {
    j_14_2_3_fu_7434_p2 = (tmp_291_reg_12312.read() | ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_j_14_2_4_fu_7780_p2() {
    j_14_2_4_fu_7780_p2 = (tmp_291_reg_12312.read() | ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_j_14_2_5_fu_8126_p2() {
    j_14_2_5_fu_8126_p2 = (tmp_291_reg_12312.read() | ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_j_14_2_6_fu_8472_p2() {
    j_14_2_6_fu_8472_p2 = (tmp_291_reg_12312.read() | ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_j_14_2_7_fu_8818_p2() {
    j_14_2_7_fu_8818_p2 = (!j_2_reg_2619.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(j_2_reg_2619.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_3::thread_j_14_2_s_fu_7198_p2() {
    j_14_2_s_fu_7198_p2 = (j_2_reg_2619.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_j_14_3_3_fu_9408_p2() {
    j_14_3_3_fu_9408_p2 = (tmp_315_reg_13046.read() | ap_const_lv4_4);
}

void k2c_affine_matmul_3::thread_j_14_3_4_fu_9756_p2() {
    j_14_3_4_fu_9756_p2 = (tmp_315_reg_13046.read() | ap_const_lv4_5);
}

void k2c_affine_matmul_3::thread_j_14_3_5_fu_10104_p2() {
    j_14_3_5_fu_10104_p2 = (tmp_315_reg_13046.read() | ap_const_lv4_6);
}

void k2c_affine_matmul_3::thread_j_14_3_6_fu_10452_p2() {
    j_14_3_6_fu_10452_p2 = (tmp_315_reg_13046.read() | ap_const_lv4_7);
}

void k2c_affine_matmul_3::thread_j_14_3_7_fu_10800_p2() {
    j_14_3_7_fu_10800_p2 = (!j_3_reg_2784.read().is_01() || !ap_const_lv64_8.is_01())? sc_lv<64>(): (sc_biguint<64>(j_3_reg_2784.read()) + sc_biguint<64>(ap_const_lv64_8));
}

void k2c_affine_matmul_3::thread_j_14_3_s_fu_9171_p2() {
    j_14_3_s_fu_9171_p2 = (j_3_reg_2784.read() | ap_const_lv64_1);
}

void k2c_affine_matmul_3::thread_k_2_0_1_fu_3357_p2() {
    k_2_0_1_fu_3357_p2 = (!k_0_1_reg_2325.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_1_reg_2325.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_0_2_fu_3420_p2() {
    k_2_0_2_fu_3420_p2 = (!k_0_2_reg_2336.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_2_reg_2336.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_0_3_fu_3483_p2() {
    k_2_0_3_fu_3483_p2 = (!k_0_3_reg_2347.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_0_3_reg_2347.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_0_4_fu_3551_p2() {
    k_2_0_4_fu_3551_p2 = (!ap_phi_mux_k_0_4_phi_fu_2375_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_0_4_phi_fu_2375_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_0_5_fu_3889_p2() {
    k_2_0_5_fu_3889_p2 = (!ap_phi_mux_k_0_5_phi_fu_2399_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_0_5_phi_fu_2399_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_0_6_fu_4227_p2() {
    k_2_0_6_fu_4227_p2 = (!ap_phi_mux_k_0_6_phi_fu_2423_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_0_6_phi_fu_2423_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_0_7_fu_4565_p2() {
    k_2_0_7_fu_4565_p2 = (!ap_phi_mux_k_0_7_phi_fu_2447_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_0_7_phi_fu_2447_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_1_fu_5270_p2() {
    k_2_1_1_fu_5270_p2 = (!k_1_1_reg_2490.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_1_1_reg_2490.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_2_fu_5339_p2() {
    k_2_1_2_fu_5339_p2 = (!k_1_2_reg_2501.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_1_2_reg_2501.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_3_fu_5408_p2() {
    k_2_1_3_fu_5408_p2 = (!k_1_3_reg_2512.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_1_3_reg_2512.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_4_fu_5482_p2() {
    k_2_1_4_fu_5482_p2 = (!ap_phi_mux_k_1_4_phi_fu_2540_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_1_4_phi_fu_2540_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_5_fu_5826_p2() {
    k_2_1_5_fu_5826_p2 = (!ap_phi_mux_k_1_5_phi_fu_2564_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_1_5_phi_fu_2564_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_6_fu_6170_p2() {
    k_2_1_6_fu_6170_p2 = (!ap_phi_mux_k_1_6_phi_fu_2588_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_1_6_phi_fu_2588_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_7_fu_6514_p2() {
    k_2_1_7_fu_6514_p2 = (!ap_phi_mux_k_1_7_phi_fu_2612_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_1_7_phi_fu_2612_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_1_fu_4914_p2() {
    k_2_1_fu_4914_p2 = (!ap_phi_mux_k_1_phi_fu_2483_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_1_phi_fu_2483_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_1_fu_7227_p2() {
    k_2_2_1_fu_7227_p2 = (!k_214_1_reg_2655.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_214_1_reg_2655.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_2_fu_7298_p2() {
    k_2_2_2_fu_7298_p2 = (!k_214_2_reg_2666.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_214_2_reg_2666.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_3_fu_7369_p2() {
    k_2_2_3_fu_7369_p2 = (!k_214_3_reg_2677.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_214_3_reg_2677.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_4_fu_7445_p2() {
    k_2_2_4_fu_7445_p2 = (!ap_phi_mux_k_214_4_phi_fu_2705_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_214_4_phi_fu_2705_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_5_fu_7791_p2() {
    k_2_2_5_fu_7791_p2 = (!ap_phi_mux_k_214_5_phi_fu_2729_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_214_5_phi_fu_2729_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_6_fu_8137_p2() {
    k_2_2_6_fu_8137_p2 = (!ap_phi_mux_k_214_6_phi_fu_2753_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_214_6_phi_fu_2753_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_7_fu_8483_p2() {
    k_2_2_7_fu_8483_p2 = (!ap_phi_mux_k_214_7_phi_fu_2777_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_214_7_phi_fu_2777_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_2_fu_6869_p2() {
    k_2_2_fu_6869_p2 = (!ap_phi_mux_k_s_phi_fu_2648_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_s_phi_fu_2648_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_1_fu_9195_p2() {
    k_2_3_1_fu_9195_p2 = (!k_3_1_reg_2820.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_3_1_reg_2820.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_2_fu_9268_p2() {
    k_2_3_2_fu_9268_p2 = (!k_3_2_reg_2831.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_3_2_reg_2831.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_3_fu_9341_p2() {
    k_2_3_3_fu_9341_p2 = (!k_3_3_reg_2842.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_3_3_reg_2842.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_4_fu_9419_p2() {
    k_2_3_4_fu_9419_p2 = (!ap_phi_mux_k_3_4_phi_fu_2870_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_3_4_phi_fu_2870_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_5_fu_9767_p2() {
    k_2_3_5_fu_9767_p2 = (!ap_phi_mux_k_3_5_phi_fu_2894_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_3_5_phi_fu_2894_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_6_fu_10115_p2() {
    k_2_3_6_fu_10115_p2 = (!ap_phi_mux_k_3_6_phi_fu_2918_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_3_6_phi_fu_2918_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_7_fu_10463_p2() {
    k_2_3_7_fu_10463_p2 = (!ap_phi_mux_k_3_7_phi_fu_2942_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_3_7_phi_fu_2942_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_3_fu_8840_p2() {
    k_2_3_fu_8840_p2 = (!ap_phi_mux_k_3_phi_fu_2813_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_3_phi_fu_2813_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_k_2_fu_3007_p2() {
    k_2_fu_3007_p2 = (!ap_phi_mux_k_phi_fu_2318_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ap_phi_mux_k_phi_fu_2318_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void k2c_affine_matmul_3::thread_merge_i10_fu_6495_p3() {
    merge_i10_fu_6495_p3 = (!tmp_202_fu_6489_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_202_fu_6489_p2.read()[0].to_bool())? tmp_639_i10_fu_6481_p3.read(): tmp_637_i10_fu_6463_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i11_fu_7772_p3() {
    merge_i11_fu_7772_p3 = (!tmp_210_fu_7766_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_210_fu_7766_p2.read()[0].to_bool())? tmp_639_i11_fu_7758_p3.read(): tmp_637_i11_fu_7740_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i12_fu_6839_p3() {
    merge_i12_fu_6839_p3 = (!tmp_218_fu_6833_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_218_fu_6833_p2.read()[0].to_bool())? tmp_639_i12_fu_6825_p3.read(): tmp_637_i12_fu_6807_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i13_fu_8118_p3() {
    merge_i13_fu_8118_p3 = (!tmp_226_fu_8112_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_226_fu_8112_p2.read()[0].to_bool())? tmp_639_i13_fu_8104_p3.read(): tmp_637_i13_fu_8086_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i14_fu_8464_p3() {
    merge_i14_fu_8464_p3 = (!tmp_235_fu_8458_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_235_fu_8458_p2.read()[0].to_bool())? tmp_639_i14_fu_8450_p3.read(): tmp_637_i14_fu_8432_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i15_fu_9748_p3() {
    merge_i15_fu_9748_p3 = (!tmp_243_fu_9742_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_243_fu_9742_p2.read()[0].to_bool())? tmp_639_i15_fu_9734_p3.read(): tmp_637_i15_fu_9716_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i16_fu_8810_p3() {
    merge_i16_fu_8810_p3 = (!tmp_252_fu_8804_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_252_fu_8804_p2.read()[0].to_bool())? tmp_639_i16_fu_8796_p3.read(): tmp_637_i16_fu_8778_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i17_fu_10096_p3() {
    merge_i17_fu_10096_p3 = (!tmp_260_fu_10090_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_260_fu_10090_p2.read()[0].to_bool())? tmp_639_i17_fu_10082_p3.read(): tmp_637_i17_fu_10064_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i18_fu_10444_p3() {
    merge_i18_fu_10444_p3 = (!tmp_268_fu_10438_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_268_fu_10438_p2.read()[0].to_bool())? tmp_639_i18_fu_10430_p3.read(): tmp_637_i18_fu_10412_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i19_fu_10792_p3() {
    merge_i19_fu_10792_p3 = (!tmp_277_fu_10786_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_277_fu_10786_p2.read()[0].to_bool())? tmp_639_i19_fu_10778_p3.read(): tmp_637_i19_fu_10760_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i1_fu_4546_p3() {
    merge_i1_fu_4546_p3 = (!tmp_137_fu_4540_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_137_fu_4540_p2.read()[0].to_bool())? tmp_639_i1_fu_4532_p3.read(): tmp_637_i1_fu_4514_p3.read());
}

void k2c_affine_matmul_3::thread_merge_i2_fu_5807_p3() {
    merge_i2_fu_5807_p3 = (!tmp_152_fu_5801_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_152_fu_5801_p2.read()[0].to_bool())? tmp_639_i2_fu_5793_p3.read(): tmp_637_i2_fu_5775_p3.read());
}

}

