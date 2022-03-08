# **Architecture Details**

## Sensors Used:

### **Thermistor**
Thermistor sensor is a resistance thermometer highly sensitive to small changes in temperature, 
and is an economical means of precisely sensing heat over a limited range of temperatures. 
These sensors utilize a metal oxide whose change in resistance is typically an inverse function of the change in temperature.

## Explanation:
<<<<<<< HEAD
The thermistor will capture the analog data from the environment which will be converted to digital data using ADC port on ATMEGA32.
The data is in the form of resistor reading, using the resistor value and using the formula the resistor value is then converted into
temperature value. Then the temperature and the resistor value both are dsiplayed on the LCD which is connected to the AVR.
The temperature value is then compared with some value and if the temperature exceeds some particular value then the AirCon is 
switched on automatically.
=======
The LDR will sense the light in the room and as the resistance of the LDR is sensitive to the light the
bulb would be turned on when the resistance increases. Similarly the thermistor will give its data to the
microcontroller and the microcontroller will then interpret the data and control the speed of the DC motor
connected to it.
There would be one override switch which will act as an external interrupt for the circuit, which 
can turn on or turn off the appliances based on their current state.

![Block_Diagram png](https://user-images.githubusercontent.com/47058068/157283555-94f0c6a3-974f-41b5-820b-cfad99d199cd.png)


![FlowChart png](https://user-images.githubusercontent.com/47058068/157283578-26924590-314a-4497-91cb-9c89f20c990e.png)
>>>>>>> 7ec7720cbea95a86db6acbca7898cbdf268ca1c5
