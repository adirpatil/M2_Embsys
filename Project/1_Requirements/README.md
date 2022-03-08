# **Smart Home Automation**

## Introduction:   
Smart Home automation is a project which basically automates the basic home appliances according to the ease of user.
The main motive of this project is to ease the work of user and automate the tasks based on the surrounding environment
and time of the day.
In this project the home systems of a AirCon is automated based on the room temperature and displayed on a LCD display.

## Softwares Used:
* Visual Studio
* SimulIDE


## Objectives:
1. To display the temperature on the LCD display.
2. To automate the AirCon based on the room temperature.

## Benefits:
It makes the users work easy by automating the tasks as he/she doesn't need to manually do these tasks.
Also the power can be saved when the appliances are kept powered on un-necessarily.
This is also cost as well as energy efficient.

## SWOT
### Strengths
* Easy to understand the application and use it.
* Totally automated dont have the manually switch on the Aircon.
### Weakness
* The temperature detected is not accurate in this model and so cant be reliable when used for sensitive applications. 
### Opportunities
* Used In Homes,Offices,High Buildings
### Threats
* Other sensors can be used which have greater efficiency than thermistor
* Many other similar applications available

## 4W's & 1H
### Who
* Can be used by users having an Aircon.
### What
* This is a smart automated system which turns on automatically when there is increase in temperature.
### When
* When the temperature falls below certain level desired by the user.
### Where
* Used In Homes,Offices,High Buildings.
### How
* Developed using AVR based ATMEGA32 and implemented on SimulIDE.

## High Level Requirements:
|RID|DESCRIPTION|STATUS|
|:--|:----------|:-----|
|HLR1|To turn on the AirCon when the temperature rises above certain level|Implemented|
|HLR2|To display the temperature on the LCD display|Implemented|

## Low Level Requirements:
|RID|DESCRIPTION|STATUS|
|:--|:----------|:-----|
|LLR1|To interface Temperature Sensor(Thermistor) with AVR|Implemented|
|LLR2|To interface LCD Display with AVR|Implemented|
|LLR3|To interface AirCon(Here depcited by a LED) based in Thermistor reading|Implemented|


