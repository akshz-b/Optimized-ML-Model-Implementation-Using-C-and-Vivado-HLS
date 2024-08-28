set moduleName k2c_bias_add_1
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
set C_modelName {k2c_bias_add.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_array float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array1 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array2 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array3 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array4 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array5 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array6 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array7 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_numel_read int 64 regular  }
	{ b_numel_read int 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
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
	{ A_array_address0 sc_out sc_lv 2 signal 0 } 
	{ A_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ A_array_we0 sc_out sc_logic 1 signal 0 } 
	{ A_array_d0 sc_out sc_lv 32 signal 0 } 
	{ A_array_q0 sc_in sc_lv 32 signal 0 } 
	{ A_array1_address0 sc_out sc_lv 2 signal 1 } 
	{ A_array1_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_array1_we0 sc_out sc_logic 1 signal 1 } 
	{ A_array1_d0 sc_out sc_lv 32 signal 1 } 
	{ A_array1_q0 sc_in sc_lv 32 signal 1 } 
	{ A_array2_address0 sc_out sc_lv 2 signal 2 } 
	{ A_array2_ce0 sc_out sc_logic 1 signal 2 } 
	{ A_array2_we0 sc_out sc_logic 1 signal 2 } 
	{ A_array2_d0 sc_out sc_lv 32 signal 2 } 
	{ A_array2_q0 sc_in sc_lv 32 signal 2 } 
	{ A_array3_address0 sc_out sc_lv 2 signal 3 } 
	{ A_array3_ce0 sc_out sc_logic 1 signal 3 } 
	{ A_array3_we0 sc_out sc_logic 1 signal 3 } 
	{ A_array3_d0 sc_out sc_lv 32 signal 3 } 
	{ A_array3_q0 sc_in sc_lv 32 signal 3 } 
	{ A_array4_address0 sc_out sc_lv 2 signal 4 } 
	{ A_array4_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_array4_we0 sc_out sc_logic 1 signal 4 } 
	{ A_array4_d0 sc_out sc_lv 32 signal 4 } 
	{ A_array4_q0 sc_in sc_lv 32 signal 4 } 
	{ A_array5_address0 sc_out sc_lv 2 signal 5 } 
	{ A_array5_ce0 sc_out sc_logic 1 signal 5 } 
	{ A_array5_we0 sc_out sc_logic 1 signal 5 } 
	{ A_array5_d0 sc_out sc_lv 32 signal 5 } 
	{ A_array5_q0 sc_in sc_lv 32 signal 5 } 
	{ A_array6_address0 sc_out sc_lv 2 signal 6 } 
	{ A_array6_ce0 sc_out sc_logic 1 signal 6 } 
	{ A_array6_we0 sc_out sc_logic 1 signal 6 } 
	{ A_array6_d0 sc_out sc_lv 32 signal 6 } 
	{ A_array6_q0 sc_in sc_lv 32 signal 6 } 
	{ A_array7_address0 sc_out sc_lv 2 signal 7 } 
	{ A_array7_ce0 sc_out sc_logic 1 signal 7 } 
	{ A_array7_we0 sc_out sc_logic 1 signal 7 } 
	{ A_array7_d0 sc_out sc_lv 32 signal 7 } 
	{ A_array7_q0 sc_in sc_lv 32 signal 7 } 
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
 	{ "name": "A_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array", "role": "address0" }} , 
 	{ "name": "A_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array", "role": "ce0" }} , 
 	{ "name": "A_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array", "role": "we0" }} , 
 	{ "name": "A_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array", "role": "d0" }} , 
 	{ "name": "A_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array", "role": "q0" }} , 
 	{ "name": "A_array1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array1", "role": "address0" }} , 
 	{ "name": "A_array1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array1", "role": "ce0" }} , 
 	{ "name": "A_array1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array1", "role": "we0" }} , 
 	{ "name": "A_array1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array1", "role": "d0" }} , 
 	{ "name": "A_array1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array1", "role": "q0" }} , 
 	{ "name": "A_array2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array2", "role": "address0" }} , 
 	{ "name": "A_array2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array2", "role": "ce0" }} , 
 	{ "name": "A_array2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array2", "role": "we0" }} , 
 	{ "name": "A_array2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array2", "role": "d0" }} , 
 	{ "name": "A_array2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array2", "role": "q0" }} , 
 	{ "name": "A_array3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array3", "role": "address0" }} , 
 	{ "name": "A_array3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array3", "role": "ce0" }} , 
 	{ "name": "A_array3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array3", "role": "we0" }} , 
 	{ "name": "A_array3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array3", "role": "d0" }} , 
 	{ "name": "A_array3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array3", "role": "q0" }} , 
 	{ "name": "A_array4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array4", "role": "address0" }} , 
 	{ "name": "A_array4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array4", "role": "ce0" }} , 
 	{ "name": "A_array4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array4", "role": "we0" }} , 
 	{ "name": "A_array4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array4", "role": "d0" }} , 
 	{ "name": "A_array4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array4", "role": "q0" }} , 
 	{ "name": "A_array5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array5", "role": "address0" }} , 
 	{ "name": "A_array5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array5", "role": "ce0" }} , 
 	{ "name": "A_array5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array5", "role": "we0" }} , 
 	{ "name": "A_array5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array5", "role": "d0" }} , 
 	{ "name": "A_array5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array5", "role": "q0" }} , 
 	{ "name": "A_array6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array6", "role": "address0" }} , 
 	{ "name": "A_array6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array6", "role": "ce0" }} , 
 	{ "name": "A_array6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array6", "role": "we0" }} , 
 	{ "name": "A_array6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array6", "role": "d0" }} , 
 	{ "name": "A_array6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array6", "role": "q0" }} , 
 	{ "name": "A_array7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_array7", "role": "address0" }} , 
 	{ "name": "A_array7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array7", "role": "ce0" }} , 
 	{ "name": "A_array7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array7", "role": "we0" }} , 
 	{ "name": "A_array7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array7", "role": "d0" }} , 
 	{ "name": "A_array7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array7", "role": "q0" }} , 
 	{ "name": "A_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_numel_read", "role": "default" }} , 
 	{ "name": "b_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "b_numel_read", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_bias_array_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U174", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U175", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		dense_14_bias_array {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	A_array { ap_memory {  { A_array_address0 mem_address 1 2 }  { A_array_ce0 mem_ce 1 1 }  { A_array_we0 mem_we 1 1 }  { A_array_d0 mem_din 1 32 }  { A_array_q0 mem_dout 0 32 } } }
	A_array1 { ap_memory {  { A_array1_address0 mem_address 1 2 }  { A_array1_ce0 mem_ce 1 1 }  { A_array1_we0 mem_we 1 1 }  { A_array1_d0 mem_din 1 32 }  { A_array1_q0 mem_dout 0 32 } } }
	A_array2 { ap_memory {  { A_array2_address0 mem_address 1 2 }  { A_array2_ce0 mem_ce 1 1 }  { A_array2_we0 mem_we 1 1 }  { A_array2_d0 mem_din 1 32 }  { A_array2_q0 mem_dout 0 32 } } }
	A_array3 { ap_memory {  { A_array3_address0 mem_address 1 2 }  { A_array3_ce0 mem_ce 1 1 }  { A_array3_we0 mem_we 1 1 }  { A_array3_d0 mem_din 1 32 }  { A_array3_q0 mem_dout 0 32 } } }
	A_array4 { ap_memory {  { A_array4_address0 mem_address 1 2 }  { A_array4_ce0 mem_ce 1 1 }  { A_array4_we0 mem_we 1 1 }  { A_array4_d0 mem_din 1 32 }  { A_array4_q0 mem_dout 0 32 } } }
	A_array5 { ap_memory {  { A_array5_address0 mem_address 1 2 }  { A_array5_ce0 mem_ce 1 1 }  { A_array5_we0 mem_we 1 1 }  { A_array5_d0 mem_din 1 32 }  { A_array5_q0 mem_dout 0 32 } } }
	A_array6 { ap_memory {  { A_array6_address0 mem_address 1 2 }  { A_array6_ce0 mem_ce 1 1 }  { A_array6_we0 mem_we 1 1 }  { A_array6_d0 mem_din 1 32 }  { A_array6_q0 mem_dout 0 32 } } }
	A_array7 { ap_memory {  { A_array7_address0 mem_address 1 2 }  { A_array7_ce0 mem_ce 1 1 }  { A_array7_we0 mem_we 1 1 }  { A_array7_d0 mem_din 1 32 }  { A_array7_q0 mem_dout 0 32 } } }
	A_numel_read { ap_none {  { A_numel_read in_data 0 64 } } }
	b_numel_read { ap_none {  { b_numel_read in_data 0 64 } } }
}
