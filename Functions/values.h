/* 
 * File: temp.h
 * Author: Daniel Hickey
 * Comments: Function declarations for temperature analysis.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef TEMP_H
#define	TEMP_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <stdbool.h>
#include "../mcc_generated_files/adcc.h"

int getTemperature(adcc_channel_t pin);

int getHall(adcc_channel_t pin);

int getNoise(adcc_channel_t pin);

int getVibration(adcc_channel_t pin);

map(int valMin, int valMax, int outMin, int outMax, int val);

#ifdef	__cplusplus
  // TODO If C++ is being used, regular C code needs function names to have C 
  // linkage so the functions can be used by the c code. 
extern "C" {
#endif /* __cplusplus */


#endif	/* XC_HEADER_H */

