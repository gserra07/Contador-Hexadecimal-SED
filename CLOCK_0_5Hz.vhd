----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:42:41 01/19/2015 
-- Design Name: 
-- Module Name:    CLOCK_0_5Hz - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CLOCK_DIVISOR is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  DIVISOR: IN INTEGER;
           output : out  STD_LOGIC);
end CLOCK_DIVISOR;

architecture Behavioral of CLOCK_DIVISOR is
    signal temporal: STD_LOGIC;
    signal contador: integer := 0;
begin
    divisor_frecuencia: process (reset, clk) begin
        if (reset = '1') then
            temporal <= '0';
            contador <= 0;
        elsif rising_edge(clk) then
            if (contador = DIVISOR) then
                temporal <= NOT(temporal);
                contador <= 0;
            else
                contador <= contador+1;
            end if;
        end if;
    end process;
     
    output <= temporal;
end Behavioral;

