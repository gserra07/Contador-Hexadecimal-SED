----------------------------------------------------------------------------------
-- Company: ETSIDI
-- Engineer: Daniel Torres Aguilar 
--				 Guillermo Serrano Martinez
--				 Miguel Urias Martinez
-- 
-- Create Date:    12:19:39 12/15/2014 
-- Design Name: 	 Contador de 8 bits
-- Module Name:    Contador_8b - Structural 
-- Project Name:   Contador_Hexadecimal
-- Target Devices: Spartan-3
-- Tool versions:  
-- Description:    Contador síncrono Hexadecimal de 00 hasta 2F, ascendente o descendente
--						 con reset y carga asíncrona y entrada Enable. Se considera 
--						 overflow el reinicio de de la cuenta.
--
-- Dependencies:   
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: Nuestro contador es capaz de contar desde 00 hasta FF, como
--								en la práctica especifican que el contador cuente hasta 2F
--								lo hemos capado.
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Contador_8b is
    Port ( 
			  CLK       : in  STD_LOGIC;
           ENABLE    : in  STD_LOGIC;
           UP        : in  STD_LOGIC;
           DOWN      : in  STD_LOGIC;
           LOAD      : in  STD_LOGIC;
           RESET     : in  STD_LOGIC;
			  PRE_CARGA : in  STD_LOGIC_VECTOR(7 downto 0);
           OVF 		: out  STD_LOGIC;
			  B   		: out  STD_LOGIC_VECTOR(7 downto 0)
			  );
end Contador_8b;

architecture STRUCTURAL of Contador_8b is

	component Contador_4b
		Port ( 
			  UP     : in  STD_LOGIC;
           DOWN   : in  STD_LOGIC;
           CLK    : in  STD_LOGIC;
           LOAD   : in  STD_LOGIC;
           CARGA  : in  STD_LOGIC_VECTOR(3 downto 0);
           RESET  : in  STD_LOGIC;
			  TRIGGER: in STD_LOGIC;
           OUTPUT : out  STD_LOGIC_VECTOR(3 downto 0);
           Q      : out  STD_LOGIC;
			  Q_N    : out STD_LOGIC
		);
	end component;
	
	component FFJK
		port(
			J         : in  STD_LOGIC;
         K         : in  STD_LOGIC;
         CLK       : in  STD_LOGIC;
         LOAD      : in  STD_LOGIC;
         RESET     : in  STD_LOGIC;
         PRE_CARGA : in  STD_LOGIC;
         Q         : out  STD_LOGIC;
         Q_N       : out  STD_LOGIC
		);
	end component;
	
	component FFSR
		port(
			S   : in  STD_LOGIC;
         R   : in  STD_LOGIC;
         CLK : in  STD_LOGIC;
         Q   : out  STD_LOGIC;
         Q_N : out  STD_LOGIC
		);
	end component;
	
	component FFSR_OVERFLOW
		port(
			SET : IN STD_LOGIC;
			RESET: IN STD_LOGIC;
			CLK: IN STD_LOGIC;
			Q: OUT STD_LOGIC
		);
	end component;
	
	component AND2
		port(
			I0 : in  STD_LOGIC;
         I1 : in  STD_LOGIC;
         O  : out  STD_LOGIC
		);
	end component;
	
	component AND3
		Port ( 
			I0 : in  STD_LOGIC;
         I1 : in  STD_LOGIC;
         I2 : in  STD_LOGIC;
          O : out  STD_LOGIC
		);
	end component;
	
	component OR2
		Port ( 
			I0 : in  STD_LOGIC;
         I1 : in  STD_LOGIC;
         O  : out  STD_LOGIC
		);
	end component;
	
	component INV
		Port ( 
			I : in  STD_LOGIC;
         O : out  STD_LOGIC
		);
	end component;
	
	constant high           : STD_LOGIC:='1';
	constant MAX_COUNT      : STD_LOGIC_VECTOR(7 downto 0) := "00101111";
	
	-- señales auxiliares
	signal stop,RN,up_n     : STD_LOGIC;
	
	-- entradas y salidas flip-flops
	signal S1,R1,R2,S2      : STD_LOGIC;
	signal ascenso,descenso : STD_LOGIC;
	signal error  : STD_LOGIC;
	
	-- entradas y salidas contadores 4 bits
	signal cargas           : STD_LOGIC_VECTOR(7 DOWNTO 0):= "00000000";
	signal resultado        : STD_LOGIC_VECTOR(7 downto 0):= "00000000";
	signal salidas,salidas_n: STD_LOGIC_VECTOR(1 downto 0);
	signal overflow         : STD_LOGIC_VECTOR(2 downto 0);
	signal AUX1,AUX2,AUX3   : STD_LOGIC;
	
	-- Señal para limitar la cuenta a 2F
	signal Limit_2F         : STD_LOGIC:='0';
	signal INV_AUX          : STD_LOGIC:='0';
	signal Limit_UP         : STD_LOGIC:='0';
	signal Stopping_count   : STD_LOGIC:='0';
	signal Limit_DOWN       : STD_LOGIC:='0';
	-- signal Start_LOAD       : STD_LOGIC:='0'; -- Ya no se utiliza
	signal carga            : STD_LOGIC:='0'; -- Carga especial al descender de 0 a 2 

	
begin
		-- Comenzamos por el filtro de la señal de reloj, que solo pasara cuando Enable este activo, paralizando el contador
		-- en caso contrario.
		FILTRO_DE_RELOJ   : AND2 port map(CLK,ENABLE,stop);
		
		-- El ascenso y descenso se controla mediante un Flip Flop tipo SR con preferencia en el SET
		UP_NEGADO         : INV port map(UP,up_n);
		ENTRADA_RESET_A_D : AND2 port map(up_n,DOWN,R1);
		ENTRADA_SET_A_D   : S1 <= UP;
		FLIP_FLOP_A_D     : FFSR port map(S1,R1,CLK,ascenso,descenso);
		
		-- Instanciación de los contadores de 4 bits
		LOW_LEVEL         : Contador_4b port map(
										UP      => ascenso,
										DOWN    => descenso,
										CLK     => stop,
										LOAD    => carga,
										CARGA   => cargas(3 downto 0),
										RESET   => stopping_count,
										TRIGGER => HIGH,
										OUTPUT  => resultado(3 downto 0),
										Q       => salidas(0), -- Si cuenta es F => Q es 1
										Q_N     => salidas_n(0) -- Si cuenta es 0 => Q_N es 1
										);
										
			-- Obviamente los dos contadores estan relacionados y esta sinergia lo hacemos gracias al trigger
			-- lo que hacemos es condicionar el funcionamiento del segundo contador a la llegada al limite del
			-- contador anterior. Nota: Q, guardado en salidas(0), nos da 1 en caso de que el contador llegue a 1111
			-- ,en caso contrario tendrá un valor 0. Q_N nos da 1 en caso de que el contador llegue a 0000, en caso contario
			-- tendra valor 0.
			
			MAXIMO_ASCENSO : AND2 port map(ascenso,salidas(0),AUX1);
		   MINIMO_DESCENSO: AND2 port map(descenso,salidas_n(0),AUX2);
			TRIGGER_A2:OR2  port map(AUX1,AUX2,AUX3);
										
		HIGH_LEVEL        : Contador_4b port map(
										UP      => ascenso,
										DOWN    => descenso,
										CLK     => stop,
										LOAD    => carga,
										CARGA   => cargas(7 downto 4),
										RESET   => stopping_count,
										TRIGGER => AUX3,
										OUTPUT  => resultado(7 downto 4),
										Q       => salidas(1),  -- Si cuenta es F => Q es 1
										Q_N     => salidas_n(1) -- Si cuenta es 0 => Q_N es 1
										);
										
		-- Control del overflow, se considera overflow el reinicio de la cuenta. Para ello utilizamos un flip-flop SR
		-- con prefencia en el SET
		
			-- Consideramos overflow, Aumentar en 1 estando en 2F
				-- Primero detectamos que el contador HIGH LEVEL llega a 2.
				RESULTADO4_NEGADO: INV  port map(resultado(4),INV_AUX);
				CONTADOR2_EQUAL_2: AND2 port map(resultado(5),INV_AUX,Limit_UP); -- ESTO ES "xx10"
				Limite_alcanzado:   AND2 port map(resultado(4),resultado(5),Limit_2F); -- Hemos superado el limite "xx11"
				-- 						!!IMPORTANTE!!
				-- El método utilizado para detectar que el contador de HIGH LEVEL llega a 2
				-- solo es válido gracias al Adaptador de entrada, si se elimina este elemento
				-- es posible que el contador comienza fuera del rango 2F y el paso anterior no
				-- lo detecte.
				
			OVERFLOW_TOP   : AND3 port map(Limit_UP,salidas(0),ascenso,overflow(0));
			-- Consideramos overflow Disminuir en 1 estando en 00
			OVERFLOW_BOT   : AND3 port map(salidas_n(0),salidas_n(1),descenso,overflow(1));
			-- Salida de overflow
		   SEÑAL_OVERFLOW : OR2  port map(overflow(0),overflow(1),overflow(2));
		
			-- Damos prefencia al RESET del contador de 8 bits, para ello lo convertimos en la entrada set del flip-flop SR
			RESET_NEGADO      : INV  port map(RESET,rn);
		   ENTRADA_SET_OVF   : AND2 port map(overflow(2),rn,S2);
			ENTRADA_RESET_OVF : R2 <= RESET;
			FLIP_FLOP_OVF     : FFSR_OVERFLOW port map(S2,R2,CLK,error);
			
--			process(clk,overflow(2),reset)
--			begin
--				if reset = '1' then error <= '0';
--				elsif clk'event and clk = '1' then
--					if overflow(2) = '1' then error <= '1'; 
--					end if;
--				end if;
--			end process;
			
		--Limitacion de la señal
		-- + Limite ascendente, si se sobrepasa el limite ascendente se reinicia la cuenta a 0, es decir 2F -> 0
		 Entrada_de_reseteo: OR2 port map(RESET,Limit_2F,Stopping_count);
		
		-- + Limite descendente, si se sobrepasa el limite ascendente se reinicia la cuenta a 2F, es decir 0 -> 2F
		SEÑAL_LIMITACION_DESCENDENTE : Limit_DOWN <= overflow(1);
		
		-----------------------------------------------------------------------------------------------------
		-- Debido a la complejidad que supone hacer la precarga de 2F, esta parte la haremos en Behavioral --
		--PROCESS(Limit_DOWN)																										--
	   --BEGIN																															--
		--	IF Limit_DOWN = '1' THEN																								--
		--			cargas <= MAX_COUNT;																								--
		--			Start_LOAD <= '1';																								--
		--	ELSE																															--
		--		Start_LOAD <= '0';																									--
		--	END IF;																														--
		--END PROCESS;																													--
		--																																	--
		--SELECTOR_PRECARGA            : OR2 port map(Start_LOAD,LOAD,CARGA);										--
		-----------------------------------------------------------------------------------------------------
		
		SELECTOR_PRECARGA					 : OR2 port map(Limit_DOWN,LOAD,CARGA);
		
		-------------------------------------------------------------------------------------------
		--Proteccion contra mal uso del contador    |||  SOLUCIONADO CON EL ADAPATADOR DE ENTRADA--
		--PROCESS(LOAD)																						  		  --
		--BEGIN																											  --
		--	IF cargas > MAX_COUNT AND LOAD'EVENT AND LOAD = '0' THEN										  --
		--		IF ascenso = '1' THEN Stopping_count <= '1';        -- Poner limite Inferior 00    --
		--		ELSE			          cargas <= MAX_COUNT;			 -- Poner limite superior 2F    --					
		--		END IF;																									  --
		--	END IF;																										  --
		--END PROCESS;																									  --
		-------------------------------------------------------------------------------------------
		-- Asignaciones
	
		cargas <= PRE_CARGA WHEN Limit_DOWN = '0' ELSE
					 MAX_COUNT;
		B      <= resultado;
	   OVF    <= error;
	

end STRUCTURAL;