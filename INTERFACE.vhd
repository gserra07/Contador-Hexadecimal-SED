----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:15:31 10/23/2014 
-- Design Name: 
-- Module Name:    TOP - Behavioral 
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

entity INTERFACE is
	PORT ( 
			clk : IN std_logic; -- posible pin M16 -- RELOJ
			code : IN std_logic_vector(7 DOWNTO 0); -- INTERRUPTORES
			digsel : IN std_logic_vector(3 DOWNTO 0); -- BOTONES, de izq a drch: Reset, UP, DOWN, LOAD
			digctrl : OUT std_logic_vector(3 DOWNTO 0); -- QUE DISPLAY FUNCIONA O SE ENCIENDE
			segment : OUT std_logic_vector(7 DOWNTO 0)  -- DISPLAY 7 SEGMENTOS (LEDS)
			);
end INTERFACE;

architecture Behavioral of INTERFACE is

	COMPONENT Contador_A_7seg is
		Port ( CLK : in  STD_LOGIC;
				  ENABLE : in  STD_LOGIC;
				  UP : in  STD_LOGIC;
				  DOWN : in  STD_LOGIC;
				  LOAD : in  STD_LOGIC;
				  RESET : in  STD_LOGIC;
				  A : in  STD_LOGIC_VECTOR(7 downto 0);
				  B : out  STD_LOGIC_VECTOR(15 downto 0)
				  );
	END COMPONENT;
	
	COMPONENT CLOCK_DIVISOR is
		Port ( clk: in STD_LOGIC;
				 reset: in STD_LOGIC;
				 DIVISOR: IN INTEGER;
				 output: out STD_LOGIC
				 );
	END COMPONENT;
	
	COMPONENT Mascara is
		Port (
			Display : in  STD_LOGIC_VECTOR(15 downto 0);
			CLK : in  STD_LOGIC;
			Output : out  STD_LOGIC_VECTOR(7 downto 0);
			Display_Select : out  STD_LOGIC_VECTOR(3 downto 0)
		);
	END COMPONENT;

	SIGNAL HIGH: STD_LOGIC:= '1';
	SIGNAL COUNT: STD_LOGIC_VECTOR(15 downto 0);
	SIGNAL CLK_ADAPTADO_CONTADOR: STD_LOGIC;
	SIGNAL CLK_ADAPTADO_MASCARA: STD_LOGIC;
begin
		divisor_frecuencia_CONTADOR: CLOCK_DIVISOR port map(
			clk => clk,
			reset => digsel(3),
			DIVISOR => 25000000,
			output => CLK_ADAPTADO_CONTADOR
		);
		
		divisor_frecuencia_MASCARA: CLOCK_DIVISOR port map(
			clk => clk,
			reset => digsel(3),
			DIVISOR => 100000,
			output => CLK_ADAPTADO_MASCARA
		);
		
		contador: Contador_A_7seg port map(
			CLK => CLK_ADAPTADO_CONTADOR,
			ENABLE => HIGH,
			UP => digsel(0),
			DOWN => digsel(1),
			LOAD => digsel(2),
			RESET => digsel(3),
			A => code,
			B => COUNT
		);
		
		Visualizador: Mascara port map(
			Display => COUNT,
			CLK => CLK_ADAPTADO_MASCARA,
			Output => segment,
			Display_Select => digctrl
		);

end Behavioral;

