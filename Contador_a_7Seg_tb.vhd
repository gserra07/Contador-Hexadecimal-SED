--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:51:58 12/15/2014
-- Design Name:   
-- Module Name:   C:/Users/daniel/Dropbox/Universidad/Semestre 7/Sis. digitales/laboratorio/jodido_guille/Contador_a_7Seg_tb.vhd
-- Project Name:  Contador_Hexadecimal
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Contador_A_7seg
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
 
ENTITY Contador_a_7Seg_tb IS
END Contador_a_7Seg_tb;
 
ARCHITECTURE behavior OF Contador_a_7Seg_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Contador_A_7seg
    PORT(
         CLK : IN  std_logic;
         ENABLE : IN  std_logic;
         UP : IN  std_logic;
         DOWN : IN  std_logic;
         LOAD : IN  std_logic;
         RESET : IN  std_logic;
         A : IN  std_logic_vector(7 downto 0);
         B : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal ENABLE : std_logic := '0';
   signal UP : std_logic := '0';
   signal DOWN : std_logic := '0';
   signal LOAD : std_logic := '0';
   signal RESET : std_logic := '0';
   signal A : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal B : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Contador_A_7seg PORT MAP (
          CLK => CLK,
          ENABLE => ENABLE,
          UP => UP,
          DOWN => DOWN,
          LOAD => LOAD,
          RESET => RESET,
          A => A,
          B => B
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
--      RESET <= '1';
--      wait for CLK_period*3;	
--		RESET <= '0';
--      wait for CLK_period*10;


      -- insert stimulus here 
		-- Comprobamos si los FF guardan el estado de forma asincrona
		UP <= '1';
		wait for 5 ns;
		assert UP = '1'
			report "problema en estado UP"
			severity warning;
		
		UP <= '0';
		wait for CLK_period;
		assert UP = '0'
			report "problema en estado UP"
			severity warning;
		
		ENABLE <= '1';
		wait for CLK_period*2;
		-- Volvemos a sincronizarnos con el reloj
		wait for 5 ns;
		-- Comprobamos como hace la cuenta ascendente
		A <= "0011"&"1110";
		LOAD <= '1';
		wait for 5 ns;
		assert LOAD = '1' and A = "0011"&"1110"
			report "problema en estado Load 1"
			severity warning;
		
		LOAD <= '0';
		wait for CLK_period*3;
		-- Deberia saltar la señal OVF "1XXXXXXX1XXXXXXX" y la quitamos
		RESET <= '1';
		wait for CLK_period;
		assert RESET = '1' and B = "10000001"&"10000001"
			report "problema en estado RESET=1"
			severity warning;
		
		RESET <= '0';
		wait for CLK_period;
		assert RESET = '0'
			report "problema en estado RESET=0"
			severity warning;
		
		-- Comprobamos como hace la cuenta descendente
		
		A <= "0001"&"0011";
		--wait for CLK_PERIOD;
		LOAD <= '1';
		DOWN <= '1';
		wait for CLK_PERIOD;
		assert LOAD = '1' and DOWN = '1'
			report "problema en estado LOAD&DOWN=1"
			severity warning;
		
		LOAD <= '0';
		DOWN <= '0';
		wait for CLK_period*5;
		assert LOAD = '0' and DOWN = '0'
			report "problema en estado LOAD&DOWN=0"
			severity warning;
		
		A <= "0000"&"0011";
		LOAD <= '1';
		wait for CLK_PERIOD ;assert LOAD = '1' and DOWN = '0' and A = "0000"&"0011"
			report "problema en estado LOAD&A2"
			severity warning;
		
		LOAD <= '0';
		wait for CLK_period*5;
		-- Deberia saltar de 0 a 2F y la señal de OVF"1XXXXXX1XXXXXX" y la quitamos
		RESET <= '1';
		wait for CLK_period;
		RESET<='0';
		-- Precarga erronea, superior a 2F
		-- + mientras estamos en Down
		A <= "0111"&"1111";
		LOAD <= '1';
		wait for CLK_period;
		LOAD <= '0';
		wait for CLK_period*5;
		assert LOAD = '0' and A = "0111"&"1111" and RESET = '0'
			report "problema en estado2 RESET=0&A"
			severity warning;
		-- + mientras estamos en UP
		UP <= '1';
		wait for 5 ns;
		UP <= '0';
		LOAD <= '1';
		wait for 5 ns;
		LOAD <= '0';
		wait for CLK_period*5;
		
		
		
		ASSERT FALSE
			report "FIN de la suministracion"
			severity failure;
			
			
   end process;

END;
