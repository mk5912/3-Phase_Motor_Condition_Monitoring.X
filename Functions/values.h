/* 
 * File: values.h
 * Author: Daniel Hickey
 * Comments: Function implementations for sensor analysis.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef VALUES_H
#define	VALUES_H


#include <math.h> // Includes mathematical advanced functions.
#include "../mcc_generated_files/mcc.h" // Includes MCC auto-generated files.

typedef enum
{
    pin_HALL1 =  adc_HALL1,
    pin_HALL2 =  adc_HALL2,
    pin_NOISE =  adc_NOISE,
    pin_VIB =  adc_VIB,
    pin_TEMP1 = 0x4,
    pin_TEMP2 = 0x5
} pin;

typedef struct value value, ptr;

struct value{
  // Minimum output value for the send function.
  double mapOutMin;
  // Maximum output value for the send function.
  double mapOutMax;
  // Pin for the created sensor.
  pin pin;
};

// Initialising the sensor objects.

value TEMP_1;
value TEMP_2;
value HALL_1;
value HALL_2;
value VIB;
value NOISE;

void values_Initialise();

// Returns the value of the temperature probe mapped to be within the preset values.
double getTemperature(value this);

// Returns the current value of the selected hall effect sensor.
unsigned int getHall(value this);

// Returns the decibel value of noise.
double getNoise(value this);

// Returns the current vibration of the monitoring device.
double getVibration(value this);

double map(int valMin, int valMax, double outMin, double outMax, int val);

#endif	/* XC_HEADER_H */

