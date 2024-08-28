set moduleName k2c_bias_add
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
set C_modelName {k2c_bias_add}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_array_0 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_1 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_2 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_3 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_4 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_5 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_6 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_7 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_numel_read int 64 regular  }
	{ b_numel_read int 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "b_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 48
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_array_0_address0 sc_out sc_lv 4 signal 0 } 
	{ A_array_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_array_0_we0 sc_out sc_logic 1 signal 0 } 
	{ A_array_0_d0 sc_out sc_lv 32 signal 0 } 
	{ A_array_0_q0 sc_in sc_lv 32 signal 0 } 
	{ A_array_1_address0 sc_out sc_lv 4 signal 1 } 
	{ A_array_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_array_1_we0 sc_out sc_logic 1 signal 1 } 
	{ A_array_1_d0 sc_out sc_lv 32 signal 1 } 
	{ A_array_1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_array_2_address0 sc_out sc_lv 4 signal 2 } 
	{ A_array_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_array_2_we0 sc_out sc_logic 1 signal 2 } 
	{ A_array_2_d0 sc_out sc_lv 32 signal 2 } 
	{ A_array_2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_array_3_address0 sc_out sc_lv 4 signal 3 } 
	{ A_array_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_array_3_we0 sc_out sc_logic 1 signal 3 } 
	{ A_array_3_d0 sc_out sc_lv 32 signal 3 } 
	{ A_array_3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_array_4_address0 sc_out sc_lv 4 signal 4 } 
	{ A_array_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_array_4_we0 sc_out sc_logic 1 signal 4 } 
	{ A_array_4_d0 sc_out sc_lv 32 signal 4 } 
	{ A_array_4_q0 sc_in sc_lv 32 signal 4 } 
	{ A_array_5_address0 sc_out sc_lv 4 signal 5 } 
	{ A_array_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_array_5_we0 sc_out sc_logic 1 signal 5 } 
	{ A_array_5_d0 sc_out sc_lv 32 signal 5 } 
	{ A_array_5_q0 sc_in sc_lv 32 signal 5 } 
	{ A_array_6_address0 sc_out sc_lv 4 signal 6 } 
	{ A_array_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_array_6_we0 sc_out sc_logic 1 signal 6 } 
	{ A_array_6_d0 sc_out sc_lv 32 signal 6 } 
	{ A_array_6_q0 sc_in sc_lv 32 signal 6 } 
	{ A_array_7_address0 sc_out sc_lv 4 signal 7 } 
	{ A_array_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_array_7_we0 sc_out sc_logic 1 signal 7 } 
	{ A_array_7_d0 sc_out sc_lv 32 signal 7 } 
	{ A_array_7_q0 sc_in sc_lv 32 signal 7 } 
	{ A_numel_read sc_in sc_lv 64 signal 8 } 
	{ b_numel_read sc_in sc_lv 64 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_0", "role": "address0" }} , 
 	{ "name": "A_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_0", "role": "ce0" }} , 
 	{ "name": "A_array_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_0", "role": "we0" }} , 
 	{ "name": "A_array_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_0", "role": "d0" }} , 
 	{ "name": "A_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_0", "role": "q0" }} , 
 	{ "name": "A_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_1", "role": "address0" }} , 
 	{ "name": "A_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_1", "role": "ce0" }} , 
 	{ "name": "A_array_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_1", "role": "we0" }} , 
 	{ "name": "A_array_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_1", "role": "d0" }} , 
 	{ "name": "A_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_1", "role": "q0" }} , 
 	{ "name": "A_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_2", "role": "address0" }} , 
 	{ "name": "A_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_2", "role": "ce0" }} , 
 	{ "name": "A_array_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_2", "role": "we0" }} , 
 	{ "name": "A_array_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_2", "role": "d0" }} , 
 	{ "name": "A_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_2", "role": "q0" }} , 
 	{ "name": "A_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_3", "role": "address0" }} , 
 	{ "name": "A_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_3", "role": "ce0" }} , 
 	{ "name": "A_array_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_3", "role": "we0" }} , 
 	{ "name": "A_array_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_3", "role": "d0" }} , 
 	{ "name": "A_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_3", "role": "q0" }} , 
 	{ "name": "A_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_4", "role": "address0" }} , 
 	{ "name": "A_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_4", "role": "ce0" }} , 
 	{ "name": "A_array_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_4", "role": "we0" }} , 
 	{ "name": "A_array_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_4", "role": "d0" }} , 
 	{ "name": "A_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_4", "role": "q0" }} , 
 	{ "name": "A_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_5", "role": "address0" }} , 
 	{ "name": "A_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_5", "role": "ce0" }} , 
 	{ "name": "A_array_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_5", "role": "we0" }} , 
 	{ "name": "A_array_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_5", "role": "d0" }} , 
 	{ "name": "A_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_5", "role": "q0" }} , 
 	{ "name": "A_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_6", "role": "address0" }} , 
 	{ "name": "A_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_6", "role": "ce0" }} , 
 	{ "name": "A_array_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_6", "role": "we0" }} , 
 	{ "name": "A_array_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_6", "role": "d0" }} , 
 	{ "name": "A_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_6", "role": "q0" }} , 
 	{ "name": "A_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_7", "role": "address0" }} , 
 	{ "name": "A_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_7", "role": "ce0" }} , 
 	{ "name": "A_array_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_7", "role": "we0" }} , 
 	{ "name": "A_array_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_7", "role": "d0" }} , 
 	{ "name": "A_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_7", "role": "q0" }} , 
 	{ "name": "A_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_numel_read", "role": "default" }} , 
 	{ "name": "b_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "b_numel_read", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_bias_array_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U68", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U69", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
	A_array_0 { ap_memory {  { A_array_0_address0 mem_address 1 4 }  { A_array_0_ce0 mem_ce 1 1 }  { A_array_0_we0 mem_we 1 1 }  { A_array_0_d0 mem_din 1 32 }  { A_array_0_q0 mem_dout 0 32 } } }
	A_array_1 { ap_memory {  { A_array_1_address0 mem_address 1 4 }  { A_array_1_ce0 mem_ce 1 1 }  { A_array_1_we0 mem_we 1 1 }  { A_array_1_d0 mem_din 1 32 }  { A_array_1_q0 mem_dout 0 32 } } }
	A_array_2 { ap_memory {  { A_array_2_address0 mem_address 1 4 }  { A_array_2_ce0 mem_ce 1 1 }  { A_array_2_we0 mem_we 1 1 }  { A_array_2_d0 mem_din 1 32 }  { A_array_2_q0 mem_dout 0 32 } } }
	A_array_3 { ap_memory {  { A_array_3_address0 mem_address 1 4 }  { A_array_3_ce0 mem_ce 1 1 }  { A_array_3_we0 mem_we 1 1 }  { A_array_3_d0 mem_din 1 32 }  { A_array_3_q0 mem_dout 0 32 } } }
	A_array_4 { ap_memory {  { A_array_4_address0 mem_address 1 4 }  { A_array_4_ce0 mem_ce 1 1 }  { A_array_4_we0 mem_we 1 1 }  { A_array_4_d0 mem_din 1 32 }  { A_array_4_q0 mem_dout 0 32 } } }
	A_array_5 { ap_memory {  { A_array_5_address0 mem_address 1 4 }  { A_array_5_ce0 mem_ce 1 1 }  { A_array_5_we0 mem_we 1 1 }  { A_array_5_d0 mem_din 1 32 }  { A_array_5_q0 mem_dout 0 32 } } }
	A_array_6 { ap_memory {  { A_array_6_address0 mem_address 1 4 }  { A_array_6_ce0 mem_ce 1 1 }  { A_array_6_we0 mem_we 1 1 }  { A_array_6_d0 mem_din 1 32 }  { A_array_6_q0 mem_dout 0 32 } } }
	A_array_7 { ap_memory {  { A_array_7_address0 mem_address 1 4 }  { A_array_7_ce0 mem_ce 1 1 }  { A_array_7_we0 mem_we 1 1 }  { A_array_7_d0 mem_din 1 32 }  { A_array_7_q0 mem_dout 0 32 } } }
	A_numel_read { ap_none {  { A_numel_read in_data 0 64 } } }
	b_numel_read { ap_none {  { b_numel_read in_data 0 64 } } }
}
