/*
 * File:   values.c
 * Author: Daniel Hickey
 * Comments: Function declarations for sensor analysis.
 */

#include "values.h"

void value_Initialise(){
    
    TEMP_1.pin = adc_TEMP1; TEMP_2.pin = adc_TEMP2; HALL_1.pin = adc_HALL1; HALL_2.pin = adc_HALL2; VIB.pin = adc_VIB; NOISE.pin = adc_NOISE;
    
    TEMP_1.mapOutMin, TEMP_2.mapOutMin = -75;
    TEMP_1.mapOutMax, TEMP_2.mapOutMax = 250;
    
    HALL_1.mapOutMin, HALL_2.mapOutMin = 0;
    HALL_1.mapOutMax, HALL_2.mapOutMax = 250;
    
    NOISE.mapOutMin = 0.001; NOISE.mapOutMax = 1000;
    
    VIB.mapOutMin = 0.001; VIB.mapOutMax = 100;
    
}

// Returns the value of the temperature probe mapped to be within the preset values.
  int getTemperature(value *this) {
      return floor(map(0, 4095, this->mapOutMin, this->mapOutMax, ADCC_GetSingleConversion(this->pin)));
  }

  // Returns the current value of the selected hall effect sensor.
  unsigned int getHall(value *this){
      return floor(map(0, 4095, this->mapOutMin, this->mapOutMax, ADCC_GetSingleConversion(this->pin)));
  }
  
  // Returns the decibel value of noise.
  double getNoise(value *this){
      double noise = map(0, 4095, this->mapOutMin, this->mapOutMax, ADCC_GetSingleConversion(this->pin));

      return log10(noise);
  }

  // Returns the current vibration of the monitoring device.
  double getVibration(value *this){
//      int vib = ADCC_GetSingleConversion(this.pin);
      double vib = map(0, 4095, this->mapOutMin, this->mapOutMax, ADCC_GetSingleConversion(this->pin));
      
      return log10(vib);
  }

double map(int valMin, int valMax, double outMin, double outMax, int val){
    double output = ((val - valMin) * (outMax - outMin) / (valMax - valMin) + outMin);
    return output;
}