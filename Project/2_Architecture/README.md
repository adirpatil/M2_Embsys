# **Architecture Details**

## **Microcontroller Used**
### ATMEGA32
ATmega32 is eight-bit higher enactment microcontroller, it is manufactured by an Atmel.
It is founded on enriched RISC which stands for (Reduced Instruction Set Computing) design which consists of
131(one thirty-one) potent commands.
Mostly commands implement in one mechanism sequence. The maximum frequency at which it operates sixteen MHz.
It works on 1.8 to 5.5 volts.

### Pin configuration of ATMEGA32
|Pin#  |  	Type	   |                  Parameters                     |
|:-----|:--------------------|:------------------------------------------|
|Pin#1|	PB0 (XCK/T0)	|it is the zero pin of port B. |
|Pin#2|	PB1 (T1)	|it is the one no pin of port B. |
|Pin#3|	PB2 (INT2/AIN0)	|it is the no two pin of port B. |
|Pin#4|	PB3 (OC0/AIN1)|	it is the three no pin of port B. |
|Pin#5|	PB4 (SS)	|It is the no four-pin of port B. |
|Pin#6|	PB5 (Master Out Slave In)	|It is the pin no five of port B. |
|Pin#7|	PB6 (master in slave out)	|It is the pin no six of port B. |
|Pin#8|	PB7 (Serial clock)	|this is the pin no seven of port B. |
|Pin#9|	    RESET	        |It is the reset pin. |
|Pin#10|   Vcc	        |It is the supply voltage of plus five volts. |
|Pin#11|    	GND	    |It is the ground terminal. |
|Pin#12|       XTAL2	|it is linked with the  Crystal Oscillator. |
|Pin#13|	    XTAL1   |this pin is also linked with the Crystal Oscillator. |
|Pin#14|	PD0 (RXD)	|it is the zero pin of port D. |
|Pin#15|	PD1 (TXD)	|It is the pin no one of Port D. |
|Pin#16|	PD2 (INT0)	|it is the pin no two of port D. |
|Pin#17|	PD3 (INT1)	|it is the pin no three of port D. |
|Pin#18|	PD4 (OC1B)	|it is the pin no four of port D. |
|Pin#19|	PD5 (OC1A)	|it is the pin no five of port D. |
|Pin#20|	PD6 (ICP)	|it is the pin no six of port D. |
|Pin#21|	PD7 (OC2)	|it is the pin no seven of port D. |
|Pin#22|    PC0 (SCL)	|it is the pin no zero of port c. |
|Pin#23|	PC1 (SDA)	|it is the pin no one of port c. |
|Pin#24|	PC2 (TCK)	|it is the pin no two of port c. |
|Pin#25|	PC3 (TMS)	|it is the pin no three of port c. |
|Pin#26|	PC4 (TDO)	|it is the pin no four of port c. |
|Pin#27|	PC5 (TDI)	|it is the pin no five of port c. |
|Pin#28|	PC6 (TOSC1)	|it is the pin no six of port c. |
|Pin#29|	PC7 (TOSC2)	|it is the pin no seven of port seven. |
|Pin#30|    AVcc	    |It is the Vcc for interior ADC. |
|Pin#31|	GND	        |it is the ground terminal.|
|Pin#32|	AREF    	|It is the Analog Reference Pin for ADC.|
|Pin#33|	PA7 (A/DC7)	|it is the pin no seven for port A.|
|Pin#34|	PA6 (A/DC6)	|It is the pin no six for port A.|
|Pin#35|	PA5 (A/DC5)	|it is the pin no five for port A.|
|Pin#36|	PA4 (A/DC4)	|It is the pin no four for port A.|
|Pin#37|	PA3 (A/DC3)	|it is the pin no three for port A.|
|Pin#38|	PA2 (A/DC2)	||it is the pin no two for port A.|
|Pin#39|	PA1 (A/DC1)	|it is the pin no one for port A.|
|Pin#40|	PA0 (A/DC0)	|It is the pin no zero for port A.|

## Sensors Used:

### **Thermistor**
Thermistor sensor is a resistance thermometer highly sensitive to small changes in temperature, 
and is an economical means of precisely sensing heat over a limited range of temperatures. 
These sensors utilize a metal oxide whose change in resistance is typically an inverse function of the change in temperature.

## **Display**
A 16x2 LCD display is used to display. This display can provide 2 lines of 16 characters each.


## Explanation:

The thermistor will capture the analog data from the environment which will be converted to digital data using ADC port on ATMEGA32.
The data is in the form of resistor reading, using the resistor value and using the formula the resistor value is then converted into
temperature value. Then the temperature and the resistor value both are dsiplayed on the LCD which is connected to the AVR.
The temperature value is then compared with some value and if the temperature exceeds some particular value then the AirCon is 
switched on automatically.



![Block_Diagram](https://user-images.githubusercontent.com/47058068/157287824-f86a74f4-e910-4676-976b-6c9bb02011c0.png)


![FlowChart png](https://user-images.githubusercontent.com/47058068/157283578-26924590-314a-4497-91cb-9c89f20c990e.png)
