# **Architecture Details**

## Sensors Used:
### **LDR**-
LDR (Light Dependent Resistor) as the name states it is a special type of resistor that works
on the photoconductivity principle means that resistance changes according to the intensity of light. 
Its resistance decreases with an increase in the intensity of light. It is often used as light sensor.

### **Thermistor**
Thermistor sensor is a resistance thermometer highly sensitive to small changes in temperature, 
and is an economical means of precisely sensing heat over a limited range of temperatures. 
These sensors utilize a metal oxide whose change in resistance is typically an inverse function of the change in temperature.

## Explanation:
The LDR will sense the light in the room and as the resistance of the LDR is sensitive to the light the
bulb would be turned on when the resistance increases. Similarly the thermistor will give its data to the
microcontroller and the microcontroller will then interpret the data and control the speed of the DC motor
connected to it.
There would be one override switch which will act as an external interrupt for the circuit, which 
can turn on or turn off the appliances based on their current state.

![Block_Diagram png](https://user-images.githubusercontent.com/47058068/157283555-94f0c6a3-974f-41b5-820b-cfad99d199cd.png)


![FlowChart png](https://user-images.githubusercontent.com/47058068/157283578-26924590-314a-4497-91cb-9c89f20c990e.png)
