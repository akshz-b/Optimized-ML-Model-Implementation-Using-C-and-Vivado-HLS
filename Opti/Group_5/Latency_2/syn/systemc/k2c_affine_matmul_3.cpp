#include "k2c_affine_matmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void k2c_affine_matmul::thread_A_0_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_0_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_0_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_0_ce0 = ap_const_logic_1;
    } else {
        A_0_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_1_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_1_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_1_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_1_ce0 = ap_const_logic_1;
    } else {
        A_1_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_2_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_2_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_2_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_2_ce0 = ap_const_logic_1;
    } else {
        A_2_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_3_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_3_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_3_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_3_ce0 = ap_const_logic_1;
    } else {
        A_3_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_4_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_4_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_4_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_4_ce0 = ap_const_logic_1;
    } else {
        A_4_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_5_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_5_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_5_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_5_ce0 = ap_const_logic_1;
    } else {
        A_5_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_6_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_6_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_6_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_6_ce0 = ap_const_logic_1;
    } else {
        A_6_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_A_7_address0() {
    if ((esl_seteq<1,1,1>(ap_enable_reg_pp31_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp31_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp31_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex315_cast_fu_7441_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp30_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp30_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp30_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex313_cast_fu_7341_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp29_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp29_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp29_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex309_cast_fu_7241_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp28_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp28_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp28_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex303_cast_fu_7141_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp27_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex297_cast_fu_7041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp26_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex289_cast_fu_6941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp25_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex279_cast_fu_6827_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp24_stage1.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex270_cast_fu_6711_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp23_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp23_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp23_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex311_cast_fu_6573_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp22_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp22_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp22_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex307_cast_fu_6479_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp21_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp21_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp21_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex301_cast_fu_6385_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp20_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp20_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp20_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex293_cast_fu_6291_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp19_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex283_cast_fu_6197_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp18_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex274_cast_fu_6103_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp17_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex265_cast_fu_5995_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp16_stage1.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex258_cast_fu_5887_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp15_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp15_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp15_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex305_cast_fu_5715_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp14_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp14_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp14_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex299_cast_fu_5615_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp13_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp13_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp13_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex291_cast_fu_5515_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp12_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp12_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp12_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex281_cast_fu_5415_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp11_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex272_cast_fu_5315_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp10_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex263_cast_fu_5215_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp9_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex256_cast_fu_5101_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp8_stage1.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex249_cast_fu_4990_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp7_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp7_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp7_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex295_cast_fu_4820_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp6_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp6_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp6_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex287_cast_fu_4726_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp5_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp5_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp5_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex277_cast_fu_4632_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp4_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex268_cast_fu_4538_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex261_cast_fu_4444_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex253_cast_fu_4350_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex246_cast_fu_4250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1.read(), ap_const_boolean_0))) {
        A_7_address0 =  (sc_lv<4>) (newIndex243_cast_fu_4150_p1.read());
    } else {
        A_7_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_A_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_enable_reg_pp1_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp2_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp3_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp9_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp9_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp9_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp10_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp10_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp10_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp11_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp11_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp11_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp17_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp17_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp17_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp18_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp18_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp18_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp19_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp19_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp19_stage0_11001.read(), ap_const_boolean_0)) || 
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
         (esl_seteq<1,1,1>(ap_enable_reg_pp25_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp25_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp25_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp26_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp26_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp26_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp27_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp27_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp27_stage0_11001.read(), ap_const_boolean_0)) || 
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
          esl_seteq<1,1,1>(ap_block_pp31_stage0_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp8_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp8_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp8_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp16_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp16_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp16_stage1_11001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_enable_reg_pp24_iter0.read(), ap_const_logic_1) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp24_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp24_stage1_11001.read(), ap_const_boolean_0)))) {
        A_7_ce0 = ap_const_logic_1;
    } else {
        A_7_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        C_0_address0 =  (sc_lv<4>) (newIndex97_cast_fu_6787_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        C_0_address0 =  (sc_lv<4>) (newIndex185_cast_fu_5955_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        C_0_address0 =  (sc_lv<4>) (newIndex248_cast_fu_5051_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C_0_address0 =  (sc_lv<4>) (newIndex242_cast_fu_4210_p1.read());
    } else {
        C_0_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()))) {
        C_0_ce0 = ap_const_logic_1;
    } else {
        C_0_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read())) {
        C_0_d0 = sum1_3_reg_3699.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read())) {
        C_0_d0 = sum1_2_reg_3511.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read())) {
        C_0_d0 = sum1_1_reg_3323.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        C_0_d0 = sum1_reg_3135.read();
    } else {
        C_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state159.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state298.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state436.read()))) {
        C_0_we0 = ap_const_logic_1;
    } else {
        C_0_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read())) {
        C_1_address0 =  (sc_lv<4>) (newIndex86_cast_fu_6901_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        C_1_address0 =  (sc_lv<4>) (newIndex174_cast_fu_6063_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C_1_address0 =  (sc_lv<4>) (newIndex255_cast_fu_5175_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        C_1_address0 =  (sc_lv<4>) (newIndex245_cast_fu_4310_p1.read());
    } else {
        C_1_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()))) {
        C_1_ce0 = ap_const_logic_1;
    } else {
        C_1_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read())) {
        C_1_d0 = sum1_3_1_reg_3721.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read())) {
        C_1_d0 = sum1_2_1_reg_3533.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read())) {
        C_1_d0 = sum1_1_1_reg_3345.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read())) {
        C_1_d0 = sum1_0_1_reg_3157.read();
    } else {
        C_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state315.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state453.read()))) {
        C_1_we0 = ap_const_logic_1;
    } else {
        C_1_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        C_2_address0 =  (sc_lv<4>) (newIndex86_cast_reg_9850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        C_2_address0 =  (sc_lv<4>) (newIndex174_cast_reg_9159.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        C_2_address0 =  (sc_lv<4>) (newIndex255_cast_reg_8458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        C_2_address0 =  (sc_lv<4>) (newIndex245_cast_reg_7751.read());
    } else {
        C_2_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()))) {
        C_2_ce0 = ap_const_logic_1;
    } else {
        C_2_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read())) {
        C_2_d0 = sum1_3_2_reg_3743.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read())) {
        C_2_d0 = sum1_2_2_reg_3555.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read())) {
        C_2_d0 = sum1_1_2_reg_3367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        C_2_d0 = sum1_0_2_reg_3179.read();
    } else {
        C_2_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state194.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state332.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state470.read()))) {
        C_2_we0 = ap_const_logic_1;
    } else {
        C_2_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read())) {
        C_3_address0 =  (sc_lv<4>) (newIndex86_cast_reg_9850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read())) {
        C_3_address0 =  (sc_lv<4>) (newIndex174_cast_reg_9159.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        C_3_address0 =  (sc_lv<4>) (newIndex255_cast_reg_8458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        C_3_address0 =  (sc_lv<4>) (newIndex245_cast_reg_7751.read());
    } else {
        C_3_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()))) {
        C_3_ce0 = ap_const_logic_1;
    } else {
        C_3_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read())) {
        C_3_d0 = sum1_3_3_reg_3765.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read())) {
        C_3_d0 = sum1_2_3_reg_3577.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read())) {
        C_3_d0 = sum1_1_3_reg_3389.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        C_3_d0 = sum1_0_3_reg_3201.read();
    } else {
        C_3_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state211.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state349.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state487.read()))) {
        C_3_we0 = ap_const_logic_1;
    } else {
        C_3_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read())) {
        C_4_address0 =  (sc_lv<4>) (newIndex86_cast_reg_9850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        C_4_address0 =  (sc_lv<4>) (newIndex174_cast_reg_9159.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        C_4_address0 =  (sc_lv<4>) (newIndex255_cast_reg_8458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        C_4_address0 =  (sc_lv<4>) (newIndex245_cast_reg_7751.read());
    } else {
        C_4_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        C_4_ce0 = ap_const_logic_1;
    } else {
        C_4_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read())) {
        C_4_d0 = sum1_3_4_reg_3787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read())) {
        C_4_d0 = sum1_2_4_reg_3599.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read())) {
        C_4_d0 = sum1_1_4_reg_3411.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read())) {
        C_4_d0 = sum1_0_4_reg_3223.read();
    } else {
        C_4_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state90.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state228.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state366.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state504.read()))) {
        C_4_we0 = ap_const_logic_1;
    } else {
        C_4_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read())) {
        C_5_address0 =  (sc_lv<4>) (newIndex86_cast_reg_9850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        C_5_address0 =  (sc_lv<4>) (newIndex174_cast_reg_9159.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        C_5_address0 =  (sc_lv<4>) (newIndex255_cast_reg_8458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        C_5_address0 =  (sc_lv<4>) (newIndex245_cast_reg_7751.read());
    } else {
        C_5_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()))) {
        C_5_ce0 = ap_const_logic_1;
    } else {
        C_5_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read())) {
        C_5_d0 = sum1_3_5_reg_3809.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read())) {
        C_5_d0 = sum1_2_5_reg_3621.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read())) {
        C_5_d0 = sum1_1_5_reg_3433.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read())) {
        C_5_d0 = sum1_0_5_reg_3245.read();
    } else {
        C_5_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state107.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state245.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state383.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state521.read()))) {
        C_5_we0 = ap_const_logic_1;
    } else {
        C_5_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        C_6_address0 =  (sc_lv<4>) (newIndex86_cast_reg_9850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read())) {
        C_6_address0 =  (sc_lv<4>) (newIndex174_cast_reg_9159.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        C_6_address0 =  (sc_lv<4>) (newIndex255_cast_reg_8458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        C_6_address0 =  (sc_lv<4>) (newIndex245_cast_reg_7751.read());
    } else {
        C_6_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read()))) {
        C_6_ce0 = ap_const_logic_1;
    } else {
        C_6_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read())) {
        C_6_d0 = sum1_3_6_reg_3831.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read())) {
        C_6_d0 = sum1_2_6_reg_3643.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        C_6_d0 = sum1_1_6_reg_3455.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        C_6_d0 = sum1_0_6_reg_3267.read();
    } else {
        C_6_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state400.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state538.read()))) {
        C_6_we0 = ap_const_logic_1;
    } else {
        C_6_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_7_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read())) {
        C_7_address0 =  (sc_lv<4>) (newIndex86_cast_reg_9850.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
        C_7_address0 =  (sc_lv<4>) (newIndex174_cast_reg_9159.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state278.read())) {
        C_7_address0 =  (sc_lv<4>) (newIndex255_cast_reg_8458.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        C_7_address0 =  (sc_lv<4>) (newIndex245_cast_reg_7751.read());
    } else {
        C_7_address0 = "XXXX";
    }
}

void k2c_affine_matmul::thread_C_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state278.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read()))) {
        C_7_ce0 = ap_const_logic_1;
    } else {
        C_7_ce0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_C_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read())) {
        C_7_d0 = sum1_3_7_reg_3853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read())) {
        C_7_d0 = sum1_2_7_reg_3665.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state278.read())) {
        C_7_d0 = sum1_1_7_reg_3477.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read())) {
        C_7_d0 = sum1_0_7_reg_3289.read();
    } else {
        C_7_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void k2c_affine_matmul::thread_C_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state140.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state278.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state416.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read()))) {
        C_7_we0 = ap_const_logic_1;
    } else {
        C_7_we0 = ap_const_logic_0;
    }
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[4];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[5];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[6];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[7];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[11];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp10_stage0() {
    ap_CS_fsm_pp10_stage0 = ap_CS_fsm.read()[105];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp10_stage1() {
    ap_CS_fsm_pp10_stage1 = ap_CS_fsm.read()[106];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp10_stage2() {
    ap_CS_fsm_pp10_stage2 = ap_CS_fsm.read()[107];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp10_stage6() {
    ap_CS_fsm_pp10_stage6 = ap_CS_fsm.read()[111];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp10_stage7() {
    ap_CS_fsm_pp10_stage7 = ap_CS_fsm.read()[112];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp11_stage0() {
    ap_CS_fsm_pp11_stage0 = ap_CS_fsm.read()[115];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp11_stage1() {
    ap_CS_fsm_pp11_stage1 = ap_CS_fsm.read()[116];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp11_stage2() {
    ap_CS_fsm_pp11_stage2 = ap_CS_fsm.read()[117];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp11_stage6() {
    ap_CS_fsm_pp11_stage6 = ap_CS_fsm.read()[121];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp11_stage7() {
    ap_CS_fsm_pp11_stage7 = ap_CS_fsm.read()[122];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp12_stage0() {
    ap_CS_fsm_pp12_stage0 = ap_CS_fsm.read()[125];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp12_stage1() {
    ap_CS_fsm_pp12_stage1 = ap_CS_fsm.read()[126];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp12_stage2() {
    ap_CS_fsm_pp12_stage2 = ap_CS_fsm.read()[127];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp12_stage6() {
    ap_CS_fsm_pp12_stage6 = ap_CS_fsm.read()[131];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp12_stage7() {
    ap_CS_fsm_pp12_stage7 = ap_CS_fsm.read()[132];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp13_stage0() {
    ap_CS_fsm_pp13_stage0 = ap_CS_fsm.read()[135];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp13_stage1() {
    ap_CS_fsm_pp13_stage1 = ap_CS_fsm.read()[136];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp13_stage2() {
    ap_CS_fsm_pp13_stage2 = ap_CS_fsm.read()[137];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp13_stage6() {
    ap_CS_fsm_pp13_stage6 = ap_CS_fsm.read()[141];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp13_stage7() {
    ap_CS_fsm_pp13_stage7 = ap_CS_fsm.read()[142];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp14_stage0() {
    ap_CS_fsm_pp14_stage0 = ap_CS_fsm.read()[145];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp14_stage1() {
    ap_CS_fsm_pp14_stage1 = ap_CS_fsm.read()[146];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp14_stage2() {
    ap_CS_fsm_pp14_stage2 = ap_CS_fsm.read()[147];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp14_stage6() {
    ap_CS_fsm_pp14_stage6 = ap_CS_fsm.read()[151];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp14_stage7() {
    ap_CS_fsm_pp14_stage7 = ap_CS_fsm.read()[152];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp15_stage0() {
    ap_CS_fsm_pp15_stage0 = ap_CS_fsm.read()[155];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp15_stage1() {
    ap_CS_fsm_pp15_stage1 = ap_CS_fsm.read()[156];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp15_stage2() {
    ap_CS_fsm_pp15_stage2 = ap_CS_fsm.read()[157];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp15_stage6() {
    ap_CS_fsm_pp15_stage6 = ap_CS_fsm.read()[161];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp15_stage7() {
    ap_CS_fsm_pp15_stage7 = ap_CS_fsm.read()[162];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp16_stage0() {
    ap_CS_fsm_pp16_stage0 = ap_CS_fsm.read()[166];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp16_stage1() {
    ap_CS_fsm_pp16_stage1 = ap_CS_fsm.read()[167];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp16_stage2() {
    ap_CS_fsm_pp16_stage2 = ap_CS_fsm.read()[168];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp16_stage3() {
    ap_CS_fsm_pp16_stage3 = ap_CS_fsm.read()[169];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp16_stage7() {
    ap_CS_fsm_pp16_stage7 = ap_CS_fsm.read()[173];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp17_stage0() {
    ap_CS_fsm_pp17_stage0 = ap_CS_fsm.read()[176];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp17_stage1() {
    ap_CS_fsm_pp17_stage1 = ap_CS_fsm.read()[177];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp17_stage2() {
    ap_CS_fsm_pp17_stage2 = ap_CS_fsm.read()[178];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp17_stage6() {
    ap_CS_fsm_pp17_stage6 = ap_CS_fsm.read()[182];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp17_stage7() {
    ap_CS_fsm_pp17_stage7 = ap_CS_fsm.read()[183];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp18_stage0() {
    ap_CS_fsm_pp18_stage0 = ap_CS_fsm.read()[186];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp18_stage1() {
    ap_CS_fsm_pp18_stage1 = ap_CS_fsm.read()[187];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp18_stage2() {
    ap_CS_fsm_pp18_stage2 = ap_CS_fsm.read()[188];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp18_stage6() {
    ap_CS_fsm_pp18_stage6 = ap_CS_fsm.read()[192];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp18_stage7() {
    ap_CS_fsm_pp18_stage7 = ap_CS_fsm.read()[193];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp19_stage0() {
    ap_CS_fsm_pp19_stage0 = ap_CS_fsm.read()[196];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp19_stage1() {
    ap_CS_fsm_pp19_stage1 = ap_CS_fsm.read()[197];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp19_stage2() {
    ap_CS_fsm_pp19_stage2 = ap_CS_fsm.read()[198];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp19_stage6() {
    ap_CS_fsm_pp19_stage6 = ap_CS_fsm.read()[202];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp19_stage7() {
    ap_CS_fsm_pp19_stage7 = ap_CS_fsm.read()[203];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[14];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp1_stage1() {
    ap_CS_fsm_pp1_stage1 = ap_CS_fsm.read()[15];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp1_stage2() {
    ap_CS_fsm_pp1_stage2 = ap_CS_fsm.read()[16];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp1_stage6() {
    ap_CS_fsm_pp1_stage6 = ap_CS_fsm.read()[20];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp1_stage7() {
    ap_CS_fsm_pp1_stage7 = ap_CS_fsm.read()[21];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp20_stage0() {
    ap_CS_fsm_pp20_stage0 = ap_CS_fsm.read()[206];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp20_stage1() {
    ap_CS_fsm_pp20_stage1 = ap_CS_fsm.read()[207];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp20_stage2() {
    ap_CS_fsm_pp20_stage2 = ap_CS_fsm.read()[208];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp20_stage6() {
    ap_CS_fsm_pp20_stage6 = ap_CS_fsm.read()[212];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp20_stage7() {
    ap_CS_fsm_pp20_stage7 = ap_CS_fsm.read()[213];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp21_stage0() {
    ap_CS_fsm_pp21_stage0 = ap_CS_fsm.read()[216];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp21_stage1() {
    ap_CS_fsm_pp21_stage1 = ap_CS_fsm.read()[217];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp21_stage2() {
    ap_CS_fsm_pp21_stage2 = ap_CS_fsm.read()[218];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp21_stage6() {
    ap_CS_fsm_pp21_stage6 = ap_CS_fsm.read()[222];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp21_stage7() {
    ap_CS_fsm_pp21_stage7 = ap_CS_fsm.read()[223];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp22_stage0() {
    ap_CS_fsm_pp22_stage0 = ap_CS_fsm.read()[226];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp22_stage1() {
    ap_CS_fsm_pp22_stage1 = ap_CS_fsm.read()[227];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp22_stage2() {
    ap_CS_fsm_pp22_stage2 = ap_CS_fsm.read()[228];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp22_stage6() {
    ap_CS_fsm_pp22_stage6 = ap_CS_fsm.read()[232];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp22_stage7() {
    ap_CS_fsm_pp22_stage7 = ap_CS_fsm.read()[233];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp23_stage0() {
    ap_CS_fsm_pp23_stage0 = ap_CS_fsm.read()[236];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp23_stage1() {
    ap_CS_fsm_pp23_stage1 = ap_CS_fsm.read()[237];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp23_stage2() {
    ap_CS_fsm_pp23_stage2 = ap_CS_fsm.read()[238];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp23_stage6() {
    ap_CS_fsm_pp23_stage6 = ap_CS_fsm.read()[242];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp23_stage7() {
    ap_CS_fsm_pp23_stage7 = ap_CS_fsm.read()[243];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp24_stage0() {
    ap_CS_fsm_pp24_stage0 = ap_CS_fsm.read()[247];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp24_stage1() {
    ap_CS_fsm_pp24_stage1 = ap_CS_fsm.read()[248];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp24_stage2() {
    ap_CS_fsm_pp24_stage2 = ap_CS_fsm.read()[249];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp24_stage3() {
    ap_CS_fsm_pp24_stage3 = ap_CS_fsm.read()[250];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp24_stage7() {
    ap_CS_fsm_pp24_stage7 = ap_CS_fsm.read()[254];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp25_stage0() {
    ap_CS_fsm_pp25_stage0 = ap_CS_fsm.read()[257];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp25_stage1() {
    ap_CS_fsm_pp25_stage1 = ap_CS_fsm.read()[258];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp25_stage2() {
    ap_CS_fsm_pp25_stage2 = ap_CS_fsm.read()[259];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp25_stage6() {
    ap_CS_fsm_pp25_stage6 = ap_CS_fsm.read()[263];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp25_stage7() {
    ap_CS_fsm_pp25_stage7 = ap_CS_fsm.read()[264];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp26_stage0() {
    ap_CS_fsm_pp26_stage0 = ap_CS_fsm.read()[267];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp26_stage1() {
    ap_CS_fsm_pp26_stage1 = ap_CS_fsm.read()[268];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp26_stage2() {
    ap_CS_fsm_pp26_stage2 = ap_CS_fsm.read()[269];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp26_stage6() {
    ap_CS_fsm_pp26_stage6 = ap_CS_fsm.read()[273];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp26_stage7() {
    ap_CS_fsm_pp26_stage7 = ap_CS_fsm.read()[274];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp27_stage0() {
    ap_CS_fsm_pp27_stage0 = ap_CS_fsm.read()[277];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp27_stage1() {
    ap_CS_fsm_pp27_stage1 = ap_CS_fsm.read()[278];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp27_stage2() {
    ap_CS_fsm_pp27_stage2 = ap_CS_fsm.read()[279];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp27_stage6() {
    ap_CS_fsm_pp27_stage6 = ap_CS_fsm.read()[283];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp27_stage7() {
    ap_CS_fsm_pp27_stage7 = ap_CS_fsm.read()[284];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp28_stage0() {
    ap_CS_fsm_pp28_stage0 = ap_CS_fsm.read()[287];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp28_stage1() {
    ap_CS_fsm_pp28_stage1 = ap_CS_fsm.read()[288];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp28_stage2() {
    ap_CS_fsm_pp28_stage2 = ap_CS_fsm.read()[289];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp28_stage6() {
    ap_CS_fsm_pp28_stage6 = ap_CS_fsm.read()[293];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp28_stage7() {
    ap_CS_fsm_pp28_stage7 = ap_CS_fsm.read()[294];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp29_stage0() {
    ap_CS_fsm_pp29_stage0 = ap_CS_fsm.read()[297];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp29_stage1() {
    ap_CS_fsm_pp29_stage1 = ap_CS_fsm.read()[298];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp29_stage2() {
    ap_CS_fsm_pp29_stage2 = ap_CS_fsm.read()[299];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp29_stage6() {
    ap_CS_fsm_pp29_stage6 = ap_CS_fsm.read()[303];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp29_stage7() {
    ap_CS_fsm_pp29_stage7 = ap_CS_fsm.read()[304];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[24];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp2_stage1() {
    ap_CS_fsm_pp2_stage1 = ap_CS_fsm.read()[25];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp2_stage2() {
    ap_CS_fsm_pp2_stage2 = ap_CS_fsm.read()[26];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp2_stage6() {
    ap_CS_fsm_pp2_stage6 = ap_CS_fsm.read()[30];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp2_stage7() {
    ap_CS_fsm_pp2_stage7 = ap_CS_fsm.read()[31];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp30_stage0() {
    ap_CS_fsm_pp30_stage0 = ap_CS_fsm.read()[307];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp30_stage1() {
    ap_CS_fsm_pp30_stage1 = ap_CS_fsm.read()[308];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp30_stage2() {
    ap_CS_fsm_pp30_stage2 = ap_CS_fsm.read()[309];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp30_stage6() {
    ap_CS_fsm_pp30_stage6 = ap_CS_fsm.read()[313];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp30_stage7() {
    ap_CS_fsm_pp30_stage7 = ap_CS_fsm.read()[314];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp31_stage0() {
    ap_CS_fsm_pp31_stage0 = ap_CS_fsm.read()[317];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp31_stage1() {
    ap_CS_fsm_pp31_stage1 = ap_CS_fsm.read()[318];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp31_stage2() {
    ap_CS_fsm_pp31_stage2 = ap_CS_fsm.read()[319];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp31_stage6() {
    ap_CS_fsm_pp31_stage6 = ap_CS_fsm.read()[323];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp31_stage7() {
    ap_CS_fsm_pp31_stage7 = ap_CS_fsm.read()[324];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[34];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp3_stage1() {
    ap_CS_fsm_pp3_stage1 = ap_CS_fsm.read()[35];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp3_stage2() {
    ap_CS_fsm_pp3_stage2 = ap_CS_fsm.read()[36];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp3_stage6() {
    ap_CS_fsm_pp3_stage6 = ap_CS_fsm.read()[40];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp3_stage7() {
    ap_CS_fsm_pp3_stage7 = ap_CS_fsm.read()[41];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[44];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp4_stage1() {
    ap_CS_fsm_pp4_stage1 = ap_CS_fsm.read()[45];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp4_stage2() {
    ap_CS_fsm_pp4_stage2 = ap_CS_fsm.read()[46];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp4_stage6() {
    ap_CS_fsm_pp4_stage6 = ap_CS_fsm.read()[50];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp4_stage7() {
    ap_CS_fsm_pp4_stage7 = ap_CS_fsm.read()[51];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp5_stage0() {
    ap_CS_fsm_pp5_stage0 = ap_CS_fsm.read()[54];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp5_stage1() {
    ap_CS_fsm_pp5_stage1 = ap_CS_fsm.read()[55];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp5_stage2() {
    ap_CS_fsm_pp5_stage2 = ap_CS_fsm.read()[56];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp5_stage6() {
    ap_CS_fsm_pp5_stage6 = ap_CS_fsm.read()[60];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp5_stage7() {
    ap_CS_fsm_pp5_stage7 = ap_CS_fsm.read()[61];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp6_stage0() {
    ap_CS_fsm_pp6_stage0 = ap_CS_fsm.read()[64];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp6_stage1() {
    ap_CS_fsm_pp6_stage1 = ap_CS_fsm.read()[65];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp6_stage2() {
    ap_CS_fsm_pp6_stage2 = ap_CS_fsm.read()[66];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp6_stage6() {
    ap_CS_fsm_pp6_stage6 = ap_CS_fsm.read()[70];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp6_stage7() {
    ap_CS_fsm_pp6_stage7 = ap_CS_fsm.read()[71];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp7_stage0() {
    ap_CS_fsm_pp7_stage0 = ap_CS_fsm.read()[74];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp7_stage1() {
    ap_CS_fsm_pp7_stage1 = ap_CS_fsm.read()[75];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp7_stage2() {
    ap_CS_fsm_pp7_stage2 = ap_CS_fsm.read()[76];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp7_stage6() {
    ap_CS_fsm_pp7_stage6 = ap_CS_fsm.read()[80];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp7_stage7() {
    ap_CS_fsm_pp7_stage7 = ap_CS_fsm.read()[81];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp8_stage0() {
    ap_CS_fsm_pp8_stage0 = ap_CS_fsm.read()[85];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp8_stage1() {
    ap_CS_fsm_pp8_stage1 = ap_CS_fsm.read()[86];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp8_stage2() {
    ap_CS_fsm_pp8_stage2 = ap_CS_fsm.read()[87];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp8_stage3() {
    ap_CS_fsm_pp8_stage3 = ap_CS_fsm.read()[88];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp8_stage7() {
    ap_CS_fsm_pp8_stage7 = ap_CS_fsm.read()[92];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp9_stage0() {
    ap_CS_fsm_pp9_stage0 = ap_CS_fsm.read()[95];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp9_stage1() {
    ap_CS_fsm_pp9_stage1 = ap_CS_fsm.read()[96];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp9_stage2() {
    ap_CS_fsm_pp9_stage2 = ap_CS_fsm.read()[97];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp9_stage6() {
    ap_CS_fsm_pp9_stage6 = ap_CS_fsm.read()[101];
}

void k2c_affine_matmul::thread_ap_CS_fsm_pp9_stage7() {
    ap_CS_fsm_pp9_stage7 = ap_CS_fsm.read()[102];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state106() {
    ap_CS_fsm_state106 = ap_CS_fsm.read()[62];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state107() {
    ap_CS_fsm_state107 = ap_CS_fsm.read()[63];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state123() {
    ap_CS_fsm_state123 = ap_CS_fsm.read()[72];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state124() {
    ap_CS_fsm_state124 = ap_CS_fsm.read()[73];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state140() {
    ap_CS_fsm_state140 = ap_CS_fsm.read()[82];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state141() {
    ap_CS_fsm_state141 = ap_CS_fsm.read()[83];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state142() {
    ap_CS_fsm_state142 = ap_CS_fsm.read()[84];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state159() {
    ap_CS_fsm_state159 = ap_CS_fsm.read()[93];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state160() {
    ap_CS_fsm_state160 = ap_CS_fsm.read()[94];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state176() {
    ap_CS_fsm_state176 = ap_CS_fsm.read()[103];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state177() {
    ap_CS_fsm_state177 = ap_CS_fsm.read()[104];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state193() {
    ap_CS_fsm_state193 = ap_CS_fsm.read()[113];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state194() {
    ap_CS_fsm_state194 = ap_CS_fsm.read()[114];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[12];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state210() {
    ap_CS_fsm_state210 = ap_CS_fsm.read()[123];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state211() {
    ap_CS_fsm_state211 = ap_CS_fsm.read()[124];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[13];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state227() {
    ap_CS_fsm_state227 = ap_CS_fsm.read()[133];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state228() {
    ap_CS_fsm_state228 = ap_CS_fsm.read()[134];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state244() {
    ap_CS_fsm_state244 = ap_CS_fsm.read()[143];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state245() {
    ap_CS_fsm_state245 = ap_CS_fsm.read()[144];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state261() {
    ap_CS_fsm_state261 = ap_CS_fsm.read()[153];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state262() {
    ap_CS_fsm_state262 = ap_CS_fsm.read()[154];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state278() {
    ap_CS_fsm_state278 = ap_CS_fsm.read()[163];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state279() {
    ap_CS_fsm_state279 = ap_CS_fsm.read()[164];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state280() {
    ap_CS_fsm_state280 = ap_CS_fsm.read()[165];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state297() {
    ap_CS_fsm_state297 = ap_CS_fsm.read()[174];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state298() {
    ap_CS_fsm_state298 = ap_CS_fsm.read()[175];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state314() {
    ap_CS_fsm_state314 = ap_CS_fsm.read()[184];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state315() {
    ap_CS_fsm_state315 = ap_CS_fsm.read()[185];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state331() {
    ap_CS_fsm_state331 = ap_CS_fsm.read()[194];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state332() {
    ap_CS_fsm_state332 = ap_CS_fsm.read()[195];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state348() {
    ap_CS_fsm_state348 = ap_CS_fsm.read()[204];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state349() {
    ap_CS_fsm_state349 = ap_CS_fsm.read()[205];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state365() {
    ap_CS_fsm_state365 = ap_CS_fsm.read()[214];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state366() {
    ap_CS_fsm_state366 = ap_CS_fsm.read()[215];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[22];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state382() {
    ap_CS_fsm_state382 = ap_CS_fsm.read()[224];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state383() {
    ap_CS_fsm_state383 = ap_CS_fsm.read()[225];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[23];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state399() {
    ap_CS_fsm_state399 = ap_CS_fsm.read()[234];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state400() {
    ap_CS_fsm_state400 = ap_CS_fsm.read()[235];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state416() {
    ap_CS_fsm_state416 = ap_CS_fsm.read()[244];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state417() {
    ap_CS_fsm_state417 = ap_CS_fsm.read()[245];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state418() {
    ap_CS_fsm_state418 = ap_CS_fsm.read()[246];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state435() {
    ap_CS_fsm_state435 = ap_CS_fsm.read()[255];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state436() {
    ap_CS_fsm_state436 = ap_CS_fsm.read()[256];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state452() {
    ap_CS_fsm_state452 = ap_CS_fsm.read()[265];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state453() {
    ap_CS_fsm_state453 = ap_CS_fsm.read()[266];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state469() {
    ap_CS_fsm_state469 = ap_CS_fsm.read()[275];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state470() {
    ap_CS_fsm_state470 = ap_CS_fsm.read()[276];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state486() {
    ap_CS_fsm_state486 = ap_CS_fsm.read()[285];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state487() {
    ap_CS_fsm_state487 = ap_CS_fsm.read()[286];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state503() {
    ap_CS_fsm_state503 = ap_CS_fsm.read()[295];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state504() {
    ap_CS_fsm_state504 = ap_CS_fsm.read()[296];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state520() {
    ap_CS_fsm_state520 = ap_CS_fsm.read()[305];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state521() {
    ap_CS_fsm_state521 = ap_CS_fsm.read()[306];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state537() {
    ap_CS_fsm_state537 = ap_CS_fsm.read()[315];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state538() {
    ap_CS_fsm_state538 = ap_CS_fsm.read()[316];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[32];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state554() {
    ap_CS_fsm_state554 = ap_CS_fsm.read()[325];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[33];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state72() {
    ap_CS_fsm_state72 = ap_CS_fsm.read()[42];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[43];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state89() {
    ap_CS_fsm_state89 = ap_CS_fsm.read()[52];
}

void k2c_affine_matmul::thread_ap_CS_fsm_state90() {
    ap_CS_fsm_state90 = ap_CS_fsm.read()[53];
}

void k2c_affine_matmul::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage2() {
    ap_block_pp0_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage2_11001() {
    ap_block_pp0_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage2_subdone() {
    ap_block_pp0_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage3() {
    ap_block_pp0_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage3_subdone() {
    ap_block_pp0_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage4_subdone() {
    ap_block_pp0_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage5_subdone() {
    ap_block_pp0_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage6_subdone() {
    ap_block_pp0_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage7_11001() {
    ap_block_pp0_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp0_stage7_subdone() {
    ap_block_pp0_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage0() {
    ap_block_pp10_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage0_11001() {
    ap_block_pp10_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage0_subdone() {
    ap_block_pp10_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage1() {
    ap_block_pp10_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage1_11001() {
    ap_block_pp10_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage1_subdone() {
    ap_block_pp10_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage2() {
    ap_block_pp10_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage2_subdone() {
    ap_block_pp10_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage3_subdone() {
    ap_block_pp10_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage4_subdone() {
    ap_block_pp10_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage5_subdone() {
    ap_block_pp10_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage6_11001() {
    ap_block_pp10_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage6_subdone() {
    ap_block_pp10_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage7() {
    ap_block_pp10_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp10_stage7_subdone() {
    ap_block_pp10_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage0() {
    ap_block_pp11_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage0_11001() {
    ap_block_pp11_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage0_subdone() {
    ap_block_pp11_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage1() {
    ap_block_pp11_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage1_11001() {
    ap_block_pp11_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage1_subdone() {
    ap_block_pp11_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage2() {
    ap_block_pp11_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage2_subdone() {
    ap_block_pp11_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage3_subdone() {
    ap_block_pp11_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage4_subdone() {
    ap_block_pp11_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage5_subdone() {
    ap_block_pp11_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage6_11001() {
    ap_block_pp11_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage6_subdone() {
    ap_block_pp11_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage7() {
    ap_block_pp11_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp11_stage7_subdone() {
    ap_block_pp11_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage0() {
    ap_block_pp12_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage0_11001() {
    ap_block_pp12_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage0_subdone() {
    ap_block_pp12_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage1() {
    ap_block_pp12_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage1_11001() {
    ap_block_pp12_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage1_subdone() {
    ap_block_pp12_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage2() {
    ap_block_pp12_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage2_subdone() {
    ap_block_pp12_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage3_subdone() {
    ap_block_pp12_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage4_subdone() {
    ap_block_pp12_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage5_subdone() {
    ap_block_pp12_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage6_11001() {
    ap_block_pp12_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage6_subdone() {
    ap_block_pp12_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage7() {
    ap_block_pp12_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp12_stage7_subdone() {
    ap_block_pp12_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage0() {
    ap_block_pp13_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage0_11001() {
    ap_block_pp13_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage0_subdone() {
    ap_block_pp13_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage1() {
    ap_block_pp13_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage1_11001() {
    ap_block_pp13_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage1_subdone() {
    ap_block_pp13_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage2() {
    ap_block_pp13_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage2_subdone() {
    ap_block_pp13_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage3_subdone() {
    ap_block_pp13_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage4_subdone() {
    ap_block_pp13_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage5_subdone() {
    ap_block_pp13_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage6_11001() {
    ap_block_pp13_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage6_subdone() {
    ap_block_pp13_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage7() {
    ap_block_pp13_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp13_stage7_subdone() {
    ap_block_pp13_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage0() {
    ap_block_pp14_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage0_11001() {
    ap_block_pp14_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage0_subdone() {
    ap_block_pp14_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage1() {
    ap_block_pp14_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage1_11001() {
    ap_block_pp14_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage1_subdone() {
    ap_block_pp14_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage2() {
    ap_block_pp14_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage2_subdone() {
    ap_block_pp14_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage3_subdone() {
    ap_block_pp14_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage4_subdone() {
    ap_block_pp14_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage5_subdone() {
    ap_block_pp14_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage6_11001() {
    ap_block_pp14_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage6_subdone() {
    ap_block_pp14_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage7() {
    ap_block_pp14_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp14_stage7_subdone() {
    ap_block_pp14_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage0() {
    ap_block_pp15_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage0_11001() {
    ap_block_pp15_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage0_subdone() {
    ap_block_pp15_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage1() {
    ap_block_pp15_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage1_11001() {
    ap_block_pp15_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage1_subdone() {
    ap_block_pp15_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage2() {
    ap_block_pp15_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage2_subdone() {
    ap_block_pp15_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage3_subdone() {
    ap_block_pp15_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage4_subdone() {
    ap_block_pp15_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage5_subdone() {
    ap_block_pp15_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage6_11001() {
    ap_block_pp15_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage6_subdone() {
    ap_block_pp15_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage7() {
    ap_block_pp15_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp15_stage7_subdone() {
    ap_block_pp15_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage0() {
    ap_block_pp16_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage0_11001() {
    ap_block_pp16_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage0_subdone() {
    ap_block_pp16_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage1() {
    ap_block_pp16_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage1_11001() {
    ap_block_pp16_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage1_subdone() {
    ap_block_pp16_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage2() {
    ap_block_pp16_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage2_11001() {
    ap_block_pp16_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage2_subdone() {
    ap_block_pp16_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage3() {
    ap_block_pp16_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage3_subdone() {
    ap_block_pp16_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage4_subdone() {
    ap_block_pp16_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage5_subdone() {
    ap_block_pp16_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage6_subdone() {
    ap_block_pp16_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage7_11001() {
    ap_block_pp16_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp16_stage7_subdone() {
    ap_block_pp16_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage0() {
    ap_block_pp17_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage0_11001() {
    ap_block_pp17_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage0_subdone() {
    ap_block_pp17_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage1() {
    ap_block_pp17_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage1_11001() {
    ap_block_pp17_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage1_subdone() {
    ap_block_pp17_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage2() {
    ap_block_pp17_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage2_subdone() {
    ap_block_pp17_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage3_subdone() {
    ap_block_pp17_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage4_subdone() {
    ap_block_pp17_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage5_subdone() {
    ap_block_pp17_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage6_11001() {
    ap_block_pp17_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage6_subdone() {
    ap_block_pp17_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage7() {
    ap_block_pp17_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp17_stage7_subdone() {
    ap_block_pp17_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage0() {
    ap_block_pp18_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage0_11001() {
    ap_block_pp18_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage0_subdone() {
    ap_block_pp18_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage1() {
    ap_block_pp18_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage1_11001() {
    ap_block_pp18_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage1_subdone() {
    ap_block_pp18_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage2() {
    ap_block_pp18_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage2_subdone() {
    ap_block_pp18_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage3_subdone() {
    ap_block_pp18_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage4_subdone() {
    ap_block_pp18_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage5_subdone() {
    ap_block_pp18_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage6_11001() {
    ap_block_pp18_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage6_subdone() {
    ap_block_pp18_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage7() {
    ap_block_pp18_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp18_stage7_subdone() {
    ap_block_pp18_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage0() {
    ap_block_pp19_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage0_11001() {
    ap_block_pp19_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage0_subdone() {
    ap_block_pp19_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage1() {
    ap_block_pp19_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage1_11001() {
    ap_block_pp19_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage1_subdone() {
    ap_block_pp19_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage2() {
    ap_block_pp19_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage2_subdone() {
    ap_block_pp19_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage3_subdone() {
    ap_block_pp19_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage4_subdone() {
    ap_block_pp19_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage5_subdone() {
    ap_block_pp19_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage6_11001() {
    ap_block_pp19_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage6_subdone() {
    ap_block_pp19_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage7() {
    ap_block_pp19_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp19_stage7_subdone() {
    ap_block_pp19_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage0() {
    ap_block_pp1_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage0_11001() {
    ap_block_pp1_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage0_subdone() {
    ap_block_pp1_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage1() {
    ap_block_pp1_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage1_11001() {
    ap_block_pp1_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage1_subdone() {
    ap_block_pp1_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage2() {
    ap_block_pp1_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage2_subdone() {
    ap_block_pp1_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage3_subdone() {
    ap_block_pp1_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage4_subdone() {
    ap_block_pp1_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage5_subdone() {
    ap_block_pp1_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage6_11001() {
    ap_block_pp1_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage6_subdone() {
    ap_block_pp1_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage7() {
    ap_block_pp1_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp1_stage7_subdone() {
    ap_block_pp1_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage0() {
    ap_block_pp20_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage0_11001() {
    ap_block_pp20_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage0_subdone() {
    ap_block_pp20_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage1() {
    ap_block_pp20_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage1_11001() {
    ap_block_pp20_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage1_subdone() {
    ap_block_pp20_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage2() {
    ap_block_pp20_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage2_subdone() {
    ap_block_pp20_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage3_subdone() {
    ap_block_pp20_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage4_subdone() {
    ap_block_pp20_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage5_subdone() {
    ap_block_pp20_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage6_11001() {
    ap_block_pp20_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage6_subdone() {
    ap_block_pp20_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage7() {
    ap_block_pp20_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp20_stage7_subdone() {
    ap_block_pp20_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage0() {
    ap_block_pp21_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage0_11001() {
    ap_block_pp21_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage0_subdone() {
    ap_block_pp21_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage1() {
    ap_block_pp21_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage1_11001() {
    ap_block_pp21_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage1_subdone() {
    ap_block_pp21_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage2() {
    ap_block_pp21_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage2_subdone() {
    ap_block_pp21_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage3_subdone() {
    ap_block_pp21_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage4_subdone() {
    ap_block_pp21_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage5_subdone() {
    ap_block_pp21_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage6_11001() {
    ap_block_pp21_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage6_subdone() {
    ap_block_pp21_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage7() {
    ap_block_pp21_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp21_stage7_subdone() {
    ap_block_pp21_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage0() {
    ap_block_pp22_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage0_11001() {
    ap_block_pp22_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage0_subdone() {
    ap_block_pp22_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage1() {
    ap_block_pp22_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage1_11001() {
    ap_block_pp22_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage1_subdone() {
    ap_block_pp22_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage2() {
    ap_block_pp22_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage2_subdone() {
    ap_block_pp22_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage3_subdone() {
    ap_block_pp22_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage4_subdone() {
    ap_block_pp22_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage5_subdone() {
    ap_block_pp22_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage6_11001() {
    ap_block_pp22_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage6_subdone() {
    ap_block_pp22_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage7() {
    ap_block_pp22_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp22_stage7_subdone() {
    ap_block_pp22_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage0() {
    ap_block_pp23_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage0_11001() {
    ap_block_pp23_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage0_subdone() {
    ap_block_pp23_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage1() {
    ap_block_pp23_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage1_11001() {
    ap_block_pp23_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage1_subdone() {
    ap_block_pp23_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage2() {
    ap_block_pp23_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage2_subdone() {
    ap_block_pp23_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage3_subdone() {
    ap_block_pp23_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage4_subdone() {
    ap_block_pp23_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage5_subdone() {
    ap_block_pp23_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage6_11001() {
    ap_block_pp23_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage6_subdone() {
    ap_block_pp23_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage7() {
    ap_block_pp23_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp23_stage7_subdone() {
    ap_block_pp23_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage0() {
    ap_block_pp24_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage0_11001() {
    ap_block_pp24_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage0_subdone() {
    ap_block_pp24_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage1() {
    ap_block_pp24_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage1_11001() {
    ap_block_pp24_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage1_subdone() {
    ap_block_pp24_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage2() {
    ap_block_pp24_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage2_11001() {
    ap_block_pp24_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage2_subdone() {
    ap_block_pp24_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage3() {
    ap_block_pp24_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage3_subdone() {
    ap_block_pp24_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage4_subdone() {
    ap_block_pp24_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage5_subdone() {
    ap_block_pp24_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage6_subdone() {
    ap_block_pp24_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage7_11001() {
    ap_block_pp24_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp24_stage7_subdone() {
    ap_block_pp24_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage0() {
    ap_block_pp25_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage0_11001() {
    ap_block_pp25_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage0_subdone() {
    ap_block_pp25_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage1() {
    ap_block_pp25_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage1_11001() {
    ap_block_pp25_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage1_subdone() {
    ap_block_pp25_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage2() {
    ap_block_pp25_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage2_subdone() {
    ap_block_pp25_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage3_subdone() {
    ap_block_pp25_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage4_subdone() {
    ap_block_pp25_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage5_subdone() {
    ap_block_pp25_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage6_11001() {
    ap_block_pp25_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage6_subdone() {
    ap_block_pp25_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage7() {
    ap_block_pp25_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp25_stage7_subdone() {
    ap_block_pp25_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage0() {
    ap_block_pp26_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage0_11001() {
    ap_block_pp26_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage0_subdone() {
    ap_block_pp26_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage1() {
    ap_block_pp26_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage1_11001() {
    ap_block_pp26_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage1_subdone() {
    ap_block_pp26_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage2() {
    ap_block_pp26_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage2_subdone() {
    ap_block_pp26_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage3_subdone() {
    ap_block_pp26_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage4_subdone() {
    ap_block_pp26_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage5_subdone() {
    ap_block_pp26_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage6_11001() {
    ap_block_pp26_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage6_subdone() {
    ap_block_pp26_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage7() {
    ap_block_pp26_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp26_stage7_subdone() {
    ap_block_pp26_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage0() {
    ap_block_pp27_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage0_11001() {
    ap_block_pp27_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage0_subdone() {
    ap_block_pp27_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage1() {
    ap_block_pp27_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage1_11001() {
    ap_block_pp27_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage1_subdone() {
    ap_block_pp27_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage2() {
    ap_block_pp27_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage2_subdone() {
    ap_block_pp27_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage3_subdone() {
    ap_block_pp27_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage4_subdone() {
    ap_block_pp27_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage5_subdone() {
    ap_block_pp27_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage6_11001() {
    ap_block_pp27_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage6_subdone() {
    ap_block_pp27_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage7() {
    ap_block_pp27_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp27_stage7_subdone() {
    ap_block_pp27_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage0() {
    ap_block_pp28_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage0_11001() {
    ap_block_pp28_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage0_subdone() {
    ap_block_pp28_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage1() {
    ap_block_pp28_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage1_11001() {
    ap_block_pp28_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage1_subdone() {
    ap_block_pp28_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage2() {
    ap_block_pp28_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage2_subdone() {
    ap_block_pp28_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage3_subdone() {
    ap_block_pp28_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage4_subdone() {
    ap_block_pp28_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage5_subdone() {
    ap_block_pp28_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage6_11001() {
    ap_block_pp28_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage6_subdone() {
    ap_block_pp28_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage7() {
    ap_block_pp28_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp28_stage7_subdone() {
    ap_block_pp28_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage0() {
    ap_block_pp29_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage0_11001() {
    ap_block_pp29_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage0_subdone() {
    ap_block_pp29_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage1() {
    ap_block_pp29_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage1_11001() {
    ap_block_pp29_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage1_subdone() {
    ap_block_pp29_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage2() {
    ap_block_pp29_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage2_subdone() {
    ap_block_pp29_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage3_subdone() {
    ap_block_pp29_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage4_subdone() {
    ap_block_pp29_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage5_subdone() {
    ap_block_pp29_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage6_11001() {
    ap_block_pp29_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage6_subdone() {
    ap_block_pp29_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage7() {
    ap_block_pp29_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp29_stage7_subdone() {
    ap_block_pp29_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage0() {
    ap_block_pp2_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage0_11001() {
    ap_block_pp2_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage0_subdone() {
    ap_block_pp2_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage1() {
    ap_block_pp2_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage1_11001() {
    ap_block_pp2_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage1_subdone() {
    ap_block_pp2_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage2() {
    ap_block_pp2_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage2_subdone() {
    ap_block_pp2_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage3_subdone() {
    ap_block_pp2_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage4_subdone() {
    ap_block_pp2_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage5_subdone() {
    ap_block_pp2_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage6_11001() {
    ap_block_pp2_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage6_subdone() {
    ap_block_pp2_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage7() {
    ap_block_pp2_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp2_stage7_subdone() {
    ap_block_pp2_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage0() {
    ap_block_pp30_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage0_11001() {
    ap_block_pp30_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage0_subdone() {
    ap_block_pp30_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage1() {
    ap_block_pp30_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage1_11001() {
    ap_block_pp30_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage1_subdone() {
    ap_block_pp30_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage2() {
    ap_block_pp30_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage2_subdone() {
    ap_block_pp30_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage3_subdone() {
    ap_block_pp30_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage4_subdone() {
    ap_block_pp30_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage5_subdone() {
    ap_block_pp30_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage6_11001() {
    ap_block_pp30_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage6_subdone() {
    ap_block_pp30_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage7() {
    ap_block_pp30_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp30_stage7_subdone() {
    ap_block_pp30_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage0() {
    ap_block_pp31_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage0_11001() {
    ap_block_pp31_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage0_subdone() {
    ap_block_pp31_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage1() {
    ap_block_pp31_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage1_11001() {
    ap_block_pp31_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage1_subdone() {
    ap_block_pp31_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage2() {
    ap_block_pp31_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage2_subdone() {
    ap_block_pp31_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage3_subdone() {
    ap_block_pp31_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage4_subdone() {
    ap_block_pp31_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage5_subdone() {
    ap_block_pp31_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage6_11001() {
    ap_block_pp31_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage6_subdone() {
    ap_block_pp31_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage7() {
    ap_block_pp31_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp31_stage7_subdone() {
    ap_block_pp31_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage0() {
    ap_block_pp3_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage0_11001() {
    ap_block_pp3_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage0_subdone() {
    ap_block_pp3_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage1() {
    ap_block_pp3_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage1_11001() {
    ap_block_pp3_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage1_subdone() {
    ap_block_pp3_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage2() {
    ap_block_pp3_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage2_subdone() {
    ap_block_pp3_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage3_subdone() {
    ap_block_pp3_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage4_subdone() {
    ap_block_pp3_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage5_subdone() {
    ap_block_pp3_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage6_11001() {
    ap_block_pp3_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage6_subdone() {
    ap_block_pp3_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage7() {
    ap_block_pp3_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp3_stage7_subdone() {
    ap_block_pp3_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage0() {
    ap_block_pp4_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage0_11001() {
    ap_block_pp4_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage0_subdone() {
    ap_block_pp4_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage1() {
    ap_block_pp4_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage1_11001() {
    ap_block_pp4_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage1_subdone() {
    ap_block_pp4_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage2() {
    ap_block_pp4_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage2_subdone() {
    ap_block_pp4_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage3_subdone() {
    ap_block_pp4_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage4_subdone() {
    ap_block_pp4_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage5_subdone() {
    ap_block_pp4_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage6_11001() {
    ap_block_pp4_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage6_subdone() {
    ap_block_pp4_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage7() {
    ap_block_pp4_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp4_stage7_subdone() {
    ap_block_pp4_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage0() {
    ap_block_pp5_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage0_11001() {
    ap_block_pp5_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage0_subdone() {
    ap_block_pp5_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage1() {
    ap_block_pp5_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage1_11001() {
    ap_block_pp5_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage1_subdone() {
    ap_block_pp5_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage2() {
    ap_block_pp5_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage2_subdone() {
    ap_block_pp5_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage3_subdone() {
    ap_block_pp5_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage4_subdone() {
    ap_block_pp5_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage5_subdone() {
    ap_block_pp5_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage6_11001() {
    ap_block_pp5_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage6_subdone() {
    ap_block_pp5_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage7() {
    ap_block_pp5_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp5_stage7_subdone() {
    ap_block_pp5_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage0() {
    ap_block_pp6_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage0_11001() {
    ap_block_pp6_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage0_subdone() {
    ap_block_pp6_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage1() {
    ap_block_pp6_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage1_11001() {
    ap_block_pp6_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage1_subdone() {
    ap_block_pp6_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage2() {
    ap_block_pp6_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage2_subdone() {
    ap_block_pp6_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage3_subdone() {
    ap_block_pp6_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage4_subdone() {
    ap_block_pp6_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage5_subdone() {
    ap_block_pp6_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage6_11001() {
    ap_block_pp6_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage6_subdone() {
    ap_block_pp6_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage7() {
    ap_block_pp6_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp6_stage7_subdone() {
    ap_block_pp6_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage0() {
    ap_block_pp7_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage0_11001() {
    ap_block_pp7_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage0_subdone() {
    ap_block_pp7_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage1() {
    ap_block_pp7_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage1_11001() {
    ap_block_pp7_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage1_subdone() {
    ap_block_pp7_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage2() {
    ap_block_pp7_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage2_subdone() {
    ap_block_pp7_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage3_subdone() {
    ap_block_pp7_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage4_subdone() {
    ap_block_pp7_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage5_subdone() {
    ap_block_pp7_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage6_11001() {
    ap_block_pp7_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage6_subdone() {
    ap_block_pp7_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage7() {
    ap_block_pp7_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp7_stage7_subdone() {
    ap_block_pp7_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage0() {
    ap_block_pp8_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage0_11001() {
    ap_block_pp8_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage0_subdone() {
    ap_block_pp8_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage1() {
    ap_block_pp8_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage1_11001() {
    ap_block_pp8_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage1_subdone() {
    ap_block_pp8_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage2() {
    ap_block_pp8_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage2_11001() {
    ap_block_pp8_stage2_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage2_subdone() {
    ap_block_pp8_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage3() {
    ap_block_pp8_stage3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage3_subdone() {
    ap_block_pp8_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage4_subdone() {
    ap_block_pp8_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage5_subdone() {
    ap_block_pp8_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage6_subdone() {
    ap_block_pp8_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage7_11001() {
    ap_block_pp8_stage7_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp8_stage7_subdone() {
    ap_block_pp8_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage0() {
    ap_block_pp9_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage0_11001() {
    ap_block_pp9_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage0_subdone() {
    ap_block_pp9_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage1() {
    ap_block_pp9_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage1_11001() {
    ap_block_pp9_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage1_subdone() {
    ap_block_pp9_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage2() {
    ap_block_pp9_stage2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage2_subdone() {
    ap_block_pp9_stage2_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage3_subdone() {
    ap_block_pp9_stage3_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage4_subdone() {
    ap_block_pp9_stage4_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage5_subdone() {
    ap_block_pp9_stage5_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage6_11001() {
    ap_block_pp9_stage6_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage6_subdone() {
    ap_block_pp9_stage6_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage7() {
    ap_block_pp9_stage7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_pp9_stage7_subdone() {
    ap_block_pp9_stage7_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state100_pp5_stage1_iter1() {
    ap_block_state100_pp5_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state101_pp5_stage2_iter1() {
    ap_block_state101_pp5_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state102_pp5_stage3_iter1() {
    ap_block_state102_pp5_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state103_pp5_stage4_iter1() {
    ap_block_state103_pp5_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state104_pp5_stage5_iter1() {
    ap_block_state104_pp5_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state105_pp5_stage6_iter1() {
    ap_block_state105_pp5_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state108_pp6_stage0_iter0() {
    ap_block_state108_pp6_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state109_pp6_stage1_iter0() {
    ap_block_state109_pp6_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state10_pp0_stage5_iter0() {
    ap_block_state10_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state110_pp6_stage2_iter0() {
    ap_block_state110_pp6_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state111_pp6_stage3_iter0() {
    ap_block_state111_pp6_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state112_pp6_stage4_iter0() {
    ap_block_state112_pp6_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state113_pp6_stage5_iter0() {
    ap_block_state113_pp6_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state114_pp6_stage6_iter0() {
    ap_block_state114_pp6_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state115_pp6_stage7_iter0() {
    ap_block_state115_pp6_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state116_pp6_stage0_iter1() {
    ap_block_state116_pp6_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state117_pp6_stage1_iter1() {
    ap_block_state117_pp6_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state118_pp6_stage2_iter1() {
    ap_block_state118_pp6_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state119_pp6_stage3_iter1() {
    ap_block_state119_pp6_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state11_pp0_stage6_iter0() {
    ap_block_state11_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state120_pp6_stage4_iter1() {
    ap_block_state120_pp6_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state121_pp6_stage5_iter1() {
    ap_block_state121_pp6_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state122_pp6_stage6_iter1() {
    ap_block_state122_pp6_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state125_pp7_stage0_iter0() {
    ap_block_state125_pp7_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state126_pp7_stage1_iter0() {
    ap_block_state126_pp7_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state127_pp7_stage2_iter0() {
    ap_block_state127_pp7_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state128_pp7_stage3_iter0() {
    ap_block_state128_pp7_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state129_pp7_stage4_iter0() {
    ap_block_state129_pp7_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state12_pp0_stage7_iter0() {
    ap_block_state12_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state130_pp7_stage5_iter0() {
    ap_block_state130_pp7_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state131_pp7_stage6_iter0() {
    ap_block_state131_pp7_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state132_pp7_stage7_iter0() {
    ap_block_state132_pp7_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state133_pp7_stage0_iter1() {
    ap_block_state133_pp7_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state134_pp7_stage1_iter1() {
    ap_block_state134_pp7_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state135_pp7_stage2_iter1() {
    ap_block_state135_pp7_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state136_pp7_stage3_iter1() {
    ap_block_state136_pp7_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state137_pp7_stage4_iter1() {
    ap_block_state137_pp7_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state138_pp7_stage5_iter1() {
    ap_block_state138_pp7_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state139_pp7_stage6_iter1() {
    ap_block_state139_pp7_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state13_pp0_stage0_iter1() {
    ap_block_state13_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state143_pp8_stage0_iter0() {
    ap_block_state143_pp8_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state144_pp8_stage1_iter0() {
    ap_block_state144_pp8_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state145_pp8_stage2_iter0() {
    ap_block_state145_pp8_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state146_pp8_stage3_iter0() {
    ap_block_state146_pp8_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state147_pp8_stage4_iter0() {
    ap_block_state147_pp8_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state148_pp8_stage5_iter0() {
    ap_block_state148_pp8_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state149_pp8_stage6_iter0() {
    ap_block_state149_pp8_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state14_pp0_stage1_iter1() {
    ap_block_state14_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state150_pp8_stage7_iter0() {
    ap_block_state150_pp8_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state151_pp8_stage0_iter1() {
    ap_block_state151_pp8_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state152_pp8_stage1_iter1() {
    ap_block_state152_pp8_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state153_pp8_stage2_iter1() {
    ap_block_state153_pp8_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state154_pp8_stage3_iter1() {
    ap_block_state154_pp8_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state155_pp8_stage4_iter1() {
    ap_block_state155_pp8_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state156_pp8_stage5_iter1() {
    ap_block_state156_pp8_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state157_pp8_stage6_iter1() {
    ap_block_state157_pp8_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state158_pp8_stage7_iter1() {
    ap_block_state158_pp8_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state15_pp0_stage2_iter1() {
    ap_block_state15_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state161_pp9_stage0_iter0() {
    ap_block_state161_pp9_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state162_pp9_stage1_iter0() {
    ap_block_state162_pp9_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state163_pp9_stage2_iter0() {
    ap_block_state163_pp9_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state164_pp9_stage3_iter0() {
    ap_block_state164_pp9_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state165_pp9_stage4_iter0() {
    ap_block_state165_pp9_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state166_pp9_stage5_iter0() {
    ap_block_state166_pp9_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state167_pp9_stage6_iter0() {
    ap_block_state167_pp9_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state168_pp9_stage7_iter0() {
    ap_block_state168_pp9_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state169_pp9_stage0_iter1() {
    ap_block_state169_pp9_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state16_pp0_stage3_iter1() {
    ap_block_state16_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state170_pp9_stage1_iter1() {
    ap_block_state170_pp9_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state171_pp9_stage2_iter1() {
    ap_block_state171_pp9_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state172_pp9_stage3_iter1() {
    ap_block_state172_pp9_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state173_pp9_stage4_iter1() {
    ap_block_state173_pp9_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state174_pp9_stage5_iter1() {
    ap_block_state174_pp9_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state175_pp9_stage6_iter1() {
    ap_block_state175_pp9_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state178_pp10_stage0_iter0() {
    ap_block_state178_pp10_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state179_pp10_stage1_iter0() {
    ap_block_state179_pp10_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state17_pp0_stage4_iter1() {
    ap_block_state17_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state180_pp10_stage2_iter0() {
    ap_block_state180_pp10_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state181_pp10_stage3_iter0() {
    ap_block_state181_pp10_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state182_pp10_stage4_iter0() {
    ap_block_state182_pp10_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state183_pp10_stage5_iter0() {
    ap_block_state183_pp10_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state184_pp10_stage6_iter0() {
    ap_block_state184_pp10_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state185_pp10_stage7_iter0() {
    ap_block_state185_pp10_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state186_pp10_stage0_iter1() {
    ap_block_state186_pp10_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state187_pp10_stage1_iter1() {
    ap_block_state187_pp10_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state188_pp10_stage2_iter1() {
    ap_block_state188_pp10_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state189_pp10_stage3_iter1() {
    ap_block_state189_pp10_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state18_pp0_stage5_iter1() {
    ap_block_state18_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state190_pp10_stage4_iter1() {
    ap_block_state190_pp10_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state191_pp10_stage5_iter1() {
    ap_block_state191_pp10_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state192_pp10_stage6_iter1() {
    ap_block_state192_pp10_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state195_pp11_stage0_iter0() {
    ap_block_state195_pp11_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state196_pp11_stage1_iter0() {
    ap_block_state196_pp11_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state197_pp11_stage2_iter0() {
    ap_block_state197_pp11_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state198_pp11_stage3_iter0() {
    ap_block_state198_pp11_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state199_pp11_stage4_iter0() {
    ap_block_state199_pp11_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state19_pp0_stage6_iter1() {
    ap_block_state19_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state200_pp11_stage5_iter0() {
    ap_block_state200_pp11_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state201_pp11_stage6_iter0() {
    ap_block_state201_pp11_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state202_pp11_stage7_iter0() {
    ap_block_state202_pp11_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state203_pp11_stage0_iter1() {
    ap_block_state203_pp11_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state204_pp11_stage1_iter1() {
    ap_block_state204_pp11_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state205_pp11_stage2_iter1() {
    ap_block_state205_pp11_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state206_pp11_stage3_iter1() {
    ap_block_state206_pp11_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state207_pp11_stage4_iter1() {
    ap_block_state207_pp11_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state208_pp11_stage5_iter1() {
    ap_block_state208_pp11_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state209_pp11_stage6_iter1() {
    ap_block_state209_pp11_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state20_pp0_stage7_iter1() {
    ap_block_state20_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state212_pp12_stage0_iter0() {
    ap_block_state212_pp12_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state213_pp12_stage1_iter0() {
    ap_block_state213_pp12_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state214_pp12_stage2_iter0() {
    ap_block_state214_pp12_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state215_pp12_stage3_iter0() {
    ap_block_state215_pp12_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state216_pp12_stage4_iter0() {
    ap_block_state216_pp12_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state217_pp12_stage5_iter0() {
    ap_block_state217_pp12_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state218_pp12_stage6_iter0() {
    ap_block_state218_pp12_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state219_pp12_stage7_iter0() {
    ap_block_state219_pp12_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state220_pp12_stage0_iter1() {
    ap_block_state220_pp12_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state221_pp12_stage1_iter1() {
    ap_block_state221_pp12_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state222_pp12_stage2_iter1() {
    ap_block_state222_pp12_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state223_pp12_stage3_iter1() {
    ap_block_state223_pp12_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state224_pp12_stage4_iter1() {
    ap_block_state224_pp12_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state225_pp12_stage5_iter1() {
    ap_block_state225_pp12_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state226_pp12_stage6_iter1() {
    ap_block_state226_pp12_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state229_pp13_stage0_iter0() {
    ap_block_state229_pp13_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state230_pp13_stage1_iter0() {
    ap_block_state230_pp13_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state231_pp13_stage2_iter0() {
    ap_block_state231_pp13_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state232_pp13_stage3_iter0() {
    ap_block_state232_pp13_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state233_pp13_stage4_iter0() {
    ap_block_state233_pp13_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state234_pp13_stage5_iter0() {
    ap_block_state234_pp13_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state235_pp13_stage6_iter0() {
    ap_block_state235_pp13_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state236_pp13_stage7_iter0() {
    ap_block_state236_pp13_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state237_pp13_stage0_iter1() {
    ap_block_state237_pp13_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state238_pp13_stage1_iter1() {
    ap_block_state238_pp13_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state239_pp13_stage2_iter1() {
    ap_block_state239_pp13_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state23_pp1_stage0_iter0() {
    ap_block_state23_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state240_pp13_stage3_iter1() {
    ap_block_state240_pp13_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state241_pp13_stage4_iter1() {
    ap_block_state241_pp13_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state242_pp13_stage5_iter1() {
    ap_block_state242_pp13_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state243_pp13_stage6_iter1() {
    ap_block_state243_pp13_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state246_pp14_stage0_iter0() {
    ap_block_state246_pp14_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state247_pp14_stage1_iter0() {
    ap_block_state247_pp14_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state248_pp14_stage2_iter0() {
    ap_block_state248_pp14_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state249_pp14_stage3_iter0() {
    ap_block_state249_pp14_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state24_pp1_stage1_iter0() {
    ap_block_state24_pp1_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state250_pp14_stage4_iter0() {
    ap_block_state250_pp14_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state251_pp14_stage5_iter0() {
    ap_block_state251_pp14_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state252_pp14_stage6_iter0() {
    ap_block_state252_pp14_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state253_pp14_stage7_iter0() {
    ap_block_state253_pp14_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state254_pp14_stage0_iter1() {
    ap_block_state254_pp14_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state255_pp14_stage1_iter1() {
    ap_block_state255_pp14_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state256_pp14_stage2_iter1() {
    ap_block_state256_pp14_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state257_pp14_stage3_iter1() {
    ap_block_state257_pp14_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state258_pp14_stage4_iter1() {
    ap_block_state258_pp14_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state259_pp14_stage5_iter1() {
    ap_block_state259_pp14_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state25_pp1_stage2_iter0() {
    ap_block_state25_pp1_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state260_pp14_stage6_iter1() {
    ap_block_state260_pp14_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state263_pp15_stage0_iter0() {
    ap_block_state263_pp15_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state264_pp15_stage1_iter0() {
    ap_block_state264_pp15_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state265_pp15_stage2_iter0() {
    ap_block_state265_pp15_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state266_pp15_stage3_iter0() {
    ap_block_state266_pp15_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state267_pp15_stage4_iter0() {
    ap_block_state267_pp15_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state268_pp15_stage5_iter0() {
    ap_block_state268_pp15_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state269_pp15_stage6_iter0() {
    ap_block_state269_pp15_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state26_pp1_stage3_iter0() {
    ap_block_state26_pp1_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state270_pp15_stage7_iter0() {
    ap_block_state270_pp15_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state271_pp15_stage0_iter1() {
    ap_block_state271_pp15_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state272_pp15_stage1_iter1() {
    ap_block_state272_pp15_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state273_pp15_stage2_iter1() {
    ap_block_state273_pp15_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state274_pp15_stage3_iter1() {
    ap_block_state274_pp15_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state275_pp15_stage4_iter1() {
    ap_block_state275_pp15_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state276_pp15_stage5_iter1() {
    ap_block_state276_pp15_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state277_pp15_stage6_iter1() {
    ap_block_state277_pp15_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state27_pp1_stage4_iter0() {
    ap_block_state27_pp1_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state281_pp16_stage0_iter0() {
    ap_block_state281_pp16_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state282_pp16_stage1_iter0() {
    ap_block_state282_pp16_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state283_pp16_stage2_iter0() {
    ap_block_state283_pp16_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state284_pp16_stage3_iter0() {
    ap_block_state284_pp16_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state285_pp16_stage4_iter0() {
    ap_block_state285_pp16_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state286_pp16_stage5_iter0() {
    ap_block_state286_pp16_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state287_pp16_stage6_iter0() {
    ap_block_state287_pp16_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state288_pp16_stage7_iter0() {
    ap_block_state288_pp16_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state289_pp16_stage0_iter1() {
    ap_block_state289_pp16_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state28_pp1_stage5_iter0() {
    ap_block_state28_pp1_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state290_pp16_stage1_iter1() {
    ap_block_state290_pp16_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state291_pp16_stage2_iter1() {
    ap_block_state291_pp16_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state292_pp16_stage3_iter1() {
    ap_block_state292_pp16_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state293_pp16_stage4_iter1() {
    ap_block_state293_pp16_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state294_pp16_stage5_iter1() {
    ap_block_state294_pp16_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state295_pp16_stage6_iter1() {
    ap_block_state295_pp16_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state296_pp16_stage7_iter1() {
    ap_block_state296_pp16_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state299_pp17_stage0_iter0() {
    ap_block_state299_pp17_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state29_pp1_stage6_iter0() {
    ap_block_state29_pp1_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state300_pp17_stage1_iter0() {
    ap_block_state300_pp17_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state301_pp17_stage2_iter0() {
    ap_block_state301_pp17_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state302_pp17_stage3_iter0() {
    ap_block_state302_pp17_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state303_pp17_stage4_iter0() {
    ap_block_state303_pp17_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state304_pp17_stage5_iter0() {
    ap_block_state304_pp17_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state305_pp17_stage6_iter0() {
    ap_block_state305_pp17_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state306_pp17_stage7_iter0() {
    ap_block_state306_pp17_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state307_pp17_stage0_iter1() {
    ap_block_state307_pp17_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state308_pp17_stage1_iter1() {
    ap_block_state308_pp17_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state309_pp17_stage2_iter1() {
    ap_block_state309_pp17_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state30_pp1_stage7_iter0() {
    ap_block_state30_pp1_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state310_pp17_stage3_iter1() {
    ap_block_state310_pp17_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state311_pp17_stage4_iter1() {
    ap_block_state311_pp17_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state312_pp17_stage5_iter1() {
    ap_block_state312_pp17_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state313_pp17_stage6_iter1() {
    ap_block_state313_pp17_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state316_pp18_stage0_iter0() {
    ap_block_state316_pp18_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state317_pp18_stage1_iter0() {
    ap_block_state317_pp18_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state318_pp18_stage2_iter0() {
    ap_block_state318_pp18_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state319_pp18_stage3_iter0() {
    ap_block_state319_pp18_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state31_pp1_stage0_iter1() {
    ap_block_state31_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state320_pp18_stage4_iter0() {
    ap_block_state320_pp18_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state321_pp18_stage5_iter0() {
    ap_block_state321_pp18_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state322_pp18_stage6_iter0() {
    ap_block_state322_pp18_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state323_pp18_stage7_iter0() {
    ap_block_state323_pp18_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state324_pp18_stage0_iter1() {
    ap_block_state324_pp18_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state325_pp18_stage1_iter1() {
    ap_block_state325_pp18_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state326_pp18_stage2_iter1() {
    ap_block_state326_pp18_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state327_pp18_stage3_iter1() {
    ap_block_state327_pp18_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state328_pp18_stage4_iter1() {
    ap_block_state328_pp18_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state329_pp18_stage5_iter1() {
    ap_block_state329_pp18_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state32_pp1_stage1_iter1() {
    ap_block_state32_pp1_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state330_pp18_stage6_iter1() {
    ap_block_state330_pp18_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state333_pp19_stage0_iter0() {
    ap_block_state333_pp19_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state334_pp19_stage1_iter0() {
    ap_block_state334_pp19_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state335_pp19_stage2_iter0() {
    ap_block_state335_pp19_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state336_pp19_stage3_iter0() {
    ap_block_state336_pp19_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state337_pp19_stage4_iter0() {
    ap_block_state337_pp19_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state338_pp19_stage5_iter0() {
    ap_block_state338_pp19_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state339_pp19_stage6_iter0() {
    ap_block_state339_pp19_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state33_pp1_stage2_iter1() {
    ap_block_state33_pp1_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state340_pp19_stage7_iter0() {
    ap_block_state340_pp19_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state341_pp19_stage0_iter1() {
    ap_block_state341_pp19_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state342_pp19_stage1_iter1() {
    ap_block_state342_pp19_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state343_pp19_stage2_iter1() {
    ap_block_state343_pp19_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state344_pp19_stage3_iter1() {
    ap_block_state344_pp19_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void k2c_affine_matmul::thread_ap_block_state345_pp19_stage4_iter1() {
    ap_block_state345_pp19_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

}

