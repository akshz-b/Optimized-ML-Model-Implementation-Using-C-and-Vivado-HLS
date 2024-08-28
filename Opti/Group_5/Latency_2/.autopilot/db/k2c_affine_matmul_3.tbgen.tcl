set moduleName k2c_affine_matmul_3
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
set C_modelName {k2c_affine_matmul.3}
set C_modelType { void 0 }
set C_modelArgList {
	{ C float 32 regular {array 1 { 0 3 } 0 1 }  }
	{ A float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A1 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A2 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A3 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A4 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A5 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A6 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ A7 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ outrows int 5 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "outrows", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 35
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C_address0 sc_out sc_lv 1 signal 0 } 
	{ C_ce0 sc_out sc_logic 1 signal 0 } 
	{ C_we0 sc_out sc_logic 1 signal 0 } 
	{ C_d0 sc_out sc_lv 32 signal 0 } 
	{ A_address0 sc_out sc_lv 1 signal 1 } 
	{ A_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_q0 sc_in sc_lv 32 signal 1 } 
	{ A1_address0 sc_out sc_lv 1 signal 2 } 
	{ A1_ce0 sc_out sc_logic 1 signal 2 } 
	{ A1_q0 sc_in sc_lv 32 signal 2 } 
	{ A2_address0 sc_out sc_lv 1 signal 3 } 
	{ A2_ce0 sc_out sc_logic 1 signal 3 } 
	{ A2_q0 sc_in sc_lv 32 signal 3 } 
	{ A3_address0 sc_out sc_lv 1 signal 4 } 
	{ A3_ce0 sc_out sc_logic 1 signal 4 } 
	{ A3_q0 sc_in sc_lv 32 signal 4 } 
	{ A4_address0 sc_out sc_lv 1 signal 5 } 
	{ A4_ce0 sc_out sc_logic 1 signal 5 } 
	{ A4_q0 sc_in sc_lv 32 signal 5 } 
	{ A5_address0 sc_out sc_lv 1 signal 6 } 
	{ A5_ce0 sc_out sc_logic 1 signal 6 } 
	{ A5_q0 sc_in sc_lv 32 signal 6 } 
	{ A6_address0 sc_out sc_lv 1 signal 7 } 
	{ A6_ce0 sc_out sc_logic 1 signal 7 } 
	{ A6_q0 sc_in sc_lv 32 signal 7 } 
	{ A7_address0 sc_out sc_lv 1 signal 8 } 
	{ A7_ce0 sc_out sc_logic 1 signal 8 } 
	{ A7_q0 sc_in sc_lv 32 signal 8 } 
	{ outrows sc_in sc_lv 5 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "address0" }} , 
 	{ "name": "C_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "ce0" }} , 
 	{ "name": "C_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C", "role": "we0" }} , 
 	{ "name": "C_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C", "role": "d0" }} , 
 	{ "name": "A_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "address0" }} , 
 	{ "name": "A_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "ce0" }} , 
 	{ "name": "A_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A", "role": "q0" }} , 
 	{ "name": "A1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A1", "role": "address0" }} , 
 	{ "name": "A1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A1", "role": "ce0" }} , 
 	{ "name": "A1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A1", "role": "q0" }} , 
 	{ "name": "A2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A2", "role": "address0" }} , 
 	{ "name": "A2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A2", "role": "ce0" }} , 
 	{ "name": "A2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A2", "role": "q0" }} , 
 	{ "name": "A3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A3", "role": "address0" }} , 
 	{ "name": "A3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A3", "role": "ce0" }} , 
 	{ "name": "A3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A3", "role": "q0" }} , 
 	{ "name": "A4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A4", "role": "address0" }} , 
 	{ "name": "A4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A4", "role": "ce0" }} , 
 	{ "name": "A4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A4", "role": "q0" }} , 
 	{ "name": "A5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A5", "role": "address0" }} , 
 	{ "name": "A5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A5", "role": "ce0" }} , 
 	{ "name": "A5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A5", "role": "q0" }} , 
 	{ "name": "A6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A6", "role": "address0" }} , 
 	{ "name": "A6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A6", "role": "ce0" }} , 
 	{ "name": "A6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A6", "role": "q0" }} , 
 	{ "name": "A7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A7", "role": "address0" }} , 
 	{ "name": "A7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A7", "role": "ce0" }} , 
 	{ "name": "A7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A7", "role": "q0" }} , 
 	{ "name": "outrows", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "outrows", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_Ee0_U452", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_pcA_U453", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U454", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U455", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U456", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U457", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U458", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U459", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U460", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U461", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U462", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U463", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U464", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U465", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U466", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U467", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U468", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U469", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U470", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U471", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U472", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U473", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U474", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U475", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U476", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U477", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U478", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U479", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U480", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U481", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U482", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U483", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U484", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U485", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	k2c_affine_matmul_3 {
		C {Type O LastRead -1 FirstWrite 4}
		A {Type I LastRead 26 FirstWrite -1}
		A1 {Type I LastRead 26 FirstWrite -1}
		A2 {Type I LastRead 26 FirstWrite -1}
		A3 {Type I LastRead 26 FirstWrite -1}
		A4 {Type I LastRead 26 FirstWrite -1}
		A5 {Type I LastRead 26 FirstWrite -1}
		A6 {Type I LastRead 26 FirstWrite -1}
		A7 {Type I LastRead 26 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
	{"Pipeline" : "12", "EnableSignal" : "ap_enable_pp12"}
	{"Pipeline" : "13", "EnableSignal" : "ap_enable_pp13"}
	{"Pipeline" : "14", "EnableSignal" : "ap_enable_pp14"}
	{"Pipeline" : "15", "EnableSignal" : "ap_enable_pp15"}
	{"Pipeline" : "16", "EnableSignal" : "ap_enable_pp16"}
	{"Pipeline" : "20", "EnableSignal" : "ap_enable_pp20"}
	{"Pipeline" : "21", "EnableSignal" : "ap_enable_pp21"}
	{"Pipeline" : "22", "EnableSignal" : "ap_enable_pp22"}
	{"Pipeline" : "23", "EnableSignal" : "ap_enable_pp23"}
	{"Pipeline" : "24", "EnableSignal" : "ap_enable_pp24"}
	{"Pipeline" : "28", "EnableSignal" : "ap_enable_pp28"}
	{"Pipeline" : "29", "EnableSignal" : "ap_enable_pp29"}
	{"Pipeline" : "30", "EnableSignal" : "ap_enable_pp30"}
	{"Pipeline" : "31", "EnableSignal" : "ap_enable_pp31"}
]}

set Spec2ImplPortList { 
	C { ap_memory {  { C_address0 mem_address 1 1 }  { C_ce0 mem_ce 1 1 }  { C_we0 mem_we 1 1 }  { C_d0 mem_din 1 32 } } }
	A { ap_memory {  { A_address0 mem_address 1 1 }  { A_ce0 mem_ce 1 1 }  { A_q0 mem_dout 0 32 } } }
	A1 { ap_memory {  { A1_address0 mem_address 1 1 }  { A1_ce0 mem_ce 1 1 }  { A1_q0 mem_dout 0 32 } } }
	A2 { ap_memory {  { A2_address0 mem_address 1 1 }  { A2_ce0 mem_ce 1 1 }  { A2_q0 mem_dout 0 32 } } }
	A3 { ap_memory {  { A3_address0 mem_address 1 1 }  { A3_ce0 mem_ce 1 1 }  { A3_q0 mem_dout 0 32 } } }
	A4 { ap_memory {  { A4_address0 mem_address 1 1 }  { A4_ce0 mem_ce 1 1 }  { A4_q0 mem_dout 0 32 } } }
	A5 { ap_memory {  { A5_address0 mem_address 1 1 }  { A5_ce0 mem_ce 1 1 }  { A5_q0 mem_dout 0 32 } } }
	A6 { ap_memory {  { A6_address0 mem_address 1 1 }  { A6_ce0 mem_ce 1 1 }  { A6_q0 mem_dout 0 32 } } }
	A7 { ap_memory {  { A7_address0 mem_address 1 1 }  { A7_ce0 mem_ce 1 1 }  { A7_q0 mem_dout 0 32 } } }
	outrows { ap_none {  { outrows in_data 0 5 } } }
}
