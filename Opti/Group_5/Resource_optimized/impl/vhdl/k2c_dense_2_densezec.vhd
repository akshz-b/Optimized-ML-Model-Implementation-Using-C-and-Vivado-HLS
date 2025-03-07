-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity k2c_dense_2_densezec_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 32
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of k2c_dense_2_densezec_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111011100100010001111010000011", 
    1 => "00111100111100110010011111101101", 
    2 => "00111011011100100001000110110010", 
    3 => "00111100011110011110000101100011", 
    4 => "00111010101111101110100110010000", 
    5 => "00111100011101010000100010000100", 
    6 => "00111101001011001010011000110010", 
    7 => "10111100001111100110010110110111", 
    8 => "00111011110111111001011111011100", 
    9 => "10111100100100010010001100000000", 
    10 => "00111100000100101000111010100101", 
    11 => "00111100110010010110110111011111", 
    12 => "10111011010000010001110100011000", 
    13 => "00111100110000011110101001011011", 
    14 => "00111101000010000011100111110010", 
    15 => "00111101000000101100011000011110", 
    16 => "10111011010010100100000100111111", 
    17 => "00111101001110110010111001000101", 
    18 => "00111101001000111000100111011100", 
    19 => "10111100011101110100011101111010", 
    20 => "00111010110001110111110010110100", 
    21 => "00111101010000000010010001111101", 
    22 => "10111100011000111100101111101000", 
    23 => "00111101001011101000000111110010", 
    24 => "00111101001001100101001101111001", 
    25 => "00111100100111111001101110010001", 
    26 => "00111101001010011000110001010110", 
    27 => "10111100000100101010010011101110", 
    28 => "00111101000001000111110010101100", 
    29 => "00111100011010101011010100111101", 
    30 => "10111100011000000010010111010010", 
    31 => "00111101001000011101000110101000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity k2c_dense_2_densezec is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 32;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of k2c_dense_2_densezec is
    component k2c_dense_2_densezec_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    k2c_dense_2_densezec_rom_U :  component k2c_dense_2_densezec_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


