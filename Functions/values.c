/*
 * File:   temp.c
 * Author: Daniel Hickey
 * Comments: Function declarations for temperature analysis.
 */

#include "values.h"

// Returns the value of the temperature probe mapped to be within the preset values.
int getTemperature(adcc_channel_t pin) {
    return map(0, 4095, -75, 250, ADCC_GetSingleConversion(pin));
}

// Returns the current value of the selected hall effect sensor.
int getHall(adcc_channel_t pin){
    int hall;
    
    return hall;
}

// Returns the decibel value of noise.
int getNoise(adcc_channel_t pin){
    int noise;
    
    return noise
}

// Returns the current vibration of the monitoring device.
int getVibration(adcc_channel_t pin){
    int vib;
    
    return vib;
}

long map(int valMin, int valMax, int outMin, int outMax, int val){
    long output = ((val - valMin) * (outMax - outMin) / (valMax - valMin) + outMin);
    return output;
}