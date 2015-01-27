----------------------------------------------------------------------------------
-- Company: ETSIDI
-- Engineer: Daniel Torres Aguilar 
--				 Guillermo Serrano Martinez
--				 Miguel Urias Martinez
-- 
-- Create Date:    12:19:39 11/23/2014 
-- Design Name: 	 Contador con conversor a 7 segmentos
-- Module Name:    Contador_A_7seg - Structural 
-- Project Name:   Contador_Hexadecimal
-- Target Devices: Spartan-3
-- Tool versions:  
-- Description:    Componente virtual. Su única función es unir la funcionamiento
--						 del conversor a 7 segmentos y el contador de 4 bits, para facilitar
--						 la compilacion y la configuración en la FPGA
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

entity Contador_A_7seg is
    Port ( CLK : in  STD_LOGIC;
           ENABLE : in  STD_LOGIC;
           UP : in  STD_LOGIC;
           DOWN : in  STD_LOGIC;
           LOAD : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           A : in  STD_LOGIC_VECTOR(7 downto 0);
           B : out  STD_LOGIC_VECTOR(15 downto 0)
			  );
end Contador_A_7seg;

architecture Structural of Contador_A_7seg is
	COMPONENT Contador_8b
	PORT(
		CLK : IN std_logic;
		ENABLE : IN std_logic;
		UP : IN std_logic;
		DOWN : IN std_logic;
		LOAD : IN std_logic;
		RESET : IN std_logic;
		PRE_CARGA : IN std_logic_vector(7 downto 0);          
		OVF : OUT std_logic;
		B : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
	
	COMPONENT Adaptador_entrada
	Port ( INPUT : in  STD_LOGIC_VECTOR(7 DOWNTO 0);
			  UP : in STD_LOGIC;
			  DOWN : IN STD_LOGIC;
           OUTPUT : out  STD_LOGIC_VECTOR(7 DOWNTO 0)
			  );
	END COMPONENT;
	
	COMPONENT Decodificador
	PORT(
		CODE : IN std_logic_vector(3 downto 0);          
		LED : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;
	
	SIGNAL OVF_signal : std_logic;
	SIGNAL Salidas_Contador: std_logic_vector(7 downto 0);
	SIGNAL Display1, Display2: std_logic_vector(6 downto 0);
	SIGNAL INPUT_CORREGIDO_POR_ADAPTADOR: STD_LOGIC_VECTOR(7 DOWNTO 0);
	
begin

	Adaptador_de_entrada: Adaptador_entrada PORT MAP(
		INPUT => A,
		UP => UP,
		DOWN => DOWN,
		OUTPUT => INPUT_CORREGIDO_POR_ADAPTADOR
	);
	
	Mapeo_Contador_8b: Contador_8b PORT MAP(
		CLK => CLK,
		ENABLE => ENABLE,
		UP => UP,
		DOWN => DOWN,
		LOAD => LOAD,
		RESET => RESET,
		PRE_CARGA => INPUT_CORREGIDO_POR_ADAPTADOR,
		OVF => OVF_signal,
		B => Salidas_Contador
	);
	
	Mapeo_Decodificador_Display1: Decodificador PORT MAP(
		CODE => Salidas_Contador(3 downto 0),
		LED => Display1
	);
	
	Mapeo_Decodificador_Display2: Decodificador PORT MAP(
		CODE => Salidas_Contador(7 downto 4),
		LED => Display2
	);
	
	B(0) <= NOT OVF_signal; -- LOGICA NEGADA
	B(7 downto 1) <= Display1;
	B(8) <= NOT OVF_signal; -- LOGICA NEGADA
	B(15 downto 9) <= Display2;

end Structural;