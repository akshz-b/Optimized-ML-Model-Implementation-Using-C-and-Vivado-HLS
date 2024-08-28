
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set dense_16_output_arrray_group [add_wave_group dense_16_output_arrray(memory) -into $cinoutgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_arrray_q0 -into $dense_16_output_arrray_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_arrray_d0 -into $dense_16_output_arrray_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_arrray_we0 -into $dense_16_output_arrray_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_arrray_ce0 -into $dense_16_output_arrray_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_arrray_address0 -into $dense_16_output_arrray_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set dense_16_output_numel_group [add_wave_group dense_16_output_numel(wire) -into $cinputgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_numel -into $dense_16_output_numel_group -radix hex
set dense_16_output_dim_group [add_wave_group dense_16_output_dim(wire) -into $cinputgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_16_output_dim -into $dense_16_output_dim_group -radix hex
set dense_13_input_input_shape_group [add_wave_group dense_13_input_input_shape(memory) -into $cinputgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_shape_q0 -into $dense_13_input_input_shape_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_shape_ce0 -into $dense_13_input_input_shape_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_shape_address0 -into $dense_13_input_input_shape_group -radix hex
set dense_13_input_input_numel_group [add_wave_group dense_13_input_input_numel(wire) -into $cinputgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_numel -into $dense_13_input_input_numel_group -radix hex
set dense_13_input_input_dim_group [add_wave_group dense_13_input_input_dim(wire) -into $cinputgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_dim -into $dense_13_input_input_dim_group -radix hex
set dense_13_input_input_array_group [add_wave_group dense_13_input_input_array(memory) -into $cinputgroup]
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_7_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_7_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_7_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_6_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_6_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_6_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_5_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_5_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_5_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_4_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_4_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_4_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_3_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_3_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_3_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_2_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_2_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_2_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_1_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_1_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_1_address0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_0_q0 -into $dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_0_ce0 -into $dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/AESL_inst_sample/dense_13_input_input_array_0_address0 -into $dense_13_input_input_array_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_sample_top/AESL_inst_sample/ap_start -into $blocksiggroup
add_wave /apatb_sample_top/AESL_inst_sample/ap_done -into $blocksiggroup
add_wave /apatb_sample_top/AESL_inst_sample/ap_idle -into $blocksiggroup
add_wave /apatb_sample_top/AESL_inst_sample/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_sample_top/AESL_inst_sample/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_sample_top/AESL_inst_sample/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_sample_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_sample_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sample_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_5 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_6 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_array_7 -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_dim -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_numel -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_13_input_input_shape -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_16_output_arrray -into $tb_portdepth_group -radix hex
add_wave /apatb_sample_top/LENGTH_dense_16_output_numel -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_dense_16_output_arrray_group [add_wave_group dense_16_output_arrray(memory) -into $tbcinoutgroup]
add_wave /apatb_sample_top/dense_16_output_arrray_q0 -into $tb_dense_16_output_arrray_group -radix hex
add_wave /apatb_sample_top/dense_16_output_arrray_d0 -into $tb_dense_16_output_arrray_group -radix hex
add_wave /apatb_sample_top/dense_16_output_arrray_we0 -into $tb_dense_16_output_arrray_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_16_output_arrray_ce0 -into $tb_dense_16_output_arrray_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_16_output_arrray_address0 -into $tb_dense_16_output_arrray_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_dense_16_output_numel_group [add_wave_group dense_16_output_numel(wire) -into $tbcinputgroup]
add_wave /apatb_sample_top/dense_16_output_numel -into $tb_dense_16_output_numel_group -radix hex
set tb_dense_16_output_dim_group [add_wave_group dense_16_output_dim(wire) -into $tbcinputgroup]
add_wave /apatb_sample_top/dense_16_output_dim -into $tb_dense_16_output_dim_group -radix hex
set tb_dense_13_input_input_shape_group [add_wave_group dense_13_input_input_shape(memory) -into $tbcinputgroup]
add_wave /apatb_sample_top/dense_13_input_input_shape_q0 -into $tb_dense_13_input_input_shape_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_shape_ce0 -into $tb_dense_13_input_input_shape_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_shape_address0 -into $tb_dense_13_input_input_shape_group -radix hex
set tb_dense_13_input_input_numel_group [add_wave_group dense_13_input_input_numel(wire) -into $tbcinputgroup]
add_wave /apatb_sample_top/dense_13_input_input_numel -into $tb_dense_13_input_input_numel_group -radix hex
set tb_dense_13_input_input_dim_group [add_wave_group dense_13_input_input_dim(wire) -into $tbcinputgroup]
add_wave /apatb_sample_top/dense_13_input_input_dim -into $tb_dense_13_input_input_dim_group -radix hex
set tb_dense_13_input_input_array_group [add_wave_group dense_13_input_input_array(memory) -into $tbcinputgroup]
add_wave /apatb_sample_top/dense_13_input_input_array_7_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_7_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_7_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_6_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_6_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_6_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_5_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_5_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_5_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_4_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_4_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_4_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_3_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_3_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_3_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_2_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_2_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_2_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_1_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_1_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_1_address0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_0_q0 -into $tb_dense_13_input_input_array_group -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_0_ce0 -into $tb_dense_13_input_input_array_group -color #ffff00 -radix hex
add_wave /apatb_sample_top/dense_13_input_input_array_0_address0 -into $tb_dense_13_input_input_array_group -radix hex
save_wave_config sample.wcfg
run all
quit

