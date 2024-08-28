set moduleName k2c_dot_1
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
set C_modelName {k2c_dot.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ C_array float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array1 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array2 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array3 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array4 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array5 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array6 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ C_array7 float 32 regular {array 4 { 2 3 } 1 1 }  }
	{ A_array float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array8 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array9 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array10 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array11 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array12 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array13 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_array14 float 32 regular {array 16 { 1 3 } 1 1 }  }
	{ A_dim int 64 regular  }
	{ A_numel_read int 64 regular  }
	{ B_dim int 64 regular  }
	{ B_numel_read int 64 regular  }
	{ p_read2 int 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array1", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array2", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array3", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array4", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array5", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array6", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "C_array7", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array9", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array10", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array11", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array12", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array13", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_array14", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_dim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "p_read2", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 75
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C_array_address0 sc_out sc_lv 2 signal 0 } 
	{ C_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ C_array_we0 sc_out sc_logic 1 signal 0 } 
	{ C_array_d0 sc_out sc_lv 32 signal 0 } 
	{ C_array_q0 sc_in sc_lv 32 signal 0 } 
	{ C_array1_address0 sc_out sc_lv 2 signal 1 } 
	{ C_array1_ce0 sc_out sc_logic 1 signal 1 } 
	{ C_array1_we0 sc_out sc_logic 1 signal 1 } 
	{ C_array1_d0 sc_out sc_lv 32 signal 1 } 
	{ C_array1_q0 sc_in sc_lv 32 signal 1 } 
	{ C_array2_address0 sc_out sc_lv 2 signal 2 } 
	{ C_array2_ce0 sc_out sc_logic 1 signal 2 } 
	{ C_array2_we0 sc_out sc_logic 1 signal 2 } 
	{ C_array2_d0 sc_out sc_lv 32 signal 2 } 
	{ C_array2_q0 sc_in sc_lv 32 signal 2 } 
	{ C_array3_address0 sc_out sc_lv 2 signal 3 } 
	{ C_array3_ce0 sc_out sc_logic 1 signal 3 } 
	{ C_array3_we0 sc_out sc_logic 1 signal 3 } 
	{ C_array3_d0 sc_out sc_lv 32 signal 3 } 
	{ C_array3_q0 sc_in sc_lv 32 signal 3 } 
	{ C_array4_address0 sc_out sc_lv 2 signal 4 } 
	{ C_array4_ce0 sc_out sc_logic 1 signal 4 } 
	{ C_array4_we0 sc_out sc_logic 1 signal 4 } 
	{ C_array4_d0 sc_out sc_lv 32 signal 4 } 
	{ C_array4_q0 sc_in sc_lv 32 signal 4 } 
	{ C_array5_address0 sc_out sc_lv 2 signal 5 } 
	{ C_array5_ce0 sc_out sc_logic 1 signal 5 } 
	{ C_array5_we0 sc_out sc_logic 1 signal 5 } 
	{ C_array5_d0 sc_out sc_lv 32 signal 5 } 
	{ C_array5_q0 sc_in sc_lv 32 signal 5 } 
	{ C_array6_address0 sc_out sc_lv 2 signal 6 } 
	{ C_array6_ce0 sc_out sc_logic 1 signal 6 } 
	{ C_array6_we0 sc_out sc_logic 1 signal 6 } 
	{ C_array6_d0 sc_out sc_lv 32 signal 6 } 
	{ C_array6_q0 sc_in sc_lv 32 signal 6 } 
	{ C_array7_address0 sc_out sc_lv 2 signal 7 } 
	{ C_array7_ce0 sc_out sc_logic 1 signal 7 } 
	{ C_array7_we0 sc_out sc_logic 1 signal 7 } 
	{ C_array7_d0 sc_out sc_lv 32 signal 7 } 
	{ C_array7_q0 sc_in sc_lv 32 signal 7 } 
	{ A_array_address0 sc_out sc_lv 4 signal 8 } 
	{ A_array_ce0 sc_out sc_logic 1 signal 8 } 
	{ A_array_q0 sc_in sc_lv 32 signal 8 } 
	{ A_array8_address0 sc_out sc_lv 4 signal 9 } 
	{ A_array8_ce0 sc_out sc_logic 1 signal 9 } 
	{ A_array8_q0 sc_in sc_lv 32 signal 9 } 
	{ A_array9_address0 sc_out sc_lv 4 signal 10 } 
	{ A_array9_ce0 sc_out sc_logic 1 signal 10 } 
	{ A_array9_q0 sc_in sc_lv 32 signal 10 } 
	{ A_array10_address0 sc_out sc_lv 4 signal 11 } 
	{ A_array10_ce0 sc_out sc_logic 1 signal 11 } 
	{ A_array10_q0 sc_in sc_lv 32 signal 11 } 
	{ A_array11_address0 sc_out sc_lv 4 signal 12 } 
	{ A_array11_ce0 sc_out sc_logic 1 signal 12 } 
	{ A_array11_q0 sc_in sc_lv 32 signal 12 } 
	{ A_array12_address0 sc_out sc_lv 4 signal 13 } 
	{ A_array12_ce0 sc_out sc_logic 1 signal 13 } 
	{ A_array12_q0 sc_in sc_lv 32 signal 13 } 
	{ A_array13_address0 sc_out sc_lv 4 signal 14 } 
	{ A_array13_ce0 sc_out sc_logic 1 signal 14 } 
	{ A_array13_q0 sc_in sc_lv 32 signal 14 } 
	{ A_array14_address0 sc_out sc_lv 4 signal 15 } 
	{ A_array14_ce0 sc_out sc_logic 1 signal 15 } 
	{ A_array14_q0 sc_in sc_lv 32 signal 15 } 
	{ A_dim sc_in sc_lv 64 signal 16 } 
	{ A_numel_read sc_in sc_lv 64 signal 17 } 
	{ B_dim sc_in sc_lv 64 signal 18 } 
	{ B_numel_read sc_in sc_lv 64 signal 19 } 
	{ p_read2 sc_in sc_lv 64 signal 20 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array", "role": "address0" }} , 
 	{ "name": "C_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "ce0" }} , 
 	{ "name": "C_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "we0" }} , 
 	{ "name": "C_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array", "role": "d0" }} , 
 	{ "name": "C_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array", "role": "q0" }} , 
 	{ "name": "C_array1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array1", "role": "address0" }} , 
 	{ "name": "C_array1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array1", "role": "ce0" }} , 
 	{ "name": "C_array1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array1", "role": "we0" }} , 
 	{ "name": "C_array1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array1", "role": "d0" }} , 
 	{ "name": "C_array1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array1", "role": "q0" }} , 
 	{ "name": "C_array2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array2", "role": "address0" }} , 
 	{ "name": "C_array2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array2", "role": "ce0" }} , 
 	{ "name": "C_array2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array2", "role": "we0" }} , 
 	{ "name": "C_array2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array2", "role": "d0" }} , 
 	{ "name": "C_array2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array2", "role": "q0" }} , 
 	{ "name": "C_array3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array3", "role": "address0" }} , 
 	{ "name": "C_array3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array3", "role": "ce0" }} , 
 	{ "name": "C_array3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array3", "role": "we0" }} , 
 	{ "name": "C_array3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array3", "role": "d0" }} , 
 	{ "name": "C_array3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array3", "role": "q0" }} , 
 	{ "name": "C_array4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array4", "role": "address0" }} , 
 	{ "name": "C_array4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array4", "role": "ce0" }} , 
 	{ "name": "C_array4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array4", "role": "we0" }} , 
 	{ "name": "C_array4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array4", "role": "d0" }} , 
 	{ "name": "C_array4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array4", "role": "q0" }} , 
 	{ "name": "C_array5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array5", "role": "address0" }} , 
 	{ "name": "C_array5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array5", "role": "ce0" }} , 
 	{ "name": "C_array5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array5", "role": "we0" }} , 
 	{ "name": "C_array5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array5", "role": "d0" }} , 
 	{ "name": "C_array5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array5", "role": "q0" }} , 
 	{ "name": "C_array6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array6", "role": "address0" }} , 
 	{ "name": "C_array6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array6", "role": "ce0" }} , 
 	{ "name": "C_array6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array6", "role": "we0" }} , 
 	{ "name": "C_array6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array6", "role": "d0" }} , 
 	{ "name": "C_array6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array6", "role": "q0" }} , 
 	{ "name": "C_array7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "C_array7", "role": "address0" }} , 
 	{ "name": "C_array7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array7", "role": "ce0" }} , 
 	{ "name": "C_array7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array7", "role": "we0" }} , 
 	{ "name": "C_array7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array7", "role": "d0" }} , 
 	{ "name": "C_array7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array7", "role": "q0" }} , 
 	{ "name": "A_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array", "role": "address0" }} , 
 	{ "name": "A_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array", "role": "ce0" }} , 
 	{ "name": "A_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array", "role": "q0" }} , 
 	{ "name": "A_array8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array8", "role": "address0" }} , 
 	{ "name": "A_array8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array8", "role": "ce0" }} , 
 	{ "name": "A_array8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array8", "role": "q0" }} , 
 	{ "name": "A_array9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array9", "role": "address0" }} , 
 	{ "name": "A_array9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array9", "role": "ce0" }} , 
 	{ "name": "A_array9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array9", "role": "q0" }} , 
 	{ "name": "A_array10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array10", "role": "address0" }} , 
 	{ "name": "A_array10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array10", "role": "ce0" }} , 
 	{ "name": "A_array10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array10", "role": "q0" }} , 
 	{ "name": "A_array11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array11", "role": "address0" }} , 
 	{ "name": "A_array11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array11", "role": "ce0" }} , 
 	{ "name": "A_array11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array11", "role": "q0" }} , 
 	{ "name": "A_array12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array12", "role": "address0" }} , 
 	{ "name": "A_array12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array12", "role": "ce0" }} , 
 	{ "name": "A_array12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array12", "role": "q0" }} , 
 	{ "name": "A_array13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array13", "role": "address0" }} , 
 	{ "name": "A_array13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array13", "role": "ce0" }} , 
 	{ "name": "A_array13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array13", "role": "q0" }} , 
 	{ "name": "A_array14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_array14", "role": "address0" }} , 
 	{ "name": "A_array14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array14", "role": "ce0" }} , 
 	{ "name": "A_array14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array14", "role": "q0" }} , 
 	{ "name": "A_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_dim", "role": "default" }} , 
 	{ "name": "A_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_numel_read", "role": "default" }} , 
 	{ "name": "B_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_dim", "role": "default" }} , 
 	{ "name": "B_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_numel_read", "role": "default" }} , 
 	{ "name": "p_read2", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "p_read2", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "25", "28", "29", "30", "31", "32", "33", "34", "35", "36"],
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
					{"ID" : "20", "SubInstance" : "grp_k2c_idx2sub_fu_1211", "Port" : "shape"}]},
			{"Name" : "dense_14_kernel_shap", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_k2c_idx2sub_fu_1211", "Port" : "shape"}]},
			{"Name" : "dense_14_fwork", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "dense_14_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_14_kernel_arra_1", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_13_output_shap_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_shap_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_fwork_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_7_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_6_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_4_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_3_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_2_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_14_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permA_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permB_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeA_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeB_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpA_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpB_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Asub_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bsub_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1211", "Parent" : "0", "Child" : ["21", "22", "23", "24"],
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
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1211.sample_urem_64ns_bkb_U1", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1211.sample_udiv_64ns_cud_U2", "Parent" : "20"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1211.sample_urem_64ns_bkb_U3", "Parent" : "20"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_idx2sub_fu_1211.sample_udiv_64ns_cud_U4", "Parent" : "20"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_1223", "Parent" : "0", "Child" : ["26", "27"],
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
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_1223.sample_mul_64s_64dEe_U11", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_1223.sample_mul_64s_64dEe_U12", "Parent" : "25"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fadd_32ns_ocq_U160", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_fmul_32ns_pcA_U161", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_udiv_64ns_Shg_U162", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U163", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_57ns_6Thq_U164", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_64s_57UhA_U165", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mux_864_32rcU_U166", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_mul_14VhK_U167", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sample_mul_mul_8nWhU_U168", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		ndim {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	C_array { ap_memory {  { C_array_address0 mem_address 1 2 }  { C_array_ce0 mem_ce 1 1 }  { C_array_we0 mem_we 1 1 }  { C_array_d0 mem_din 1 32 }  { C_array_q0 mem_dout 0 32 } } }
	C_array1 { ap_memory {  { C_array1_address0 mem_address 1 2 }  { C_array1_ce0 mem_ce 1 1 }  { C_array1_we0 mem_we 1 1 }  { C_array1_d0 mem_din 1 32 }  { C_array1_q0 mem_dout 0 32 } } }
	C_array2 { ap_memory {  { C_array2_address0 mem_address 1 2 }  { C_array2_ce0 mem_ce 1 1 }  { C_array2_we0 mem_we 1 1 }  { C_array2_d0 mem_din 1 32 }  { C_array2_q0 mem_dout 0 32 } } }
	C_array3 { ap_memory {  { C_array3_address0 mem_address 1 2 }  { C_array3_ce0 mem_ce 1 1 }  { C_array3_we0 mem_we 1 1 }  { C_array3_d0 mem_din 1 32 }  { C_array3_q0 mem_dout 0 32 } } }
	C_array4 { ap_memory {  { C_array4_address0 mem_address 1 2 }  { C_array4_ce0 mem_ce 1 1 }  { C_array4_we0 mem_we 1 1 }  { C_array4_d0 mem_din 1 32 }  { C_array4_q0 mem_dout 0 32 } } }
	C_array5 { ap_memory {  { C_array5_address0 mem_address 1 2 }  { C_array5_ce0 mem_ce 1 1 }  { C_array5_we0 mem_we 1 1 }  { C_array5_d0 mem_din 1 32 }  { C_array5_q0 mem_dout 0 32 } } }
	C_array6 { ap_memory {  { C_array6_address0 mem_address 1 2 }  { C_array6_ce0 mem_ce 1 1 }  { C_array6_we0 mem_we 1 1 }  { C_array6_d0 mem_din 1 32 }  { C_array6_q0 mem_dout 0 32 } } }
	C_array7 { ap_memory {  { C_array7_address0 mem_address 1 2 }  { C_array7_ce0 mem_ce 1 1 }  { C_array7_we0 mem_we 1 1 }  { C_array7_d0 mem_din 1 32 }  { C_array7_q0 mem_dout 0 32 } } }
	A_array { ap_memory {  { A_array_address0 mem_address 1 4 }  { A_array_ce0 mem_ce 1 1 }  { A_array_q0 mem_dout 0 32 } } }
	A_array8 { ap_memory {  { A_array8_address0 mem_address 1 4 }  { A_array8_ce0 mem_ce 1 1 }  { A_array8_q0 mem_dout 0 32 } } }
	A_array9 { ap_memory {  { A_array9_address0 mem_address 1 4 }  { A_array9_ce0 mem_ce 1 1 }  { A_array9_q0 mem_dout 0 32 } } }
	A_array10 { ap_memory {  { A_array10_address0 mem_address 1 4 }  { A_array10_ce0 mem_ce 1 1 }  { A_array10_q0 mem_dout 0 32 } } }
	A_array11 { ap_memory {  { A_array11_address0 mem_address 1 4 }  { A_array11_ce0 mem_ce 1 1 }  { A_array11_q0 mem_dout 0 32 } } }
	A_array12 { ap_memory {  { A_array12_address0 mem_address 1 4 }  { A_array12_ce0 mem_ce 1 1 }  { A_array12_q0 mem_dout 0 32 } } }
	A_array13 { ap_memory {  { A_array13_address0 mem_address 1 4 }  { A_array13_ce0 mem_ce 1 1 }  { A_array13_q0 mem_dout 0 32 } } }
	A_array14 { ap_memory {  { A_array14_address0 mem_address 1 4 }  { A_array14_ce0 mem_ce 1 1 }  { A_array14_q0 mem_dout 0 32 } } }
	A_dim { ap_none {  { A_dim in_data 0 64 } } }
	A_numel_read { ap_none {  { A_numel_read in_data 0 64 } } }
	B_dim { ap_none {  { B_dim in_data 0 64 } } }
	B_numel_read { ap_none {  { B_numel_read in_data 0 64 } } }
	p_read2 { ap_none {  { p_read2 in_data 0 64 } } }
}
