// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_dense (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_array_address0,
        output_array_ce0,
        output_array_we0,
        output_array_d0,
        output_array_q0,
        output_numel_read,
        input_dim,
        input_numel_read,
        kernel_dim,
        fwork_address0,
        fwork_ce0,
        fwork_we0,
        fwork_d0,
        fwork_q0,
        fwork_address1,
        fwork_ce1,
        fwork_q1,
        dense_15_output_arra_address0,
        dense_15_output_arra_ce0,
        dense_15_output_arra_q0,
        dense_15_output_arra_address1,
        dense_15_output_arra_ce1,
        dense_15_output_arra_q1
);

parameter    ap_ST_fsm_state1 = 66'd1;
parameter    ap_ST_fsm_state2 = 66'd2;
parameter    ap_ST_fsm_state3 = 66'd4;
parameter    ap_ST_fsm_state4 = 66'd8;
parameter    ap_ST_fsm_state5 = 66'd16;
parameter    ap_ST_fsm_state6 = 66'd32;
parameter    ap_ST_fsm_state7 = 66'd64;
parameter    ap_ST_fsm_state8 = 66'd128;
parameter    ap_ST_fsm_state9 = 66'd256;
parameter    ap_ST_fsm_state10 = 66'd512;
parameter    ap_ST_fsm_state11 = 66'd1024;
parameter    ap_ST_fsm_state12 = 66'd2048;
parameter    ap_ST_fsm_state13 = 66'd4096;
parameter    ap_ST_fsm_state14 = 66'd8192;
parameter    ap_ST_fsm_state15 = 66'd16384;
parameter    ap_ST_fsm_state16 = 66'd32768;
parameter    ap_ST_fsm_state17 = 66'd65536;
parameter    ap_ST_fsm_state18 = 66'd131072;
parameter    ap_ST_fsm_state19 = 66'd262144;
parameter    ap_ST_fsm_state20 = 66'd524288;
parameter    ap_ST_fsm_state21 = 66'd1048576;
parameter    ap_ST_fsm_state22 = 66'd2097152;
parameter    ap_ST_fsm_state23 = 66'd4194304;
parameter    ap_ST_fsm_state24 = 66'd8388608;
parameter    ap_ST_fsm_state25 = 66'd16777216;
parameter    ap_ST_fsm_state26 = 66'd33554432;
parameter    ap_ST_fsm_state27 = 66'd67108864;
parameter    ap_ST_fsm_state28 = 66'd134217728;
parameter    ap_ST_fsm_state29 = 66'd268435456;
parameter    ap_ST_fsm_state30 = 66'd536870912;
parameter    ap_ST_fsm_state31 = 66'd1073741824;
parameter    ap_ST_fsm_state32 = 66'd2147483648;
parameter    ap_ST_fsm_state33 = 66'd4294967296;
parameter    ap_ST_fsm_state34 = 66'd8589934592;
parameter    ap_ST_fsm_state35 = 66'd17179869184;
parameter    ap_ST_fsm_state36 = 66'd34359738368;
parameter    ap_ST_fsm_state37 = 66'd68719476736;
parameter    ap_ST_fsm_state38 = 66'd137438953472;
parameter    ap_ST_fsm_state39 = 66'd274877906944;
parameter    ap_ST_fsm_state40 = 66'd549755813888;
parameter    ap_ST_fsm_state41 = 66'd1099511627776;
parameter    ap_ST_fsm_state42 = 66'd2199023255552;
parameter    ap_ST_fsm_state43 = 66'd4398046511104;
parameter    ap_ST_fsm_state44 = 66'd8796093022208;
parameter    ap_ST_fsm_state45 = 66'd17592186044416;
parameter    ap_ST_fsm_state46 = 66'd35184372088832;
parameter    ap_ST_fsm_state47 = 66'd70368744177664;
parameter    ap_ST_fsm_state48 = 66'd140737488355328;
parameter    ap_ST_fsm_state49 = 66'd281474976710656;
parameter    ap_ST_fsm_state50 = 66'd562949953421312;
parameter    ap_ST_fsm_state51 = 66'd1125899906842624;
parameter    ap_ST_fsm_state52 = 66'd2251799813685248;
parameter    ap_ST_fsm_state53 = 66'd4503599627370496;
parameter    ap_ST_fsm_state54 = 66'd9007199254740992;
parameter    ap_ST_fsm_state55 = 66'd18014398509481984;
parameter    ap_ST_fsm_state56 = 66'd36028797018963968;
parameter    ap_ST_fsm_state57 = 66'd72057594037927936;
parameter    ap_ST_fsm_state58 = 66'd144115188075855872;
parameter    ap_ST_fsm_state59 = 66'd288230376151711744;
parameter    ap_ST_fsm_state60 = 66'd576460752303423488;
parameter    ap_ST_fsm_state61 = 66'd1152921504606846976;
parameter    ap_ST_fsm_state62 = 66'd2305843009213693952;
parameter    ap_ST_fsm_state63 = 66'd4611686018427387904;
parameter    ap_ST_fsm_state64 = 66'd9223372036854775808;
parameter    ap_ST_fsm_state65 = 66'd18446744073709551616;
parameter    ap_ST_fsm_state66 = 66'd36893488147419103232;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [0:0] output_array_address0;
output   output_array_ce0;
output   output_array_we0;
output  [31:0] output_array_d0;
input  [31:0] output_array_q0;
input  [63:0] output_numel_read;
input  [63:0] input_dim;
input  [63:0] input_numel_read;
input  [63:0] kernel_dim;
output  [4:0] fwork_address0;
output   fwork_ce0;
output   fwork_we0;
output  [31:0] fwork_d0;
input  [31:0] fwork_q0;
output  [4:0] fwork_address1;
output   fwork_ce1;
input  [31:0] fwork_q1;
output  [3:0] dense_15_output_arra_address0;
output   dense_15_output_arra_ce0;
input  [31:0] dense_15_output_arra_q0;
output  [3:0] dense_15_output_arra_address1;
output   dense_15_output_arra_ce1;
input  [31:0] dense_15_output_arra_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[0:0] output_array_address0;
reg output_array_ce0;
reg output_array_we0;
reg[31:0] output_array_d0;
reg[3:0] dense_15_output_arra_address0;
reg dense_15_output_arra_ce0;
reg dense_15_output_arra_ce1;

(* fsm_encoding = "none" *) reg   [65:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [3:0] dense_16_kernel_arra_address0;
reg    dense_16_kernel_arra_ce0;
wire   [31:0] dense_16_kernel_arra_q0;
reg    dense_16_kernel_arra_ce1;
wire   [31:0] dense_16_kernel_arra_q1;
reg   [63:0] dense_16_kernel_nume;
reg   [63:0] dense_16_bias_numel;
reg   [31:0] reg_219;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state40;
wire   [31:0] grp_fu_214_p2;
reg   [31:0] reg_224;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_state48;
wire   [31:0] grp_fu_201_p2;
reg   [31:0] reg_229;
wire    ap_CS_fsm_state24;
wire    ap_CS_fsm_state53;
wire   [31:0] grp_fu_209_p2;
reg   [31:0] reg_234;
wire    ap_CS_fsm_state36;
wire    ap_CS_fsm_state65;
wire   [0:0] tmp_fu_239_p2;
reg   [0:0] tmp_reg_409;
wire   [63:0] tmp_16_fu_245_p2;
reg   [63:0] tmp_16_reg_413;
wire   [4:0] p_s_fu_273_p3;
reg   [4:0] p_s_reg_423;
wire    ap_CS_fsm_state2;
wire    grp_k2c_dot_3_fu_166_ap_idle;
wire    grp_k2c_dot_3_fu_166_ap_ready;
wire    grp_k2c_dot_3_fu_166_ap_done;
wire   [63:0] j_fu_300_p2;
reg   [63:0] j_reg_441;
wire    ap_CS_fsm_state4;
reg   [0:0] output_array_addr_2_reg_446;
wire   [0:0] exitcond_i_fu_295_p2;
wire   [63:0] i_36_fu_321_p2;
reg   [0:0] output_array_addr_reg_459;
wire    ap_CS_fsm_state10;
wire   [0:0] exitcond3_fu_331_p2;
wire   [0:0] i_fu_336_p2;
reg   [0:0] i_reg_464;
wire   [31:0] tmp_21_fu_352_p1;
wire    ap_CS_fsm_state12;
wire   [4:0] i_35_fu_367_p2;
reg   [4:0] i_35_reg_477;
wire    ap_CS_fsm_state39;
reg   [0:0] output_array_addr_1_reg_482;
wire   [0:0] exitcond_fu_362_p2;
wire   [31:0] tmp_17_fu_383_p1;
wire    ap_CS_fsm_state41;
wire    grp_k2c_dot_3_fu_166_ap_start;
wire   [0:0] grp_k2c_dot_3_fu_166_C_array_address0;
wire    grp_k2c_dot_3_fu_166_C_array_ce0;
wire    grp_k2c_dot_3_fu_166_C_array_we0;
wire   [31:0] grp_k2c_dot_3_fu_166_C_array_d0;
wire   [3:0] grp_k2c_dot_3_fu_166_A_array_address0;
wire    grp_k2c_dot_3_fu_166_A_array_ce0;
wire   [4:0] grp_k2c_dot_3_fu_166_fwork_address0;
wire    grp_k2c_dot_3_fu_166_fwork_ce0;
wire    grp_k2c_dot_3_fu_166_fwork_we0;
wire   [31:0] grp_k2c_dot_3_fu_166_fwork_d0;
wire   [4:0] grp_k2c_dot_3_fu_166_fwork_address1;
wire    grp_k2c_dot_3_fu_166_fwork_ce1;
wire    grp_k2c_affine_matmul_3_fu_190_ap_start;
wire    grp_k2c_affine_matmul_3_fu_190_ap_done;
wire    grp_k2c_affine_matmul_3_fu_190_ap_idle;
wire    grp_k2c_affine_matmul_3_fu_190_ap_ready;
wire   [0:0] grp_k2c_affine_matmul_3_fu_190_C_address0;
wire    grp_k2c_affine_matmul_3_fu_190_C_ce0;
wire    grp_k2c_affine_matmul_3_fu_190_C_we0;
wire   [31:0] grp_k2c_affine_matmul_3_fu_190_C_d0;
wire   [3:0] grp_k2c_affine_matmul_3_fu_190_A_address0;
wire    grp_k2c_affine_matmul_3_fu_190_A_ce0;
wire   [3:0] grp_k2c_affine_matmul_3_fu_190_A_address1;
wire    grp_k2c_affine_matmul_3_fu_190_A_ce1;
wire   [3:0] grp_k2c_affine_matmul_3_fu_190_B_address0;
wire    grp_k2c_affine_matmul_3_fu_190_B_ce0;
wire   [3:0] grp_k2c_affine_matmul_3_fu_190_B_address1;
wire    grp_k2c_affine_matmul_3_fu_190_B_ce1;
reg   [63:0] i_i_reg_121;
reg   [63:0] j_i_reg_133;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state3;
wire   [0:0] tmp_i_fu_286_p2;
reg   [0:0] i_3_reg_144;
wire    ap_CS_fsm_state37;
reg   [4:0] i_1_reg_155;
wire    ap_CS_fsm_state66;
wire    ap_CS_fsm_state38;
reg    grp_k2c_dot_3_fu_166_ap_start_reg;
reg    grp_k2c_affine_matmul_3_fu_190_ap_start_reg;
wire   [63:0] sum_i_cast_fu_316_p1;
wire   [63:0] i_3_cast_fu_326_p1;
wire   [63:0] i_1_cast1_fu_357_p1;
reg   [31:0] grp_fu_201_p0;
reg   [31:0] grp_fu_201_p1;
wire    ap_CS_fsm_state20;
wire    ap_CS_fsm_state49;
wire    ap_CS_fsm_state25;
wire    ap_CS_fsm_state54;
reg   [31:0] grp_fu_214_p1;
wire   [62:0] tmp_66_fu_257_p4;
wire   [0:0] icmp_fu_267_p2;
wire   [1:0] tmp_68_fu_306_p1;
wire   [1:0] tmp_67_fu_291_p1;
wire   [1:0] sum_i_fu_310_p2;
wire   [31:0] tmp_24_to_int_fu_342_p1;
wire   [31:0] tmp_24_neg_fu_346_p2;
wire   [31:0] tmp_29_to_int_fu_373_p1;
wire   [31:0] tmp_29_neg_fu_377_p2;
reg   [65:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 66'd1;
#0 dense_16_kernel_nume = 64'd16;
#0 dense_16_bias_numel = 64'd1;
#0 grp_k2c_dot_3_fu_166_ap_start_reg = 1'b0;
#0 grp_k2c_affine_matmul_3_fu_190_ap_start_reg = 1'b0;
end

k2c_dense_dense_1OgC #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
dense_16_kernel_arra_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dense_16_kernel_arra_address0),
    .ce0(dense_16_kernel_arra_ce0),
    .q0(dense_16_kernel_arra_q0),
    .address1(grp_k2c_affine_matmul_3_fu_190_B_address1),
    .ce1(dense_16_kernel_arra_ce1),
    .q1(dense_16_kernel_arra_q1)
);

k2c_dot_3 grp_k2c_dot_3_fu_166(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_k2c_dot_3_fu_166_ap_start),
    .ap_done(grp_k2c_dot_3_fu_166_ap_done),
    .ap_idle(grp_k2c_dot_3_fu_166_ap_idle),
    .ap_ready(grp_k2c_dot_3_fu_166_ap_ready),
    .C_array_address0(grp_k2c_dot_3_fu_166_C_array_address0),
    .C_array_ce0(grp_k2c_dot_3_fu_166_C_array_ce0),
    .C_array_we0(grp_k2c_dot_3_fu_166_C_array_we0),
    .C_array_d0(grp_k2c_dot_3_fu_166_C_array_d0),
    .C_array_q0(output_array_q0),
    .A_array_address0(grp_k2c_dot_3_fu_166_A_array_address0),
    .A_array_ce0(grp_k2c_dot_3_fu_166_A_array_ce0),
    .A_array_q0(dense_15_output_arra_q0),
    .A_dim(input_dim),
    .A_numel_read(input_numel_read),
    .B_dim(kernel_dim),
    .B_numel_read(dense_16_kernel_nume),
    .p_read2(tmp_16_reg_413),
    .fwork_address0(grp_k2c_dot_3_fu_166_fwork_address0),
    .fwork_ce0(grp_k2c_dot_3_fu_166_fwork_ce0),
    .fwork_we0(grp_k2c_dot_3_fu_166_fwork_we0),
    .fwork_d0(grp_k2c_dot_3_fu_166_fwork_d0),
    .fwork_q0(fwork_q0),
    .fwork_address1(grp_k2c_dot_3_fu_166_fwork_address1),
    .fwork_ce1(grp_k2c_dot_3_fu_166_fwork_ce1),
    .fwork_q1(fwork_q1)
);

k2c_affine_matmul_3 grp_k2c_affine_matmul_3_fu_190(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_k2c_affine_matmul_3_fu_190_ap_start),
    .ap_done(grp_k2c_affine_matmul_3_fu_190_ap_done),
    .ap_idle(grp_k2c_affine_matmul_3_fu_190_ap_idle),
    .ap_ready(grp_k2c_affine_matmul_3_fu_190_ap_ready),
    .C_address0(grp_k2c_affine_matmul_3_fu_190_C_address0),
    .C_ce0(grp_k2c_affine_matmul_3_fu_190_C_ce0),
    .C_we0(grp_k2c_affine_matmul_3_fu_190_C_we0),
    .C_d0(grp_k2c_affine_matmul_3_fu_190_C_d0),
    .A_address0(grp_k2c_affine_matmul_3_fu_190_A_address0),
    .A_ce0(grp_k2c_affine_matmul_3_fu_190_A_ce0),
    .A_q0(dense_15_output_arra_q0),
    .A_address1(grp_k2c_affine_matmul_3_fu_190_A_address1),
    .A_ce1(grp_k2c_affine_matmul_3_fu_190_A_ce1),
    .A_q1(dense_15_output_arra_q1),
    .B_address0(grp_k2c_affine_matmul_3_fu_190_B_address0),
    .B_ce0(grp_k2c_affine_matmul_3_fu_190_B_ce0),
    .B_q0(dense_16_kernel_arra_q0),
    .B_address1(grp_k2c_affine_matmul_3_fu_190_B_address1),
    .B_ce1(grp_k2c_affine_matmul_3_fu_190_B_ce1),
    .B_q1(dense_16_kernel_arra_q1),
    .outrows(p_s_reg_423)
);

sample_fadd_32ns_hbi #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
sample_fadd_32ns_hbi_U164(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_201_p0),
    .din1(grp_fu_201_p1),
    .ce(1'b1),
    .dout(grp_fu_201_p2)
);

sample_fdiv_32ns_PgM #(
    .ID( 1 ),
    .NUM_STAGE( 12 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
sample_fdiv_32ns_PgM_U165(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(32'd1065353216),
    .din1(reg_229),
    .ce(1'b1),
    .dout(grp_fu_209_p2)
);

sample_fexp_32ns_QgW #(
    .ID( 1 ),
    .NUM_STAGE( 8 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
sample_fexp_32ns_QgW_U166(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(32'd0),
    .din1(grp_fu_214_p1),
    .ce(1'b1),
    .dout(grp_fu_214_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_k2c_affine_matmul_3_fu_190_ap_start_reg <= 1'b0;
    end else begin
        if (((ap_start == 1'b1) & (tmp_fu_239_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
            grp_k2c_affine_matmul_3_fu_190_ap_start_reg <= 1'b1;
        end else if ((grp_k2c_affine_matmul_3_fu_190_ap_ready == 1'b1)) begin
            grp_k2c_affine_matmul_3_fu_190_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_k2c_dot_3_fu_166_ap_start_reg <= 1'b0;
    end else begin
        if (((ap_start == 1'b1) & (tmp_fu_239_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
            grp_k2c_dot_3_fu_166_ap_start_reg <= 1'b1;
        end else if ((grp_k2c_dot_3_fu_166_ap_ready == 1'b1)) begin
            grp_k2c_dot_3_fu_166_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((grp_k2c_affine_matmul_3_fu_190_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state38))) begin
        i_1_reg_155 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state66)) begin
        i_1_reg_155 <= i_35_reg_477;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_fu_286_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_3_reg_144 <= 1'd0;
    end else if ((1'b1 == ap_CS_fsm_state37)) begin
        i_3_reg_144 <= i_reg_464;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        i_i_reg_121 <= i_36_fu_321_p2;
    end else if (((grp_k2c_dot_3_fu_166_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_i_reg_121 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_i_fu_286_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        j_i_reg_133 <= 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        j_i_reg_133 <= j_reg_441;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state39)) begin
        i_35_reg_477 <= i_35_fu_367_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_331_p2 == 1'd0) & (tmp_reg_409 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
        i_reg_464 <= i_fu_336_p2;
        output_array_addr_reg_459 <= i_3_cast_fu_326_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_441 <= j_fu_300_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_362_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state39))) begin
        output_array_addr_1_reg_482 <= i_1_cast1_fu_357_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_i_fu_295_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        output_array_addr_2_reg_446 <= sum_i_cast_fu_316_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (tmp_fu_239_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        p_s_reg_423[0] <= p_s_fu_273_p3[0];
p_s_reg_423[4] <= p_s_fu_273_p3[4];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state40) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state5))) begin
        reg_219 <= output_array_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state48) | (1'b1 == ap_CS_fsm_state19))) begin
        reg_224 <= grp_fu_214_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state53) | (1'b1 == ap_CS_fsm_state24))) begin
        reg_229 <= grp_fu_201_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state65) | (1'b1 == ap_CS_fsm_state36))) begin
        reg_234 <= grp_fu_209_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (tmp_fu_239_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_16_reg_413 <= tmp_16_fu_245_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_reg_409 <= tmp_fu_239_p2;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state10) & ((exitcond3_fu_331_p2 == 1'd1) | (tmp_reg_409 == 1'd1))))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state10) & ((exitcond3_fu_331_p2 == 1'd1) | (tmp_reg_409 == 1'd1)))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state38)) begin
        dense_15_output_arra_address0 = grp_k2c_affine_matmul_3_fu_190_A_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        dense_15_output_arra_address0 = grp_k2c_dot_3_fu_166_A_array_address0;
    end else begin
        dense_15_output_arra_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state38)) begin
        dense_15_output_arra_ce0 = grp_k2c_affine_matmul_3_fu_190_A_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        dense_15_output_arra_ce0 = grp_k2c_dot_3_fu_166_A_array_ce0;
    end else begin
        dense_15_output_arra_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state38)) begin
        dense_15_output_arra_ce1 = grp_k2c_affine_matmul_3_fu_190_A_ce1;
    end else begin
        dense_15_output_arra_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state38)) begin
        dense_16_kernel_arra_address0 = grp_k2c_affine_matmul_3_fu_190_B_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        dense_16_kernel_arra_address0 = 4'd0;
    end else begin
        dense_16_kernel_arra_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state38)) begin
        dense_16_kernel_arra_ce0 = grp_k2c_affine_matmul_3_fu_190_B_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        dense_16_kernel_arra_ce0 = 1'b0;
    end else begin
        dense_16_kernel_arra_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state38)) begin
        dense_16_kernel_arra_ce1 = grp_k2c_affine_matmul_3_fu_190_B_ce1;
    end else begin
        dense_16_kernel_arra_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state49) | (1'b1 == ap_CS_fsm_state20))) begin
        grp_fu_201_p0 = reg_224;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_201_p0 = output_array_q0;
    end else begin
        grp_fu_201_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state49) | (1'b1 == ap_CS_fsm_state20))) begin
        grp_fu_201_p1 = 32'd1065353216;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_201_p1 = 32'd3172971855;
    end else begin
        grp_fu_201_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state41)) begin
        grp_fu_214_p1 = tmp_17_fu_383_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_fu_214_p1 = tmp_21_fu_352_p1;
    end else begin
        grp_fu_214_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state66)) begin
        output_array_address0 = output_array_addr_1_reg_482;
    end else if ((1'b1 == ap_CS_fsm_state39)) begin
        output_array_address0 = i_1_cast1_fu_357_p1;
    end else if ((1'b1 == ap_CS_fsm_state37)) begin
        output_array_address0 = output_array_addr_reg_459;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        output_array_address0 = i_3_cast_fu_326_p1;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        output_array_address0 = output_array_addr_2_reg_446;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        output_array_address0 = sum_i_cast_fu_316_p1;
    end else if ((1'b1 == ap_CS_fsm_state38)) begin
        output_array_address0 = grp_k2c_affine_matmul_3_fu_190_C_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_address0 = grp_k2c_dot_3_fu_166_C_array_address0;
    end else begin
        output_array_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state39) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state4))) begin
        output_array_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state38)) begin
        output_array_ce0 = grp_k2c_affine_matmul_3_fu_190_C_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_ce0 = grp_k2c_dot_3_fu_166_C_array_ce0;
    end else begin
        output_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state37))) begin
        output_array_d0 = reg_234;
    end else if ((1'b1 == ap_CS_fsm_state9)) begin
        output_array_d0 = grp_fu_201_p2;
    end else if ((1'b1 == ap_CS_fsm_state38)) begin
        output_array_d0 = grp_k2c_affine_matmul_3_fu_190_C_d0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_d0 = grp_k2c_dot_3_fu_166_C_array_d0;
    end else begin
        output_array_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state66) | (1'b1 == ap_CS_fsm_state37) | (1'b1 == ap_CS_fsm_state9))) begin
        output_array_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state38)) begin
        output_array_we0 = grp_k2c_affine_matmul_3_fu_190_C_we0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_we0 = grp_k2c_dot_3_fu_166_C_array_we0;
    end else begin
        output_array_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (tmp_fu_239_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state38;
            end else if (((ap_start == 1'b1) & (tmp_fu_239_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((grp_k2c_dot_3_fu_166_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_i_fu_286_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((exitcond_i_fu_295_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state10 : begin
            if (((1'b1 == ap_CS_fsm_state10) & ((exitcond3_fu_331_p2 == 1'd1) | (tmp_reg_409 == 1'd1)))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state38 : begin
            if (((grp_k2c_affine_matmul_3_fu_190_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state38))) begin
                ap_NS_fsm = ap_ST_fsm_state39;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state38;
            end
        end
        ap_ST_fsm_state39 : begin
            if (((exitcond_fu_362_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state39))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state40;
            end
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state59;
        end
        ap_ST_fsm_state59 : begin
            ap_NS_fsm = ap_ST_fsm_state60;
        end
        ap_ST_fsm_state60 : begin
            ap_NS_fsm = ap_ST_fsm_state61;
        end
        ap_ST_fsm_state61 : begin
            ap_NS_fsm = ap_ST_fsm_state62;
        end
        ap_ST_fsm_state62 : begin
            ap_NS_fsm = ap_ST_fsm_state63;
        end
        ap_ST_fsm_state63 : begin
            ap_NS_fsm = ap_ST_fsm_state64;
        end
        ap_ST_fsm_state64 : begin
            ap_NS_fsm = ap_ST_fsm_state65;
        end
        ap_ST_fsm_state65 : begin
            ap_NS_fsm = ap_ST_fsm_state66;
        end
        ap_ST_fsm_state66 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state36 = ap_CS_fsm[32'd35];

assign ap_CS_fsm_state37 = ap_CS_fsm[32'd36];

assign ap_CS_fsm_state38 = ap_CS_fsm[32'd37];

assign ap_CS_fsm_state39 = ap_CS_fsm[32'd38];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state40 = ap_CS_fsm[32'd39];

assign ap_CS_fsm_state41 = ap_CS_fsm[32'd40];

assign ap_CS_fsm_state48 = ap_CS_fsm[32'd47];

assign ap_CS_fsm_state49 = ap_CS_fsm[32'd48];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state53 = ap_CS_fsm[32'd52];

assign ap_CS_fsm_state54 = ap_CS_fsm[32'd53];

assign ap_CS_fsm_state65 = ap_CS_fsm[32'd64];

assign ap_CS_fsm_state66 = ap_CS_fsm[32'd65];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign dense_15_output_arra_address1 = grp_k2c_affine_matmul_3_fu_190_A_address1;

assign exitcond3_fu_331_p2 = ((i_3_cast_fu_326_p1 == output_numel_read) ? 1'b1 : 1'b0);

assign exitcond_fu_362_p2 = ((i_1_reg_155 == p_s_reg_423) ? 1'b1 : 1'b0);

assign exitcond_i_fu_295_p2 = ((j_i_reg_133 == dense_16_bias_numel) ? 1'b1 : 1'b0);

assign fwork_address0 = grp_k2c_dot_3_fu_166_fwork_address0;

assign fwork_address1 = grp_k2c_dot_3_fu_166_fwork_address1;

assign fwork_ce0 = grp_k2c_dot_3_fu_166_fwork_ce0;

assign fwork_ce1 = grp_k2c_dot_3_fu_166_fwork_ce1;

assign fwork_d0 = grp_k2c_dot_3_fu_166_fwork_d0;

assign fwork_we0 = grp_k2c_dot_3_fu_166_fwork_we0;

assign grp_k2c_affine_matmul_3_fu_190_ap_start = grp_k2c_affine_matmul_3_fu_190_ap_start_reg;

assign grp_k2c_dot_3_fu_166_ap_start = grp_k2c_dot_3_fu_166_ap_start_reg;

assign i_1_cast1_fu_357_p1 = i_1_reg_155;

assign i_35_fu_367_p2 = (i_1_reg_155 + 5'd1);

assign i_36_fu_321_p2 = (dense_16_bias_numel + i_i_reg_121);

assign i_3_cast_fu_326_p1 = i_3_reg_144;

assign i_fu_336_p2 = (i_3_reg_144 ^ 1'd1);

assign icmp_fu_267_p2 = ((tmp_66_fu_257_p4 != 63'd0) ? 1'b1 : 1'b0);

assign j_fu_300_p2 = (64'd1 + j_i_reg_133);

assign p_s_fu_273_p3 = ((icmp_fu_267_p2[0:0] === 1'b1) ? 5'd16 : 5'd1);

assign sum_i_cast_fu_316_p1 = sum_i_fu_310_p2;

assign sum_i_fu_310_p2 = (tmp_68_fu_306_p1 + tmp_67_fu_291_p1);

assign tmp_16_fu_245_p2 = ($signed(input_dim) + $signed(64'd18446744073709551615));

assign tmp_17_fu_383_p1 = tmp_29_neg_fu_377_p2;

assign tmp_21_fu_352_p1 = tmp_24_neg_fu_346_p2;

assign tmp_24_neg_fu_346_p2 = (tmp_24_to_int_fu_342_p1 ^ 32'd2147483648);

assign tmp_24_to_int_fu_342_p1 = reg_219;

assign tmp_29_neg_fu_377_p2 = (tmp_29_to_int_fu_373_p1 ^ 32'd2147483648);

assign tmp_29_to_int_fu_373_p1 = reg_219;

assign tmp_66_fu_257_p4 = {{input_dim[63:1]}};

assign tmp_67_fu_291_p1 = j_i_reg_133[1:0];

assign tmp_68_fu_306_p1 = i_i_reg_121[1:0];

assign tmp_fu_239_p2 = ((input_dim < 64'd3) ? 1'b1 : 1'b0);

assign tmp_i_fu_286_p2 = ((i_i_reg_121 < output_numel_read) ? 1'b1 : 1'b0);

always @ (posedge ap_clk) begin
    p_s_reg_423[3:1] <= 3'b000;
end

endmodule //k2c_dense
