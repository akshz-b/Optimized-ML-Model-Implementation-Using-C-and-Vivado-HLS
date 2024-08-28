set moduleName k2c_affine_matmul_2
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
set C_modelName {k2c_affine_matmul.2}
set C_modelType { void 0 }
set C_modelArgList {
	{ C float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C1 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C2 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C3 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C4 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C5 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C6 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ C7 float 32 regular {array 2 { 0 3 } 0 1 }  }
	{ A float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A8 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A9 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A10 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A11 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A12 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A13 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ A14 float 32 regular {array 4 { 1 3 } 1 1 }  }
	{ d float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ outrows int 6 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C1", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C2", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C3", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C4", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C5", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C6", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "C7", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "A", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "d", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "outrows", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 66
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
	{ C1_address0 sc_out sc_lv 1 signal 1 } 
	{ C1_ce0 sc_out sc_logic 1 signal 1 } 
	{ C1_we0 sc_out sc_logic 1 signal 1 } 
	{ C1_d0 sc_out sc_lv 32 signal 1 } 
	{ C2_address0 sc_out sc_lv 1 signal 2 } 
	{ C2_ce0 sc_out sc_logic 1 signal 2 } 
	{ C2_we0 sc_out sc_logic 1 signal 2 } 
	{ C2_d0 sc_out sc_lv 32 signal 2 } 
	{ C3_address0 sc_out sc_lv 1 signal 3 } 
	{ C3_ce0 sc_out sc_logic 1 signal 3 } 
	{ C3_we0 sc_out sc_logic 1 signal 3 } 
	{ C3_d0 sc_out sc_lv 32 signal 3 } 
	{ C4_address0 sc_out sc_lv 1 signal 4 } 
	{ C4_ce0 sc_out sc_logic 1 signal 4 } 
	{ C4_we0 sc_out sc_logic 1 signal 4 } 
	{ C4_d0 sc_out sc_lv 32 signal 4 } 
	{ C5_address0 sc_out sc_lv 1 signal 5 } 
	{ C5_ce0 sc_out sc_logic 1 signal 5 } 
	{ C5_we0 sc_out sc_logic 1 signal 5 } 
	{ C5_d0 sc_out sc_lv 32 signal 5 } 
	{ C6_address0 sc_out sc_lv 1 signal 6 } 
	{ C6_ce0 sc_out sc_logic 1 signal 6 } 
	{ C6_we0 sc_out sc_logic 1 signal 6 } 
	{ C6_d0 sc_out sc_lv 32 signal 6 } 
	{ C7_address0 sc_out sc_lv 1 signal 7 } 
	{ C7_ce0 sc_out sc_logic 1 signal 7 } 
	{ C7_we0 sc_out sc_logic 1 signal 7 } 
	{ C7_d0 sc_out sc_lv 32 signal 7 } 
	{ A_address0 sc_out sc_lv 2 signal 8 } 
	{ A_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_q0 sc_in sc_lv 32 signal 8 } 
	{ A8_address0 sc_out sc_lv 2 signal 9 } 
	{ A8_ce0 sc_out sc_logic 1 signal 9 } 
	{ A8_q0 sc_in sc_lv 32 signal 9 } 
	{ A9_address0 sc_out sc_lv 2 signal 10 } 
	{ A9_ce0 sc_out sc_logic 1 signal 10 } 
	{ A9_q0 sc_in sc_lv 32 signal 10 } 
	{ A10_address0 sc_out sc_lv 2 signal 11 } 
	{ A10_ce0 sc_out sc_logic 1 signal 11 } 
	{ A10_q0 sc_in sc_lv 32 signal 11 } 
	{ A11_address0 sc_out sc_lv 2 signal 12 } 
	{ A11_ce0 sc_out sc_logic 1 signal 12 } 
	{ A11_q0 sc_in sc_lv 32 signal 12 } 
	{ A12_address0 sc_out sc_lv 2 signal 13 } 
	{ A12_ce0 sc_out sc_logic 1 signal 13 } 
	{ A12_q0 sc_in sc_lv 32 signal 13 } 
	{ A13_address0 sc_out sc_lv 2 signal 14 } 
	{ A13_ce0 sc_out sc_logic 1 signal 14 } 
	{ A13_q0 sc_in sc_lv 32 signal 14 } 
	{ A14_address0 sc_out sc_lv 2 signal 15 } 
	{ A14_ce0 sc_out sc_logic 1 signal 15 } 
	{ A14_q0 sc_in sc_lv 32 signal 15 } 
	{ d_address0 sc_out sc_lv 4 signal 16 } 
	{ d_ce0 sc_out sc_logic 1 signal 16 } 
	{ d_q0 sc_in sc_lv 32 signal 16 } 
	{ outrows sc_in sc_lv 6 signal 17 } 
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
 	{ "name": "C1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C1", "role": "address0" }} , 
 	{ "name": "C1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1", "role": "ce0" }} , 
 	{ "name": "C1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C1", "role": "we0" }} , 
 	{ "name": "C1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C1", "role": "d0" }} , 
 	{ "name": "C2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C2", "role": "address0" }} , 
 	{ "name": "C2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C2", "role": "ce0" }} , 
 	{ "name": "C2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C2", "role": "we0" }} , 
 	{ "name": "C2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C2", "role": "d0" }} , 
 	{ "name": "C3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C3", "role": "address0" }} , 
 	{ "name": "C3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3", "role": "ce0" }} , 
 	{ "name": "C3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C3", "role": "we0" }} , 
 	{ "name": "C3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C3", "role": "d0" }} , 
 	{ "name": "C4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C4", "role": "address0" }} , 
 	{ "name": "C4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C4", "role": "ce0" }} , 
 	{ "name": "C4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C4", "role": "we0" }} , 
 	{ "name": "C4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C4", "role": "d0" }} , 
 	{ "name": "C5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C5", "role": "address0" }} , 
 	{ "name": "C5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5", "role": "ce0" }} , 
 	{ "name": "C5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C5", "role": "we0" }} , 
 	{ "name": "C5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C5", "role": "d0" }} , 
 	{ "name": "C6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C6", "role": "address0" }} , 
 	{ "name": "C6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C6", "role": "ce0" }} , 
 	{ "name": "C6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C6", "role": "we0" }} , 
 	{ "name": "C6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C6", "role": "d0" }} , 
 	{ "name": "C7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "C7", "role": "address0" }} , 
 	{ "name": "C7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C7", "role": "ce0" }} , 
 	{ "name": "C7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C7", "role": "we0" }} , 
 	{ "name": "C7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C7", "role": "d0" }} , 
 	{ "name": "A_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A", "role": "address0" }} , 
 	{ "name": "A_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A", "role": "ce0" }} , 
 	{ "name": "A_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A", "role": "q0" }} , 
 	{ "name": "A8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A8", "role": "address0" }} , 
 	{ "name": "A8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A8", "role": "ce0" }} , 
 	{ "name": "A8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A8", "role": "q0" }} , 
 	{ "name": "A9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A9", "role": "address0" }} , 
 	{ "name": "A9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A9", "role": "ce0" }} , 
 	{ "name": "A9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A9", "role": "q0" }} , 
 	{ "name": "A10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A10", "role": "address0" }} , 
 	{ "name": "A10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A10", "role": "ce0" }} , 
 	{ "name": "A10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A10", "role": "q0" }} , 
 	{ "name": "A11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A11", "role": "address0" }} , 
 	{ "name": "A11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A11", "role": "ce0" }} , 
 	{ "name": "A11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A11", "role": "q0" }} , 
 	{ "name": "A12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A12", "role": "address0" }} , 
 	{ "name": "A12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A12", "role": "ce0" }} , 
 	{ "name": "A12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A12", "role": "q0" }} , 
 	{ "name": "A13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A13", "role": "address0" }} , 
 	{ "name": "A13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A13", "role": "ce0" }} , 
 	{ "name": "A13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A13", "role": "q0" }} , 
 	{ "name": "A14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A14", "role": "address0" }} , 
 	{ "name": "A14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A14", "role": "ce0" }} , 
 	{ "name": "A14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A14", "role": "q0" }} , 
 	{ "name": "d_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "d", "role": "address0" }} , 
 	{ "name": "d_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "d", "role": "ce0" }} , 
 	{ "name": "d_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "d", "role": "q0" }} , 
 	{ "name": "outrows", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "outrows", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_7_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_6_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_5_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_4_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_3_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_2_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_15_kernel_arra_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_Ee0_U354", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_pcA_U355", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U356", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U357", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U358", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U359", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U360", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U361", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U362", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U363", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U364", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U365", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U366", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U367", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U368", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U369", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U370", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U371", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U372", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U373", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U374", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U375", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U376", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U377", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U378", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U379", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U380", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U381", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U382", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U383", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U384", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U385", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U386", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U387", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		dense_15_kernel_arra {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "3", "EnableSignal" : "ap_enable_pp3"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
	{"Pipeline" : "9", "EnableSignal" : "ap_enable_pp9"}
	{"Pipeline" : "10", "EnableSignal" : "ap_enable_pp10"}
	{"Pipeline" : "11", "EnableSignal" : "ap_enable_pp11"}
	{"Pipeline" : "12", "EnableSignal" : "ap_enable_pp12"}
	{"Pipeline" : "13", "EnableSignal" : "ap_enable_pp13"}
	{"Pipeline" : "14", "EnableSignal" : "ap_enable_pp14"}
	{"Pipeline" : "15", "EnableSignal" : "ap_enable_pp15"}
	{"Pipeline" : "16", "EnableSignal" : "ap_enable_pp16"}
	{"Pipeline" : "17", "EnableSignal" : "ap_enable_pp17"}
	{"Pipeline" : "18", "EnableSignal" : "ap_enable_pp18"}
	{"Pipeline" : "19", "EnableSignal" : "ap_enable_pp19"}
	{"Pipeline" : "20", "EnableSignal" : "ap_enable_pp20"}
	{"Pipeline" : "21", "EnableSignal" : "ap_enable_pp21"}
	{"Pipeline" : "22", "EnableSignal" : "ap_enable_pp22"}
	{"Pipeline" : "23", "EnableSignal" : "ap_enable_pp23"}
	{"Pipeline" : "24", "EnableSignal" : "ap_enable_pp24"}
	{"Pipeline" : "25", "EnableSignal" : "ap_enable_pp25"}
	{"Pipeline" : "26", "EnableSignal" : "ap_enable_pp26"}
	{"Pipeline" : "27", "EnableSignal" : "ap_enable_pp27"}
	{"Pipeline" : "28", "EnableSignal" : "ap_enable_pp28"}
	{"Pipeline" : "29", "EnableSignal" : "ap_enable_pp29"}
	{"Pipeline" : "30", "EnableSignal" : "ap_enable_pp30"}
	{"Pipeline" : "31", "EnableSignal" : "ap_enable_pp31"}
]}

set Spec2ImplPortList { 
	C { ap_memory {  { C_address0 mem_address 1 1 }  { C_ce0 mem_ce 1 1 }  { C_we0 mem_we 1 1 }  { C_d0 mem_din 1 32 } } }
	C1 { ap_memory {  { C1_address0 mem_address 1 1 }  { C1_ce0 mem_ce 1 1 }  { C1_we0 mem_we 1 1 }  { C1_d0 mem_din 1 32 } } }
	C2 { ap_memory {  { C2_address0 mem_address 1 1 }  { C2_ce0 mem_ce 1 1 }  { C2_we0 mem_we 1 1 }  { C2_d0 mem_din 1 32 } } }
	C3 { ap_memory {  { C3_address0 mem_address 1 1 }  { C3_ce0 mem_ce 1 1 }  { C3_we0 mem_we 1 1 }  { C3_d0 mem_din 1 32 } } }
	C4 { ap_memory {  { C4_address0 mem_address 1 1 }  { C4_ce0 mem_ce 1 1 }  { C4_we0 mem_we 1 1 }  { C4_d0 mem_din 1 32 } } }
	C5 { ap_memory {  { C5_address0 mem_address 1 1 }  { C5_ce0 mem_ce 1 1 }  { C5_we0 mem_we 1 1 }  { C5_d0 mem_din 1 32 } } }
	C6 { ap_memory {  { C6_address0 mem_address 1 1 }  { C6_ce0 mem_ce 1 1 }  { C6_we0 mem_we 1 1 }  { C6_d0 mem_din 1 32 } } }
	C7 { ap_memory {  { C7_address0 mem_address 1 1 }  { C7_ce0 mem_ce 1 1 }  { C7_we0 mem_we 1 1 }  { C7_d0 mem_din 1 32 } } }
	A { ap_memory {  { A_address0 mem_address 1 2 }  { A_ce0 mem_ce 1 1 }  { A_q0 mem_dout 0 32 } } }
	A8 { ap_memory {  { A8_address0 mem_address 1 2 }  { A8_ce0 mem_ce 1 1 }  { A8_q0 mem_dout 0 32 } } }
	A9 { ap_memory {  { A9_address0 mem_address 1 2 }  { A9_ce0 mem_ce 1 1 }  { A9_q0 mem_dout 0 32 } } }
	A10 { ap_memory {  { A10_address0 mem_address 1 2 }  { A10_ce0 mem_ce 1 1 }  { A10_q0 mem_dout 0 32 } } }
	A11 { ap_memory {  { A11_address0 mem_address 1 2 }  { A11_ce0 mem_ce 1 1 }  { A11_q0 mem_dout 0 32 } } }
	A12 { ap_memory {  { A12_address0 mem_address 1 2 }  { A12_ce0 mem_ce 1 1 }  { A12_q0 mem_dout 0 32 } } }
	A13 { ap_memory {  { A13_address0 mem_address 1 2 }  { A13_ce0 mem_ce 1 1 }  { A13_q0 mem_dout 0 32 } } }
	A14 { ap_memory {  { A14_address0 mem_address 1 2 }  { A14_ce0 mem_ce 1 1 }  { A14_q0 mem_dout 0 32 } } }
	d { ap_memory {  { d_address0 mem_address 1 4 }  { d_ce0 mem_ce 1 1 }  { d_q0 mem_dout 0 32 } } }
	outrows { ap_none {  { outrows in_data 0 6 } } }
}
