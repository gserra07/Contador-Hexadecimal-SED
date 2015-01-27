--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:09:53 01/19/2015
-- Design Name:   
-- Module Name:   C:/Users/Tarzan/Desktop/glkkkkk+/SED OP/FFSR_OVERFLOW_tb.vhd
-- Project Name:  jod
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FFSR_OVERFLOW
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY FFSR_OVERFLOW_tb IS
END FFSR_OVERFLOW_tb;
 
ARCHITECTURE behavior OF FFSR_OVERFLOW_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FFSR_OVERFLOW
    PORT(
         SET : IN  std_logic;
         RESET : IN  std_logic;
         CLK : IN  std_logic;
         Q : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal SET : std_logic := '0';
   signal RESET : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Q : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FFSR_OVERFLOW PORT MAP (
          SET => SET,
          RESET => RESET,
          CLK => CLK,
          Q => Q
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

		wait for 100 ns;
		
		SET <='1';
		RESET <='0';
		Wait for 100ns;
		assert Q = '1'
			report "problema en estado 01"
			severity warning;
			
		SET <='0';
		RESET <='1';
		Wait for 100ns;
		assert Q = '0'
			report "problema en estado 10"
			severity warning;
			
		SET <='1';
		RESET <='1';
		Wait for 100ns;
		assert Q = '1' 
			report "problema en estado 11"
			severity warning;
			
		SET <='0';
		RESET <='0';
		Wait for 100ns;
		assert Q = '1'
			report "problema en estado 00"
			severity warning;
      -- insert stimulus here 

      wait;
   end process;

END;
