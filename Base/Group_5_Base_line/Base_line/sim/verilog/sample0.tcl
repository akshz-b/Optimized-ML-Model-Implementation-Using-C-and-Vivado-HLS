
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set dense_16_output_group [add_wave_group dense_16_output(memory) -into $cinoutgroup]
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_q1 -into $dense_16_output_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_d1 -into $dense_16_output_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_we1 -into $dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_ce1 -into $dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_address1 -into $dense_16_output_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_q0 -into $dense_16_output_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_d0 -into $dense_16_output_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_we0 -into $dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_ce0 -into $dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_array_address0 -into $dense_16_output_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set dense_16_output_group [add_wave_group dense_16_output(wire) -into $cinputgroup]
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_numel -into $dense_16_output_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_16_output_ndim -into $dense_16_output_group -radix hex
set dense_13_input_input_group [add_wave_group dense_13_input_input(memory) -into $cinputgroup]
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_shape_q0 -into $dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_shape_ce0 -into $dense_13_input_input_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_shape_address0 -into $dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_numel -into $dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_ndim -into $dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_array_q0 -into $dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_array_ce0 -into $dense_13_input_input_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/AESL_inst_sample0/dense_13_input_input_array_address0 -into $dense_13_input_input_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_sample0_top/AESL_inst_sample0/ap_start -into $blocksiggroup
add_wave /apatb_sample0_top/AESL_inst_sample0/ap_done -into $blocksiggroup
add_wave /apatb_sample0_top/AESL_inst_sample0/ap_idle -into $blocksiggroup
add_wave /apatb_sample0_top/AESL_inst_sample0/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_sample0_top/AESL_inst_sample0/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_sample0_top/AESL_inst_sample0/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_sample0_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_sample0_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sample0_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_sample0_top/LENGTH_dense_13_input_input_array -into $tb_portdepth_group -radix hex
add_wave /apatb_sample0_top/LENGTH_dense_13_input_input_ndim -into $tb_portdepth_group -radix hex
add_wave /apatb_sample0_top/LENGTH_dense_13_input_input_numel -into $tb_portdepth_group -radix hex
add_wave /apatb_sample0_top/LENGTH_dense_13_input_input_shape -into $tb_portdepth_group -radix hex
add_wave /apatb_sample0_top/LENGTH_dense_16_output_array -into $tb_portdepth_group -radix hex
add_wave /apatb_sample0_top/LENGTH_dense_16_output_numel -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_dense_16_output_group [add_wave_group dense_16_output(memory) -into $tbcinoutgroup]
add_wave /apatb_sample0_top/dense_16_output_array_q1 -into $tb_dense_16_output_group -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_d1 -into $tb_dense_16_output_group -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_we1 -into $tb_dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_ce1 -into $tb_dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_address1 -into $tb_dense_16_output_group -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_q0 -into $tb_dense_16_output_group -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_d0 -into $tb_dense_16_output_group -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_we0 -into $tb_dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_ce0 -into $tb_dense_16_output_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/dense_16_output_array_address0 -into $tb_dense_16_output_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_dense_16_output_group [add_wave_group dense_16_output(wire) -into $tbcinputgroup]
add_wave /apatb_sample0_top/dense_16_output_numel -into $tb_dense_16_output_group -radix hex
add_wave /apatb_sample0_top/dense_16_output_ndim -into $tb_dense_16_output_group -radix hex
set tb_dense_13_input_input_group [add_wave_group dense_13_input_input(memory) -into $tbcinputgroup]
add_wave /apatb_sample0_top/dense_13_input_input_shape_q0 -into $tb_dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_shape_ce0 -into $tb_dense_13_input_input_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_shape_address0 -into $tb_dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_numel -into $tb_dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_ndim -into $tb_dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_array_q0 -into $tb_dense_13_input_input_group -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_array_ce0 -into $tb_dense_13_input_input_group -color #ffff00 -radix hex
add_wave /apatb_sample0_top/dense_13_input_input_array_address0 -into $tb_dense_13_input_input_group -radix hex
save_wave_config sample0.wcfg
run all
quit

