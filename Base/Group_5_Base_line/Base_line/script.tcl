############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Group_5_Base_line
set_top sample0
add_files Group_5_Base_line/sample0.h
add_files Group_5_Base_line/sample0.c
add_files -tb Group_5_Base_line/sample0_test_suite.c -cflags "-Wno-unknown-pragmas -Wno-unknown-pragmas -Wno-unknown-pragmas"
open_solution "Base_line"
set_part {xc7a200tfbg676-2} -tool vivado
create_clock -period 5 -name default
#source "./Group_5_Base_line/Base_line/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog
