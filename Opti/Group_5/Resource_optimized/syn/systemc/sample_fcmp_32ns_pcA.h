// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __sample_fcmp_32ns_pcA__HH__
#define __sample_fcmp_32ns_pcA__HH__
#include "ACMP_fcmp_comb.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(sample_fcmp_32ns_pcA) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_in< sc_dt::sc_lv<5> >   opcode;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fcmp_comb<ID, 1, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_fcmp_comb_U;

    SC_CTOR(sample_fcmp_32ns_pcA):  ACMP_fcmp_comb_U ("ACMP_fcmp_comb_U") {
        ACMP_fcmp_comb_U.din0(din0);
        ACMP_fcmp_comb_U.din1(din1);
        ACMP_fcmp_comb_U.dout(dout);
        ACMP_fcmp_comb_U.opcode(opcode);

    }

};

#endif //
