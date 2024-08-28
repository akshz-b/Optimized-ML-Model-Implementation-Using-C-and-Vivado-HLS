set moduleName k2c_dot
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
set C_modelName {k2c_dot}
set C_modelType { void 0 }
set C_modelArgList {
	{ C_array_0 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_1 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_2 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_3 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_4 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_5 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_6 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ C_array_7 float 32 regular {array 16 { 2 3 } 1 1 }  }
	{ A_array_0 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_1 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_2 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_3 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_4 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_5 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_6 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array_7 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_dim int 64 regular  }
	{ A_numel_read int 64 regular  }
	{ A_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ B_dim int 64 regular  }
	{ B_numel_read int 64 regular  }
	{ axesA_0_read int 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "axesA_0_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 78
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C_array_0_address0 sc_out sc_lv 4 signal 0 } 
	{ C_array_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ C_array_0_we0 sc_out sc_logic 1 signal 0 } 
	{ C_array_0_d0 sc_out sc_lv 32 signal 0 } 
	{ C_array_0_q0 sc_in sc_lv 32 signal 0 } 
	{ C_array_1_address0 sc_out sc_lv 4 signal 1 } 
	{ C_array_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ C_array_1_we0 sc_out sc_logic 1 signal 1 } 
	{ C_array_1_d0 sc_out sc_lv 32 signal 1 } 
	{ C_array_1_q0 sc_in sc_lv 32 signal 1 } 
	{ C_array_2_address0 sc_out sc_lv 4 signal 2 } 
	{ C_array_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ C_array_2_we0 sc_out sc_logic 1 signal 2 } 
	{ C_array_2_d0 sc_out sc_lv 32 signal 2 } 
	{ C_array_2_q0 sc_in sc_lv 32 signal 2 } 
	{ C_array_3_address0 sc_out sc_lv 4 signal 3 } 
	{ C_array_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ C_array_3_we0 sc_out sc_logic 1 signal 3 } 
	{ C_array_3_d0 sc_out sc_lv 32 signal 3 } 
	{ C_array_3_q0 sc_in sc_lv 32 signal 3 } 
	{ C_array_4_address0 sc_out sc_lv 4 signal 4 } 
	{ C_array_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ C_array_4_we0 sc_out sc_logic 1 signal 4 } 
	{ C_array_4_d0 sc_out sc_lv 32 signal 4 } 
	{ C_array_4_q0 sc_in sc_lv 32 signal 4 } 
	{ C_array_5_address0 sc_out sc_lv 4 signal 5 } 
	{ C_array_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ C_array_5_we0 sc_out sc_logic 1 signal 5 } 
	{ C_array_5_d0 sc_out sc_lv 32 signal 5 } 
	{ C_array_5_q0 sc_in sc_lv 32 signal 5 } 
	{ C_array_6_address0 sc_out sc_lv 4 signal 6 } 
	{ C_array_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ C_array_6_we0 sc_out sc_logic 1 signal 6 } 
	{ C_array_6_d0 sc_out sc_lv 32 signal 6 } 
	{ C_array_6_q0 sc_in sc_lv 32 signal 6 } 
	{ C_array_7_address0 sc_out sc_lv 4 signal 7 } 
	{ C_array_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ C_array_7_we0 sc_out sc_logic 1 signal 7 } 
	{ C_array_7_d0 sc_out sc_lv 32 signal 7 } 
	{ C_array_7_q0 sc_in sc_lv 32 signal 7 } 
	{ A_array_0_address0 sc_out sc_lv 4 signal 8 } 
	{ A_array_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_array_0_q0 sc_in sc_lv 32 signal 8 } 
	{ A_array_1_address0 sc_out sc_lv 4 signal 9 } 
	{ A_array_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ A_array_1_q0 sc_in sc_lv 32 signal 9 } 
	{ A_array_2_address0 sc_out sc_lv 4 signal 10 } 
	{ A_array_2_ce0 sc_out sc_logic 1 signal 10 } 
	{ A_array_2_q0 sc_in sc_lv 32 signal 10 } 
	{ A_array_3_address0 sc_out sc_lv 4 signal 11 } 
	{ A_array_3_ce0 sc_out sc_logic 1 signal 11 } 
	{ A_array_3_q0 sc_in sc_lv 32 signal 11 } 
	{ A_array_4_address0 sc_out sc_lv 4 signal 12 } 
	{ A_array_4_ce0 sc_out sc_logic 1 signal 12 } 
	{ A_array_4_q0 sc_in sc_lv 32 signal 12 } 
	{ A_array_5_address0 sc_out sc_lv 4 signal 13 } 
	{ A_array_5_ce0 sc_out sc_logic 1 signal 13 } 
	{ A_array_5_q0 sc_in sc_lv 32 signal 13 } 
	{ A_array_6_address0 sc_out sc_lv 4 signal 14 } 
	{ A_array_6_ce0 sc_out sc_logic 1 signal 14 } 
	{ A_array_6_q0 sc_in sc_lv 32 signal 14 } 
	{ A_array_7_address0 sc_out sc_lv 4 signal 15 } 
	{ A_array_7_ce0 sc_out sc_logic 1 signal 15 } 
	{ A_array_7_q0 sc_in sc_lv 32 signal 15 } 
	{ A_dim sc_in sc_lv 64 signal 16 } 
	{ A_numel_read sc_in sc_lv 64 signal 17 } 
	{ A_shape_address0 sc_out sc_lv 3 signal 18 } 
	{ A_shape_ce0 sc_out sc_logic 1 signal 18 } 
	{ A_shape_q0 sc_in sc_lv 64 signal 18 } 
	{ B_dim sc_in sc_lv 64 signal 19 } 
	{ B_numel_read sc_in sc_lv 64 signal 20 } 
	{ axesA_0_read sc_in sc_lv 64 signal 21 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_0", "role": "address0" }} , 
 	{ "name": "C_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_0", "role": "ce0" }} , 
 	{ "name": "C_array_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_0", "role": "we0" }} , 
 	{ "name": "C_array_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_0", "role": "d0" }} , 
 	{ "name": "C_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_0", "role": "q0" }} , 
 	{ "name": "C_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_1", "role": "address0" }} , 
 	{ "name": "C_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_1", "role": "ce0" }} , 
 	{ "name": "C_array_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_1", "role": "we0" }} , 
 	{ "name": "C_array_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_1", "role": "d0" }} , 
 	{ "name": "C_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_1", "role": "q0" }} , 
 	{ "name": "C_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_2", "role": "address0" }} , 
 	{ "name": "C_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_2", "role": "ce0" }} , 
 	{ "name": "C_array_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_2", "role": "we0" }} , 
 	{ "name": "C_array_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_2", "role": "d0" }} , 
 	{ "name": "C_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_2", "role": "q0" }} , 
 	{ "name": "C_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_3", "role": "address0" }} , 
 	{ "name": "C_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_3", "role": "ce0" }} , 
 	{ "name": "C_array_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_3", "role": "we0" }} , 
 	{ "name": "C_array_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_3", "role": "d0" }} , 
 	{ "name": "C_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_3", "role": "q0" }} , 
 	{ "name": "C_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_4", "role": "address0" }} , 
 	{ "name": "C_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_4", "role": "ce0" }} , 
 	{ "name": "C_array_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_4", "role": "we0" }} , 
 	{ "name": "C_array_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_4", "role": "d0" }} , 
 	{ "name": "C_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_4", "role": "q0" }} , 
 	{ "name": "C_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_5", "role": "address0" }} , 
 	{ "name": "C_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_5", "role": "ce0" }} , 
 	{ "name": "C_array_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_5", "role": "we0" }} , 
 	{ "name": "C_array_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_5", "role": "d0" }} , 
 	{ "name": "C_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_5", "role": "q0" }} , 
 	{ "name": "C_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_6", "role": "address0" }} , 
 	{ "name": "C_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_6", "role": "ce0" }} , 
 	{ "name": "C_array_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_6", "role": "we0" }} , 
 	{ "name": "C_array_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_6", "role": "d0" }} , 
 	{ "name": "C_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_6", "role": "q0" }} , 
 	{ "name": "C_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "C_array_7", "role": "address0" }} , 
 	{ "name": "C_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_7", "role": "ce0" }} , 
 	{ "name": "C_array_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array_7", "role": "we0" }} , 
 	{ "name": "C_array_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_7", "role": "d0" }} , 
 	{ "name": "C_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array_7", "role": "q0" }} , 
 	{ "name": "A_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_0", "role": "address0" }} , 
 	{ "name": "A_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_0", "role": "ce0" }} , 
 	{ "name": "A_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_0", "role": "q0" }} , 
 	{ "name": "A_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_1", "role": "address0" }} , 
 	{ "name": "A_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_1", "role": "ce0" }} , 
 	{ "name": "A_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_1", "role": "q0" }} , 
 	{ "name": "A_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_2", "role": "address0" }} , 
 	{ "name": "A_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_2", "role": "ce0" }} , 
 	{ "name": "A_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_2", "role": "q0" }} , 
 	{ "name": "A_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_3", "role": "address0" }} , 
 	{ "name": "A_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_3", "role": "ce0" }} , 
 	{ "name": "A_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_3", "role": "q0" }} , 
 	{ "name": "A_array_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_4", "role": "address0" }} , 
 	{ "name": "A_array_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_4", "role": "ce0" }} , 
 	{ "name": "A_array_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_4", "role": "q0" }} , 
 	{ "name": "A_array_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_5", "role": "address0" }} , 
 	{ "name": "A_array_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_5", "role": "ce0" }} , 
 	{ "name": "A_array_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_5", "role": "q0" }} , 
 	{ "name": "A_array_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_6", "role": "address0" }} , 
 	{ "name": "A_array_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_6", "role": "ce0" }} , 
 	{ "name": "A_array_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_6", "role": "q0" }} , 
 	{ "name": "A_array_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array_7", "role": "address0" }} , 
 	{ "name": "A_array_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array_7", "role": "ce0" }} , 
 	{ "name": "A_array_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array_7", "role": "q0" }} , 
 	{ "name": "A_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_dim", "role": "default" }} , 
 	{ "name": "A_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_numel_read", "role": "default" }} , 
 	{ "name": "A_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_shape", "role": "address0" }} , 
 	{ "name": "A_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_shape", "role": "ce0" }} , 
 	{ "name": "A_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_shape", "role": "q0" }} , 
 	{ "name": "B_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_dim", "role": "default" }} , 
 	{ "name": "B_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_numel_read", "role": "default" }} , 
 	{ "name": "axesA_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "axesA_0_read", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "24", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36"],
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
					{"ID" : "19", "SubInstance" : "grp_k2c_idx2sub_fu_1210", "Port" : "shape"}]},
			{"Name" : "B_dim", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_13_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "19", "SubInstance" : "grp_k2c_idx2sub_fu_1210", "Port" : "shape"}]},
			{"Name" : "dense_13_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_13_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_13_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_shap_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_fwork_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_7_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_6_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_4_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_2_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permA_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permB_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeA_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeB_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpA_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpB_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Asub_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bsub_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1210", "Parent" : "0", "Child" : ["20", "21", "22", "23"],
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
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1210.sample_urem_64ns_bkb_U1", "Parent" : "19"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1210.sample_udiv_64ns_cud_U2", "Parent" : "19"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1210.sample_urem_64ns_bkb_U3", "Parent" : "19"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1210.sample_udiv_64ns_cud_U4", "Parent" : "19"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_1222", "Parent" : "0", "Child" : ["25", "26"],
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
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_1222.sample_mul_64s_64dEe_U11", "Parent" : "24"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_1222.sample_mul_64s_64dEe_U12", "Parent" : "24"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U17", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_pcA_U18", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_udiv_64ns_cud_U19", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_66ns_6qcK_U20", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U21", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_60ns_6sc4_U22", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_64s_60tde_U23", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U24", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_mul_13udo_U25", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_mul_13udo_U26", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		ndim {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	C_array_0 { ap_memory {  { C_array_0_address0 mem_address 1 4 }  { C_array_0_ce0 mem_ce 1 1 }  { C_array_0_we0 mem_we 1 1 }  { C_array_0_d0 mem_din 1 32 }  { C_array_0_q0 mem_dout 0 32 } } }
	C_array_1 { ap_memory {  { C_array_1_address0 mem_address 1 4 }  { C_array_1_ce0 mem_ce 1 1 }  { C_array_1_we0 mem_we 1 1 }  { C_array_1_d0 mem_din 1 32 }  { C_array_1_q0 mem_dout 0 32 } } }
	C_array_2 { ap_memory {  { C_array_2_address0 mem_address 1 4 }  { C_array_2_ce0 mem_ce 1 1 }  { C_array_2_we0 mem_we 1 1 }  { C_array_2_d0 mem_din 1 32 }  { C_array_2_q0 mem_dout 0 32 } } }
	C_array_3 { ap_memory {  { C_array_3_address0 mem_address 1 4 }  { C_array_3_ce0 mem_ce 1 1 }  { C_array_3_we0 mem_we 1 1 }  { C_array_3_d0 mem_din 1 32 }  { C_array_3_q0 mem_dout 0 32 } } }
	C_array_4 { ap_memory {  { C_array_4_address0 mem_address 1 4 }  { C_array_4_ce0 mem_ce 1 1 }  { C_array_4_we0 mem_we 1 1 }  { C_array_4_d0 mem_din 1 32 }  { C_array_4_q0 mem_dout 0 32 } } }
	C_array_5 { ap_memory {  { C_array_5_address0 mem_address 1 4 }  { C_array_5_ce0 mem_ce 1 1 }  { C_array_5_we0 mem_we 1 1 }  { C_array_5_d0 mem_din 1 32 }  { C_array_5_q0 mem_dout 0 32 } } }
	C_array_6 { ap_memory {  { C_array_6_address0 mem_address 1 4 }  { C_array_6_ce0 mem_ce 1 1 }  { C_array_6_we0 mem_we 1 1 }  { C_array_6_d0 mem_din 1 32 }  { C_array_6_q0 mem_dout 0 32 } } }
	C_array_7 { ap_memory {  { C_array_7_address0 mem_address 1 4 }  { C_array_7_ce0 mem_ce 1 1 }  { C_array_7_we0 mem_we 1 1 }  { C_array_7_d0 mem_din 1 32 }  { C_array_7_q0 mem_dout 0 32 } } }
	A_array_0 { ap_memory {  { A_array_0_address0 mem_address 1 4 }  { A_array_0_ce0 mem_ce 1 1 }  { A_array_0_q0 mem_dout 0 32 } } }
	A_array_1 { ap_memory {  { A_array_1_address0 mem_address 1 4 }  { A_array_1_ce0 mem_ce 1 1 }  { A_array_1_q0 mem_dout 0 32 } } }
	A_array_2 { ap_memory {  { A_array_2_address0 mem_address 1 4 }  { A_array_2_ce0 mem_ce 1 1 }  { A_array_2_q0 mem_dout 0 32 } } }
	A_array_3 { ap_memory {  { A_array_3_address0 mem_address 1 4 }  { A_array_3_ce0 mem_ce 1 1 }  { A_array_3_q0 mem_dout 0 32 } } }
	A_array_4 { ap_memory {  { A_array_4_address0 mem_address 1 4 }  { A_array_4_ce0 mem_ce 1 1 }  { A_array_4_q0 mem_dout 0 32 } } }
	A_array_5 { ap_memory {  { A_array_5_address0 mem_address 1 4 }  { A_array_5_ce0 mem_ce 1 1 }  { A_array_5_q0 mem_dout 0 32 } } }
	A_array_6 { ap_memory {  { A_array_6_address0 mem_address 1 4 }  { A_array_6_ce0 mem_ce 1 1 }  { A_array_6_q0 mem_dout 0 32 } } }
	A_array_7 { ap_memory {  { A_array_7_address0 mem_address 1 4 }  { A_array_7_ce0 mem_ce 1 1 }  { A_array_7_q0 mem_dout 0 32 } } }
	A_dim { ap_none {  { A_dim in_data 0 64 } } }
	A_numel_read { ap_none {  { A_numel_read in_data 0 64 } } }
	A_shape { ap_memory {  { A_shape_address0 mem_address 1 3 }  { A_shape_ce0 mem_ce 1 1 }  { A_shape_q0 mem_dout 0 64 } } }
	B_dim { ap_none {  { B_dim in_data 0 64 } } }
	B_numel_read { ap_none {  { B_numel_read in_data 0 64 } } }
	axesA_0_read { ap_none {  { axesA_0_read in_data 0 64 } } }
}
