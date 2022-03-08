# **Architecture Details**

## Sensors Used:

### **Thermistor**
Thermistor sensor is a resistance thermometer highly sensitive to small changes in temperature, 
and is an economical means of precisely sensing heat over a limited range of temperatures. 
These sensors utilize a metal oxide whose change in resistance is typically an inverse function of the change in temperature.

## Explanation:
The thermistor will capture the analog data from the environment which will be converted to digital data using ADC port on ATMEGA32.
The data is in the form of resistor reading, using the resistor value and using the formula the resistor value is then converted into
temperature value. Then the temperature and the resistor value both are dsiplayed on the LCD which is connected to the AVR.
The temperature value is then compared with some value and if the temperature exceeds some particular value then the AirCon is 
switched on automatically.
