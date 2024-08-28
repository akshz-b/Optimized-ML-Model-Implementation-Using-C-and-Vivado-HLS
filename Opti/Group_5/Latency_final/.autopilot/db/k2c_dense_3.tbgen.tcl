set moduleName k2c_dense_3
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
set C_modelName {k2c_dense.3}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_numel_read int 64 regular  }
	{ input_array float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array8 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array9 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array10 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array11 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array12 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array13 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_array14 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ input_dim int 64 regular  }
	{ input_numel_read int 64 regular  }
	{ input_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ kernel_dim int 64 regular  }
	{ dense_13_output_arra_7 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra_6 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra_5 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra_4 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra_3 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra_2 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
	{ dense_13_output_arra_1 float 32 regular {array 16 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "dense_13_output_arra_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 120,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 121,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 127,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 122,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 123,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 124,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 125,"step" : 8}]}]}], "extern" : 0} , 
 	{ "Name" : "dense_13_output_arra_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_output_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 126,"step" : 8}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 77
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_numel_read sc_in sc_lv 64 signal 0 } 
	{ input_array_address0 sc_out sc_lv 4 signal 1 } 
	{ input_array_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_array_q0 sc_in sc_lv 32 signal 1 } 
	{ input_array8_address0 sc_out sc_lv 4 signal 2 } 
	{ input_array8_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_array8_q0 sc_in sc_lv 32 signal 2 } 
	{ input_array9_address0 sc_out sc_lv 4 signal 3 } 
	{ input_array9_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_array9_q0 sc_in sc_lv 32 signal 3 } 
	{ input_array10_address0 sc_out sc_lv 4 signal 4 } 
	{ input_array10_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_array10_q0 sc_in sc_lv 32 signal 4 } 
	{ input_array11_address0 sc_out sc_lv 4 signal 5 } 
	{ input_array11_ce0 sc_out sc_logic 1 signal 5 } 
	{ input_array11_q0 sc_in sc_lv 32 signal 5 } 
	{ input_array12_address0 sc_out sc_lv 4 signal 6 } 
	{ input_array12_ce0 sc_out sc_logic 1 signal 6 } 
	{ input_array12_q0 sc_in sc_lv 32 signal 6 } 
	{ input_array13_address0 sc_out sc_lv 4 signal 7 } 
	{ input_array13_ce0 sc_out sc_logic 1 signal 7 } 
	{ input_array13_q0 sc_in sc_lv 32 signal 7 } 
	{ input_array14_address0 sc_out sc_lv 4 signal 8 } 
	{ input_array14_ce0 sc_out sc_logic 1 signal 8 } 
	{ input_array14_q0 sc_in sc_lv 32 signal 8 } 
	{ input_dim sc_in sc_lv 64 signal 9 } 
	{ input_numel_read sc_in sc_lv 64 signal 10 } 
	{ input_shape_address0 sc_out sc_lv 3 signal 11 } 
	{ input_shape_ce0 sc_out sc_logic 1 signal 11 } 
	{ input_shape_q0 sc_in sc_lv 64 signal 11 } 
	{ kernel_dim sc_in sc_lv 64 signal 12 } 
	{ dense_13_output_arra_7_address0 sc_out sc_lv 4 signal 13 } 
	{ dense_13_output_arra_7_ce0 sc_out sc_logic 1 signal 13 } 
	{ dense_13_output_arra_7_we0 sc_out sc_logic 1 signal 13 } 
	{ dense_13_output_arra_7_d0 sc_out sc_lv 32 signal 13 } 
	{ dense_13_output_arra_7_q0 sc_in sc_lv 32 signal 13 } 
	{ dense_13_output_arra_6_address0 sc_out sc_lv 4 signal 14 } 
	{ dense_13_output_arra_6_ce0 sc_out sc_logic 1 signal 14 } 
	{ dense_13_output_arra_6_we0 sc_out sc_logic 1 signal 14 } 
	{ dense_13_output_arra_6_d0 sc_out sc_lv 32 signal 14 } 
	{ dense_13_output_arra_6_q0 sc_in sc_lv 32 signal 14 } 
	{ dense_13_output_arra_address0 sc_out sc_lv 4 signal 15 } 
	{ dense_13_output_arra_ce0 sc_out sc_logic 1 signal 15 } 
	{ dense_13_output_arra_we0 sc_out sc_logic 1 signal 15 } 
	{ dense_13_output_arra_d0 sc_out sc_lv 32 signal 15 } 
	{ dense_13_output_arra_q0 sc_in sc_lv 32 signal 15 } 
	{ dense_13_output_arra_5_address0 sc_out sc_lv 4 signal 16 } 
	{ dense_13_output_arra_5_ce0 sc_out sc_logic 1 signal 16 } 
	{ dense_13_output_arra_5_we0 sc_out sc_logic 1 signal 16 } 
	{ dense_13_output_arra_5_d0 sc_out sc_lv 32 signal 16 } 
	{ dense_13_output_arra_5_q0 sc_in sc_lv 32 signal 16 } 
	{ dense_13_output_arra_4_address0 sc_out sc_lv 4 signal 17 } 
	{ dense_13_output_arra_4_ce0 sc_out sc_logic 1 signal 17 } 
	{ dense_13_output_arra_4_we0 sc_out sc_logic 1 signal 17 } 
	{ dense_13_output_arra_4_d0 sc_out sc_lv 32 signal 17 } 
	{ dense_13_output_arra_4_q0 sc_in sc_lv 32 signal 17 } 
	{ dense_13_output_arra_3_address0 sc_out sc_lv 4 signal 18 } 
	{ dense_13_output_arra_3_ce0 sc_out sc_logic 1 signal 18 } 
	{ dense_13_output_arra_3_we0 sc_out sc_logic 1 signal 18 } 
	{ dense_13_output_arra_3_d0 sc_out sc_lv 32 signal 18 } 
	{ dense_13_output_arra_3_q0 sc_in sc_lv 32 signal 18 } 
	{ dense_13_output_arra_2_address0 sc_out sc_lv 4 signal 19 } 
	{ dense_13_output_arra_2_ce0 sc_out sc_logic 1 signal 19 } 
	{ dense_13_output_arra_2_we0 sc_out sc_logic 1 signal 19 } 
	{ dense_13_output_arra_2_d0 sc_out sc_lv 32 signal 19 } 
	{ dense_13_output_arra_2_q0 sc_in sc_lv 32 signal 19 } 
	{ dense_13_output_arra_1_address0 sc_out sc_lv 4 signal 20 } 
	{ dense_13_output_arra_1_ce0 sc_out sc_logic 1 signal 20 } 
	{ dense_13_output_arra_1_we0 sc_out sc_logic 1 signal 20 } 
	{ dense_13_output_arra_1_d0 sc_out sc_lv 32 signal 20 } 
	{ dense_13_output_arra_1_q0 sc_in sc_lv 32 signal 20 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "output_numel_read", "role": "default" }} , 
 	{ "name": "input_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array", "role": "address0" }} , 
 	{ "name": "input_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array", "role": "ce0" }} , 
 	{ "name": "input_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array", "role": "q0" }} , 
 	{ "name": "input_array8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array8", "role": "address0" }} , 
 	{ "name": "input_array8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array8", "role": "ce0" }} , 
 	{ "name": "input_array8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array8", "role": "q0" }} , 
 	{ "name": "input_array9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array9", "role": "address0" }} , 
 	{ "name": "input_array9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array9", "role": "ce0" }} , 
 	{ "name": "input_array9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array9", "role": "q0" }} , 
 	{ "name": "input_array10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array10", "role": "address0" }} , 
 	{ "name": "input_array10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array10", "role": "ce0" }} , 
 	{ "name": "input_array10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array10", "role": "q0" }} , 
 	{ "name": "input_array11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array11", "role": "address0" }} , 
 	{ "name": "input_array11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array11", "role": "ce0" }} , 
 	{ "name": "input_array11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array11", "role": "q0" }} , 
 	{ "name": "input_array12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array12", "role": "address0" }} , 
 	{ "name": "input_array12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array12", "role": "ce0" }} , 
 	{ "name": "input_array12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array12", "role": "q0" }} , 
 	{ "name": "input_array13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array13", "role": "address0" }} , 
 	{ "name": "input_array13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array13", "role": "ce0" }} , 
 	{ "name": "input_array13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array13", "role": "q0" }} , 
 	{ "name": "input_array14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "input_array14", "role": "address0" }} , 
 	{ "name": "input_array14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array14", "role": "ce0" }} , 
 	{ "name": "input_array14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array14", "role": "q0" }} , 
 	{ "name": "input_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_dim", "role": "default" }} , 
 	{ "name": "input_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_numel_read", "role": "default" }} , 
 	{ "name": "input_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_shape", "role": "address0" }} , 
 	{ "name": "input_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_shape", "role": "ce0" }} , 
 	{ "name": "input_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_shape", "role": "q0" }} , 
 	{ "name": "kernel_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "kernel_dim", "role": "default" }} , 
 	{ "name": "dense_13_output_arra_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_7", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_7", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_7", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_7", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_7", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_6", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_6", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_6", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_6", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_6", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_5", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_5", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_5", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_5", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_5", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_4", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_4", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_4", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_4", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_4", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_3", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_3", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_3", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_3", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_3", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_2", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_2", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_2", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_2", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_2", "role": "q0" }} , 
 	{ "name": "dense_13_output_arra_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_output_arra_1", "role": "address0" }} , 
 	{ "name": "dense_13_output_arra_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_1", "role": "ce0" }} , 
 	{ "name": "dense_13_output_arra_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_output_arra_1", "role": "we0" }} , 
 	{ "name": "dense_13_output_arra_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_1", "role": "d0" }} , 
 	{ "name": "dense_13_output_arra_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_output_arra_1", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "39", "47", "51", "52", "53"],
		"CDFG" : "k2c_dense_3",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_fu_364"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_430"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_bias_add_fu_459"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_0"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_0"}]},
			{"Name" : "input_array8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_1"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_1"}]},
			{"Name" : "input_array9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_2"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_2"}]},
			{"Name" : "input_array10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_3"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_3"}]},
			{"Name" : "input_array11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_4"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_4"}]},
			{"Name" : "input_array12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_5"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_5"}]},
			{"Name" : "input_array13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_6"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_6"}]},
			{"Name" : "input_array14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_7"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_7"}]},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_shape"}]},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_0"},
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_0"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_0"}]},
			{"Name" : "dense_13_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_1"},
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_1"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_1"}]},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_7"},
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_7"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_7"}]},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "39", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "d"},
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "dense_13_bias_array"}]},
			{"Name" : "dense_13_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_2"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_2"}]},
			{"Name" : "dense_13_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_3"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_3"}]},
			{"Name" : "dense_13_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_4"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_4"}]},
			{"Name" : "dense_13_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_5"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_5"}]},
			{"Name" : "dense_13_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_bias_add_fu_459", "Port" : "A_array_6"},
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_6"}]},
			{"Name" : "dense_13_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_shap"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_fwork"}]},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra"}]},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_7"}]},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_6"}]},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_5"}]},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_4"}]},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_3"}]},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_2"}]},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_1"}]},
			{"Name" : "dense_13_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_bias_array_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364", "Parent" : "0", "Child" : ["3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "26", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38"],
		"CDFG" : "k2c_dot",
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
			{"State" : "ap_ST_fsm_state99", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_1210"},
			{"State" : "ap_ST_fsm_state108", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_1210"},
			{"State" : "ap_ST_fsm_state106", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_1222"},
			{"State" : "ap_ST_fsm_state115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_1222"}],
		"Port" : [
			{"Name" : "C_array_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "C_array_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_k2c_idx2sub_fu_1210", "Port" : "shape"}]},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_k2c_idx2sub_fu_1210", "Port" : "shape"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_shap_U", "Parent" : "2"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_fwork_U", "Parent" : "2"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_U", "Parent" : "2"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_7_U", "Parent" : "2"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_6_U", "Parent" : "2"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_5_U", "Parent" : "2"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_4_U", "Parent" : "2"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_3_U", "Parent" : "2"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_2_U", "Parent" : "2"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.dense_13_kernel_arra_1_U", "Parent" : "2"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.permA_U", "Parent" : "2"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.permB_U", "Parent" : "2"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.freeA_U", "Parent" : "2"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.freeB_U", "Parent" : "2"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.newshpA_U", "Parent" : "2"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.newshpB_U", "Parent" : "2"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.Asub_U", "Parent" : "2"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.Bsub_U", "Parent" : "2"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210", "Parent" : "2", "Child" : ["22", "23", "24", "25"],
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
	{"ID" : "22", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_urem_64ns_bkb_U1", "Parent" : "21"},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_udiv_64ns_cud_U2", "Parent" : "21"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_urem_64ns_bkb_U3", "Parent" : "21"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_udiv_64ns_cud_U4", "Parent" : "21"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_sub2idx_fu_1222", "Parent" : "2", "Child" : ["27", "28"],
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
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_sub2idx_fu_1222.sample_mul_64s_64dEe_U11", "Parent" : "26"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.grp_k2c_sub2idx_fu_1222.sample_mul_64s_64dEe_U12", "Parent" : "26"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_fadd_32ns_ocq_U17", "Parent" : "2"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_fmul_32ns_pcA_U18", "Parent" : "2"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_udiv_64ns_cud_U19", "Parent" : "2"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mul_66ns_6qcK_U20", "Parent" : "2"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mux_864_32rcU_U21", "Parent" : "2"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mul_60ns_6sc4_U22", "Parent" : "2"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mul_64s_60tde_U23", "Parent" : "2"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mux_864_32rcU_U24", "Parent" : "2"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mul_mul_13udo_U25", "Parent" : "2"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_364.sample_mul_mul_13udo_U26", "Parent" : "2"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430", "Parent" : "0", "Child" : ["40", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "k2c_affine_matmul",
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
			{"Name" : "C_0", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_1", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_7", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_fadd_32ns_ocq_U81", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_fadd_32ns_ocq_U82", "Parent" : "39"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_fmul_32ns_pcA_U83", "Parent" : "39"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_fmul_32ns_pcA_U84", "Parent" : "39"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_mul_63ns_1wdI_U85", "Parent" : "39"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_mux_864_32rcU_U86", "Parent" : "39"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_430.sample_mux_864_32rcU_U87", "Parent" : "39"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_fu_459", "Parent" : "0", "Child" : ["48", "49", "50"],
		"CDFG" : "k2c_bias_add",
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
			{"Name" : "A_array_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_fu_459.dense_13_bias_array_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_fu_459.sample_fadd_32ns_ocq_U68", "Parent" : "47"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_bias_add_fu_459.sample_mux_864_32rcU_U69", "Parent" : "47"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fcmp_32ns_yd2_U102", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U103", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U104", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	k2c_dense_3 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 89 FirstWrite -1}
		input_array8 {Type I LastRead 89 FirstWrite -1}
		input_array9 {Type I LastRead 89 FirstWrite -1}
		input_array10 {Type I LastRead 89 FirstWrite -1}
		input_array11 {Type I LastRead 89 FirstWrite -1}
		input_array12 {Type I LastRead 89 FirstWrite -1}
		input_array13 {Type I LastRead 89 FirstWrite -1}
		input_array14 {Type I LastRead 89 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 80 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_13_output_arra_7 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_6 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra {Type IO LastRead 108 FirstWrite 7}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_13_output_arra_5 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_4 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_3 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_2 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_1 {Type IO LastRead 108 FirstWrite 7}
		dense_13_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_13_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot {
		C_array_0 {Type IO LastRead 108 FirstWrite 92}
		C_array_1 {Type IO LastRead 108 FirstWrite 92}
		C_array_2 {Type IO LastRead 108 FirstWrite 92}
		C_array_3 {Type IO LastRead 108 FirstWrite 92}
		C_array_4 {Type IO LastRead 108 FirstWrite 92}
		C_array_5 {Type IO LastRead 108 FirstWrite 92}
		C_array_6 {Type IO LastRead 108 FirstWrite 92}
		C_array_7 {Type IO LastRead 108 FirstWrite 92}
		A_array_0 {Type I LastRead 89 FirstWrite -1}
		A_array_1 {Type I LastRead 89 FirstWrite -1}
		A_array_2 {Type I LastRead 89 FirstWrite -1}
		A_array_3 {Type I LastRead 89 FirstWrite -1}
		A_array_4 {Type I LastRead 89 FirstWrite -1}
		A_array_5 {Type I LastRead 89 FirstWrite -1}
		A_array_6 {Type I LastRead 89 FirstWrite -1}
		A_array_7 {Type I LastRead 89 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 80 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		axesA_0_read {Type I LastRead 0 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 71}
		shape {Type I LastRead 71 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 4 FirstWrite -1}
		shape {Type I LastRead 7 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C_0 {Type O LastRead -1 FirstWrite 35}
		C_1 {Type O LastRead -1 FirstWrite 35}
		C_7 {Type O LastRead -1 FirstWrite 35}
		A_0 {Type I LastRead 10 FirstWrite -1}
		A_1 {Type I LastRead 10 FirstWrite -1}
		A_2 {Type I LastRead 10 FirstWrite -1}
		A_3 {Type I LastRead 10 FirstWrite -1}
		A_4 {Type I LastRead 10 FirstWrite -1}
		A_5 {Type I LastRead 10 FirstWrite -1}
		A_6 {Type I LastRead 10 FirstWrite -1}
		A_7 {Type I LastRead 10 FirstWrite -1}
		d {Type I LastRead 15 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}
	k2c_bias_add {
		A_array_0 {Type IO LastRead 2 FirstWrite 13}
		A_array_1 {Type IO LastRead 2 FirstWrite 13}
		A_array_2 {Type IO LastRead 2 FirstWrite 13}
		A_array_3 {Type IO LastRead 2 FirstWrite 13}
		A_array_4 {Type IO LastRead 2 FirstWrite 13}
		A_array_5 {Type IO LastRead 2 FirstWrite 13}
		A_array_6 {Type IO LastRead 2 FirstWrite 13}
		A_array_7 {Type IO LastRead 2 FirstWrite 13}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		b_numel_read {Type I LastRead 0 FirstWrite -1}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	output_numel_read { ap_none {  { output_numel_read in_data 0 64 } } }
	input_array { ap_memory {  { input_array_address0 mem_address 1 4 }  { input_array_ce0 mem_ce 1 1 }  { input_array_q0 mem_dout 0 32 } } }
	input_array8 { ap_memory {  { input_array8_address0 mem_address 1 4 }  { input_array8_ce0 mem_ce 1 1 }  { input_array8_q0 mem_dout 0 32 } } }
	input_array9 { ap_memory {  { input_array9_address0 mem_address 1 4 }  { input_array9_ce0 mem_ce 1 1 }  { input_array9_q0 mem_dout 0 32 } } }
	input_array10 { ap_memory {  { input_array10_address0 mem_address 1 4 }  { input_array10_ce0 mem_ce 1 1 }  { input_array10_q0 mem_dout 0 32 } } }
	input_array11 { ap_memory {  { input_array11_address0 mem_address 1 4 }  { input_array11_ce0 mem_ce 1 1 }  { input_array11_q0 mem_dout 0 32 } } }
	input_array12 { ap_memory {  { input_array12_address0 mem_address 1 4 }  { input_array12_ce0 mem_ce 1 1 }  { input_array12_q0 mem_dout 0 32 } } }
	input_array13 { ap_memory {  { input_array13_address0 mem_address 1 4 }  { input_array13_ce0 mem_ce 1 1 }  { input_array13_q0 mem_dout 0 32 } } }
	input_array14 { ap_memory {  { input_array14_address0 mem_address 1 4 }  { input_array14_ce0 mem_ce 1 1 }  { input_array14_q0 mem_dout 0 32 } } }
	input_dim { ap_none {  { input_dim in_data 0 64 } } }
	input_numel_read { ap_none {  { input_numel_read in_data 0 64 } } }
	input_shape { ap_memory {  { input_shape_address0 mem_address 1 3 }  { input_shape_ce0 mem_ce 1 1 }  { input_shape_q0 mem_dout 0 64 } } }
	kernel_dim { ap_none {  { kernel_dim in_data 0 64 } } }
	dense_13_output_arra_7 { ap_memory {  { dense_13_output_arra_7_address0 mem_address 1 4 }  { dense_13_output_arra_7_ce0 mem_ce 1 1 }  { dense_13_output_arra_7_we0 mem_we 1 1 }  { dense_13_output_arra_7_d0 mem_din 1 32 }  { dense_13_output_arra_7_q0 mem_dout 0 32 } } }
	dense_13_output_arra_6 { ap_memory {  { dense_13_output_arra_6_address0 mem_address 1 4 }  { dense_13_output_arra_6_ce0 mem_ce 1 1 }  { dense_13_output_arra_6_we0 mem_we 1 1 }  { dense_13_output_arra_6_d0 mem_din 1 32 }  { dense_13_output_arra_6_q0 mem_dout 0 32 } } }
	dense_13_output_arra { ap_memory {  { dense_13_output_arra_address0 mem_address 1 4 }  { dense_13_output_arra_ce0 mem_ce 1 1 }  { dense_13_output_arra_we0 mem_we 1 1 }  { dense_13_output_arra_d0 mem_din 1 32 }  { dense_13_output_arra_q0 mem_dout 0 32 } } }
	dense_13_output_arra_5 { ap_memory {  { dense_13_output_arra_5_address0 mem_address 1 4 }  { dense_13_output_arra_5_ce0 mem_ce 1 1 }  { dense_13_output_arra_5_we0 mem_we 1 1 }  { dense_13_output_arra_5_d0 mem_din 1 32 }  { dense_13_output_arra_5_q0 mem_dout 0 32 } } }
	dense_13_output_arra_4 { ap_memory {  { dense_13_output_arra_4_address0 mem_address 1 4 }  { dense_13_output_arra_4_ce0 mem_ce 1 1 }  { dense_13_output_arra_4_we0 mem_we 1 1 }  { dense_13_output_arra_4_d0 mem_din 1 32 }  { dense_13_output_arra_4_q0 mem_dout 0 32 } } }
	dense_13_output_arra_3 { ap_memory {  { dense_13_output_arra_3_address0 mem_address 1 4 }  { dense_13_output_arra_3_ce0 mem_ce 1 1 }  { dense_13_output_arra_3_we0 mem_we 1 1 }  { dense_13_output_arra_3_d0 mem_din 1 32 }  { dense_13_output_arra_3_q0 mem_dout 0 32 } } }
	dense_13_output_arra_2 { ap_memory {  { dense_13_output_arra_2_address0 mem_address 1 4 }  { dense_13_output_arra_2_ce0 mem_ce 1 1 }  { dense_13_output_arra_2_we0 mem_we 1 1 }  { dense_13_output_arra_2_d0 mem_din 1 32 }  { dense_13_output_arra_2_q0 mem_dout 0 32 } } }
	dense_13_output_arra_1 { ap_memory {  { dense_13_output_arra_1_address0 mem_address 1 4 }  { dense_13_output_arra_1_ce0 mem_ce 1 1 }  { dense_13_output_arra_1_we0 mem_we 1 1 }  { dense_13_output_arra_1_d0 mem_din 1 32 }  { dense_13_output_arra_1_q0 mem_dout 0 32 } } }
}
