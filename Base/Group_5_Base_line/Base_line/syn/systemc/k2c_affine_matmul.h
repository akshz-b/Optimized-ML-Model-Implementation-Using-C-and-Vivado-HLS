// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_affine_matmul_HH_
#define _k2c_affine_matmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "sample0_fadd_32nscud.h"
#include "sample0_fmul_32nsdEe.h"
#include "sample0_mul_64s_6bkb.h"
#include "sample0_mul_mul_1eOg.h"
#include "sample0_mac_muladkbM.h"

namespace ap_rtl {

struct k2c_affine_matmul : public sc_module {
    // Port declarations 23
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > C_address0;
    sc_out< sc_logic > C_ce0;
    sc_out< sc_logic > C_we0;
    sc_out< sc_lv<32> > C_d0;
    sc_in< sc_lv<32> > C_q0;
    sc_out< sc_lv<14> > A_address0;
    sc_out< sc_logic > A_ce0;
    sc_in< sc_lv<32> > A_q0;
    sc_out< sc_lv<14> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<14> > d_address0;
    sc_out< sc_logic > d_ce0;
    sc_in< sc_lv<32> > d_q0;
    sc_in< sc_lv<64> > outrows;
    sc_in< sc_lv<64> > outcols;
    sc_in< sc_lv<64> > innerdim;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_affine_matmul(sc_module_name name);
    SC_HAS_PROCESS(k2c_affine_matmul);

    ~k2c_affine_matmul();

    sc_trace_file* mVcdFile;

    sample0_fadd_32nscud<1,9,32,32,32>* sample0_fadd_32nscud_U43;
    sample0_fmul_32nsdEe<1,5,32,32,32>* sample0_fmul_32nsdEe_U44;
    sample0_mul_64s_6bkb<1,6,64,64,64>* sample0_mul_64s_6bkb_U45;
    sample0_mul_mul_1eOg<1,3,15,15,15>* sample0_mul_mul_1eOg_U46;
    sample0_mul_mul_1eOg<1,3,15,15,15>* sample0_mul_mul_1eOg_U47;
    sample0_mac_muladkbM<1,3,15,15,15,15>* sample0_mac_muladkbM_U48;
    sc_signal< sc_lv<42> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > reg_158;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<32> > grp_fu_150_p2;
    sc_signal< sc_lv<32> > reg_163;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > grp_fu_168_p2;
    sc_signal< sc_lv<64> > tmp_reg_299;
    sc_signal< sc_lv<14> > i_72_fu_184_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<15> > tmp_83_fu_190_p1;
    sc_signal< sc_lv<15> > tmp_83_reg_312;
    sc_signal< sc_lv<1> > exitcond3_fu_179_p2;
    sc_signal< sc_lv<15> > tmp_84_fu_193_p1;
    sc_signal< sc_lv<15> > tmp_84_reg_318;
    sc_signal< sc_lv<15> > tmp_85_fu_196_p1;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > i_73_fu_205_p2;
    sc_signal< sc_lv<64> > i_73_reg_332;
    sc_signal< sc_lv<15> > grp_fu_264_p2;
    sc_signal< sc_lv<15> > outrowidx_reg_337;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<15> > grp_fu_269_p2;
    sc_signal< sc_lv<15> > inneridx_reg_342;
    sc_signal< sc_lv<15> > tmp_86_fu_211_p1;
    sc_signal< sc_lv<15> > tmp_86_reg_347;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > j_12_fu_220_p2;
    sc_signal< sc_lv<64> > j_12_reg_355;
    sc_signal< sc_lv<14> > C_addr_5_reg_360;
    sc_signal< sc_lv<1> > exitcond1_fu_215_p2;
    sc_signal< sc_lv<15> > tmp_87_fu_236_p1;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<64> > k_2_fu_245_p2;
    sc_signal< sc_lv<64> > k_2_reg_373;
    sc_signal< sc_lv<15> > sum5_fu_251_p2;
    sc_signal< sc_lv<15> > sum5_reg_378;
    sc_signal< sc_lv<1> > exitcond_fu_240_p2;
    sc_signal< sc_lv<15> > grp_fu_274_p3;
    sc_signal< sc_lv<15> > sum8_reg_388;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > A_load_reg_403;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<32> > B_load_reg_408;
    sc_signal< sc_lv<32> > grp_fu_154_p2;
    sc_signal< sc_lv<32> > tmp_40_reg_413;
    sc_signal< sc_lv<32> > d_load_reg_418;
    sc_signal< sc_lv<14> > i_reg_104;
    sc_signal< sc_lv<64> > i_1_reg_115;
    sc_signal< sc_lv<64> > j_reg_126;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_lv<64> > k_reg_139;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<64> > i_cast_fu_174_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_231_p1;
    sc_signal< sc_lv<64> > sum5_cast_fu_256_p1;
    sc_signal< sc_lv<64> > sum8_cast_fu_260_p1;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<32> > grp_fu_150_p1;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<64> > tmp_83_fu_190_p0;
    sc_signal< sc_lv<64> > exitcond2_fu_200_p1;
    sc_signal< sc_lv<64> > exitcond1_fu_215_p1;
    sc_signal< sc_lv<15> > sum2_fu_226_p2;
    sc_signal< sc_lv<1> > exitcond2_fu_200_p2;
    sc_signal< sc_lv<42> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<42> ap_ST_fsm_state1;
    static const sc_lv<42> ap_ST_fsm_state2;
    static const sc_lv<42> ap_ST_fsm_state3;
    static const sc_lv<42> ap_ST_fsm_state4;
    static const sc_lv<42> ap_ST_fsm_state5;
    static const sc_lv<42> ap_ST_fsm_state6;
    static const sc_lv<42> ap_ST_fsm_state7;
    static const sc_lv<42> ap_ST_fsm_state8;
    static const sc_lv<42> ap_ST_fsm_state9;
    static const sc_lv<42> ap_ST_fsm_state10;
    static const sc_lv<42> ap_ST_fsm_state11;
    static const sc_lv<42> ap_ST_fsm_state12;
    static const sc_lv<42> ap_ST_fsm_state13;
    static const sc_lv<42> ap_ST_fsm_state14;
    static const sc_lv<42> ap_ST_fsm_state15;
    static const sc_lv<42> ap_ST_fsm_state16;
    static const sc_lv<42> ap_ST_fsm_state17;
    static const sc_lv<42> ap_ST_fsm_state18;
    static const sc_lv<42> ap_ST_fsm_state19;
    static const sc_lv<42> ap_ST_fsm_state20;
    static const sc_lv<42> ap_ST_fsm_state21;
    static const sc_lv<42> ap_ST_fsm_state22;
    static const sc_lv<42> ap_ST_fsm_state23;
    static const sc_lv<42> ap_ST_fsm_state24;
    static const sc_lv<42> ap_ST_fsm_state25;
    static const sc_lv<42> ap_ST_fsm_state26;
    static const sc_lv<42> ap_ST_fsm_state27;
    static const sc_lv<42> ap_ST_fsm_state28;
    static const sc_lv<42> ap_ST_fsm_state29;
    static const sc_lv<42> ap_ST_fsm_state30;
    static const sc_lv<42> ap_ST_fsm_state31;
    static const sc_lv<42> ap_ST_fsm_state32;
    static const sc_lv<42> ap_ST_fsm_state33;
    static const sc_lv<42> ap_ST_fsm_state34;
    static const sc_lv<42> ap_ST_fsm_state35;
    static const sc_lv<42> ap_ST_fsm_state36;
    static const sc_lv<42> ap_ST_fsm_state37;
    static const sc_lv<42> ap_ST_fsm_state38;
    static const sc_lv<42> ap_ST_fsm_state39;
    static const sc_lv<42> ap_ST_fsm_state40;
    static const sc_lv<42> ap_ST_fsm_state41;
    static const sc_lv<42> ap_ST_fsm_state42;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<64> ap_const_lv64_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_A_address0();
    void thread_A_ce0();
    void thread_B_address0();
    void thread_B_ce0();
    void thread_C_address0();
    void thread_C_ce0();
    void thread_C_d0();
    void thread_C_we0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_d_address0();
    void thread_d_ce0();
    void thread_exitcond1_fu_215_p1();
    void thread_exitcond1_fu_215_p2();
    void thread_exitcond2_fu_200_p1();
    void thread_exitcond2_fu_200_p2();
    void thread_exitcond3_fu_179_p2();
    void thread_exitcond_fu_240_p2();
    void thread_grp_fu_150_p1();
    void thread_i_72_fu_184_p2();
    void thread_i_73_fu_205_p2();
    void thread_i_cast_fu_174_p1();
    void thread_j_12_fu_220_p2();
    void thread_k_2_fu_245_p2();
    void thread_sum2_cast_fu_231_p1();
    void thread_sum2_fu_226_p2();
    void thread_sum5_cast_fu_256_p1();
    void thread_sum5_fu_251_p2();
    void thread_sum8_cast_fu_260_p1();
    void thread_tmp_83_fu_190_p0();
    void thread_tmp_83_fu_190_p1();
    void thread_tmp_84_fu_193_p1();
    void thread_tmp_85_fu_196_p1();
    void thread_tmp_86_fu_211_p1();
    void thread_tmp_87_fu_236_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
