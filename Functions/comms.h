/* 
 * File: comms.h
 * Author: Daniel Hickey
 * Comments: Function declarations for data communication.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef COMMS_H
#define	COMMS_H

#include "../mcc_generated_files/mcc.h" // Include MCC auto-generated files.
#include "values.h"

void send(adc_channel_t channel, uint16_t data);

void update();


#endif	/* XC_HEADER_H */

