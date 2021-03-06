/* 
 * File: comms.h
 * Author: Daniel Hickey
 * Comments: Function declarations for data communication.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef COMMS_H
#define	COMMS_H

#include "values.h"

void send(unsigned char channel, double data);


#endif	/* COMMS_H */

