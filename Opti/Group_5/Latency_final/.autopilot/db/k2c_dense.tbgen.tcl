set moduleName k2c_dense
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
set C_modelName {k2c_dense}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_array float 32 regular {array 1 { 2 3 } 1 1 }  }
	{ output_numel_read int 64 regular  }
	{ input_array_0 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_1 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_2 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_3 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_4 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_5 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_6 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_array_7 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ input_dim int 64 regular  }
	{ input_numel_read int 64 regular  }
	{ kernel_dim int 64 regular  }
	{ fwork float 32 regular {array 32 { 2 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "output_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "fwork", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 47
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_array_address0 sc_out sc_lv 1 signal 0 } 
	{ output_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_array_we0 sc_out sc_logic 1 signal 0 } 
	{ output_array_d0 sc_out sc_lv 32 signal 0 } 
	{ output_array_q0 sc_in sc_lv 32 signal 0 } 
	{ output_numel_read sc_in sc_lv 64 signal 1 } 
	{ input_array_0_address0 sc_out sc_lv 1 signal 2 } 
	{ input_array_0_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_array_0_q0 sc_in sc_lv 32 signal 2 } 
	{ input_array_1_address0 sc_out sc_lv 1 signal 3 } 
	{ input_array_1_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_array_1_q0 sc_in sc_lv 32 signal 3 } 
	{ input_array_2_address0 sc_out sc_lv 1 signal 4 } 
	{ input_array_2_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_array_2_q0 sc_in sc_lv 32 signal 4 } 
	{ input_array_3_address0 sc_out sc_lv 1 signal 5 } 
	{ input_array_3_ce0 sc_out sc_logic 1 signal 5 } 
	{ input_array_3_q0 sc_in sc_lv 32 signal 5 } 
	{ input_array_4_address0 sc_out sc_lv 1 signal 6 } 
	{ input_array_4_ce0 sc_out sc_logic 1 signal 6 } 
	{ input_array_4_q0 sc_in sc_lv 32 signal 6 } 
	{ input_array_5_address0 sc_out sc_lv 1 signal 7 } 
	{ input_array_5_ce0 sc_out sc_logic 1 signal 7 } 
	{ input_array_5_q0 sc_in sc_lv 32 signal 7 } 
	{ input_array_6_address0 sc_out sc_lv 1 signal 8 } 
	{ input_array_6_ce0 sc_out sc_logic 1 signal 8 } 
	{ input_array_6_q0 sc_in sc_lv 32 signal 8 } 
	{ input_array_7_address0 sc_out sc_lv 1 signal 9 } 
	{ input_array_7_ce0 sc_out sc_logic 1 signal 9 } 
	{ input_array_7_q0 sc_in sc_lv 32 signal 9 } 
	{ input_dim sc_in sc_lv 64 signal 10 } 
	{ input_numel_read sc_in sc_lv 64 signal 11 } 
	{ kernel_dim sc_in sc_lv 64 signal 12 } 
	{ fwork_address0 sc_out sc_lv 5 signal 13 } 
	{ fwork_ce0 sc_out sc_logic 1 signal 13 } 
	{ fwork_we0 sc_out sc_logic 1 signal 13 } 
	{ fwork_d0 sc_out sc_lv 32 signal 13 } 
	{ fwork_q0 sc_in sc_lv 32 signal 13 } 
	{ fwork_address1 sc_out sc_lv 5 signal 13 } 
	{ fwork_ce1 sc_out sc_logic 1 signal 13 } 
	{ fwork_q1 sc_in sc_lv 32 signal 13 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "address0" }} , 
 	{ "name": "output_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "ce0" }} , 
 	{ "name": "output_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "we0" }} , 
 	{ "name": "output_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_array", "role": "d0" }} , 
 	{ "name": "output_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_array", "role": "q0" }} , 
 	{ "name": "output_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "output_numel_read", "role": "default" }} , 
 	{ "name": "input_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_0", "role": "address0" }} , 
 	{ "name": "input_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_0", "role": "ce0" }} , 
 	{ "name": "input_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_0", "role": "q0" }} , 
 	{ "name": "input_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_1", "role": "address0" }} , 
 	{ "name": "input_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_1", "role": "ce0" }} , 
 	{ "name": "input_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_1", "role": "q0" }} , 
 	{ "name": "input_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_2", "role": "address0" }} , 
 	{ "name": "input_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_2", "role": "ce0" }} , 
 	{ "name": "input_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_2", "role": "q0" }} , 
 	{ "name": "input_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_3", "role": "address0" }} , 
 	{ "name": "input_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_3", "role": "ce0" }} , 
 	{ "name": "input_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_3", "role": "q0" }} , 
 	{ "name": "input_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_4", "role": "address0" }} , 
 	{ "name": "input_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_4", "role": "ce0" }} , 
 	{ "name": "input_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_4", "role": "q0" }} , 
 	{ "name": "input_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_5", "role": "address0" }} , 
 	{ "name": "input_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_5", "role": "ce0" }} , 
 	{ "name": "input_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_5", "role": "q0" }} , 
 	{ "name": "input_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_6", "role": "address0" }} , 
 	{ "name": "input_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_6", "role": "ce0" }} , 
 	{ "name": "input_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_6", "role": "q0" }} , 
 	{ "name": "input_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_7", "role": "address0" }} , 
 	{ "name": "input_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array_7", "role": "ce0" }} , 
 	{ "name": "input_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array_7", "role": "q0" }} , 
 	{ "name": "input_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_dim", "role": "default" }} , 
 	{ "name": "input_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_numel_read", "role": "default" }} , 
 	{ "name": "kernel_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "kernel_dim", "role": "default" }} , 
 	{ "name": "fwork_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "fwork", "role": "address0" }} , 
 	{ "name": "fwork_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fwork", "role": "ce0" }} , 
 	{ "name": "fwork_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fwork", "role": "we0" }} , 
 	{ "name": "fwork_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fwork", "role": "d0" }} , 
 	{ "name": "fwork_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fwork", "role": "q0" }} , 
 	{ "name": "fwork_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "fwork", "role": "address1" }} , 
 	{ "name": "fwork_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fwork", "role": "ce1" }} , 
 	{ "name": "fwork_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fwork", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "25", "26", "27"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_3_fu_178"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "C_array"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array"}]},
			{"Name" : "input_array_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array1"}]},
			{"Name" : "input_array_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array2"}]},
			{"Name" : "input_array_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array3"}]},
			{"Name" : "input_array_4", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array4"}]},
			{"Name" : "input_array_5", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array5"}]},
			{"Name" : "input_array_6", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array6"}]},
			{"Name" : "input_array_7", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "A_array7"}]},
			{"Name" : "input_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "fwork"}]},
			{"Name" : "dense_16_kernel_nume", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_15_output_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "dense_15_output_shap"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_3_fu_178", "Port" : "dense_16_kernel_shap"}]},
			{"Name" : "dense_16_bias_numel", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "17", "20", "21", "22", "23", "24"],
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
					{"ID" : "12", "SubInstance" : "grp_k2c_idx2sub_fu_977", "Port" : "shape"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "grp_k2c_idx2sub_fu_977", "Port" : "shape"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.dense_15_output_shap_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.dense_16_kernel_shap_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.permA_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.permB_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.freeA_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.freeB_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.newshpA_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.newshpB_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.Asub_U", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.Bsub_U", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977", "Parent" : "1", "Child" : ["13", "14", "15", "16"],
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
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_urem_64ns_bkb_U1", "Parent" : "12"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_udiv_64ns_cud_U2", "Parent" : "12"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_urem_64ns_bkb_U3", "Parent" : "12"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_idx2sub_fu_977.sample_udiv_64ns_cud_U4", "Parent" : "12"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_sub2idx_fu_989", "Parent" : "1", "Child" : ["18", "19"],
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
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_sub2idx_fu_989.sample_mul_64s_64dEe_U11", "Parent" : "17"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.grp_k2c_sub2idx_fu_989.sample_mul_64s_64dEe_U12", "Parent" : "17"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.sample_fadd_32ns_ocq_U316", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.sample_fmul_32ns_pcA_U317", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.sample_udiv_64ns_bbk_U318", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.sample_mux_864_32rcU_U319", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_3_fu_178.sample_mul_60ns_6sc4_U320", "Parent" : "1"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U338", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fdiv_32ns_bck_U339", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fexp_32ns_bdk_U340", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	k2c_dense {
		output_array {Type IO LastRead 103 FirstWrite 14}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array_0 {Type I LastRead 91 FirstWrite -1}
		input_array_1 {Type I LastRead 91 FirstWrite -1}
		input_array_2 {Type I LastRead 91 FirstWrite -1}
		input_array_3 {Type I LastRead 91 FirstWrite -1}
		input_array_4 {Type I LastRead 91 FirstWrite -1}
		input_array_5 {Type I LastRead 91 FirstWrite -1}
		input_array_6 {Type I LastRead 91 FirstWrite -1}
		input_array_7 {Type I LastRead 91 FirstWrite -1}
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
		ndim {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	output_array { ap_memory {  { output_array_address0 mem_address 1 1 }  { output_array_ce0 mem_ce 1 1 }  { output_array_we0 mem_we 1 1 }  { output_array_d0 mem_din 1 32 }  { output_array_q0 mem_dout 0 32 } } }
	output_numel_read { ap_none {  { output_numel_read in_data 0 64 } } }
	input_array_0 { ap_memory {  { input_array_0_address0 mem_address 1 1 }  { input_array_0_ce0 mem_ce 1 1 }  { input_array_0_q0 mem_dout 0 32 } } }
	input_array_1 { ap_memory {  { input_array_1_address0 mem_address 1 1 }  { input_array_1_ce0 mem_ce 1 1 }  { input_array_1_q0 mem_dout 0 32 } } }
	input_array_2 { ap_memory {  { input_array_2_address0 mem_address 1 1 }  { input_array_2_ce0 mem_ce 1 1 }  { input_array_2_q0 mem_dout 0 32 } } }
	input_array_3 { ap_memory {  { input_array_3_address0 mem_address 1 1 }  { input_array_3_ce0 mem_ce 1 1 }  { input_array_3_q0 mem_dout 0 32 } } }
	input_array_4 { ap_memory {  { input_array_4_address0 mem_address 1 1 }  { input_array_4_ce0 mem_ce 1 1 }  { input_array_4_q0 mem_dout 0 32 } } }
	input_array_5 { ap_memory {  { input_array_5_address0 mem_address 1 1 }  { input_array_5_ce0 mem_ce 1 1 }  { input_array_5_q0 mem_dout 0 32 } } }
	input_array_6 { ap_memory {  { input_array_6_address0 mem_address 1 1 }  { input_array_6_ce0 mem_ce 1 1 }  { input_array_6_q0 mem_dout 0 32 } } }
	input_array_7 { ap_memory {  { input_array_7_address0 mem_address 1 1 }  { input_array_7_ce0 mem_ce 1 1 }  { input_array_7_q0 mem_dout 0 32 } } }
	input_dim { ap_none {  { input_dim in_data 0 64 } } }
	input_numel_read { ap_none {  { input_numel_read in_data 0 64 } } }
	kernel_dim { ap_none {  { kernel_dim in_data 0 64 } } }
	fwork { ap_memory {  { fwork_address0 mem_address 1 5 }  { fwork_ce0 mem_ce 1 1 }  { fwork_we0 mem_we 1 1 }  { fwork_d0 mem_din 1 32 }  { fwork_q0 mem_dout 0 32 }  { fwork_address1 mem_address 1 5 }  { fwork_ce1 mem_ce 1 1 }  { fwork_q1 mem_dout 0 32 } } }
}
