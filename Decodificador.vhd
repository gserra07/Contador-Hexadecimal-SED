----------------------------------------------------------------------------------
-- Company: ETSIDI
-- Engineer: Daniel Torres Aguilar 
--				 Guillermo Serrano Martinez
--				 Miguel Urias Martinez
-- 
-- Create Date:    12:19:39 11/23/2014 
-- Design Name: 	 Contador con conversor a 7 segmentos
-- Module Name:    Decodificador_A_7segemenos
-- Project Name:   Contador_Hexadecimal
-- Target Devices: Spartan-3
-- Tool versions:  
-- Description:    Este conversor convierte la señal proveniente de los contadores
--						 de 4 bits (0 - F) en la señal deseada para cada caso en los displays
-- Dependencies:   
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Decodificador is
    Port ( CODE : in  STD_LOGIC_VECTOR(3 DOWNTO 0);
           LED  : out  STD_LOGIC_VECTOR(6 DOWNTO 0)
			  );
end Decodificador;

architecture Dataflow of Decodificador is

begin
WITH CODE SELECT		
	LED <= "1000000" WHEN "0000",
			 "1111001" WHEN "0001",
			 "0100100" WHEN "0010",
			 "0110000" WHEN "0011",
			 "0011001" WHEN "0100",
			 "0010010" WHEN "0101",
			 "0000010" WHEN "0110",
			 "1111000" WHEN "0111",
			 "0000000" WHEN "1000",
			 "0011000" WHEN "1001",
			 "0001000" WHEN "1010",
			 "0000011" WHEN "1011",
			 "1000110" WHEN "1100",
			 "0100001" WHEN "1101",
			 "0000110" WHEN "1110",
			 "0001110" WHEN others;
end Dataflow;