// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "k2c_sub2idx.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic k2c_sub2idx::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic k2c_sub2idx::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state1 = "1";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state2 = "10";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state3 = "100";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state4 = "1000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state5 = "10000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state6 = "100000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state7 = "1000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state8 = "10000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state9 = "100000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state10 = "1000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state11 = "10000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state12 = "100000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state17 = "10000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state18 = "100000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state19 = "1000000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state20 = "10000000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state21 = "100000000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state22 = "1000000000000000000000";
const sc_lv<23> k2c_sub2idx::ap_ST_fsm_state23 = "10000000000000000000000";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_5 = "101";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_F = "1111";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_1 = "1";
const sc_lv<1> k2c_sub2idx::ap_const_lv1_0 = "0";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_2 = "10";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_3 = "11";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_4 = "100";
const sc_lv<1> k2c_sub2idx::ap_const_lv1_1 = "1";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_B = "1011";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_C = "1100";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_D = "1101";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_E = "1110";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_15 = "10101";
const sc_lv<64> k2c_sub2idx::ap_const_lv64_0 = "0000000000000000000000000000000000000000000000000000000000000000";
const sc_lv<64> k2c_sub2idx::ap_const_lv64_FFFFFFFFFFFFFFFF = "1111111111111111111111111111111111111111111111111111111111111111";
const sc_lv<64> k2c_sub2idx::ap_const_lv64_1 = "1";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_6 = "110";
const sc_lv<64> k2c_sub2idx::ap_const_lv64_2 = "10";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_10 = "10000";
const sc_lv<32> k2c_sub2idx::ap_const_lv32_16 = "10110";
const bool k2c_sub2idx::ap_const_boolean_1 = true;

k2c_sub2idx::k2c_sub2idx(sc_module_name name) : sc_module(name), mVcdFile(0) {
    sample_mul_64s_64dEe_U11 = new sample_mul_64s_64dEe<1,6,64,64,64>("sample_mul_64s_64dEe_U11");
    sample_mul_64s_64dEe_U11->clk(ap_clk);
    sample_mul_64s_64dEe_U11->reset(ap_rst);
    sample_mul_64s_64dEe_U11->din0(reg_137);
    sample_mul_64s_64dEe_U11->din1(temp1_reg_98);
    sample_mul_64s_64dEe_U11->ce(ap_var_for_const0);
    sample_mul_64s_64dEe_U11->dout(grp_fu_175_p2);
    sample_mul_64s_64dEe_U12 = new sample_mul_64s_64dEe<1,6,64,64,64>("sample_mul_64s_64dEe_U12");
    sample_mul_64s_64dEe_U12->clk(ap_clk);
    sample_mul_64s_64dEe_U12->reset(ap_rst);
    sample_mul_64s_64dEe_U12->din0(reg_137);
    sample_mul_64s_64dEe_U12->din1(temp1_1_reg_117);
    sample_mul_64s_64dEe_U12->ce(ap_var_for_const0);
    sample_mul_64s_64dEe_U12->dout(grp_fu_202_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state12);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state13);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state14);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state15);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state16);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state17);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state22);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state23);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state23 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state23 );

    SC_METHOD(thread_ap_return);
    sensitive << ( idx_lcssa_reg_127 );
    sensitive << ( ap_return_preg );
    sensitive << ( ap_CS_fsm_state23 );

    SC_METHOD(thread_exitcond_1_fu_170_p2);
    sensitive << ( ndim );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_fu_152_p2 );
    sensitive << ( i_1_s_fu_163_p2 );

    SC_METHOD(thread_exitcond_fu_141_p2);
    sensitive << ( ndim );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_76 );

    SC_METHOD(thread_i_1_1_fu_196_p2);
    sensitive << ( i_reg_76 );

    SC_METHOD(thread_i_1_s_fu_163_p2);
    sensitive << ( i_reg_76 );

    SC_METHOD(thread_idx_1_1_fu_191_p2);
    sensitive << ( idx_1_reg_244 );
    sensitive << ( temp1_1_reg_117 );

    SC_METHOD(thread_idx_1_fu_157_p2);
    sensitive << ( idx_reg_64 );
    sensitive << ( temp1_reg_98 );

    SC_METHOD(thread_j_1_fu_181_p2);
    sensitive << ( j_0_in_1_reg_108 );

    SC_METHOD(thread_j_fu_146_p2);
    sensitive << ( j_0_in_reg_89 );

    SC_METHOD(thread_shape_address0);
    sensitive << ( j_reg_229 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j_1_reg_273 );
    sensitive << ( ap_CS_fsm_state15 );

    SC_METHOD(thread_shape_ce0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_CS_fsm_state15 );

    SC_METHOD(thread_sub_address0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( i_1_s_fu_163_p2 );
    sensitive << ( i_reg_76 );

    SC_METHOD(thread_sub_ce0);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_1_fu_187_p2);
    sensitive << ( i_1_s_reg_250 );
    sensitive << ( j_1_reg_273 );
    sensitive << ( ap_CS_fsm_state15 );

    SC_METHOD(thread_tmp_fu_152_p2);
    sensitive << ( j_reg_229 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( i_reg_76 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_141_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_fu_152_p2 );
    sensitive << ( exitcond_1_fu_170_p2 );
    sensitive << ( ap_CS_fsm_state15 );
    sensitive << ( tmp_1_fu_187_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "00000000000000000000001";
    ap_return_preg = "0000000000000000000000000000000000000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "k2c_sub2idx_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, sub_address0, "(port)sub_address0");
    sc_trace(mVcdFile, sub_ce0, "(port)sub_ce0");
    sc_trace(mVcdFile, sub_q0, "(port)sub_q0");
    sc_trace(mVcdFile, shape_address0, "(port)shape_address0");
    sc_trace(mVcdFile, shape_ce0, "(port)shape_ce0");
    sc_trace(mVcdFile, shape_q0, "(port)shape_q0");
    sc_trace(mVcdFile, ndim, "(port)ndim");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_137, "reg_137");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_CS_fsm_state16, "ap_CS_fsm_state16");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond_fu_141_p2, "exitcond_fu_141_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, j_fu_146_p2, "j_fu_146_p2");
    sc_trace(mVcdFile, j_reg_229, "j_reg_229");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_fu_152_p2, "tmp_fu_152_p2");
    sc_trace(mVcdFile, idx_1_fu_157_p2, "idx_1_fu_157_p2");
    sc_trace(mVcdFile, idx_1_reg_244, "idx_1_reg_244");
    sc_trace(mVcdFile, i_1_s_fu_163_p2, "i_1_s_fu_163_p2");
    sc_trace(mVcdFile, i_1_s_reg_250, "i_1_s_reg_250");
    sc_trace(mVcdFile, exitcond_1_fu_170_p2, "exitcond_1_fu_170_p2");
    sc_trace(mVcdFile, grp_fu_175_p2, "grp_fu_175_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state12, "ap_CS_fsm_state12");
    sc_trace(mVcdFile, ap_CS_fsm_state13, "ap_CS_fsm_state13");
    sc_trace(mVcdFile, j_1_fu_181_p2, "j_1_fu_181_p2");
    sc_trace(mVcdFile, j_1_reg_273, "j_1_reg_273");
    sc_trace(mVcdFile, ap_CS_fsm_state14, "ap_CS_fsm_state14");
    sc_trace(mVcdFile, ap_CS_fsm_state15, "ap_CS_fsm_state15");
    sc_trace(mVcdFile, tmp_1_fu_187_p2, "tmp_1_fu_187_p2");
    sc_trace(mVcdFile, idx_1_1_fu_191_p2, "idx_1_1_fu_191_p2");
    sc_trace(mVcdFile, i_1_1_fu_196_p2, "i_1_1_fu_196_p2");
    sc_trace(mVcdFile, grp_fu_202_p2, "grp_fu_202_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state22, "ap_CS_fsm_state22");
    sc_trace(mVcdFile, idx_reg_64, "idx_reg_64");
    sc_trace(mVcdFile, i_reg_76, "i_reg_76");
    sc_trace(mVcdFile, j_0_in_reg_89, "j_0_in_reg_89");
    sc_trace(mVcdFile, temp1_reg_98, "temp1_reg_98");
    sc_trace(mVcdFile, j_0_in_1_reg_108, "j_0_in_1_reg_108");
    sc_trace(mVcdFile, temp1_1_reg_117, "temp1_1_reg_117");
    sc_trace(mVcdFile, idx_lcssa_reg_127, "idx_lcssa_reg_127");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, ap_CS_fsm_state17, "ap_CS_fsm_state17");
    sc_trace(mVcdFile, ap_return_preg, "ap_return_preg");
    sc_trace(mVcdFile, ap_CS_fsm_state23, "ap_CS_fsm_state23");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

k2c_sub2idx::~k2c_sub2idx() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete sample_mul_64s_64dEe_U11;
    delete sample_mul_64s_64dEe_U12;
}

void k2c_sub2idx::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void k2c_sub2idx::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_preg = ap_const_lv64_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
            ap_return_preg = idx_lcssa_reg_127.read();
        }
    }
    if ((esl_seteq<1,1,1>(tmp_1_fu_187_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()))) {
        i_reg_76 = i_1_1_fu_196_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        i_reg_76 = ap_const_lv64_0;
    }
    if ((esl_seteq<1,1,1>(tmp_fu_152_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(exitcond_1_fu_170_p2.read(), ap_const_lv1_1))) {
        idx_lcssa_reg_127 = idx_1_fu_157_p2.read();
    } else if ((esl_seteq<1,1,1>(exitcond_fu_141_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        idx_lcssa_reg_127 = idx_reg_64.read();
    }
    if ((esl_seteq<1,1,1>(tmp_1_fu_187_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()))) {
        idx_reg_64 = idx_1_1_fu_191_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        idx_reg_64 = ap_const_lv64_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        j_0_in_1_reg_108 = j_1_reg_273.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        j_0_in_1_reg_108 = ndim.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        j_0_in_reg_89 = j_reg_229.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_0_in_reg_89 = ndim.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        temp1_1_reg_117 = grp_fu_202_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        temp1_1_reg_117 = sub_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        temp1_reg_98 = grp_fu_175_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        temp1_reg_98 = sub_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(tmp_fu_152_p2.read(), ap_const_lv1_0))) {
        i_1_s_reg_250 = i_1_s_fu_163_p2.read();
        idx_1_reg_244 = idx_1_fu_157_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        j_1_reg_273 = j_1_fu_181_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_reg_229 = j_fu_146_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()))) {
        reg_137 = shape_q0.read();
    }
}

void k2c_sub2idx::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void k2c_sub2idx::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[11];
}

void k2c_sub2idx::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[12];
}

void k2c_sub2idx::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[13];
}

void k2c_sub2idx::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[14];
}

void k2c_sub2idx::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[15];
}

void k2c_sub2idx::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void k2c_sub2idx::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void k2c_sub2idx::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[21];
}

void k2c_sub2idx::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[22];
}

void k2c_sub2idx::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void k2c_sub2idx::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void k2c_sub2idx::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void k2c_sub2idx::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void k2c_sub2idx::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void k2c_sub2idx::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void k2c_sub2idx::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void k2c_sub2idx::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void k2c_sub2idx::thread_ap_return() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ap_return = idx_lcssa_reg_127.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void k2c_sub2idx::thread_exitcond_1_fu_170_p2() {
    exitcond_1_fu_170_p2 = (!i_1_s_fu_163_p2.read().is_01() || !ndim.read().is_01())? sc_lv<1>(): sc_lv<1>(i_1_s_fu_163_p2.read() == ndim.read());
}

void k2c_sub2idx::thread_exitcond_fu_141_p2() {
    exitcond_fu_141_p2 = (!i_reg_76.read().is_01() || !ndim.read().is_01())? sc_lv<1>(): sc_lv<1>(i_reg_76.read() == ndim.read());
}

void k2c_sub2idx::thread_i_1_1_fu_196_p2() {
    i_1_1_fu_196_p2 = (!i_reg_76.read().is_01() || !ap_const_lv64_2.is_01())? sc_lv<64>(): (sc_biguint<64>(i_reg_76.read()) + sc_biguint<64>(ap_const_lv64_2));
}

void k2c_sub2idx::thread_i_1_s_fu_163_p2() {
    i_1_s_fu_163_p2 = (i_reg_76.read() | ap_const_lv64_1);
}

void k2c_sub2idx::thread_idx_1_1_fu_191_p2() {
    idx_1_1_fu_191_p2 = (!temp1_1_reg_117.read().is_01() || !idx_1_reg_244.read().is_01())? sc_lv<64>(): (sc_bigint<64>(temp1_1_reg_117.read()) + sc_biguint<64>(idx_1_reg_244.read()));
}

void k2c_sub2idx::thread_idx_1_fu_157_p2() {
    idx_1_fu_157_p2 = (!temp1_reg_98.read().is_01() || !idx_reg_64.read().is_01())? sc_lv<64>(): (sc_bigint<64>(temp1_reg_98.read()) + sc_biguint<64>(idx_reg_64.read()));
}

void k2c_sub2idx::thread_j_1_fu_181_p2() {
    j_1_fu_181_p2 = (!j_0_in_1_reg_108.read().is_01() || !ap_const_lv64_FFFFFFFFFFFFFFFF.is_01())? sc_lv<64>(): (sc_biguint<64>(j_0_in_1_reg_108.read()) + sc_bigint<64>(ap_const_lv64_FFFFFFFFFFFFFFFF));
}

void k2c_sub2idx::thread_j_fu_146_p2() {
    j_fu_146_p2 = (!j_0_in_reg_89.read().is_01() || !ap_const_lv64_FFFFFFFFFFFFFFFF.is_01())? sc_lv<64>(): (sc_biguint<64>(j_0_in_reg_89.read()) + sc_bigint<64>(ap_const_lv64_FFFFFFFFFFFFFFFF));
}

void k2c_sub2idx::thread_shape_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        shape_address0 =  (sc_lv<3>) (j_1_reg_273.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        shape_address0 =  (sc_lv<3>) (j_reg_229.read());
    } else {
        shape_address0 = "XXX";
    }
}

void k2c_sub2idx::thread_shape_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()))) {
        shape_ce0 = ap_const_logic_1;
    } else {
        shape_ce0 = ap_const_logic_0;
    }
}

void k2c_sub2idx::thread_sub_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        sub_address0 =  (sc_lv<3>) (i_1_s_fu_163_p2.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        sub_address0 =  (sc_lv<3>) (i_reg_76.read());
    } else {
        sub_address0 = "XXX";
    }
}

void k2c_sub2idx::thread_sub_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        sub_ce0 = ap_const_logic_1;
    } else {
        sub_ce0 = ap_const_logic_0;
    }
}

void k2c_sub2idx::thread_tmp_1_fu_187_p2() {
    tmp_1_fu_187_p2 = (!j_1_reg_273.read().is_01() || !i_1_s_reg_250.read().is_01())? sc_lv<1>(): (sc_biguint<64>(j_1_reg_273.read()) > sc_biguint<64>(i_1_s_reg_250.read()));
}

void k2c_sub2idx::thread_tmp_fu_152_p2() {
    tmp_fu_152_p2 = (!j_reg_229.read().is_01() || !i_reg_76.read().is_01())? sc_lv<1>(): (sc_biguint<64>(j_reg_229.read()) > sc_biguint<64>(i_reg_76.read()));
}

void k2c_sub2idx::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(exitcond_fu_141_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state23;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(tmp_fu_152_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(exitcond_1_fu_170_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state23;
            } else if ((esl_seteq<1,1,1>(exitcond_1_fu_170_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_fu_152_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
                ap_NS_fsm = ap_ST_fsm_state13;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(tmp_1_fu_187_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<23>) ("XXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

