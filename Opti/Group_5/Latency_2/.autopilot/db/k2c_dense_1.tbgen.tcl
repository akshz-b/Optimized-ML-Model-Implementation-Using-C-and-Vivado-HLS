set moduleName k2c_dense_1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {k2c_dense.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_numel_read int 64 regular  }
	{ input_dim int 64 regular  }
	{ input_numel_read int 64 regular  }
	{ kernel_dim int 64 regular  }
	{ dense_15_output_arra_7 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra_6 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra_5 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra_4 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra_3 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra_2 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra_1 float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_15_output_arra float 32 regular {array 2 { 2 3 } 1 1 } {global 2}  }
	{ dense_14_output_arra_7 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra_6 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra_5 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra_4 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra_3 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra_2 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra_1 float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
	{ dense_14_output_arra float 32 regular {array 4 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "dense_15_output_arra_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 8,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 9,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 10,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 11,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 12,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 13,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 14,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_15_output_arra", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_15_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 15,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 24,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 25,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 26,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 27,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 28,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 29,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 30,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_14_output_arra", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_14_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 31,"step" : 8}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 74
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_numel_read sc_in sc_lv 64 signal 0 } 
	{ input_dim sc_in sc_lv 64 signal 1 } 
	{ input_numel_read sc_in sc_lv 64 signal 2 } 
	{ kernel_dim sc_in sc_lv 64 signal 3 } 
	{ dense_15_output_arra_7_address0 sc_out sc_lv 1 signal 4 } 
	{ dense_15_output_arra_7_ce0 sc_out sc_logic 1 signal 4 } 
	{ dense_15_output_arra_7_we0 sc_out sc_logic 1 signal 4 } 
	{ dense_15_output_arra_7_d0 sc_out sc_lv 32 signal 4 } 
	{ dense_15_output_arra_7_q0 sc_in sc_lv 32 signal 4 } 
	{ dense_15_output_arra_6_address0 sc_out sc_lv 1 signal 5 } 
	{ dense_15_output_arra_6_ce0 sc_out sc_logic 1 signal 5 } 
	{ dense_15_output_arra_6_we0 sc_out sc_logic 1 signal 5 } 
	{ dense_15_output_arra_6_d0 sc_out sc_lv 32 signal 5 } 
	{ dense_15_output_arra_6_q0 sc_in sc_lv 32 signal 5 } 
	{ dense_15_output_arra_5_address0 sc_out sc_lv 1 signal 6 } 
	{ dense_15_output_arra_5_ce0 sc_out sc_logic 1 signal 6 } 
	{ dense_15_output_arra_5_we0 sc_out sc_logic 1 signal 6 } 
	{ dense_15_output_arra_5_d0 sc_out sc_lv 32 signal 6 } 
	{ dense_15_output_arra_5_q0 sc_in sc_lv 32 signal 6 } 
	{ dense_15_output_arra_4_address0 sc_out sc_lv 1 signal 7 } 
	{ dense_15_output_arra_4_ce0 sc_out sc_logic 1 signal 7 } 
	{ dense_15_output_arra_4_we0 sc_out sc_logic 1 signal 7 } 
	{ dense_15_output_arra_4_d0 sc_out sc_lv 32 signal 7 } 
	{ dense_15_output_arra_4_q0 sc_in sc_lv 32 signal 7 } 
	{ dense_15_output_arra_3_address0 sc_out sc_lv 1 signal 8 } 
	{ dense_15_output_arra_3_ce0 sc_out sc_logic 1 signal 8 } 
	{ dense_15_output_arra_3_we0 sc_out sc_logic 1 signal 8 } 
	{ dense_15_output_arra_3_d0 sc_out sc_lv 32 signal 8 } 
	{ dense_15_output_arra_3_q0 sc_in sc_lv 32 signal 8 } 
	{ dense_15_output_arra_2_address0 sc_out sc_lv 1 signal 9 } 
	{ dense_15_output_arra_2_ce0 sc_out sc_logic 1 signal 9 } 
	{ dense_15_output_arra_2_we0 sc_out sc_logic 1 signal 9 } 
	{ dense_15_output_arra_2_d0 sc_out sc_lv 32 signal 9 } 
	{ dense_15_output_arra_2_q0 sc_in sc_lv 32 signal 9 } 
	{ dense_15_output_arra_1_address0 sc_out sc_lv 1 signal 10 } 
	{ dense_15_output_arra_1_ce0 sc_out sc_logic 1 signal 10 } 
	{ dense_15_output_arra_1_we0 sc_out sc_logic 1 signal 10 } 
	{ dense_15_output_arra_1_d0 sc_out sc_lv 32 signal 10 } 
	{ dense_15_output_arra_1_q0 sc_in sc_lv 32 signal 10 } 
	{ dense_15_output_arra_address0 sc_out sc_lv 1 signal 11 } 
	{ dense_15_output_arra_ce0 sc_out sc_logic 1 signal 11 } 
	{ dense_15_output_arra_we0 sc_out sc_logic 1 signal 11 } 
	{ dense_15_output_arra_d0 sc_out sc_lv 32 signal 11 } 
	{ dense_15_output_arra_q0 sc_in sc_lv 32 signal 11 } 
	{ dense_14_output_arra_7_address0 sc_out sc_lv 2 signal 12 } 
	{ dense_14_output_arra_7_ce0 sc_out sc_logic 1 signal 12 } 
	{ dense_14_output_arra_7_q0 sc_in sc_lv 32 signal 12 } 
	{ dense_14_output_arra_6_address0 sc_out sc_lv 2 signal 13 } 
	{ dense_14_output_arra_6_ce0 sc_out sc_logic 1 signal 13 } 
	{ dense_14_output_arra_6_q0 sc_in sc_lv 32 signal 13 } 
	{ dense_14_output_arra_5_address0 sc_out sc_lv 2 signal 14 } 
	{ dense_14_output_arra_5_ce0 sc_out sc_logic 1 signal 14 } 
	{ dense_14_output_arra_5_q0 sc_in sc_lv 32 signal 14 } 
	{ dense_14_output_arra_4_address0 sc_out sc_lv 2 signal 15 } 
	{ dense_14_output_arra_4_ce0 sc_out sc_logic 1 signal 15 } 
	{ dense_14_output_arra_4_q0 sc_in sc_lv 32 signal 15 } 
	{ dense_14_output_arra_3_address0 sc_out sc_lv 2 signal 16 } 
	{ dense_14_output_arra_3_ce0 sc_out sc_logic 1 signal 16 } 
	{ dense_14_output_arra_3_q0 sc_in sc_lv 32 signal 16 } 
	{ dense_14_output_arra_2_address0 sc_out sc_lv 2 signal 17 } 
	{ dense_14_output_arra_2_ce0 sc_out sc_logic 1 signal 17 } 
	{ dense_14_output_arra_2_q0 sc_in sc_lv 32 signal 17 } 
	{ dense_14_output_arra_1_address0 sc_out sc_lv 2 signal 18 } 
	{ dense_14_output_arra_1_ce0 sc_out sc_logic 1 signal 18 } 
	{ dense_14_output_arra_1_q0 sc_in sc_lv 32 signal 18 } 
	{ dense_14_output_arra_address0 sc_out sc_lv 2 signal 19 } 
	{ dense_14_output_arra_ce0 sc_out sc_logic 1 signal 19 } 
	{ dense_14_output_arra_q0 sc_in sc_lv 32 signal 19 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "output_numel_read", "role": "default" }} , 
 	{ "name": "input_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_dim", "role": "default" }} , 
 	{ "name": "input_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_numel_read", "role": "default" }} , 
 	{ "name": "kernel_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "kernel_dim", "role": "default" }} , 
 	{ "name": "dense_15_output_arra_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_7", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_7", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_7", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_7", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_7", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_6", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_6", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_6", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_6", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_6", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_5", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_5", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_5", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_5", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_5", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_4", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_4", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_4", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_4", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_4", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_3", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_3", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_3", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_3", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_3", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_2", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_2", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_2", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_2", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_2", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_1", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_1", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra_1", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_1", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra_1", "role": "q0" }} , 
 	{ "name": "dense_15_output_arra_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra", "role": "address0" }} , 
 	{ "name": "dense_15_output_arra_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra", "role": "ce0" }} , 
 	{ "name": "dense_15_output_arra_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_15_output_arra", "role": "we0" }} , 
 	{ "name": "dense_15_output_arra_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra", "role": "d0" }} , 
 	{ "name": "dense_15_output_arra_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_15_output_arra", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_7", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_7", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_7", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_6", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_6", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_6", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_5", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_5", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_5", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_4", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_4", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_4", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_3", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_3", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_3", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_2", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_2", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_2", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra_1", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra_1", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra_1", "role": "q0" }} , 
 	{ "name": "dense_14_output_arra_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "dense_14_output_arra", "role": "address0" }} , 
 	{ "name": "dense_14_output_arra_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_14_output_arra", "role": "ce0" }} , 
 	{ "name": "dense_14_output_arra_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_14_output_arra", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "39", "82", "86", "87", "88"],
		"CDFG" : "k2c_dense_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_2_fu_368"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_bias_add_2_fu_489"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_7"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_7"}]},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_6"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_6"}]},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_5"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_5"}]},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_4"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_4"}]},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_3"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_3"}]},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_2"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_2"}]},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_1"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_1"}]},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra"}]},
			{"Name" : "dense_15_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array"}]},
			{"Name" : "dense_15_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array1"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C1"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array1"}]},
			{"Name" : "dense_15_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array2"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C2"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array2"}]},
			{"Name" : "dense_15_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array3"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C3"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array3"}]},
			{"Name" : "dense_15_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array4"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C4"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array4"}]},
			{"Name" : "dense_15_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array5"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C5"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array5"}]},
			{"Name" : "dense_15_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array6"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C6"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array6"}]},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array7"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C7"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array7"}]},
			{"Name" : "dense_14_output_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A"}]},
			{"Name" : "dense_14_output_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array8"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A8"}]},
			{"Name" : "dense_14_output_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array9"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A9"}]},
			{"Name" : "dense_14_output_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array10"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A10"}]},
			{"Name" : "dense_14_output_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array11"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A11"}]},
			{"Name" : "dense_14_output_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array12"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A12"}]},
			{"Name" : "dense_14_output_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array13"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A13"}]},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array14"},
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A14"}]},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "d"},
					{"ID" : "82", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "dense_15_bias_array"}]},
			{"Name" : "dense_15_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_14_output_shap"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_shap"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_fwork"}]},
			{"Name" : "dense_15_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_bias_array_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368", "Parent" : "0", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "27", "30", "31", "32", "33", "34", "35", "36", "37", "38"],
		"CDFG" : "k2c_dot_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_1209"},
			{"State" : "ap_ST_fsm_state112", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_1209"},
			{"State" : "ap_ST_fsm_state110", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_1221"},
			{"State" : "ap_ST_fsm_state119", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_1221"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_idx2sub_fu_1209", "Port" : "shape"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_idx2sub_fu_1209", "Port" : "shape"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_14_output_shap_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_shap_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_fwork_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_7_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_6_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_5_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_4_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_3_U", "Parent" : "2"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_2_U", "Parent" : "2"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_1_U", "Parent" : "2"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.permA_U", "Parent" : "2"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.permB_U", "Parent" : "2"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.freeA_U", "Parent" : "2"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.freeB_U", "Parent" : "2"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.newshpA_U", "Parent" : "2"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.newshpB_U", "Parent" : "2"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.Asub_U", "Parent" : "2"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.Bsub_U", "Parent" : "2"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209", "Parent" : "2", "Child" : ["23", "24", "25", "26"],
		"CDFG" : "k2c_idx2sub",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "idx", "Type" : "None", "Direction" : "I"},
			{"Name" : "sub", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ndim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_urem_64ns_bkb_U1", "Parent" : "22"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_udiv_64ns_cud_U2", "Parent" : "22"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_urem_64ns_bkb_U3", "Parent" : "22"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_udiv_64ns_cud_U4", "Parent" : "22"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_sub2idx_fu_1221", "Parent" : "2", "Child" : ["28", "29"],
		"CDFG" : "k2c_sub2idx",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sub", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ndim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_sub2idx_fu_1221.sample_mul_64s_64dEe_U11", "Parent" : "27"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.grp_k2c_sub2idx_fu_1221.sample_mul_64s_64dEe_U12", "Parent" : "27"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_fadd_32ns_ocq_U295", "Parent" : "2"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_fmul_32ns_pcA_U296", "Parent" : "2"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_udiv_64ns_bil_U297", "Parent" : "2"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_mux_864_32rcU_U298", "Parent" : "2"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_mul_59ns_6bjl_U299", "Parent" : "2"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_mul_64s_59bkl_U300", "Parent" : "2"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_mux_864_32rcU_U301", "Parent" : "2"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_mul_mul_11bll_U302", "Parent" : "2"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_2_fu_368.sample_mul_mul_6nbml_U303", "Parent" : "2"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434", "Parent" : "0", "Child" : ["40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81"],
		"CDFG" : "k2c_affine_matmul_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C6", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_7_U", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_6_U", "Parent" : "39"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_5_U", "Parent" : "39"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_4_U", "Parent" : "39"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_3_U", "Parent" : "39"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_2_U", "Parent" : "39"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_1_U", "Parent" : "39"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_U", "Parent" : "39"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_fadd_32ns_Ee0_U354", "Parent" : "39"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_fmul_32ns_pcA_U355", "Parent" : "39"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U356", "Parent" : "39"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U357", "Parent" : "39"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U358", "Parent" : "39"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U359", "Parent" : "39"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U360", "Parent" : "39"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U361", "Parent" : "39"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U362", "Parent" : "39"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U363", "Parent" : "39"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U364", "Parent" : "39"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U365", "Parent" : "39"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U366", "Parent" : "39"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U367", "Parent" : "39"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U368", "Parent" : "39"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U369", "Parent" : "39"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U370", "Parent" : "39"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U371", "Parent" : "39"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U372", "Parent" : "39"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U373", "Parent" : "39"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U374", "Parent" : "39"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U375", "Parent" : "39"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U376", "Parent" : "39"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U377", "Parent" : "39"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U378", "Parent" : "39"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U379", "Parent" : "39"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U380", "Parent" : "39"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U381", "Parent" : "39"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U382", "Parent" : "39"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U383", "Parent" : "39"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U384", "Parent" : "39"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U385", "Parent" : "39"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U386", "Parent" : "39"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U387", "Parent" : "39"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_2_fu_489", "Parent" : "0", "Child" : ["83", "84", "85"],
		"CDFG" : "k2c_bias_add_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_2_fu_489.dense_15_bias_array_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_2_fu_489.sample_fadd_32ns_ocq_U341", "Parent" : "82"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_2_fu_489.sample_mux_864_32rcU_U342", "Parent" : "82"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fcmp_32ns_Gfk_U406", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U407", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U408", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	k2c_dense_1 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_15_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_output_arra_7 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_6 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_5 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_4 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_3 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_2 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_1 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_7 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra_6 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra_5 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra_4 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra_3 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra_2 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra_1 {Type I LastRead 91 FirstWrite -1}
		dense_14_output_arra {Type I LastRead 91 FirstWrite -1}
		dense_15_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_14_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot_2 {
		C_array {Type IO LastRead 110 FirstWrite 94}
		C_array1 {Type IO LastRead 110 FirstWrite 94}
		C_array2 {Type IO LastRead 110 FirstWrite 94}
		C_array3 {Type IO LastRead 110 FirstWrite 94}
		C_array4 {Type IO LastRead 110 FirstWrite 94}
		C_array5 {Type IO LastRead 110 FirstWrite 94}
		C_array6 {Type IO LastRead 110 FirstWrite 94}
		C_array7 {Type IO LastRead 110 FirstWrite 94}
		A_array {Type I LastRead 91 FirstWrite -1}
		A_array8 {Type I LastRead 91 FirstWrite -1}
		A_array9 {Type I LastRead 91 FirstWrite -1}
		A_array10 {Type I LastRead 91 FirstWrite -1}
		A_array11 {Type I LastRead 91 FirstWrite -1}
		A_array12 {Type I LastRead 91 FirstWrite -1}
		A_array13 {Type I LastRead 91 FirstWrite -1}
		A_array14 {Type I LastRead 91 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		dense_14_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 71}
		shape {Type I LastRead 71 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 4 FirstWrite -1}
		shape {Type I LastRead 7 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul_2 {
		C {Type O LastRead -1 FirstWrite 6}
		C1 {Type O LastRead -1 FirstWrite 9}
		C2 {Type O LastRead -1 FirstWrite 12}
		C3 {Type O LastRead -1 FirstWrite 15}
		C4 {Type O LastRead -1 FirstWrite 18}
		C5 {Type O LastRead -1 FirstWrite 21}
		C6 {Type O LastRead -1 FirstWrite 24}
		C7 {Type O LastRead -1 FirstWrite 26}
		A {Type I LastRead 28 FirstWrite -1}
		A8 {Type I LastRead 28 FirstWrite -1}
		A9 {Type I LastRead 28 FirstWrite -1}
		A10 {Type I LastRead 28 FirstWrite -1}
		A11 {Type I LastRead 28 FirstWrite -1}
		A12 {Type I LastRead 28 FirstWrite -1}
		A13 {Type I LastRead 28 FirstWrite -1}
		A14 {Type I LastRead 28 FirstWrite -1}
		d {Type I LastRead 26 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		dense_15_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}}
	k2c_bias_add_2 {
		A_array {Type IO LastRead 2 FirstWrite 13}
		A_array1 {Type IO LastRead 2 FirstWrite 13}
		A_array2 {Type IO LastRead 2 FirstWrite 13}
		A_array3 {Type IO LastRead 2 FirstWrite 13}
		A_array4 {Type IO LastRead 2 FirstWrite 13}
		A_array5 {Type IO LastRead 2 FirstWrite 13}
		A_array6 {Type IO LastRead 2 FirstWrite 13}
		A_array7 {Type IO LastRead 2 FirstWrite 13}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		b_numel_read {Type I LastRead 0 FirstWrite -1}
		dense_15_bias_array {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	output_numel_read { ap_none {  { output_numel_read in_data 0 64 } } }
	input_dim { ap_none {  { input_dim in_data 0 64 } } }
	input_numel_read { ap_none {  { input_numel_read in_data 0 64 } } }
	kernel_dim { ap_none {  { kernel_dim in_data 0 64 } } }
	dense_15_output_arra_7 { ap_memory {  { dense_15_output_arra_7_address0 mem_address 1 1 }  { dense_15_output_arra_7_ce0 mem_ce 1 1 }  { dense_15_output_arra_7_we0 mem_we 1 1 }  { dense_15_output_arra_7_d0 mem_din 1 32 }  { dense_15_output_arra_7_q0 mem_dout 0 32 } } }
	dense_15_output_arra_6 { ap_memory {  { dense_15_output_arra_6_address0 mem_address 1 1 }  { dense_15_output_arra_6_ce0 mem_ce 1 1 }  { dense_15_output_arra_6_we0 mem_we 1 1 }  { dense_15_output_arra_6_d0 mem_din 1 32 }  { dense_15_output_arra_6_q0 mem_dout 0 32 } } }
	dense_15_output_arra_5 { ap_memory {  { dense_15_output_arra_5_address0 mem_address 1 1 }  { dense_15_output_arra_5_ce0 mem_ce 1 1 }  { dense_15_output_arra_5_we0 mem_we 1 1 }  { dense_15_output_arra_5_d0 mem_din 1 32 }  { dense_15_output_arra_5_q0 mem_dout 0 32 } } }
	dense_15_output_arra_4 { ap_memory {  { dense_15_output_arra_4_address0 mem_address 1 1 }  { dense_15_output_arra_4_ce0 mem_ce 1 1 }  { dense_15_output_arra_4_we0 mem_we 1 1 }  { dense_15_output_arra_4_d0 mem_din 1 32 }  { dense_15_output_arra_4_q0 mem_dout 0 32 } } }
	dense_15_output_arra_3 { ap_memory {  { dense_15_output_arra_3_address0 mem_address 1 1 }  { dense_15_output_arra_3_ce0 mem_ce 1 1 }  { dense_15_output_arra_3_we0 mem_we 1 1 }  { dense_15_output_arra_3_d0 mem_din 1 32 }  { dense_15_output_arra_3_q0 mem_dout 0 32 } } }
	dense_15_output_arra_2 { ap_memory {  { dense_15_output_arra_2_address0 mem_address 1 1 }  { dense_15_output_arra_2_ce0 mem_ce 1 1 }  { dense_15_output_arra_2_we0 mem_we 1 1 }  { dense_15_output_arra_2_d0 mem_din 1 32 }  { dense_15_output_arra_2_q0 mem_dout 0 32 } } }
	dense_15_output_arra_1 { ap_memory {  { dense_15_output_arra_1_address0 mem_address 1 1 }  { dense_15_output_arra_1_ce0 mem_ce 1 1 }  { dense_15_output_arra_1_we0 mem_we 1 1 }  { dense_15_output_arra_1_d0 mem_din 1 32 }  { dense_15_output_arra_1_q0 mem_dout 0 32 } } }
	dense_15_output_arra { ap_memory {  { dense_15_output_arra_address0 mem_address 1 1 }  { dense_15_output_arra_ce0 mem_ce 1 1 }  { dense_15_output_arra_we0 mem_we 1 1 }  { dense_15_output_arra_d0 mem_din 1 32 }  { dense_15_output_arra_q0 mem_dout 0 32 } } }
	dense_14_output_arra_7 { ap_memory {  { dense_14_output_arra_7_address0 mem_address 1 2 }  { dense_14_output_arra_7_ce0 mem_ce 1 1 }  { dense_14_output_arra_7_q0 mem_dout 0 32 } } }
	dense_14_output_arra_6 { ap_memory {  { dense_14_output_arra_6_address0 mem_address 1 2 }  { dense_14_output_arra_6_ce0 mem_ce 1 1 }  { dense_14_output_arra_6_q0 mem_dout 0 32 } } }
	dense_14_output_arra_5 { ap_memory {  { dense_14_output_arra_5_address0 mem_address 1 2 }  { dense_14_output_arra_5_ce0 mem_ce 1 1 }  { dense_14_output_arra_5_q0 mem_dout 0 32 } } }
	dense_14_output_arra_4 { ap_memory {  { dense_14_output_arra_4_address0 mem_address 1 2 }  { dense_14_output_arra_4_ce0 mem_ce 1 1 }  { dense_14_output_arra_4_q0 mem_dout 0 32 } } }
	dense_14_output_arra_3 { ap_memory {  { dense_14_output_arra_3_address0 mem_address 1 2 }  { dense_14_output_arra_3_ce0 mem_ce 1 1 }  { dense_14_output_arra_3_q0 mem_dout 0 32 } } }
	dense_14_output_arra_2 { ap_memory {  { dense_14_output_arra_2_address0 mem_address 1 2 }  { dense_14_output_arra_2_ce0 mem_ce 1 1 }  { dense_14_output_arra_2_q0 mem_dout 0 32 } } }
	dense_14_output_arra_1 { ap_memory {  { dense_14_output_arra_1_address0 mem_address 1 2 }  { dense_14_output_arra_1_ce0 mem_ce 1 1 }  { dense_14_output_arra_1_q0 mem_dout 0 32 } } }
	dense_14_output_arra { ap_memory {  { dense_14_output_arra_address0 mem_address 1 2 }  { dense_14_output_arra_ce0 mem_ce 1 1 }  { dense_14_output_arra_q0 mem_dout 0 32 } } }
}
