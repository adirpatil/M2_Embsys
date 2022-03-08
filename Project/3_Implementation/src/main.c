// include the necessary header files
#ifndef __AVR_ATmega32__
#define __AVR_ATmega32__
#endif
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "LCD16x2_4bit.h"

int val;
long R;
double Thermister;

void ADC_Init()
{
    DDRA = 0x00;   /* Make ADC port as input */
    ADCSRA = 0x87; /* Enable ADC, fr/128  */
}

int adc()
{
    ADMUX = 0x40;          /* Vref: Avcc, ADC channel: 0 */
    ADCSRA |= (1 << ADSC); /* start conversion */
    while ((ADCSRA & (1 << ADIF)) == 0)
        ;                  /* monitor end of conversion interrupt flag */
    ADCSRA |= (1 << ADIF); /* set the ADIF bit of ADCSRA register */
    return (ADCW);         /* return the ADCW */
}

double getTemp()
{
    val = adc();                    /* store adc value on val register */
    R = ((10230000 / val) - 10000); /* calculate the resistance */
    Thermister = log(R);            /* calculate natural log of resistance */
    /* Steinhart-Hart Thermistor Equation: */
    /*  Temperature in Kelvin = 1 / (A + B[ln(R)] + C[ln(R)]^3)		*/
    /*  where A = 0.001129148, B = 0.000234125 and C = 8.76741*10^-8  */
    Thermister = 1 / (0.0011291241 + (0.0002341077 * Thermister) + (0.00000008775468 * Thermister * Thermister * Thermister));
    Thermister = Thermister - 273.15; /* convert kelvin to °C */

    return Thermister;
}

int main(void)
{
    char array[20], ohm = 0xF4;
    double temp;
    DDRC = 0xff; //For realay on/off (LED)
    LCD_Init();  /* initialize 16x2 LCD */
    ADC_Init();  /* initialize ADC */
    LCD_Clear(); /* clear LCD */
    LCD_String_xy(0, 0, "Temp: ");
    LCD_String_xy(1, 0, "R: ");
    while (1)
    {
        temp = getTemp(); /* store temperature value on temp resistor */
        if(temp > 20)
            PORTC = 0xff; 
        else    
            PORTC = 0x00;

        memset(array, 0, 20);
        dtostrf(temp, 3, 2, array);
        LCD_String_xy(0, 7, array);
        LCD_Char(0xDF); /* ASCII value of '°' */
        LCD_String("C   ");

        memset(array, 0, 20);
        sprintf(array, "%ld %c   ", R, ohm);
        LCD_String_xy(1, 3, array);
        _delay_ms(1000); /* wait for 1 second */
    }
}