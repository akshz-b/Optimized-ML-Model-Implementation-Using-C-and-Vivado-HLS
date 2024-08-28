############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Group_5
set_top sample
add_files Group_5/sample.h
add_files Group_5/sample.c
add_files -tb Group_5/sample_test_suite.c -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "Latency_final"
set_part {xc7a200tfbg676-2}
create_clock -period 5 -name default
#source "./Group_5/Latency_final/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
