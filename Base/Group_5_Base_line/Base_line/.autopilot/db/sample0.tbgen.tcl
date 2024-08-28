set C_TypeInfoList {{ 
"sample0" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"dense_13_input_input": [[],{ "pointer": "0"}] }, {"dense_16_output": [[],{ "pointer": "0"}] }],["1","2","3","4","5","6","7","8","9","10","11","12"],""],
 "1": [ "i", [[],"13"],""],
 "2": [ "dense_16_kernel", [[],"0"],""],
 "3": [ "dense_16_bias", [[],"0"],""],
 "4": [ "dense_15_output", [[],"0"],""],
 "5": [ "dense_15_kernel", [[],"0"],""],
 "6": [ "dense_15_bias", [[],"0"],""],
 "7": [ "dense_14_output", [[],"0"],""],
 "8": [ "dense_14_kernel", [[],"0"],""],
 "9": [ "dense_14_bias", [[],"0"],""],
 "10": [ "dense_13_output", [[],"0"],""],
 "11": [ "dense_13_kernel", [[],"0"],""],
 "12": [ "dense_13_bias", [[],"0"],""], 
"0": [ "k2c_tensor", {"typedef": [[[],"14"],""]}], 
"14": [ "k2c_tensor", {"struct": [[],[],[{ "array": [[],  {"array": [ {"scalar": "float"}, [10000]]}]},{ "ndim": [[64], "13"]},{ "numel": [[64], "13"]},{ "shape": [[],  {"array": ["13", [5]]}]}],""]}], 
"13": [ "size_t", {"typedef": [[[], {"scalar": "long long unsigned int"}],""]}]
}}
set moduleName sample0
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
set C_modelName {sample0}
set C_modelType { void 0 }
set C_modelArgList {
	{ dense_13_input_input_array float 32 regular {array 10000 { 1 3 } 1 1 }  }
	{ dense_13_input_input_ndim int 64 regular {pointer 0}  }
	{ dense_13_input_input_numel int 64 regular {pointer 0}  }
	{ dense_13_input_input_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ dense_16_output_array float 32 regular {array 10000 { 2 2 } 1 1 }  }
	{ dense_16_output_ndim int 64 unused {pointer 0}  }
	{ dense_16_output_numel int 64 regular {pointer 0}  }
	{ dense_16_output_shape int 64 unused {array 5 { } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dense_13_input_input_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_13_input_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9999,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_13_input_input_ndim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input.ndim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_13_input_input_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input.numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_13_input_input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_13_input_input.shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_16_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9999,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_ndim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output.ndim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output.numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_16_output_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_16_output.shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 36
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dense_13_input_input_array_address0 sc_out sc_lv 14 signal 0 } 
	{ dense_13_input_input_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ dense_13_input_input_array_q0 sc_in sc_lv 32 signal 0 } 
	{ dense_13_input_input_ndim sc_in sc_lv 64 signal 1 } 
	{ dense_13_input_input_numel sc_in sc_lv 64 signal 2 } 
	{ dense_13_input_input_shape_address0 sc_out sc_lv 3 signal 3 } 
	{ dense_13_input_input_shape_ce0 sc_out sc_logic 1 signal 3 } 
	{ dense_13_input_input_shape_q0 sc_in sc_lv 64 signal 3 } 
	{ dense_16_output_array_address0 sc_out sc_lv 14 signal 4 } 
	{ dense_16_output_array_ce0 sc_out sc_logic 1 signal 4 } 
	{ dense_16_output_array_we0 sc_out sc_logic 1 signal 4 } 
	{ dense_16_output_array_d0 sc_out sc_lv 32 signal 4 } 
	{ dense_16_output_array_q0 sc_in sc_lv 32 signal 4 } 
	{ dense_16_output_array_address1 sc_out sc_lv 14 signal 4 } 
	{ dense_16_output_array_ce1 sc_out sc_logic 1 signal 4 } 
	{ dense_16_output_array_we1 sc_out sc_logic 1 signal 4 } 
	{ dense_16_output_array_d1 sc_out sc_lv 32 signal 4 } 
	{ dense_16_output_array_q1 sc_in sc_lv 32 signal 4 } 
	{ dense_16_output_ndim sc_in sc_lv 64 signal 5 } 
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
 	{ "name": "dense_13_input_input_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_13_input_input_array", "role": "q0" }} , 
 	{ "name": "dense_13_input_input_ndim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_13_input_input_ndim", "role": "default" }} , 
 	{ "name": "dense_13_input_input_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_13_input_input_numel", "role": "default" }} , 
 	{ "name": "dense_13_input_input_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_13_input_input_shape", "role": "address0" }} , 
 	{ "name": "dense_13_input_input_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_13_input_input_shape", "role": "ce0" }} , 
 	{ "name": "dense_13_input_input_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_13_input_input_shape", "role": "q0" }} , 
 	{ "name": "dense_16_output_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "address0" }} , 
 	{ "name": "dense_16_output_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "ce0" }} , 
 	{ "name": "dense_16_output_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "we0" }} , 
 	{ "name": "dense_16_output_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "d0" }} , 
 	{ "name": "dense_16_output_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "q0" }} , 
 	{ "name": "dense_16_output_array_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "address1" }} , 
 	{ "name": "dense_16_output_array_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "ce1" }} , 
 	{ "name": "dense_16_output_array_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "we1" }} , 
 	{ "name": "dense_16_output_array_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "d1" }} , 
 	{ "name": "dense_16_output_array_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_16_output_array", "role": "q1" }} , 
 	{ "name": "dense_16_output_ndim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_16_output_ndim", "role": "default" }} , 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "65", "100", "135"],
		"CDFG" : "sample0",
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
			{"State" : "ap_ST_fsm_state50", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_fu_863"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_2_fu_887"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_1_fu_910"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_3_fu_933"}],
		"Port" : [
			{"Name" : "dense_13_input_input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "grp_k2c_dense_3_fu_933", "Port" : "input_array"}]},
			{"Name" : "dense_13_input_input_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_input_input_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_input_input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "grp_k2c_dense_3_fu_933", "Port" : "input_shape"}]},
			{"Name" : "dense_16_output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_dense_fu_863", "Port" : "output_array"}]},
			{"Name" : "dense_16_output_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_output_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_16_output_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "dense_13_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_k2c_dense_2_fu_887", "Port" : "input_array"},
					{"ID" : "135", "SubInstance" : "grp_k2c_dense_3_fu_933", "Port" : "output_array"}]},
			{"Name" : "dense_13_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_13_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "grp_k2c_dense_3_fu_933", "Port" : "kernel_array"}]},
			{"Name" : "dense_13_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_bias_array_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "grp_k2c_dense_3_fu_933", "Port" : "bias_array"}]},
			{"Name" : "dense_14_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_k2c_dense_2_fu_887", "Port" : "output_array"},
					{"ID" : "100", "SubInstance" : "grp_k2c_dense_1_fu_910", "Port" : "input_array"}]},
			{"Name" : "dense_14_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_14_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_k2c_dense_2_fu_887", "Port" : "kernel_array"}]},
			{"Name" : "dense_14_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_14_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_14_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_bias_array_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_k2c_dense_2_fu_887", "Port" : "bias_array"}]},
			{"Name" : "dense_14_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_15_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_dense_fu_863", "Port" : "input_array"},
					{"ID" : "100", "SubInstance" : "grp_k2c_dense_1_fu_910", "Port" : "output_array"}]},
			{"Name" : "dense_15_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_15_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_15_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_kernel_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "100", "SubInstance" : "grp_k2c_dense_1_fu_910", "Port" : "kernel_array"}]},
			{"Name" : "dense_15_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_15_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_15_bias_array1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_15_bias_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "100", "SubInstance" : "grp_k2c_dense_1_fu_910", "Port" : "bias_array"}]},
			{"Name" : "dense_15_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_16_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_16_kernel_arra_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_dense_fu_863", "Port" : "kernel_array"}]},
			{"Name" : "dense_16_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_16_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_16_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "135", "SubInstance" : "grp_k2c_dense_3_fu_933", "Port" : "kernel_shape"}]},
			{"Name" : "dense_13_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_k2c_dense_2_fu_887", "Port" : "input_shape"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_k2c_dense_2_fu_887", "Port" : "kernel_shape"}]},
			{"Name" : "dense_14_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "100", "SubInstance" : "grp_k2c_dense_1_fu_910", "Port" : "input_shape"}]},
			{"Name" : "dense_15_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "100", "SubInstance" : "grp_k2c_dense_1_fu_910", "Port" : "kernel_shape"}]},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_dense_fu_863", "Port" : "input_shape"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_dense_fu_863", "Port" : "kernel_shape"}]},
			{"Name" : "dense_16_bias_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_dense_fu_863", "Port" : "bias_array"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_arra_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_4_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_bias_array_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_bias_array_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_arra_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_2_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_bias_array_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_bias_array_3_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_arra_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_bias_array1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_bias_array_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_kernel_arra_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_kernel_arra_0_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_shap_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_shap_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_shap_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_output_shap_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_shap_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_shap_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_kernel_shap_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_bias_array_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_fwork_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_fwork_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_fwork_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_fwork_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863", "Parent" : "0", "Child" : ["31", "54", "61", "62", "63", "64"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_3_fu_236"},
			{"State" : "ap_ST_fsm_state80", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_261"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_dot_3_fu_236", "Port" : "C_array"},
					{"ID" : "54", "SubInstance" : "grp_k2c_affine_matmul_fu_261", "Port" : "C"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_dot_3_fu_236", "Port" : "A_array"},
					{"ID" : "54", "SubInstance" : "grp_k2c_affine_matmul_fu_261", "Port" : "A"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_dot_3_fu_236", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_dot_3_fu_236", "Port" : "B_array"},
					{"ID" : "54", "SubInstance" : "grp_k2c_affine_matmul_fu_261", "Port" : "B"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_dot_3_fu_236", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_k2c_affine_matmul_fu_261", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_k2c_dot_3_fu_236", "Port" : "fwork"}]}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236", "Parent" : "30", "Child" : ["32", "33", "34", "35", "36", "37", "38", "39", "40", "46", "48", "49", "50", "51", "52", "53"],
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
			{"State" : "ap_ST_fsm_state238", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_3_fu_593"},
			{"State" : "ap_ST_fsm_state160", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_605"},
			{"State" : "ap_ST_fsm_state236", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_605"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_k2c_matmul_3_fu_593", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "40", "SubInstance" : "grp_k2c_matmul_3_fu_593", "Port" : "B"}]}]},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.permA_U", "Parent" : "31"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.permB_U", "Parent" : "31"},
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.freeA_U", "Parent" : "31"},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.freeB_U", "Parent" : "31"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.newshpA_U", "Parent" : "31"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.newshpB_U", "Parent" : "31"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.Asub_U", "Parent" : "31"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.Bsub_U", "Parent" : "31"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_matmul_3_fu_593", "Parent" : "31", "Child" : ["41", "42", "43", "44", "45"],
		"CDFG" : "k2c_matmul_3",
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "41", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_matmul_3_fu_593.sample0_fadd_32nscud_U164", "Parent" : "40"},
	{"ID" : "42", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_matmul_3_fu_593.sample0_fmul_32nsdEe_U165", "Parent" : "40"},
	{"ID" : "43", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_matmul_3_fu_593.sample0_mul_64s_6bkb_U166", "Parent" : "40"},
	{"ID" : "44", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_matmul_3_fu_593.sample0_mul_mul_1eOg_U167", "Parent" : "40"},
	{"ID" : "45", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_matmul_3_fu_593.sample0_mac_muladqcK_U168", "Parent" : "40"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_sub2idx_fu_605", "Parent" : "31", "Child" : ["47"],
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
	{"ID" : "47", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.grp_k2c_sub2idx_fu_605.sample0_mul_64s_6bkb_U1", "Parent" : "46"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.sample0_udiv_64nshbi_U176", "Parent" : "31"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.sample0_udiv_64nshbi_U177", "Parent" : "31"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.sample0_urem_64nsjbC_U178", "Parent" : "31"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.sample0_udiv_64nshbi_U179", "Parent" : "31"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.sample0_urem_64nsjbC_U180", "Parent" : "31"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_dot_3_fu_236.sample0_udiv_64nshbi_U181", "Parent" : "31"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261", "Parent" : "30", "Child" : ["55", "56", "57", "58", "59", "60"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261.sample0_fadd_32nscud_U43", "Parent" : "54"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261.sample0_fmul_32nsdEe_U44", "Parent" : "54"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261.sample0_mul_64s_6bkb_U45", "Parent" : "54"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261.sample0_mul_mul_1eOg_U46", "Parent" : "54"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261.sample0_mul_mul_1eOg_U47", "Parent" : "54"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.grp_k2c_affine_matmul_fu_261.sample0_mac_muladkbM_U48", "Parent" : "54"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.sample0_fadd_32nscud_U193", "Parent" : "30"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.sample0_fdiv_32nsrcU_U194", "Parent" : "30"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.sample0_fexp_32nssc4_U195", "Parent" : "30"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_863.sample0_mul_64s_6bkb_U196", "Parent" : "30"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887", "Parent" : "0", "Child" : ["66", "90", "97", "98", "99"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_1_fu_242"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_267"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_k2c_dot_1_fu_242", "Port" : "C_array"},
					{"ID" : "90", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "C"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_k2c_dot_1_fu_242", "Port" : "A_array"},
					{"ID" : "90", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "A"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_k2c_dot_1_fu_242", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_k2c_dot_1_fu_242", "Port" : "B_array"},
					{"ID" : "90", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "B"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_k2c_dot_1_fu_242", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "90", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_k2c_dot_1_fu_242", "Port" : "fwork"}]}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242", "Parent" : "65", "Child" : ["67", "68", "69", "70", "71", "72", "73", "74", "75", "82", "84", "85", "86", "87", "88", "89"],
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
			{"State" : "ap_ST_fsm_state238", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_1_fu_593"},
			{"State" : "ap_ST_fsm_state160", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_605"},
			{"State" : "ap_ST_fsm_state236", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_605"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_matmul_1_fu_593", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_matmul_1_fu_593", "Port" : "B"}]}]},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.permA_U", "Parent" : "66"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.permB_U", "Parent" : "66"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.freeA_U", "Parent" : "66"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.freeB_U", "Parent" : "66"},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.newshpA_U", "Parent" : "66"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.newshpB_U", "Parent" : "66"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.Asub_U", "Parent" : "66"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.Bsub_U", "Parent" : "66"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593", "Parent" : "66", "Child" : ["76", "77", "78", "79", "80", "81"],
		"CDFG" : "k2c_matmul_1",
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593.sample0_fadd_32nscud_U70", "Parent" : "75"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593.sample0_fmul_32nsdEe_U71", "Parent" : "75"},
	{"ID" : "78", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593.sample0_mul_64s_6bkb_U72", "Parent" : "75"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593.sample0_mul_mul_1eOg_U73", "Parent" : "75"},
	{"ID" : "80", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593.sample0_mul_mul_1mb6_U74", "Parent" : "75"},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_matmul_1_fu_593.sample0_mac_muladncg_U75", "Parent" : "75"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_sub2idx_fu_605", "Parent" : "66", "Child" : ["83"],
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
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.grp_k2c_sub2idx_fu_605.sample0_mul_64s_6bkb_U1", "Parent" : "82"},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.sample0_udiv_64nshbi_U84", "Parent" : "66"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.sample0_udiv_64nshbi_U85", "Parent" : "66"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.sample0_urem_64nsjbC_U86", "Parent" : "66"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.sample0_udiv_64nshbi_U87", "Parent" : "66"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.sample0_urem_64nsjbC_U88", "Parent" : "66"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_dot_1_fu_242.sample0_udiv_64nshbi_U89", "Parent" : "66"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267", "Parent" : "65", "Child" : ["91", "92", "93", "94", "95", "96"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267.sample0_fadd_32nscud_U43", "Parent" : "90"},
	{"ID" : "92", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267.sample0_fmul_32nsdEe_U44", "Parent" : "90"},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267.sample0_mul_64s_6bkb_U45", "Parent" : "90"},
	{"ID" : "94", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267.sample0_mul_mul_1eOg_U46", "Parent" : "90"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267.sample0_mul_mul_1eOg_U47", "Parent" : "90"},
	{"ID" : "96", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.grp_k2c_affine_matmul_fu_267.sample0_mac_muladkbM_U48", "Parent" : "90"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.sample0_fadd_32nscud_U101", "Parent" : "65"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.sample0_fcmp_32nslbW_U102", "Parent" : "65"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_887.sample0_mul_64s_6bkb_U103", "Parent" : "65"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910", "Parent" : "0", "Child" : ["101", "125", "132", "133", "134"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_2_fu_242"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_267"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "grp_k2c_dot_2_fu_242", "Port" : "C_array"},
					{"ID" : "125", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "C"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "grp_k2c_dot_2_fu_242", "Port" : "A_array"},
					{"ID" : "125", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "A"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "grp_k2c_dot_2_fu_242", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "grp_k2c_dot_2_fu_242", "Port" : "B_array"},
					{"ID" : "125", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "B"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "grp_k2c_dot_2_fu_242", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "125", "SubInstance" : "grp_k2c_affine_matmul_fu_267", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "101", "SubInstance" : "grp_k2c_dot_2_fu_242", "Port" : "fwork"}]}]},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242", "Parent" : "100", "Child" : ["102", "103", "104", "105", "106", "107", "108", "109", "110", "117", "119", "120", "121", "122", "123", "124"],
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
			{"State" : "ap_ST_fsm_state238", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_2_fu_593"},
			{"State" : "ap_ST_fsm_state160", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_605"},
			{"State" : "ap_ST_fsm_state236", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_605"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "110", "SubInstance" : "grp_k2c_matmul_2_fu_593", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "110", "SubInstance" : "grp_k2c_matmul_2_fu_593", "Port" : "B"}]}]},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.permA_U", "Parent" : "101"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.permB_U", "Parent" : "101"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.freeA_U", "Parent" : "101"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.freeB_U", "Parent" : "101"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.newshpA_U", "Parent" : "101"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.newshpB_U", "Parent" : "101"},
	{"ID" : "108", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.Asub_U", "Parent" : "101"},
	{"ID" : "109", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.Bsub_U", "Parent" : "101"},
	{"ID" : "110", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593", "Parent" : "101", "Child" : ["111", "112", "113", "114", "115", "116"],
		"CDFG" : "k2c_matmul_2",
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "111", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593.sample0_fadd_32nscud_U117", "Parent" : "110"},
	{"ID" : "112", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593.sample0_fmul_32nsdEe_U118", "Parent" : "110"},
	{"ID" : "113", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593.sample0_mul_64s_6bkb_U119", "Parent" : "110"},
	{"ID" : "114", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593.sample0_mul_mul_1eOg_U120", "Parent" : "110"},
	{"ID" : "115", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593.sample0_mul_mul_1ocq_U121", "Parent" : "110"},
	{"ID" : "116", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_matmul_2_fu_593.sample0_mac_muladpcA_U122", "Parent" : "110"},
	{"ID" : "117", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_sub2idx_fu_605", "Parent" : "101", "Child" : ["118"],
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
	{"ID" : "118", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.grp_k2c_sub2idx_fu_605.sample0_mul_64s_6bkb_U1", "Parent" : "117"},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.sample0_udiv_64nshbi_U131", "Parent" : "101"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.sample0_udiv_64nshbi_U132", "Parent" : "101"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.sample0_urem_64nsjbC_U133", "Parent" : "101"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.sample0_udiv_64nshbi_U134", "Parent" : "101"},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.sample0_urem_64nsjbC_U135", "Parent" : "101"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_dot_2_fu_242.sample0_udiv_64nshbi_U136", "Parent" : "101"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267", "Parent" : "100", "Child" : ["126", "127", "128", "129", "130", "131"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267.sample0_fadd_32nscud_U43", "Parent" : "125"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267.sample0_fmul_32nsdEe_U44", "Parent" : "125"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267.sample0_mul_64s_6bkb_U45", "Parent" : "125"},
	{"ID" : "129", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267.sample0_mul_mul_1eOg_U46", "Parent" : "125"},
	{"ID" : "130", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267.sample0_mul_mul_1eOg_U47", "Parent" : "125"},
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.grp_k2c_affine_matmul_fu_267.sample0_mac_muladkbM_U48", "Parent" : "125"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.sample0_fadd_32nscud_U148", "Parent" : "100"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.sample0_fcmp_32nslbW_U149", "Parent" : "100"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_910.sample0_mul_64s_6bkb_U150", "Parent" : "100"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933", "Parent" : "0", "Child" : ["136", "160", "167", "168", "169"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_fu_219"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_240"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "160", "SubInstance" : "grp_k2c_affine_matmul_fu_240", "Port" : "C"},
					{"ID" : "136", "SubInstance" : "grp_k2c_dot_fu_219", "Port" : "C_array"}]},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "160", "SubInstance" : "grp_k2c_affine_matmul_fu_240", "Port" : "A"},
					{"ID" : "136", "SubInstance" : "grp_k2c_dot_fu_219", "Port" : "A_array"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "136", "SubInstance" : "grp_k2c_dot_fu_219", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "160", "SubInstance" : "grp_k2c_affine_matmul_fu_240", "Port" : "B"},
					{"ID" : "136", "SubInstance" : "grp_k2c_dot_fu_219", "Port" : "B_array"}]},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "136", "SubInstance" : "grp_k2c_dot_fu_219", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "160", "SubInstance" : "grp_k2c_affine_matmul_fu_240", "Port" : "d"}]},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "136", "SubInstance" : "grp_k2c_dot_fu_219", "Port" : "fwork"}]}]},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219", "Parent" : "135", "Child" : ["137", "138", "139", "140", "141", "142", "143", "144", "145", "152", "154", "155", "156", "157", "158", "159"],
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
			{"State" : "ap_ST_fsm_state238", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_fu_599"},
			{"State" : "ap_ST_fsm_state160", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_611"},
			{"State" : "ap_ST_fsm_state236", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_611"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "145", "SubInstance" : "grp_k2c_matmul_fu_599", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "145", "SubInstance" : "grp_k2c_matmul_fu_599", "Port" : "A"}]}]},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.permA_U", "Parent" : "136"},
	{"ID" : "138", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.permB_U", "Parent" : "136"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.freeA_U", "Parent" : "136"},
	{"ID" : "140", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.freeB_U", "Parent" : "136"},
	{"ID" : "141", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.newshpA_U", "Parent" : "136"},
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.newshpB_U", "Parent" : "136"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.Asub_U", "Parent" : "136"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.Bsub_U", "Parent" : "136"},
	{"ID" : "145", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599", "Parent" : "136", "Child" : ["146", "147", "148", "149", "150", "151"],
		"CDFG" : "k2c_matmul",
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "146", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599.sample0_fadd_32nscud_U6", "Parent" : "145"},
	{"ID" : "147", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599.sample0_fmul_32nsdEe_U7", "Parent" : "145"},
	{"ID" : "148", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599.sample0_mul_64s_6bkb_U8", "Parent" : "145"},
	{"ID" : "149", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599.sample0_mul_mul_1eOg_U9", "Parent" : "145"},
	{"ID" : "150", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599.sample0_mul_mul_1fYi_U10", "Parent" : "145"},
	{"ID" : "151", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_matmul_fu_599.sample0_mac_muladg8j_U11", "Parent" : "145"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_sub2idx_fu_611", "Parent" : "136", "Child" : ["153"],
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
	{"ID" : "153", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.grp_k2c_sub2idx_fu_611.sample0_mul_64s_6bkb_U1", "Parent" : "152"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.sample0_udiv_64nshbi_U23", "Parent" : "136"},
	{"ID" : "155", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.sample0_udiv_15nsibs_U24", "Parent" : "136"},
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.sample0_urem_64nsjbC_U25", "Parent" : "136"},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.sample0_udiv_64nshbi_U26", "Parent" : "136"},
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.sample0_urem_64nsjbC_U27", "Parent" : "136"},
	{"ID" : "159", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_dot_fu_219.sample0_udiv_64nshbi_U28", "Parent" : "136"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240", "Parent" : "135", "Child" : ["161", "162", "163", "164", "165", "166"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "161", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240.sample0_fadd_32nscud_U43", "Parent" : "160"},
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240.sample0_fmul_32nsdEe_U44", "Parent" : "160"},
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240.sample0_mul_64s_6bkb_U45", "Parent" : "160"},
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240.sample0_mul_mul_1eOg_U46", "Parent" : "160"},
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240.sample0_mul_mul_1eOg_U47", "Parent" : "160"},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.grp_k2c_affine_matmul_fu_240.sample0_mac_muladkbM_U48", "Parent" : "160"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.sample0_fadd_32nscud_U57", "Parent" : "135"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.sample0_fcmp_32nslbW_U58", "Parent" : "135"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_3_fu_933.sample0_mul_64s_6bkb_U59", "Parent" : "135"}]}


set ArgLastReadFirstWriteLatency {
	sample0 {
		dense_13_input_input_array {Type I LastRead 79 FirstWrite -1}
		dense_13_input_input_ndim {Type I LastRead 28 FirstWrite -1}
		dense_13_input_input_numel {Type I LastRead 28 FirstWrite -1}
		dense_13_input_input_shape {Type I LastRead 78 FirstWrite -1}
		dense_16_output_array {Type IO LastRead 19 FirstWrite 6}
		dense_16_output_ndim {Type I LastRead -1 FirstWrite -1}
		dense_16_output_numel {Type I LastRead 34 FirstWrite -1}
		dense_16_output_shape {Type X LastRead -1 FirstWrite -1}
		dense_13_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_13_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_13_kernel_arra_4 {Type IO LastRead -1 FirstWrite -1}
		dense_13_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_13_bias_array_5 {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_14_kernel_arra_2 {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_14_bias_array_3 {Type IO LastRead -1 FirstWrite -1}
		dense_14_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_15_kernel_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_array1 {Type I LastRead -1 FirstWrite -1}
		dense_15_bias_array {Type IO LastRead -1 FirstWrite -1}
		dense_15_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_16_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_16_kernel_arra_0 {Type IO LastRead -1 FirstWrite -1}
		dense_16_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_16_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_16_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_13_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_13_output_shap {Type IO LastRead -1 FirstWrite -1}
		dense_14_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_14_output_shap {Type IO LastRead -1 FirstWrite -1}
		dense_15_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_15_output_shap {Type IO LastRead -1 FirstWrite -1}
		dense_16_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_16_bias_array {Type IO LastRead -1 FirstWrite -1}}
	k2c_dense {
		output_array {Type IO LastRead 19 FirstWrite 6}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 79 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 78 FirstWrite -1}
		kernel_array {Type I LastRead 80 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 79 FirstWrite -1}
		bias_array {Type I LastRead 11 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_dot_3 {
		C_array {Type IO LastRead 19 FirstWrite 6}
		A_array {Type I LastRead 79 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 78 FirstWrite -1}
		B_array {Type I LastRead 80 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 79 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_matmul_3 {
		C {Type IO LastRead 19 FirstWrite 6}
		B {Type I LastRead 15 FirstWrite -1}
		B_offset {Type I LastRead 5 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 4 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type IO LastRead 19 FirstWrite 6}
		A {Type I LastRead 14 FirstWrite -1}
		B {Type I LastRead 14 FirstWrite -1}
		d {Type I LastRead 11 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_dense_2 {
		output_array {Type IO LastRead 19 FirstWrite 6}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 79 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 78 FirstWrite -1}
		kernel_array {Type I LastRead 80 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 79 FirstWrite -1}
		bias_array {Type I LastRead 11 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_dot_1 {
		C_array {Type IO LastRead 19 FirstWrite 6}
		A_array {Type I LastRead 79 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 78 FirstWrite -1}
		B_array {Type I LastRead 80 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 79 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_matmul_1 {
		C {Type IO LastRead 19 FirstWrite 6}
		B {Type I LastRead 15 FirstWrite -1}
		B_offset {Type I LastRead 5 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 4 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type IO LastRead 19 FirstWrite 6}
		A {Type I LastRead 14 FirstWrite -1}
		B {Type I LastRead 14 FirstWrite -1}
		d {Type I LastRead 11 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_dense_1 {
		output_array {Type IO LastRead 19 FirstWrite 6}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 79 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 78 FirstWrite -1}
		kernel_array {Type I LastRead 80 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 79 FirstWrite -1}
		bias_array {Type I LastRead 11 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_dot_2 {
		C_array {Type IO LastRead 19 FirstWrite 6}
		A_array {Type I LastRead 79 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 78 FirstWrite -1}
		B_array {Type I LastRead 80 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 79 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_matmul_2 {
		C {Type IO LastRead 19 FirstWrite 6}
		B {Type I LastRead 15 FirstWrite -1}
		B_offset {Type I LastRead 5 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 4 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type IO LastRead 19 FirstWrite 6}
		A {Type I LastRead 14 FirstWrite -1}
		B {Type I LastRead 14 FirstWrite -1}
		d {Type I LastRead 11 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_dense_3 {
		output_array {Type IO LastRead 19 FirstWrite 6}
		input_array {Type I LastRead 79 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 78 FirstWrite -1}
		kernel_array {Type I LastRead 80 FirstWrite -1}
		kernel_shape {Type I LastRead 79 FirstWrite -1}
		bias_array {Type I LastRead 11 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_dot {
		C_array {Type IO LastRead 19 FirstWrite 6}
		A_array {Type I LastRead 79 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 78 FirstWrite -1}
		B_array {Type I LastRead 80 FirstWrite -1}
		B_shape {Type I LastRead 79 FirstWrite -1}
		axesA_0_read {Type I LastRead 0 FirstWrite -1}
		fwork {Type IO LastRead 15 FirstWrite -1}}
	k2c_matmul {
		C {Type IO LastRead 19 FirstWrite 6}
		A {Type I LastRead 15 FirstWrite -1}
		B_offset {Type I LastRead 5 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 4 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type IO LastRead 19 FirstWrite 6}
		A {Type I LastRead 14 FirstWrite -1}
		B {Type I LastRead 14 FirstWrite -1}
		d {Type I LastRead 11 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 5 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	dense_13_input_input_array { ap_memory {  { dense_13_input_input_array_address0 mem_address 1 14 }  { dense_13_input_input_array_ce0 mem_ce 1 1 }  { dense_13_input_input_array_q0 mem_dout 0 32 } } }
	dense_13_input_input_ndim { ap_none {  { dense_13_input_input_ndim in_data 0 64 } } }
	dense_13_input_input_numel { ap_none {  { dense_13_input_input_numel in_data 0 64 } } }
	dense_13_input_input_shape { ap_memory {  { dense_13_input_input_shape_address0 mem_address 1 3 }  { dense_13_input_input_shape_ce0 mem_ce 1 1 }  { dense_13_input_input_shape_q0 mem_dout 0 64 } } }
	dense_16_output_array { ap_memory {  { dense_16_output_array_address0 mem_address 1 14 }  { dense_16_output_array_ce0 mem_ce 1 1 }  { dense_16_output_array_we0 mem_we 1 1 }  { dense_16_output_array_d0 mem_din 1 32 }  { dense_16_output_array_q0 mem_dout 0 32 }  { dense_16_output_array_address1 mem_address 1 14 }  { dense_16_output_array_ce1 mem_ce 1 1 }  { dense_16_output_array_we1 mem_we 1 1 }  { dense_16_output_array_d1 mem_din 1 32 }  { dense_16_output_array_q1 mem_dout 0 32 } } }
	dense_16_output_ndim { ap_none {  { dense_16_output_ndim in_data 0 64 } } }
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
