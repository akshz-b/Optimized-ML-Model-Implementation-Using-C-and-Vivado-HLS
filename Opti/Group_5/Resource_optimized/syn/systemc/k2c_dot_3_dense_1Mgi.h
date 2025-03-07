// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __k2c_dot_3_dense_1Mgi_H__
#define __k2c_dot_3_dense_1Mgi_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct k2c_dot_3_dense_1Mgi_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(k2c_dot_3_dense_1Mgi_ram) {
        ram[0] = "0b00111100100111110110101100011110";
        ram[1] = "0b00111111000100011011100101100011";
        ram[2] = "0b00111111000000110000101111000110";
        ram[3] = "0b10111110100111110110111101101011";
        ram[4] = "0b10111110100101111100011101111111";
        ram[5] = "0b00111110100100000111110010101110";
        ram[6] = "0b00111101000101101010001101100011";
        ram[7] = "0b10111101011010000111110101101100";
        ram[8] = "0b00111111000001001100001101000111";
        ram[9] = "0b00111101100110111000011100010011";
        ram[10] = "0b10111111001000101010111000100010";
        ram[11] = "0b00111110011011111101110001110100";
        ram[12] = "0b10111110111011001000101000000100";
        ram[13] = "0b00111110001110000001110100100011";
        ram[14] = "0b00111110111000101100001100010101";
        ram[15] = "0b00111111000101001101111011010010";


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


SC_MODULE(k2c_dot_3_dense_1Mgi) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


k2c_dot_3_dense_1Mgi_ram* meminst;


SC_CTOR(k2c_dot_3_dense_1Mgi) {
meminst = new k2c_dot_3_dense_1Mgi_ram("k2c_dot_3_dense_1Mgi_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~k2c_dot_3_dense_1Mgi() {
    delete meminst;
}


};//endmodule
#endif
