set moduleName k2c_dot_3
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
set C_modelName {k2c_dot.3}
set C_modelType { void 0 }
set C_modelArgList {
	{ C_array float 32 regular {array 1 { 2 3 } 1 1 }  }
	{ A_array float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_dim int 64 regular  }
	{ A_numel_read int 64 regular  }
	{ B_dim int 64 regular  }
	{ B_numel_read int 64 regular  }
	{ p_read2 int 64 regular  }
	{ fwork float 32 regular {array 32 { 2 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "fwork", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 27
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C_array_address0 sc_out sc_lv 1 signal 0 } 
	{ C_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ C_array_we0 sc_out sc_logic 1 signal 0 } 
	{ C_array_d0 sc_out sc_lv 32 signal 0 } 
	{ C_array_q0 sc_in sc_lv 32 signal 0 } 
	{ A_array_address0 sc_out sc_lv 4 signal 1 } 
	{ A_array_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_array_q0 sc_in sc_lv 32 signal 1 } 
	{ A_dim sc_in sc_lv 64 signal 2 } 
	{ A_numel_read sc_in sc_lv 64 signal 3 } 
	{ B_dim sc_in sc_lv 64 signal 4 } 
	{ B_numel_read sc_in sc_lv 64 signal 5 } 
	{ p_read2 sc_in sc_lv 64 signal 6 } 
	{ fwork_address0 sc_out sc_lv 5 signal 7 } 
	{ fwork_ce0 sc_out sc_logic 1 signal 7 } 
	{ fwork_we0 sc_out sc_logic 1 signal 7 } 
	{ fwork_d0 sc_out sc_lv 32 signal 7 } 
	{ fwork_q0 sc_in sc_lv 32 signal 7 } 
	{ fwork_address1 sc_out sc_lv 5 signal 7 } 
	{ fwork_ce1 sc_out sc_logic 1 signal 7 } 
	{ fwork_q1 sc_in sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "address0" }} , 
 	{ "name": "C_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "ce0" }} , 
 	{ "name": "C_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "we0" }} , 
 	{ "name": "C_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array", "role": "d0" }} , 
 	{ "name": "C_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array", "role": "q0" }} , 
 	{ "name": "A_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array", "role": "address0" }} , 
 	{ "name": "A_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array", "role": "ce0" }} , 
 	{ "name": "A_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array", "role": "q0" }} , 
 	{ "name": "A_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_dim", "role": "default" }} , 
 	{ "name": "A_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_numel_read", "role": "default" }} , 
 	{ "name": "B_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_dim", "role": "default" }} , 
 	{ "name": "B_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_numel_read", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }} , 
 	{ "name": "fwork_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "fwork", "role": "address0" }} , 
 	{ "name": "fwork_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fwork", "role": "ce0" }} , 
 	{ "name": "fwork_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fwork", "role": "we0" }} , 
 	{ "name": "fwork_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fwork", "role": "d0" }} , 
 	{ "name": "fwork_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fwork", "role": "q0" }} , 
 	{ "name": "fwork_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "fwork", "role": "address1" }} , 
 	{ "name": "fwork_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fwork", "role": "ce1" }} , 
 	{ "name": "fwork_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fwork", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "17", "20", "21", "22", "23"],
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
					{"ID" : "12", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_16_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "12", "SubInstance" : "grp_k2c_idx2sub_fu_824", "Port" : "shape"}]},
			{"Name" : "dense_16_kernel_arra", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_output_shap_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_kernel_shap_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_16_kernel_arra_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permA_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permB_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeA_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeB_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpA_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpB_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Asub_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bsub_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_824", "Parent" : "0", "Child" : ["13", "14", "15", "16"],
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
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U1", "Parent" : "12"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U2", "Parent" : "12"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_824.sample_urem_64ns_bkb_U3", "Parent" : "12"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_824.sample_udiv_64ns_cud_U4", "Parent" : "12"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_836", "Parent" : "0", "Child" : ["18", "19"],
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
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U11", "Parent" : "17"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_836.sample_mul_64s_64dEe_U12", "Parent" : "17"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_hbi_U142", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_ibs_U143", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_udiv_64ns_Ngs_U144", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_60ns_6kbM_U145", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		ndim {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	C_array { ap_memory {  { C_array_address0 mem_address 1 1 }  { C_array_ce0 mem_ce 1 1 }  { C_array_we0 mem_we 1 1 }  { C_array_d0 mem_din 1 32 }  { C_array_q0 mem_dout 0 32 } } }
	A_array { ap_memory {  { A_array_address0 mem_address 1 4 }  { A_array_ce0 mem_ce 1 1 }  { A_array_q0 mem_dout 0 32 } } }
	A_dim { ap_none {  { A_dim in_data 0 64 } } }
	A_numel_read { ap_none {  { A_numel_read in_data 0 64 } } }
	B_dim { ap_none {  { B_dim in_data 0 64 } } }
	B_numel_read { ap_none {  { B_numel_read in_data 0 64 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 64 } } }
	fwork { ap_memory {  { fwork_address0 mem_address 1 5 }  { fwork_ce0 mem_ce 1 1 }  { fwork_we0 mem_we 1 1 }  { fwork_d0 mem_din 1 32 }  { fwork_q0 mem_dout 0 32 }  { fwork_address1 mem_address 1 5 }  { fwork_ce1 mem_ce 1 1 }  { fwork_q1 mem_dout 0 32 } } }
}
