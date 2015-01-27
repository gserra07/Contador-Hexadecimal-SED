----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:49:10 01/19/2015 
-- Design Name: 
-- Module Name:    FFSR_OVERFLOW - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity FFSR_OVERFLOW is
    Port ( SET : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Q : out  STD_LOGIC);
end FFSR_OVERFLOW;

architecture Behavioral of FFSR_OVERFLOW is
SIGNAL ERROR : STD_LOGIC := '0';

begin
	process(CLK,SET,RESET)
		begin
			if reset = '1' then error <= '0';
			elsif clk'event and clk = '1' then
				if SET = '1' then error <= '1'; 
				end if;
			end if;
	end process;
	
	Q <= ERROR;

end Behavioral;

