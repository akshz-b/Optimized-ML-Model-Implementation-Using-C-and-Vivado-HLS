// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __k2c_dot_3_dense_1bwn_H__
#define __k2c_dot_3_dense_1bwn_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct k2c_dot_3_dense_1bwn_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 64;
  static const unsigned AddressRange = 5;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(k2c_dot_3_dense_1bwn_ram) {
        ram[0] = "0b0000000000000000000000000000000000000000000000000000000000010000";
        ram[1] = "0b0000000000000000000000000000000000000000000000000000000000000001";
        ram[2] = "0b0000000000000000000000000000000000000000000000000000000000000001";
        ram[3] = "0b0000000000000000000000000000000000000000000000000000000000000001";
        ram[4] = "0b0000000000000000000000000000000000000000000000000000000000000001";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(k2c_dot_3_dense_1bwn) {


static const unsigned DataWidth = 64;
static const unsigned AddressRange = 5;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


k2c_dot_3_dense_1bwn_ram* meminst;


SC_CTOR(k2c_dot_3_dense_1bwn) {
meminst = new k2c_dot_3_dense_1bwn_ram("k2c_dot_3_dense_1bwn_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);


meminst->reset(reset);
meminst->clk(clk);
}
~k2c_dot_3_dense_1bwn() {
    delete meminst;
}


};//endmodule
#endif
