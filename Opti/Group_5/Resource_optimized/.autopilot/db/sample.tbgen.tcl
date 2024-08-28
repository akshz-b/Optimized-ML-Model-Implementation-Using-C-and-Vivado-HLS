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
	{ dense_13_input_input_array float 32 regular {array 128 { 1 1 } 1 1 }  }
	{ dense_13_input_input_dim int 64 regular  }
	{ dense_13_input_input_numel int 64 regular {pointer 0}  }
	{ dense_13_input_input_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ dense_16_output_arrray float 32 regular {array 1 { 2 3 } 1 1 }  }
	{ dense_16_output_dim int 64 unused  }
	{ dense_16_output_numel int 64 regular {pointer 0}  }
	{ dense_16_output_shape int 64 unused {array 5 { } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dense_13_input_input_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input_array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 127,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_13_input_input_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input_dim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "dense_13_input_input_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input_numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_13_input_input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input_shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_arrray", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_16_output_arrray","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output_dim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "dense_16_output_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output_numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output_shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 34
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dense_13_input_input_array_address0 sc_out sc_lv 7 signal 0 } 
	{ dense_13_input_input_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ dense_13_input_input_array_q0 sc_in sc_lv 32 signal 0 } 
	{ dense_13_input_input_array_address1 sc_out sc_lv 7 signal 0 } 
	{ dense_13_input_input_array_ce1 sc_out sc_logic 1 signal 0 } 
	{ dense_13_input_input_array_q1 sc_in sc_lv 32 signal 0 } 
	{ dense_13_input_input_dim sc_in sc_lv 64 signal 1 } 
	{ dense_13_input_input_numel sc_in sc_lv 64 signal 2 } 
	{ dense_13_input_input_shape_address0 sc_out sc_lv 3 signal 3 } 
	{ dense_13_input_input_shape_ce0 sc_out sc_logic 1 signal 3 } 
	{ dense_13_input_input_shape_q0 sc_in sc_lv 64 signal 3 } 
	{ dense_16_output_arrray_address0 sc_out sc_lv 1 signal 4 } 
	{ dense_16_output_arrray_ce0 sc_out sc_logic 1 signal 4 } 
	{ dense_16_output_arrray_we0 sc_out sc_logic 1 signal 4 } 
	{ dense_16_output_arrray_d0 sc_out sc_lv 32 signal 4 } 
	{ dense_16_output_arrray_q0 sc_in sc_lv 32 signal 4 } 
	{ dense_16_output_dim sc_in sc_lv 64 signal 5 } 
	{ dense_16_output_numel sc_in sc_lv 64 signal 6 } 
	{ dense_16_output_shape_address0 sc_out sc_lv 3 signal 7 } 
	{ dense_16_output_shape_ce0 sc_out sc_logic 1 signal 7 } 
	{ dense_16_output_shape_we0 sc_out sc_logic 1 signal 7 } 
	{ dense_16_output_shape_d0 sc_out sc_lv 64 signal 7 } 
	{ dense_16_output_shape_q0 sc_in sc_lv 64 signal 7 } 
	{ dense_16_output_shape_address1 sc_out sc_lv 3 signal 7 } 
	{ dense_16_output_shape_ce1 sc_out sc_logic 1 signal 7 } 
	{ dense_16_output_shape_we1 sc_out sc_logic 1 signal 7 } 
	{ dense_16_output_shape_d1 sc_out sc_lv 64 signal 7 } 
	{ dense_16_output_shape_q1 sc_in sc_lv 64 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dense_13_input_input_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_array_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "address1" }} , 
 	{ "name": "dense_13_input_input_array_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "ce1" }} , 
 	{ "name": "dense_13_input_input_array_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "q1" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "38", "75", "111"],
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
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_fu_176"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_3_fu_200"},
			{"State" : "ap_ST_fsm_state5", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_2_fu_227"},
			{"State" : "ap_ST_fsm_state7", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_1_fu_253"}],
		"Port" : [
			{"Name" : "dense_13_input_input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "input_array"}]},
			{"Name" : "dense_13_input_input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_input_input_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_input_input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "input_shape"}]},
			{"Name" : "dense_16_output_arrray", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "output_array"}]},
			{"Name" : "dense_16_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_output_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_output_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "dense_13_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_output_arra"},
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_13_output_arra"}]},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_kernel_arra"}]},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_bias_array"}]},
			{"Name" : "dense_13_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_kernel_nume"}]},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_kernel_shap"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_fwork"}]},
			{"Name" : "dense_13_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "38", "SubInstance" : "grp_k2c_dense_3_fu_200", "Port" : "dense_13_bias_numel"}]},
			{"Name" : "dense_13_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_output_arra"},
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_14_output_arra"}]},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_kernel_arra"}]},
			{"Name" : "dense_14_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_bias_array"}]},
			{"Name" : "dense_14_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_kernel_nume"}]},
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_13_output_shap"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_kernel_shap"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_fwork"}]},
			{"Name" : "dense_14_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_2_fu_227", "Port" : "dense_14_bias_numel"}]},
			{"Name" : "dense_14_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "dense_15_output_arra"},
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_output_arra"}]},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_kernel_arra"}]},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_bias_array"}]},
			{"Name" : "dense_15_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_kernel_nume"}]},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_14_output_shap"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_kernel_shap"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_fwork"}]},
			{"Name" : "dense_15_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "111", "SubInstance" : "grp_k2c_dense_1_fu_253", "Port" : "dense_15_bias_numel"}]},
			{"Name" : "dense_15_output_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "dense_16_kernel_arra"}]},
			{"Name" : "dense_16_kernel_nume", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "dense_16_kernel_nume"}]},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "dense_15_output_shap"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "dense_16_kernel_shap"}]},
			{"Name" : "dense_16_bias_numel", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_k2c_dense_fu_176", "Port" : "dense_16_bias_numel"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_fwork_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176", "Parent" : "0", "Child" : ["6", "7", "31", "35", "36", "37"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_3_fu_166"},
			{"State" : "ap_ST_fsm_state38", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_3_fu_190"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_affine_matmul_3_fu_190", "Port" : "C"},
					{"ID" : "7", "SubInstance" : "grp_k2c_dot_3_fu_166", "Port" : "C_array"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_k2c_dot_3_fu_166", "Port" : "fwork"}]},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_affine_matmul_3_fu_190", "Port" : "A"},
					{"ID" : "7", "SubInstance" : "grp_k2c_dot_3_fu_166", "Port" : "A_array"}]},
			{"Name" : "dense_16_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_affine_matmul_3_fu_190", "Port" : "B"},
					{"ID" : "7", "SubInstance" : "grp_k2c_dot_3_fu_166", "Port" : "dense_16_kernel_arra"}]},
			{"Name" : "dense_16_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_k2c_dot_3_fu_166", "Port" : "dense_15_output_shap"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "7", "SubInstance" : "grp_k2c_dot_3_fu_166", "Port" : "dense_16_kernel_shap"}]},
			{"Name" : "dense_16_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.dense_16_kernel_arra_U", "Parent" : "5"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166", "Parent" : "5", "Child" : ["8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "24", "27", "28", "29", "30"],
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
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_824"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_824"},
			{"State" : "ap_ST_fsm_state100", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_836"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_836"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_16_kernel_arra", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.dense_15_output_shap_U", "Parent" : "7"},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.dense_16_kernel_shap_U", "Parent" : "7"},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.dense_16_kernel_arra_U", "Parent" : "7"},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.permA_U", "Parent" : "7"},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.permB_U", "Parent" : "7"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.freeA_U", "Parent" : "7"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.freeB_U", "Parent" : "7"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.newshpA_U", "Parent" : "7"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.newshpB_U", "Parent" : "7"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.Asub_U", "Parent" : "7"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.Bsub_U", "Parent" : "7"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_idx2sub_fu_824", "Parent" : "7", "Child" : ["20", "21", "22", "23"],
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
	{"ID" : "20", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U1", "Parent" : "19"},
	{"ID" : "21", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U2", "Parent" : "19"},
	{"ID" : "22", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U3", "Parent" : "19"},
	{"ID" : "23", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U4", "Parent" : "19"},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_sub2idx_fu_836", "Parent" : "7", "Child" : ["25", "26"],
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
	{"ID" : "25", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U11", "Parent" : "24"},
	{"ID" : "26", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U12", "Parent" : "24"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.sample_fadd_32ns_hbi_U142", "Parent" : "7"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.sample_fmul_32ns_ibs_U143", "Parent" : "7"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.sample_udiv_64ns_Ngs_U144", "Parent" : "7"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_dot_3_fu_166.sample_mul_60ns_6kbM_U145", "Parent" : "7"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_affine_matmul_3_fu_190", "Parent" : "5", "Child" : ["32", "33", "34"],
		"CDFG" : "k2c_affine_matmul_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "135", "EstimateLatencyMax" : "2145",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_affine_matmul_3_fu_190.sample_fadd_32ns_hbi_U157", "Parent" : "31"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_affine_matmul_3_fu_190.sample_fmul_32ns_ibs_U158", "Parent" : "31"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.grp_k2c_affine_matmul_3_fu_190.sample_fmul_32ns_ibs_U159", "Parent" : "31"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.sample_fadd_32ns_hbi_U164", "Parent" : "5"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.sample_fdiv_32ns_PgM_U165", "Parent" : "5"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_176.sample_fexp_32ns_QgW_U166", "Parent" : "5"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200", "Parent" : "0", "Child" : ["39", "40", "41", "68", "73", "74"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_fu_191"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_215"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_k2c_dot_fu_191", "Port" : "A_array"},
					{"ID" : "68", "SubInstance" : "grp_k2c_affine_matmul_fu_215", "Port" : "A"}]},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_k2c_dot_fu_191", "Port" : "A_shape"}]},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_k2c_dot_fu_191", "Port" : "C_array"},
					{"ID" : "68", "SubInstance" : "grp_k2c_affine_matmul_fu_215", "Port" : "C"}]},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_k2c_dot_fu_191", "Port" : "dense_13_kernel_arra"},
					{"ID" : "68", "SubInstance" : "grp_k2c_affine_matmul_fu_215", "Port" : "B"}]},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "68", "SubInstance" : "grp_k2c_affine_matmul_fu_215", "Port" : "d"}]},
			{"Name" : "dense_13_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_k2c_dot_fu_191", "Port" : "dense_13_kernel_shap"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "41", "SubInstance" : "grp_k2c_dot_fu_191", "Port" : "dense_13_fwork"}]},
			{"Name" : "dense_13_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.dense_13_kernel_arra_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.dense_13_bias_array_U", "Parent" : "38"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191", "Parent" : "38", "Child" : ["42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "58", "61", "62", "63", "64", "65", "66", "67"],
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
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_822"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_822"},
			{"State" : "ap_ST_fsm_state100", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_834"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_834"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "grp_k2c_idx2sub_fu_822", "Port" : "shape"}]},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "grp_k2c_idx2sub_fu_822", "Port" : "shape"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.dense_13_kernel_shap_U", "Parent" : "41"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.dense_13_fwork_U", "Parent" : "41"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.dense_13_kernel_arra_U", "Parent" : "41"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.permA_U", "Parent" : "41"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.permB_U", "Parent" : "41"},
	{"ID" : "47", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.freeA_U", "Parent" : "41"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.freeB_U", "Parent" : "41"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.newshpA_U", "Parent" : "41"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.newshpB_U", "Parent" : "41"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.Asub_U", "Parent" : "41"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.Bsub_U", "Parent" : "41"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_idx2sub_fu_822", "Parent" : "41", "Child" : ["54", "55", "56", "57"],
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
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_idx2sub_fu_822.sample_urem_64ns_bkb_U1", "Parent" : "53"},
	{"ID" : "55", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_idx2sub_fu_822.sample_udiv_64ns_cud_U2", "Parent" : "53"},
	{"ID" : "56", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_idx2sub_fu_822.sample_urem_64ns_bkb_U3", "Parent" : "53"},
	{"ID" : "57", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_idx2sub_fu_822.sample_udiv_64ns_cud_U4", "Parent" : "53"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_sub2idx_fu_834", "Parent" : "41", "Child" : ["59", "60"],
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
	{"ID" : "59", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_sub2idx_fu_834.sample_mul_64s_64dEe_U11", "Parent" : "58"},
	{"ID" : "60", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.grp_k2c_sub2idx_fu_834.sample_mul_64s_64dEe_U12", "Parent" : "58"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_fadd_32ns_hbi_U17", "Parent" : "41"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_fmul_32ns_ibs_U18", "Parent" : "41"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_udiv_64ns_cud_U19", "Parent" : "41"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_mul_66ns_6jbC_U20", "Parent" : "41"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_mul_60ns_6kbM_U21", "Parent" : "41"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_mul_mul_13lbW_U22", "Parent" : "41"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_dot_fu_191.sample_mul_mul_13lbW_U23", "Parent" : "41"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_affine_matmul_fu_215", "Parent" : "38", "Child" : ["69", "70", "71", "72"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_affine_matmul_fu_215.sample_fadd_32ns_hbi_U42", "Parent" : "68"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_affine_matmul_fu_215.sample_fmul_32ns_ibs_U43", "Parent" : "68"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_affine_matmul_fu_215.sample_fmul_32ns_ibs_U44", "Parent" : "68"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.grp_k2c_affine_matmul_fu_215.sample_mul_mul_8nmb6_U45", "Parent" : "68"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.sample_fadd_32ns_hbi_U52", "Parent" : "38"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_200.sample_fcmp_32ns_pcA_U53", "Parent" : "38"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227", "Parent" : "0", "Child" : ["76", "77", "78", "105", "109", "110"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_1_fu_192"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_1_fu_216"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_k2c_dot_1_fu_192", "Port" : "C_array"},
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_1_fu_216", "Port" : "C"}]},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_k2c_dot_1_fu_192", "Port" : "A_array"},
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_1_fu_216", "Port" : "A"}]},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_k2c_dot_1_fu_192", "Port" : "dense_14_kernel_arra"},
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_1_fu_216", "Port" : "B"}]},
			{"Name" : "dense_14_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_1_fu_216", "Port" : "d"}]},
			{"Name" : "dense_14_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_k2c_dot_1_fu_192", "Port" : "dense_13_output_shap"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_k2c_dot_1_fu_192", "Port" : "dense_14_kernel_shap"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_k2c_dot_1_fu_192", "Port" : "dense_14_fwork"}]},
			{"Name" : "dense_14_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.dense_14_kernel_arra_U", "Parent" : "75"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.dense_14_bias_array_U", "Parent" : "75"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192", "Parent" : "75", "Child" : ["79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "96", "99", "100", "101", "102", "103", "104"],
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
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_824"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_824"},
			{"State" : "ap_ST_fsm_state100", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_836"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_836"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "91", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.dense_13_output_shap_U", "Parent" : "78"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.dense_14_kernel_shap_U", "Parent" : "78"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.dense_14_fwork_U", "Parent" : "78"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.dense_14_kernel_arra_U", "Parent" : "78"},
	{"ID" : "83", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.permA_U", "Parent" : "78"},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.permB_U", "Parent" : "78"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.freeA_U", "Parent" : "78"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.freeB_U", "Parent" : "78"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.newshpA_U", "Parent" : "78"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.newshpB_U", "Parent" : "78"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.Asub_U", "Parent" : "78"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.Bsub_U", "Parent" : "78"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_idx2sub_fu_824", "Parent" : "78", "Child" : ["92", "93", "94", "95"],
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
	{"ID" : "92", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U1", "Parent" : "91"},
	{"ID" : "93", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U2", "Parent" : "91"},
	{"ID" : "94", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U3", "Parent" : "91"},
	{"ID" : "95", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U4", "Parent" : "91"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_sub2idx_fu_836", "Parent" : "78", "Child" : ["97", "98"],
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
	{"ID" : "97", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U11", "Parent" : "96"},
	{"ID" : "98", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U12", "Parent" : "96"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.sample_fadd_32ns_hbi_U64", "Parent" : "78"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.sample_fmul_32ns_ibs_U65", "Parent" : "78"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.sample_udiv_64ns_udo_U66", "Parent" : "78"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.sample_mul_57ns_6vdy_U67", "Parent" : "78"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.sample_mul_mul_14wdI_U68", "Parent" : "78"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_dot_1_fu_192.sample_mul_mul_8nxdS_U69", "Parent" : "78"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_affine_matmul_1_fu_216", "Parent" : "75", "Child" : ["106", "107", "108"],
		"CDFG" : "k2c_affine_matmul_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "24291", "EstimateLatencyMax" : "3109121",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_affine_matmul_1_fu_216.sample_fadd_32ns_hbi_U85", "Parent" : "105"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_affine_matmul_1_fu_216.sample_fmul_32ns_ibs_U86", "Parent" : "105"},
	{"ID" : "108", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.grp_k2c_affine_matmul_1_fu_216.sample_fmul_32ns_ibs_U87", "Parent" : "105"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.sample_fadd_32ns_hbi_U93", "Parent" : "75"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_227.sample_fcmp_32ns_pcA_U94", "Parent" : "75"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253", "Parent" : "0", "Child" : ["112", "113", "114", "141", "145", "146"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_2_fu_191"},
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_2_fu_215"}],
		"Port" : [
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "114", "SubInstance" : "grp_k2c_dot_2_fu_191", "Port" : "C_array"},
					{"ID" : "141", "SubInstance" : "grp_k2c_affine_matmul_2_fu_215", "Port" : "C"}]},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "114", "SubInstance" : "grp_k2c_dot_2_fu_191", "Port" : "A_array"},
					{"ID" : "141", "SubInstance" : "grp_k2c_affine_matmul_2_fu_215", "Port" : "A"}]},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "114", "SubInstance" : "grp_k2c_dot_2_fu_191", "Port" : "dense_15_kernel_arra"},
					{"ID" : "141", "SubInstance" : "grp_k2c_affine_matmul_2_fu_215", "Port" : "B"}]},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "141", "SubInstance" : "grp_k2c_affine_matmul_2_fu_215", "Port" : "d"}]},
			{"Name" : "dense_15_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "114", "SubInstance" : "grp_k2c_dot_2_fu_191", "Port" : "dense_14_output_shap"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "114", "SubInstance" : "grp_k2c_dot_2_fu_191", "Port" : "dense_15_kernel_shap"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "114", "SubInstance" : "grp_k2c_dot_2_fu_191", "Port" : "dense_15_fwork"}]},
			{"Name" : "dense_15_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.dense_15_kernel_arra_U", "Parent" : "111"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.dense_15_bias_array_U", "Parent" : "111"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191", "Parent" : "111", "Child" : ["115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "132", "135", "136", "137", "138", "139", "140"],
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
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_824"},
			{"State" : "ap_ST_fsm_state102", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_idx2sub_fu_824"},
			{"State" : "ap_ST_fsm_state100", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_836"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_836"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_read2", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_15_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "115", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.dense_14_output_shap_U", "Parent" : "114"},
	{"ID" : "116", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.dense_15_kernel_shap_U", "Parent" : "114"},
	{"ID" : "117", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.dense_15_fwork_U", "Parent" : "114"},
	{"ID" : "118", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.dense_15_kernel_arra_U", "Parent" : "114"},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.permA_U", "Parent" : "114"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.permB_U", "Parent" : "114"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.freeA_U", "Parent" : "114"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.freeB_U", "Parent" : "114"},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.newshpA_U", "Parent" : "114"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.newshpB_U", "Parent" : "114"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.Asub_U", "Parent" : "114"},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.Bsub_U", "Parent" : "114"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_idx2sub_fu_824", "Parent" : "114", "Child" : ["128", "129", "130", "131"],
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
	{"ID" : "128", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U1", "Parent" : "127"},
	{"ID" : "129", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U2", "Parent" : "127"},
	{"ID" : "130", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U3", "Parent" : "127"},
	{"ID" : "131", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U4", "Parent" : "127"},
	{"ID" : "132", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_sub2idx_fu_836", "Parent" : "114", "Child" : ["133", "134"],
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
	{"ID" : "133", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U11", "Parent" : "132"},
	{"ID" : "134", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U12", "Parent" : "132"},
	{"ID" : "135", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.sample_fadd_32ns_hbi_U103", "Parent" : "114"},
	{"ID" : "136", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.sample_fmul_32ns_ibs_U104", "Parent" : "114"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.sample_udiv_64ns_Ee0_U105", "Parent" : "114"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.sample_mul_59ns_6Ffa_U106", "Parent" : "114"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.sample_mul_mul_11Gfk_U107", "Parent" : "114"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_dot_2_fu_191.sample_mul_mul_6nHfu_U108", "Parent" : "114"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_affine_matmul_2_fu_215", "Parent" : "111", "Child" : ["142", "143", "144"],
		"CDFG" : "k2c_affine_matmul_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3507", "EstimateLatencyMax" : "112193",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_affine_matmul_2_fu_215.sample_fadd_32ns_hbi_U124", "Parent" : "141"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_affine_matmul_2_fu_215.sample_fmul_32ns_ibs_U125", "Parent" : "141"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.grp_k2c_affine_matmul_2_fu_215.sample_fmul_32ns_ibs_U126", "Parent" : "141"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.sample_fadd_32ns_hbi_U132", "Parent" : "111"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_253.sample_fcmp_32ns_pcA_U133", "Parent" : "111"}]}


set ArgLastReadFirstWriteLatency {
	sample {
		dense_13_input_input_array {Type I LastRead 86 FirstWrite -1}
		dense_13_input_input_dim {Type I LastRead 0 FirstWrite -1}
		dense_13_input_input_numel {Type I LastRead 1 FirstWrite -1}
		dense_13_input_input_shape {Type I LastRead 79 FirstWrite -1}
		dense_16_output_arrray {Type IO LastRead 92 FirstWrite 8}
		dense_16_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_16_output_numel {Type I LastRead 7 FirstWrite -1}
		dense_16_output_shape {Type X LastRead -1 FirstWrite -1}
		dense_13_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_13_output_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_13_bias_numel {Type I LastRead -1 FirstWrite -1}
		dense_13_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_14_output_nume {Type I LastRead -1 FirstWrite -1}
		dense_14_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_numel {Type I LastRead -1 FirstWrite -1}
		dense_14_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_15_output_nume {Type I LastRead -1 FirstWrite -1}
		dense_15_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_14_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_numel {Type I LastRead -1 FirstWrite -1}
		dense_15_output_dim {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_dim {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_15_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dense {
		output_array {Type IO LastRead 92 FirstWrite 8}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 89 FirstWrite 88}
		dense_15_output_arra {Type I LastRead 86 FirstWrite -1}
		dense_16_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_15_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot_3 {
		C_array {Type IO LastRead 92 FirstWrite 85}
		A_array {Type I LastRead 86 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 89 FirstWrite 88}
		dense_15_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_arra {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 69}
		shape {Type I LastRead 69 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 3 FirstWrite -1}
		shape {Type I LastRead 5 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul_3 {
		C {Type O LastRead -1 FirstWrite 8}
		A {Type I LastRead 20 FirstWrite -1}
		B {Type I LastRead 8 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}
	k2c_dense_3 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 86 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 79 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_13_output_arra {Type IO LastRead 91 FirstWrite 5}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_13_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot {
		C_array {Type IO LastRead 91 FirstWrite 85}
		A_array {Type I LastRead 86 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 79 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		axesA_0_read {Type I LastRead 0 FirstWrite -1}
		dense_13_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_13_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 69}
		shape {Type I LastRead 69 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 3 FirstWrite -1}
		shape {Type I LastRead 5 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type O LastRead -1 FirstWrite 5}
		A {Type I LastRead 34 FirstWrite -1}
		B {Type I LastRead 34 FirstWrite -1}
		d {Type I LastRead 2 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}
	k2c_dense_2 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_14_output_arra {Type IO LastRead 91 FirstWrite 4}
		dense_13_output_arra {Type I LastRead 86 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_13_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot_1 {
		C_array {Type IO LastRead 91 FirstWrite 85}
		A_array {Type I LastRead 86 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		dense_13_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_14_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 69}
		shape {Type I LastRead 69 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 3 FirstWrite -1}
		shape {Type I LastRead 5 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul_1 {
		C {Type O LastRead -1 FirstWrite 5}
		A {Type I LastRead 34 FirstWrite -1}
		B {Type I LastRead 34 FirstWrite -1}
		d {Type I LastRead 2 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}
	k2c_dense_1 {
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_dim {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_dim {Type I LastRead 0 FirstWrite -1}
		dense_15_output_arra {Type IO LastRead 92 FirstWrite 3}
		dense_14_output_arra {Type I LastRead 86 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_nume {Type I LastRead -1 FirstWrite -1}
		dense_14_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_numel {Type I LastRead -1 FirstWrite -1}}
	k2c_dot_2 {
		C_array {Type IO LastRead 92 FirstWrite 85}
		A_array {Type I LastRead 86 FirstWrite -1}
		A_dim {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		B_dim {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		p_read2 {Type I LastRead 0 FirstWrite -1}
		dense_14_output_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type I LastRead -1 FirstWrite -1}
		dense_15_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}}
	k2c_idx2sub {
		idx {Type I LastRead 0 FirstWrite -1}
		sub {Type O LastRead -1 FirstWrite 69}
		shape {Type I LastRead 69 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 3 FirstWrite -1}
		shape {Type I LastRead 5 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul_2 {
		C {Type O LastRead -1 FirstWrite 5}
		A {Type I LastRead 34 FirstWrite -1}
		B {Type I LastRead 34 FirstWrite -1}
		d {Type I LastRead 2 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	dense_13_input_input_array { ap_memory {  { dense_13_input_input_array_address0 mem_address 1 7 }  { dense_13_input_input_array_ce0 mem_ce 1 1 }  { dense_13_input_input_array_q0 mem_dout 0 32 }  { dense_13_input_input_array_address1 mem_address 1 7 }  { dense_13_input_input_array_ce1 mem_ce 1 1 }  { dense_13_input_input_array_q1 mem_dout 0 32 } } }
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
