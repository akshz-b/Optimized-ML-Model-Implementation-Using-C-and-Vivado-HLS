set C_TypeInfoList {{ 
"sample" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"dense_13_input_input_array": [[], {"array": [ {"scalar": "float"}, [128]]}] }, {"dense_13_input_input_dim": [[],"0"] }, {"dense_13_input_input_numel": [[],{ "pointer": "0"}] }, {"dense_13_input_input_shape": [[], {"array": ["0", [5]]}] }, {"dense_16_output_arrray": [[], {"array": [ {"scalar": "float"}, [1]]}] }, {"dense_16_output_dim": [[],"0"] }, {"dense_16_output_numel": [[],{ "pointer": "0"}] }, {"dense_16_output_shape": [[], {"array": ["0", [5]]}] }],["1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24"],""],
 "1": [ "dense_16_kernel_numel", [[],"0"],""],
 "2": [ "dense_16_kernel_dim", [[],"0"],""],
 "3": [ "dense_16_bias_numel", [[],"0"],""],
 "4": [ "dense_15_output_numel", [[],"0"],""],
 "5": [ "dense_15_output_dim", [[],"0"],""],
 "6": [ "dense_15_output_array", [[], {"array": [ {"scalar": "float"}, [16]]}],""],
 "7": [ "dense_15_kernel_numel", [[],"0"],""],
 "8": [ "dense_15_kernel_dim", [[],"0"],""],
 "9": [ "dense_15_fwork", [[], {"array": [ {"scalar": "float"}, [544]]}],""],
 "10": [ "dense_15_bias_numel", [[],"0"],""],
 "11": [ "dense_14_output_numel", [[],"0"],""],
 "12": [ "dense_14_output_dim", [[],"0"],""],
 "13": [ "dense_14_output_array", [[], {"array": [ {"scalar": "float"}, [32]]}],""],
 "14": [ "dense_14_kernel_numel", [[],"0"],""],
 "15": [ "dense_14_kernel_dim", [[],"0"],""],
 "16": [ "dense_14_fwork", [[], {"array": [ {"scalar": "float"}, [4224]]}],""],
 "17": [ "dense_14_bias_numel", [[],"0"],""],
 "18": [ "dense_13_output_numel", [[],"0"],""],
 "19": [ "dense_13_output_dim", [[],"0"],""],
 "20": [ "dense_13_output_array", [[], {"array": [ {"scalar": "float"}, [128]]}],""],
 "21": [ "dense_13_kernel_numel", [[],"0"],""],
 "22": [ "dense_13_kernel_dim", [[],"0"],""],
 "23": [ "dense_13_fwork", [[], {"array": [ {"scalar": "float"}, [2580]]}],""],
 "24": [ "dense_13_bias_numel", [[],"0"],""], 
"0": [ "size_t", {"typedef": [[[], {"scalar": "long long unsigned int"}],""]}]
}}
set moduleName sample
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
set C_modelName {sample}
set C_modelType { void 0 }
set C_modelArgList {
	{ dense_13_input_input_array_0 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_1 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_2 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_3 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_4 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_5 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_6 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_array_7 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ dense_13_input_input_dim int 64 regular  }
	{ dense_13_input_input_numel int 64 regular {pointer 0}  }
	{ dense_13_input_input_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ dense_16_output_arrray float 32 regular {array 1 { 2 3 } 1 1 }  }
	{ dense_16_output_dim int 64 unused  }
	{ dense_16_output_numel int 64 regular {pointer 0}  }
	{ dense_16_output_shape int 64 unused {array 5 { } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dense_13_input_input_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 120,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 121,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 122,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 123,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 124,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 125,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 126,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 127,"step" : 8}]}]}]} , 
 	{ "Name" : "dense_13_input_input_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input_dim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "dense_13_input_input_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input_numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_13_input_input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input_shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_arrray", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_16_output_arrray","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output_dim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "dense_16_output_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output_numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output_shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 52
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dense_13_input_input_array_0_address0 sc_out sc_lv 4 signal 0 } 
	{ dense_13_input_input_array_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ dense_13_input_input_array_0_q0 sc_in sc_lv 32 signal 0 } 
	{ dense_13_input_input_array_1_address0 sc_out sc_lv 4 signal 1 } 
	{ dense_13_input_input_array_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ dense_13_input_input_array_1_q0 sc_in sc_lv 32 signal 1 } 
	{ dense_13_input_input_array_2_address0 sc_out sc_lv 4 signal 2 } 
	{ dense_13_input_input_array_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ dense_13_input_input_array_2_q0 sc_in sc_lv 32 signal 2 } 
	{ dense_13_input_input_array_3_address0 sc_out sc_lv 4 signal 3 } 
	{ dense_13_input_input_array_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ dense_13_input_input_array_3_q0 sc_in sc_lv 32 signal 3 } 
	{ dense_13_input_input_array_4_address0 sc_out sc_lv 4 signal 4 } 
	{ dense_13_input_input_array_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ dense_13_input_input_array_4_q0 sc_in sc_lv 32 signal 4 } 
	{ dense_13_input_input_array_5_address0 sc_out sc_lv 4 signal 5 } 
	{ dense_13_input_input_array_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ dense_13_input_input_array_5_q0 sc_in sc_lv 32 signal 5 } 
	{ dense_13_input_input_array_6_address0 sc_out sc_lv 4 signal 6 } 
	{ dense_13_input_input_array_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ dense_13_input_input_array_6_q0 sc_in sc_lv 32 signal 6 } 
	{ dense_13_input_input_array_7_address0 sc_out sc_lv 4 signal 7 } 
	{ dense_13_input_input_array_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ dense_13_input_input_array_7_q0 sc_in sc_lv 32 signal 7 } 
	{ dense_13_input_input_dim sc_in sc_lv 64 signal 8 } 
	{ dense_13_input_input_numel sc_in sc_lv 64 signal 9 } 
	{ dense_13_input_input_shape_address0 sc_out sc_lv 3 signal 10 } 
	{ dense_13_input_input_shape_ce0 sc_out sc_logic 1 signal 10 } 
	{ dense_13_input_input_shape_q0 sc_in sc_lv 64 signal 10 } 
	{ dense_16_output_arrray_address0 sc_out sc_lv 1 signal 11 } 
	{ dense_16_output_arrray_ce0 sc_out sc_logic 1 signal 11 } 
	{ dense_16_output_arrray_we0 sc_out sc_logic 1 signal 11 } 
	{ dense_16_output_arrray_d0 sc_out sc_lv 32 signal 11 } 
	{ dense_16_output_arrray_q0 sc_in sc_lv 32 signal 11 } 
	{ dense_16_output_dim sc_in sc_lv 64 signal 12 } 
	{ dense_16_output_numel sc_in sc_lv 64 signal 13 } 
	{ dense_16_output_shape_address0 sc_out sc_lv 3 signal 14 } 
	{ dense_16_output_shape_ce0 sc_out sc_logic 1 signal 14 } 
	{ dense_16_output_shape_we0 sc_out sc_logic 1 signal 14 } 
	{ dense_16_output_shape_d0 sc_out sc_lv 64 signal 14 } 
	{ dense_16_output_shape_q0 sc_in sc_lv 64 signal 14 } 
	{ dense_16_output_shape_address1 sc_out sc_lv 3 signal 14 } 
	{ dense_16_output_shape_ce1 sc_out sc_logic 1 signal 14 } 
	{ dense_16_output_shape_we1 sc_out sc_logic 1 signal 14 } 
	{ dense_16_output_shape_d1 sc_out sc_lv 64 signal 14 } 
	{ dense_16_output_shape_q1 sc_in sc_lv 64 signal 14 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dense_13_input_input_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_0", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_0", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_0", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_1", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_1", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_1", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_2", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_2", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_2", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_3", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_3", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_3", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_4", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_4", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_4", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_5", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_5", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_5", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_6", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_6", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_6", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "dense_13_input_input_array_7", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array_7", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array_7", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_13_input_input_dim", "role": "default" }} , 
 	{ "name": "dense_13_input_input_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_13_input_input_numel", "role": "default" }} , 
 	{ "name": "dense_13_input_input_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_13_input_input_shape", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_shape", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_13_input_input_shape", "role": "q0" }} , 
 	{ "name": "dense_16_output_arrray_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_arrray", "role": "address0" }} , 
 	{ "name": "dense_16_output_arrray_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_arrray", "role": "ce0" }} , 
 	{ "name": "dense_16_output_arrray_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_arrray", "role": "we0" }} , 
 	{ "name": "dense_16_output_arrray_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_16_output_arrray", "role": "d0" }} , 
 	{ "name": "dense_16_output_arrray_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_16_output_arrray", "role": "q0" }} , 
 	{ "name": "dense_16_output_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_dim", "role": "default" }} , 
 	{ "name": "dense_16_output_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_numel", "role": "default" }} , 
 	{ "name": "dense_16_output_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "address0" }} , 
 	{ "name": "dense_16_output_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "ce0" }} , 
 	{ "name": "dense_16_output_shape_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "we0" }} , 
 	{ "name": "dense_16_output_shape_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "d0" }} , 
 	{ "name": "dense_16_output_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "q0" }} , 
 	{ "name": "dense_16_output_shape_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "address1" }} , 
 	{ "name": "dense_16_output_shape_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "ce1" }} , 
 	{ "name": "dense_16_output_shape_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "we1" }} , 
 	{ "name": "dense_16_output_shape_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "d1" }} , 
 	{ "name": "dense_16_output_shape_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_shape", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "87", "148", "209"],
		"CDFG" : "sample",
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
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_3_fu_272"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_2_fu_341"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_1_fu_409"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_fu_477"}],
		"Port" : [
			{"Name" : "dense_13_input_input_array_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array"}]},
			{"Name" : "dense_13_input_input_array_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array8"}]},
			{"Name" : "dense_13_input_input_array_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array9"}]},
			{"Name" : "dense_13_input_input_array_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array10"}]},
			{"Name" : "dense_13_input_input_array_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array11"}]},
			{"Name" : "dense_13_input_input_array_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array12"}]},
			{"Name" : "dense_13_input_input_array_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array13"}]},
			{"Name" : "dense_13_input_input_array_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_array14"}]},
			{"Name" : "dense_13_input_input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_input_input_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_input_input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "input_shape"}]},
			{"Name" : "dense_16_output_arrray", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "output_array"}]},
			{"Name" : "dense_16_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_output_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_output_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "dense_13_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra"}]},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_7"}]},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_6"}]},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_5"}]},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_4"}]},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_3"}]},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_2"}]},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_arra_1"}]},
			{"Name" : "dense_13_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_7"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_7"}]},
			{"Name" : "dense_13_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_6"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_6"}]},
			{"Name" : "dense_13_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_5"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_5"}]},
			{"Name" : "dense_13_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_4"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_4"}]},
			{"Name" : "dense_13_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_3"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_3"}]},
			{"Name" : "dense_13_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_2"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_2"}]},
			{"Name" : "dense_13_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra_1"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra_1"}]},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_arra"},
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_output_arra"}]},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_bias_array"}]},
			{"Name" : "dense_13_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_nume"}]},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_kernel_shap"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_fwork"}]},
			{"Name" : "dense_13_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "26", "SubInstance" : "grp_k2c_dense_3_fu_272", "Port" : "dense_13_bias_numel"}]},
			{"Name" : "dense_13_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra"}]},
			{"Name" : "dense_14_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_7"}]},
			{"Name" : "dense_14_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_6"}]},
			{"Name" : "dense_14_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_5"}]},
			{"Name" : "dense_14_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_4"}]},
			{"Name" : "dense_14_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_3"}]},
			{"Name" : "dense_14_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_2"}]},
			{"Name" : "dense_14_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_arra_1"}]},
			{"Name" : "dense_14_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_7"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_7"}]},
			{"Name" : "dense_14_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_6"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_6"}]},
			{"Name" : "dense_14_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_5"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_5"}]},
			{"Name" : "dense_14_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_4"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_4"}]},
			{"Name" : "dense_14_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_3"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_3"}]},
			{"Name" : "dense_14_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_2"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_2"}]},
			{"Name" : "dense_14_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra_1"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra_1"}]},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_output_arra"},
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_arra"}]},
			{"Name" : "dense_14_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_bias_array"}]},
			{"Name" : "dense_14_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_nume"}]},
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_13_output_shap"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_kernel_shap"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_fwork"}]},
			{"Name" : "dense_14_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_k2c_dense_2_fu_341", "Port" : "dense_14_bias_numel"}]},
			{"Name" : "dense_14_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra"}]},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_7"}]},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_6"}]},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_5"}]},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_4"}]},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_3"}]},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_2"}]},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_arra_1"}]},
			{"Name" : "dense_15_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_7"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_0"}]},
			{"Name" : "dense_15_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_6"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_1"}]},
			{"Name" : "dense_15_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_5"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_2"}]},
			{"Name" : "dense_15_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_4"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_3"}]},
			{"Name" : "dense_15_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_3"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_4"}]},
			{"Name" : "dense_15_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_2"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_5"}]},
			{"Name" : "dense_15_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra_1"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_6"}]},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_output_arra"},
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "input_array_7"}]},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_bias_array"}]},
			{"Name" : "dense_15_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_nume"}]},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_14_output_shap"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_kernel_shap"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_fwork"}]},
			{"Name" : "dense_15_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_k2c_dense_1_fu_409", "Port" : "dense_15_bias_numel"}]},
			{"Name" : "dense_15_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "dense_16_kernel_nume"}]},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "dense_15_output_shap"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "dense_16_kernel_shap"}]},
			{"Name" : "dense_16_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "209", "SubInstance" : "grp_k2c_dense_fu_477", "Port" : "dense_16_bias_numel"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_7_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_6_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_5_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_4_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_2_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_1_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_7_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_6_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_5_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_4_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_3_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_2_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_1_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_7_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_6_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_5_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_4_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_3_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_2_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_1_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_fwork_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272", "Parent" : "0", "Child" : ["27", "28", "65", "80", "84", "85", "86"],
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
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_bias_add_fu_485"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_0"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_0"}]},
			{"Name" : "input_array8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_1"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_1"}]},
			{"Name" : "input_array9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_2"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_2"}]},
			{"Name" : "input_array10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_3"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_3"}]},
			{"Name" : "input_array11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_4"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_4"}]},
			{"Name" : "input_array12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_5"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_5"}]},
			{"Name" : "input_array13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_6"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_6"}]},
			{"Name" : "input_array14", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_array_7"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "A_7"}]},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "A_shape"}]},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra"}]},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_7"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_7"}]},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_6"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_6"}]},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_5"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_5"}]},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_4"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_4"}]},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_3"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_3"}]},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_2"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_2"}]},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_arra_1"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "dense_13_kernel_arra_1"}]},
			{"Name" : "dense_13_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_0"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_0"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_0"}]},
			{"Name" : "dense_13_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_1"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_1"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_1"}]},
			{"Name" : "dense_13_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_2"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_2"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_2"}]},
			{"Name" : "dense_13_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_3"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_3"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_3"}]},
			{"Name" : "dense_13_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_4"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_4"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_4"}]},
			{"Name" : "dense_13_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_5"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_5"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_5"}]},
			{"Name" : "dense_13_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_6"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_6"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_6"}]},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "A_array_7"},
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "C_array_7"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "C_7"}]},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_k2c_bias_add_fu_485", "Port" : "dense_13_bias_array"},
					{"ID" : "65", "SubInstance" : "grp_k2c_affine_matmul_fu_430", "Port" : "d"}]},
			{"Name" : "dense_13_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_kernel_shap"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_k2c_dot_fu_364", "Port" : "dense_13_fwork"}]},
			{"Name" : "dense_13_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.dense_13_bias_array_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364", "Parent" : "26", "Child" : ["29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "52", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64"],
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
					{"ID" : "47", "SubInstance" : "grp_k2c_idx2sub_fu_1210", "Port" : "shape"}]},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_idx2sub_fu_1210", "Port" : "shape"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_shap_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_fwork_U", "Parent" : "28"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_U", "Parent" : "28"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_7_U", "Parent" : "28"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_6_U", "Parent" : "28"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_5_U", "Parent" : "28"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_4_U", "Parent" : "28"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_3_U", "Parent" : "28"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_2_U", "Parent" : "28"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.dense_13_kernel_arra_1_U", "Parent" : "28"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.permA_U", "Parent" : "28"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.permB_U", "Parent" : "28"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.freeA_U", "Parent" : "28"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.freeB_U", "Parent" : "28"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.newshpA_U", "Parent" : "28"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.newshpB_U", "Parent" : "28"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.Asub_U", "Parent" : "28"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.Bsub_U", "Parent" : "28"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210", "Parent" : "28", "Child" : ["48", "49", "50", "51"],
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
	{"ID" : "48", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_urem_64ns_bkb_U1", "Parent" : "47"},
	{"ID" : "49", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_udiv_64ns_cud_U2", "Parent" : "47"},
	{"ID" : "50", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_urem_64ns_bkb_U3", "Parent" : "47"},
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_idx2sub_fu_1210.sample_udiv_64ns_cud_U4", "Parent" : "47"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_sub2idx_fu_1222", "Parent" : "28", "Child" : ["53", "54"],
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
	{"ID" : "53", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_sub2idx_fu_1222.sample_mul_64s_64dEe_U11", "Parent" : "52"},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.grp_k2c_sub2idx_fu_1222.sample_mul_64s_64dEe_U12", "Parent" : "52"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_fadd_32ns_ocq_U17", "Parent" : "28"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_fmul_32ns_pcA_U18", "Parent" : "28"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_udiv_64ns_cud_U19", "Parent" : "28"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mul_66ns_6qcK_U20", "Parent" : "28"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mux_864_32rcU_U21", "Parent" : "28"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mul_60ns_6sc4_U22", "Parent" : "28"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mul_64s_60tde_U23", "Parent" : "28"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mux_864_32rcU_U24", "Parent" : "28"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mul_mul_13udo_U25", "Parent" : "28"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_dot_fu_364.sample_mul_mul_13udo_U26", "Parent" : "28"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430", "Parent" : "26", "Child" : ["66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79"],
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
			{"Name" : "C_2", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_3", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_4", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_5", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "C_6", "Type" : "Memory", "Direction" : "O"},
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
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_7_U", "Parent" : "65"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_6_U", "Parent" : "65"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_5_U", "Parent" : "65"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_4_U", "Parent" : "65"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_3_U", "Parent" : "65"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_2_U", "Parent" : "65"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.dense_13_kernel_arra_1_U", "Parent" : "65"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.sample_fadd_32ns_ocq_U81", "Parent" : "65"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.sample_fmul_32ns_pcA_U82", "Parent" : "65"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.sample_mux_864_32rcU_U83", "Parent" : "65"},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.sample_mux_864_32rcU_U84", "Parent" : "65"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.sample_mux_864_32rcU_U85", "Parent" : "65"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_affine_matmul_fu_430.sample_mux_864_32rcU_U86", "Parent" : "65"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_bias_add_fu_485", "Parent" : "26", "Child" : ["81", "82", "83"],
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
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_bias_add_fu_485.dense_13_bias_array_U", "Parent" : "80"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_bias_add_fu_485.sample_fadd_32ns_ocq_U68", "Parent" : "80"},
	{"ID" : "83", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.grp_k2c_bias_add_fu_485.sample_mux_864_32rcU_U69", "Parent" : "80"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.sample_fcmp_32ns_Ffa_U105", "Parent" : "26"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.sample_mux_864_32rcU_U106", "Parent" : "26"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_272.sample_mux_864_32rcU_U107", "Parent" : "26"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341", "Parent" : "0", "Child" : ["88", "89", "126", "141", "145", "146", "147"],
		"CDFG" : "k2c_dense_2",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_1_fu_368"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_bias_add_1_fu_489"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra"}]},
			{"Name" : "dense_14_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_7"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_7"}]},
			{"Name" : "dense_14_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_6"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_6"}]},
			{"Name" : "dense_14_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_5"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_5"}]},
			{"Name" : "dense_14_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_4"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_4"}]},
			{"Name" : "dense_14_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_3"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_3"}]},
			{"Name" : "dense_14_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_2"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_2"}]},
			{"Name" : "dense_14_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_arra_1"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "dense_14_kernel_arra_1"}]},
			{"Name" : "dense_14_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array"}]},
			{"Name" : "dense_14_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array1"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C1"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array1"}]},
			{"Name" : "dense_14_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array2"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C2"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array2"}]},
			{"Name" : "dense_14_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array3"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C3"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array3"}]},
			{"Name" : "dense_14_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array4"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C4"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array4"}]},
			{"Name" : "dense_14_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array5"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C5"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array5"}]},
			{"Name" : "dense_14_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array6"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C6"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array6"}]},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "C_array7"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "C7"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "A_array7"}]},
			{"Name" : "dense_13_output_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A"}]},
			{"Name" : "dense_13_output_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array8"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A8"}]},
			{"Name" : "dense_13_output_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array9"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A9"}]},
			{"Name" : "dense_13_output_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array10"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A10"}]},
			{"Name" : "dense_13_output_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array11"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A11"}]},
			{"Name" : "dense_13_output_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array12"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A12"}]},
			{"Name" : "dense_13_output_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array13"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A13"}]},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "A_array14"},
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "A14"}]},
			{"Name" : "dense_14_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "126", "SubInstance" : "grp_k2c_affine_matmul_1_fu_434", "Port" : "d"},
					{"ID" : "141", "SubInstance" : "grp_k2c_bias_add_1_fu_489", "Port" : "dense_14_bias_array"}]},
			{"Name" : "dense_14_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_13_output_shap"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_kernel_shap"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "89", "SubInstance" : "grp_k2c_dot_1_fu_368", "Port" : "dense_14_fwork"}]},
			{"Name" : "dense_14_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.dense_14_bias_array_U", "Parent" : "87"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368", "Parent" : "87", "Child" : ["90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "114", "117", "118", "119", "120", "121", "122", "123", "124", "125"],
		"CDFG" : "k2c_dot_1",
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
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_1211"},
			{"State" : "ap_ST_fsm_state112", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_1211"},
			{"State" : "ap_ST_fsm_state110", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_1223"},
			{"State" : "ap_ST_fsm_state119", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_1223"}],
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
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "109", "SubInstance" : "grp_k2c_idx2sub_fu_1211", "Port" : "shape"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "109", "SubInstance" : "grp_k2c_idx2sub_fu_1211", "Port" : "shape"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_13_output_shap_U", "Parent" : "89"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_shap_U", "Parent" : "89"},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_fwork_U", "Parent" : "89"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_U", "Parent" : "89"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_7_U", "Parent" : "89"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_6_U", "Parent" : "89"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_5_U", "Parent" : "89"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_4_U", "Parent" : "89"},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_3_U", "Parent" : "89"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_2_U", "Parent" : "89"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.dense_14_kernel_arra_1_U", "Parent" : "89"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.permA_U", "Parent" : "89"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.permB_U", "Parent" : "89"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.freeA_U", "Parent" : "89"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.freeB_U", "Parent" : "89"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.newshpA_U", "Parent" : "89"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.newshpB_U", "Parent" : "89"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.Asub_U", "Parent" : "89"},
	{"ID" : "108", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.Bsub_U", "Parent" : "89"},
	{"ID" : "109", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_idx2sub_fu_1211", "Parent" : "89", "Child" : ["110", "111", "112", "113"],
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
	{"ID" : "110", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_idx2sub_fu_1211.sample_urem_64ns_bkb_U1", "Parent" : "109"},
	{"ID" : "111", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_idx2sub_fu_1211.sample_udiv_64ns_cud_U2", "Parent" : "109"},
	{"ID" : "112", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_idx2sub_fu_1211.sample_urem_64ns_bkb_U3", "Parent" : "109"},
	{"ID" : "113", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_idx2sub_fu_1211.sample_udiv_64ns_cud_U4", "Parent" : "109"},
	{"ID" : "114", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_sub2idx_fu_1223", "Parent" : "89", "Child" : ["115", "116"],
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
	{"ID" : "115", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_sub2idx_fu_1223.sample_mul_64s_64dEe_U11", "Parent" : "114"},
	{"ID" : "116", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.grp_k2c_sub2idx_fu_1223.sample_mul_64s_64dEe_U12", "Parent" : "114"},
	{"ID" : "117", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_fadd_32ns_ocq_U131", "Parent" : "89"},
	{"ID" : "118", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_fmul_32ns_pcA_U132", "Parent" : "89"},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_udiv_64ns_Rg6_U133", "Parent" : "89"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_mux_864_32rcU_U134", "Parent" : "89"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_mul_57ns_6Shg_U135", "Parent" : "89"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_mul_64s_57Thq_U136", "Parent" : "89"},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_mux_864_32rcU_U137", "Parent" : "89"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_mul_mul_14UhA_U138", "Parent" : "89"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_dot_1_fu_368.sample_mul_mul_8nVhK_U139", "Parent" : "89"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434", "Parent" : "87", "Child" : ["127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140"],
		"CDFG" : "k2c_affine_matmul_1",
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
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_U", "Parent" : "126"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_7_U", "Parent" : "126"},
	{"ID" : "129", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_6_U", "Parent" : "126"},
	{"ID" : "130", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_5_U", "Parent" : "126"},
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_4_U", "Parent" : "126"},
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_3_U", "Parent" : "126"},
	{"ID" : "133", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_2_U", "Parent" : "126"},
	{"ID" : "134", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.dense_14_kernel_arra_1_U", "Parent" : "126"},
	{"ID" : "135", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.sample_fadd_32ns_ocq_U190", "Parent" : "126"},
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.sample_fmul_32ns_pcA_U191", "Parent" : "126"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.sample_mux_864_32rcU_U192", "Parent" : "126"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.sample_mux_864_32rcU_U193", "Parent" : "126"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.sample_mux_864_32rcU_U194", "Parent" : "126"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_affine_matmul_1_fu_434.sample_mux_864_32rcU_U195", "Parent" : "126"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_bias_add_1_fu_489", "Parent" : "87", "Child" : ["142", "143", "144"],
		"CDFG" : "k2c_bias_add_1",
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
			{"Name" : "dense_14_bias_array", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_bias_add_1_fu_489.dense_14_bias_array_U", "Parent" : "141"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_bias_add_1_fu_489.sample_fadd_32ns_ocq_U177", "Parent" : "141"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.grp_k2c_bias_add_1_fu_489.sample_mux_864_32rcU_U178", "Parent" : "141"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.sample_fcmp_32ns_Ffa_U214", "Parent" : "87"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.sample_mux_864_32rcU_U215", "Parent" : "87"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_341.sample_mux_864_32rcU_U216", "Parent" : "87"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409", "Parent" : "0", "Child" : ["149", "150", "187", "202", "206", "207", "208"],
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
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra"}]},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_7"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_7"}]},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_6"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_6"}]},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_5"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_5"}]},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_4"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_4"}]},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_3"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_3"}]},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_2"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_2"}]},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_arra_1"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "dense_15_kernel_arra_1"}]},
			{"Name" : "dense_15_output_arra_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array"}]},
			{"Name" : "dense_15_output_arra_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array1"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C1"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array1"}]},
			{"Name" : "dense_15_output_arra_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array2"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C2"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array2"}]},
			{"Name" : "dense_15_output_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array3"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C3"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array3"}]},
			{"Name" : "dense_15_output_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array4"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C4"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array4"}]},
			{"Name" : "dense_15_output_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array5"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C5"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array5"}]},
			{"Name" : "dense_15_output_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array6"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C6"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array6"}]},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "C_array7"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "C7"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "A_array7"}]},
			{"Name" : "dense_14_output_arra_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A"}]},
			{"Name" : "dense_14_output_arra_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array8"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A8"}]},
			{"Name" : "dense_14_output_arra_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array9"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A9"}]},
			{"Name" : "dense_14_output_arra_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array10"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A10"}]},
			{"Name" : "dense_14_output_arra_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array11"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A11"}]},
			{"Name" : "dense_14_output_arra_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array12"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A12"}]},
			{"Name" : "dense_14_output_arra_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array13"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A13"}]},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "A_array14"},
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "A14"}]},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_k2c_affine_matmul_2_fu_434", "Port" : "d"},
					{"ID" : "202", "SubInstance" : "grp_k2c_bias_add_2_fu_489", "Port" : "dense_15_bias_array"}]},
			{"Name" : "dense_15_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_14_output_shap"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_kernel_shap"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "150", "SubInstance" : "grp_k2c_dot_2_fu_368", "Port" : "dense_15_fwork"}]},
			{"Name" : "dense_15_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.dense_15_bias_array_U", "Parent" : "148"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368", "Parent" : "148", "Child" : ["151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "175", "178", "179", "180", "181", "182", "183", "184", "185", "186"],
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
					{"ID" : "170", "SubInstance" : "grp_k2c_idx2sub_fu_1209", "Port" : "shape"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "170", "SubInstance" : "grp_k2c_idx2sub_fu_1209", "Port" : "shape"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "151", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_14_output_shap_U", "Parent" : "150"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_shap_U", "Parent" : "150"},
	{"ID" : "153", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_fwork_U", "Parent" : "150"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_U", "Parent" : "150"},
	{"ID" : "155", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_7_U", "Parent" : "150"},
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_6_U", "Parent" : "150"},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_5_U", "Parent" : "150"},
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_4_U", "Parent" : "150"},
	{"ID" : "159", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_3_U", "Parent" : "150"},
	{"ID" : "160", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_2_U", "Parent" : "150"},
	{"ID" : "161", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.dense_15_kernel_arra_1_U", "Parent" : "150"},
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.permA_U", "Parent" : "150"},
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.permB_U", "Parent" : "150"},
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.freeA_U", "Parent" : "150"},
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.freeB_U", "Parent" : "150"},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.newshpA_U", "Parent" : "150"},
	{"ID" : "167", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.newshpB_U", "Parent" : "150"},
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.Asub_U", "Parent" : "150"},
	{"ID" : "169", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.Bsub_U", "Parent" : "150"},
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209", "Parent" : "150", "Child" : ["171", "172", "173", "174"],
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
	{"ID" : "171", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_urem_64ns_bkb_U1", "Parent" : "170"},
	{"ID" : "172", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_udiv_64ns_cud_U2", "Parent" : "170"},
	{"ID" : "173", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_urem_64ns_bkb_U3", "Parent" : "170"},
	{"ID" : "174", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_idx2sub_fu_1209.sample_udiv_64ns_cud_U4", "Parent" : "170"},
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_sub2idx_fu_1221", "Parent" : "150", "Child" : ["176", "177"],
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
	{"ID" : "176", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_sub2idx_fu_1221.sample_mul_64s_64dEe_U11", "Parent" : "175"},
	{"ID" : "177", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.grp_k2c_sub2idx_fu_1221.sample_mul_64s_64dEe_U12", "Parent" : "175"},
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_fadd_32ns_ocq_U238", "Parent" : "150"},
	{"ID" : "179", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_fmul_32ns_pcA_U239", "Parent" : "150"},
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_udiv_64ns_bhl_U240", "Parent" : "150"},
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_mux_864_32rcU_U241", "Parent" : "150"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_mul_59ns_6bil_U242", "Parent" : "150"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_mul_64s_59bjl_U243", "Parent" : "150"},
	{"ID" : "184", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_mux_864_32rcU_U244", "Parent" : "150"},
	{"ID" : "185", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_mul_mul_11bkl_U245", "Parent" : "150"},
	{"ID" : "186", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_dot_2_fu_368.sample_mul_mul_6nbll_U246", "Parent" : "150"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434", "Parent" : "148", "Child" : ["188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201"],
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
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "188", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_U", "Parent" : "187"},
	{"ID" : "189", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_7_U", "Parent" : "187"},
	{"ID" : "190", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_6_U", "Parent" : "187"},
	{"ID" : "191", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_5_U", "Parent" : "187"},
	{"ID" : "192", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_4_U", "Parent" : "187"},
	{"ID" : "193", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_3_U", "Parent" : "187"},
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_2_U", "Parent" : "187"},
	{"ID" : "195", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.dense_15_kernel_arra_1_U", "Parent" : "187"},
	{"ID" : "196", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.sample_fadd_32ns_ocq_U297", "Parent" : "187"},
	{"ID" : "197", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.sample_fmul_32ns_pcA_U298", "Parent" : "187"},
	{"ID" : "198", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U299", "Parent" : "187"},
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U300", "Parent" : "187"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U301", "Parent" : "187"},
	{"ID" : "201", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_affine_matmul_2_fu_434.sample_mux_864_32rcU_U302", "Parent" : "187"},
	{"ID" : "202", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_bias_add_2_fu_489", "Parent" : "148", "Child" : ["203", "204", "205"],
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
	{"ID" : "203", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_bias_add_2_fu_489.dense_15_bias_array_U", "Parent" : "202"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_bias_add_2_fu_489.sample_fadd_32ns_ocq_U284", "Parent" : "202"},
	{"ID" : "205", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.grp_k2c_bias_add_2_fu_489.sample_mux_864_32rcU_U285", "Parent" : "202"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.sample_fcmp_32ns_Ffa_U321", "Parent" : "148"},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.sample_mux_864_32rcU_U322", "Parent" : "148"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_409.sample_mux_864_32rcU_U323", "Parent" : "148"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477", "Parent" : "0", "Child" : ["210", "234", "241", "242", "243"],
		"CDFG" : "k2c_dense",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_3_fu_178"},
			{"State" : "ap_ST_fsm_state76", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "C"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "C_array"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array"}]},
			{"Name" : "input_array_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A1"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array1"}]},
			{"Name" : "input_array_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A2"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array2"}]},
			{"Name" : "input_array_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A3"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array3"}]},
			{"Name" : "input_array_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A4"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array4"}]},
			{"Name" : "input_array_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A5"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array5"}]},
			{"Name" : "input_array_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A6"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array6"}]},
			{"Name" : "input_array_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_k2c_affine_matmul_3_fu_214", "Port" : "A7"},
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array7"}]},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "fwork"}]},
			{"Name" : "dense_16_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "dense_15_output_shap"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "dense_16_kernel_shap"}]},
			{"Name" : "dense_16_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178", "Parent" : "209", "Child" : ["211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "226", "229", "230", "231", "232", "233"],
		"CDFG" : "k2c_dot_3",
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
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_977"},
			{"State" : "ap_ST_fsm_state112", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_977"},
			{"State" : "ap_ST_fsm_state110", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_989"},
			{"State" : "ap_ST_fsm_state119", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_989"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_array7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "221", "SubInstance" : "grp_k2c_idx2sub_fu_977", "Port" : "shape"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "221", "SubInstance" : "grp_k2c_idx2sub_fu_977", "Port" : "shape"}]}]},
	{"ID" : "211", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.dense_15_output_shap_U", "Parent" : "210"},
	{"ID" : "212", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.dense_16_kernel_shap_U", "Parent" : "210"},
	{"ID" : "213", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.permA_U", "Parent" : "210"},
	{"ID" : "214", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.permB_U", "Parent" : "210"},
	{"ID" : "215", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.freeA_U", "Parent" : "210"},
	{"ID" : "216", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.freeB_U", "Parent" : "210"},
	{"ID" : "217", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.newshpA_U", "Parent" : "210"},
	{"ID" : "218", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.newshpB_U", "Parent" : "210"},
	{"ID" : "219", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.Asub_U", "Parent" : "210"},
	{"ID" : "220", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.Bsub_U", "Parent" : "210"},
	{"ID" : "221", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977", "Parent" : "210", "Child" : ["222", "223", "224", "225"],
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
	{"ID" : "222", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_urem_64ns_bkb_U1", "Parent" : "221"},
	{"ID" : "223", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_udiv_64ns_cud_U2", "Parent" : "221"},
	{"ID" : "224", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_urem_64ns_bkb_U3", "Parent" : "221"},
	{"ID" : "225", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_udiv_64ns_cud_U4", "Parent" : "221"},
	{"ID" : "226", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_sub2idx_fu_989", "Parent" : "210", "Child" : ["227", "228"],
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
	{"ID" : "227", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_sub2idx_fu_989.sample_mul_64s_64dEe_U11", "Parent" : "226"},
	{"ID" : "228", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.grp_k2c_sub2idx_fu_989.sample_mul_64s_64dEe_U12", "Parent" : "226"},
	{"ID" : "229", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.sample_fadd_32ns_ocq_U345", "Parent" : "210"},
	{"ID" : "230", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.sample_fmul_32ns_pcA_U346", "Parent" : "210"},
	{"ID" : "231", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.sample_udiv_64ns_byn_U347", "Parent" : "210"},
	{"ID" : "232", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.sample_mux_864_32rcU_U348", "Parent" : "210"},
	{"ID" : "233", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_dot_3_fu_178.sample_mul_60ns_6sc4_U349", "Parent" : "210"},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214", "Parent" : "209", "Child" : ["235", "236", "237", "238", "239", "240"],
		"CDFG" : "k2c_affine_matmul_3",
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
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "235", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214.sample_fadd_32ns_ocq_U367", "Parent" : "234"},
	{"ID" : "236", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214.sample_fmul_32ns_pcA_U368", "Parent" : "234"},
	{"ID" : "237", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214.sample_mux_864_32rcU_U369", "Parent" : "234"},
	{"ID" : "238", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214.sample_mux_864_32rcU_U370", "Parent" : "234"},
	{"ID" : "239", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214.sample_mux_864_32rcU_U371", "Parent" : "234"},
	{"ID" : "240", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.grp_k2c_affine_matmul_3_fu_214.sample_mux_864_32rcU_U372", "Parent" : "234"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.sample_fadd_32ns_ocq_U383", "Parent" : "209"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.sample_fdiv_32ns_bzo_U384", "Parent" : "209"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_477.sample_fexp_32ns_bAo_U385", "Parent" : "209"}]}


set ArgLastReadFirstWriteLatency {
	sample {
		dense_13_input_input_array_0 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_1 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_2 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_3 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_4 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_5 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_6 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_array_7 {Type I LastRead 284 FirstWrite -1}
		dense_13_input_input_dim {Type I LastRead 0 FirstWrite -1}
		dense_13_input_input_numel {Type I LastRead 1 FirstWrite -1}
		dense_13_input_input_shape {Type I LastRead 80 FirstWrite -1}
		dense_16_output_arrray {Type IO LastRead 103 FirstWrite 14}
		dense_16_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_16_output_numel {Type I LastRead 7 FirstWrite -1}
		dense_16_output_shape {Type X LastRead -1 FirstWrite -1}
		dense_13_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_13_output_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_13_output_arra_7 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra_6 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra_5 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra_4 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra_3 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra_2 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_13_bias_numel {Type I LastRead -1 FirstWrite -1}
		dense_13_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_14_output_nume {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_14_output_arra_7 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra_6 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra_5 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra_4 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra_3 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra_2 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_numel {Type I LastRead -1 FirstWrite -1}
		dense_14_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_15_output_nume {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_15_output_arra_7 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra_6 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra_5 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra_4 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra_3 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra_2 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_14_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_numel {Type I LastRead -1 FirstWrite -1}
		dense_15_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_15_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dense_3 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 284 FirstWrite -1}
		input_array8 {Type I LastRead 284 FirstWrite -1}
		input_array9 {Type I LastRead 284 FirstWrite -1}
		input_array10 {Type I LastRead 284 FirstWrite -1}
		input_array11 {Type I LastRead 284 FirstWrite -1}
		input_array12 {Type I LastRead 284 FirstWrite -1}
		input_array13 {Type I LastRead 284 FirstWrite -1}
		input_array14 {Type I LastRead 284 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 80 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_13_output_arra_7 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_6 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_5 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_4 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_3 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_2 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra_1 {Type IO LastRead 108 FirstWrite 7}
		dense_13_output_arra {Type IO LastRead 108 FirstWrite 7}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
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
		C_0 {Type O LastRead -1 FirstWrite 21}
		C_1 {Type O LastRead -1 FirstWrite 21}
		C_2 {Type O LastRead -1 FirstWrite 21}
		C_3 {Type O LastRead -1 FirstWrite 21}
		C_4 {Type O LastRead -1 FirstWrite 21}
		C_5 {Type O LastRead -1 FirstWrite 21}
		C_6 {Type O LastRead -1 FirstWrite 21}
		C_7 {Type O LastRead -1 FirstWrite 21}
		A_0 {Type I LastRead 284 FirstWrite -1}
		A_1 {Type I LastRead 284 FirstWrite -1}
		A_2 {Type I LastRead 284 FirstWrite -1}
		A_3 {Type I LastRead 284 FirstWrite -1}
		A_4 {Type I LastRead 284 FirstWrite -1}
		A_5 {Type I LastRead 284 FirstWrite -1}
		A_6 {Type I LastRead 284 FirstWrite -1}
		A_7 {Type I LastRead 284 FirstWrite -1}
		d {Type I LastRead 376 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}}
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
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}}
	k2c_dense_2 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_14_output_arra_7 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_6 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_5 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_4 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_3 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_2 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_1 {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra {Type IO LastRead 110 FirstWrite 6}
		dense_13_output_arra_7 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra_6 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra_5 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra_4 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra_3 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra_2 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra_1 {Type I LastRead 284 FirstWrite -1}
		dense_13_output_arra {Type I LastRead 284 FirstWrite -1}
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot_1 {
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
		dense_13_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 71}
		shape {Type I LastRead 71 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 4 FirstWrite -1}
		shape {Type I LastRead 7 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul_1 {
		C {Type O LastRead -1 FirstWrite 21}
		C1 {Type O LastRead -1 FirstWrite 21}
		C2 {Type O LastRead -1 FirstWrite 21}
		C3 {Type O LastRead -1 FirstWrite 21}
		C4 {Type O LastRead -1 FirstWrite 21}
		C5 {Type O LastRead -1 FirstWrite 21}
		C6 {Type O LastRead -1 FirstWrite 21}
		C7 {Type O LastRead -1 FirstWrite 21}
		A {Type I LastRead 284 FirstWrite -1}
		A8 {Type I LastRead 284 FirstWrite -1}
		A9 {Type I LastRead 284 FirstWrite -1}
		A10 {Type I LastRead 284 FirstWrite -1}
		A11 {Type I LastRead 284 FirstWrite -1}
		A12 {Type I LastRead 284 FirstWrite -1}
		A13 {Type I LastRead 284 FirstWrite -1}
		A14 {Type I LastRead 284 FirstWrite -1}
		d {Type I LastRead 376 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}}
	k2c_bias_add_1 {
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
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}}
	k2c_dense_1 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_15_output_arra_7 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_6 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_5 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_4 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_3 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_2 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra_1 {Type IO LastRead 110 FirstWrite 6}
		dense_15_output_arra {Type IO LastRead 110 FirstWrite 6}
		dense_14_output_arra_7 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra_6 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra_5 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra_4 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra_3 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra_2 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra_1 {Type I LastRead 284 FirstWrite -1}
		dense_14_output_arra {Type I LastRead 284 FirstWrite -1}
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
		C {Type O LastRead -1 FirstWrite 21}
		C1 {Type O LastRead -1 FirstWrite 21}
		C2 {Type O LastRead -1 FirstWrite 21}
		C3 {Type O LastRead -1 FirstWrite 21}
		C4 {Type O LastRead -1 FirstWrite 21}
		C5 {Type O LastRead -1 FirstWrite 21}
		C6 {Type O LastRead -1 FirstWrite 21}
		C7 {Type O LastRead -1 FirstWrite 21}
		A {Type I LastRead 284 FirstWrite -1}
		A8 {Type I LastRead 284 FirstWrite -1}
		A9 {Type I LastRead 284 FirstWrite -1}
		A10 {Type I LastRead 284 FirstWrite -1}
		A11 {Type I LastRead 284 FirstWrite -1}
		A12 {Type I LastRead 284 FirstWrite -1}
		A13 {Type I LastRead 284 FirstWrite -1}
		A14 {Type I LastRead 284 FirstWrite -1}
		d {Type I LastRead 376 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}}
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
		dense_15_bias_array {Type I LastRead -1 FirstWrite -1}}
	k2c_dense {
		output_array {Type IO LastRead 103 FirstWrite 14}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array_0 {Type I LastRead 94 FirstWrite -1}
		input_array_1 {Type I LastRead 94 FirstWrite -1}
		input_array_2 {Type I LastRead 94 FirstWrite -1}
		input_array_3 {Type I LastRead 94 FirstWrite -1}
		input_array_4 {Type I LastRead 94 FirstWrite -1}
		input_array_5 {Type I LastRead 94 FirstWrite -1}
		input_array_6 {Type I LastRead 94 FirstWrite -1}
		input_array_7 {Type I LastRead 94 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 99 FirstWrite 93}
		dense_16_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_15_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot_3 {
		C_array {Type IO LastRead 103 FirstWrite 94}
		A_array {Type I LastRead 91 FirstWrite -1}
		A_array1 {Type I LastRead 91 FirstWrite -1}
		A_array2 {Type I LastRead 91 FirstWrite -1}
		A_array3 {Type I LastRead 91 FirstWrite -1}
		A_array4 {Type I LastRead 91 FirstWrite -1}
		A_array5 {Type I LastRead 91 FirstWrite -1}
		A_array6 {Type I LastRead 91 FirstWrite -1}
		A_array7 {Type I LastRead 91 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 99 FirstWrite 93}
		dense_15_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 71}
		shape {Type I LastRead 71 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 4 FirstWrite -1}
		shape {Type I LastRead 7 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul_3 {
		C {Type O LastRead -1 FirstWrite 19}
		A {Type I LastRead 94 FirstWrite -1}
		A1 {Type I LastRead 94 FirstWrite -1}
		A2 {Type I LastRead 94 FirstWrite -1}
		A3 {Type I LastRead 94 FirstWrite -1}
		A4 {Type I LastRead 94 FirstWrite -1}
		A5 {Type I LastRead 94 FirstWrite -1}
		A6 {Type I LastRead 94 FirstWrite -1}
		A7 {Type I LastRead 94 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	dense_13_input_input_array_0 { ap_memory {  { dense_13_input_input_array_0_address0 mem_address 1 4 }  { dense_13_input_input_array_0_ce0 mem_ce 1 1 }  { dense_13_input_input_array_0_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_1 { ap_memory {  { dense_13_input_input_array_1_address0 mem_address 1 4 }  { dense_13_input_input_array_1_ce0 mem_ce 1 1 }  { dense_13_input_input_array_1_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_2 { ap_memory {  { dense_13_input_input_array_2_address0 mem_address 1 4 }  { dense_13_input_input_array_2_ce0 mem_ce 1 1 }  { dense_13_input_input_array_2_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_3 { ap_memory {  { dense_13_input_input_array_3_address0 mem_address 1 4 }  { dense_13_input_input_array_3_ce0 mem_ce 1 1 }  { dense_13_input_input_array_3_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_4 { ap_memory {  { dense_13_input_input_array_4_address0 mem_address 1 4 }  { dense_13_input_input_array_4_ce0 mem_ce 1 1 }  { dense_13_input_input_array_4_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_5 { ap_memory {  { dense_13_input_input_array_5_address0 mem_address 1 4 }  { dense_13_input_input_array_5_ce0 mem_ce 1 1 }  { dense_13_input_input_array_5_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_6 { ap_memory {  { dense_13_input_input_array_6_address0 mem_address 1 4 }  { dense_13_input_input_array_6_ce0 mem_ce 1 1 }  { dense_13_input_input_array_6_q0 mem_dout 0 32 } } }
	dense_13_input_input_array_7 { ap_memory {  { dense_13_input_input_array_7_address0 mem_address 1 4 }  { dense_13_input_input_array_7_ce0 mem_ce 1 1 }  { dense_13_input_input_array_7_q0 mem_dout 0 32 } } }
	dense_13_input_input_dim { ap_none {  { dense_13_input_input_dim in_data 0 64 } } }
	dense_13_input_input_numel { ap_none {  { dense_13_input_input_numel in_data 0 64 } } }
	dense_13_input_input_shape { ap_memory {  { dense_13_input_input_shape_address0 mem_address 1 3 }  { dense_13_input_input_shape_ce0 mem_ce 1 1 }  { dense_13_input_input_shape_q0 mem_dout 0 64 } } }
	dense_16_output_arrray { ap_memory {  { dense_16_output_arrray_address0 mem_address 1 1 }  { dense_16_output_arrray_ce0 mem_ce 1 1 }  { dense_16_output_arrray_we0 mem_we 1 1 }  { dense_16_output_arrray_d0 mem_din 1 32 }  { dense_16_output_arrray_q0 mem_dout 0 32 } } }
	dense_16_output_dim { ap_none {  { dense_16_output_dim in_data 0 64 } } }
	dense_16_output_numel { ap_none {  { dense_16_output_numel in_data 0 64 } } }
	dense_16_output_shape { ap_memory {  { dense_16_output_shape_address0 mem_address 1 3 }  { dense_16_output_shape_ce0 mem_ce 1 1 }  { dense_16_output_shape_we0 mem_we 1 1 }  { dense_16_output_shape_d0 mem_din 1 64 }  { dense_16_output_shape_q0 mem_dout 0 64 }  { dense_16_output_shape_address1 mem_address 1 3 }  { dense_16_output_shape_ce1 mem_ce 1 1 }  { dense_16_output_shape_we1 mem_we 1 1 }  { dense_16_output_shape_d1 mem_din 1 64 }  { dense_16_output_shape_q1 mem_dout 0 64 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
