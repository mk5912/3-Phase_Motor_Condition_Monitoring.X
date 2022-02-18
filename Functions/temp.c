/*
 * File:   temp.c
 * Author: Daniel Hickey
 * Comments: Function declarations for temperature analysis.
 */

#include <temp.h>

int getTemperature(adcc_channel_t pin) {
    int value = ADCC_GetSingleConversion(pin);
    return map(0, 4095, -75, 250, value);
}

long map(int valMin, int valMax, int outMin, int outMax, int val){
    long output = ((val - valMin) * (outMax - outMin) / (valMax - valMin) + outMin);
    return output;
}