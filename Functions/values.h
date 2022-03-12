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


typedef struct value value, ptr;

struct value{
  // Minimum output value for the send function.
  double mapOutMin;
  // Maximum output value for the send function.
  double mapOutMax;
  // Pin for the created sensor.
  adc_channel_t pin;
  
  int (*getTemperature)(value *);
  unsigned int (*getHall)(value *);
  double (*getVibration)(value *);
  double (*getNoise)(value *);
};

// Initialising the sensor objects.

value TEMP_1;
value TEMP_2;
value HALL_1;
value HALL_2;
value VIB;
value NOISE;

void value_Initialise();

// Returns the value of the temperature probe mapped to be within the preset values.
int getTemperature(value *self);

// Returns the current value of the selected hall effect sensor.
unsigned int getHall(value *self);

// Returns the decibel value of noise.
double getNoise(value *self);

// Returns the current vibration of the monitoring device.
double getVibration(value *self);

double map(int valMin, int valMax, double outMin, double outMax, int val);

#endif	/* XC_HEADER_H */

