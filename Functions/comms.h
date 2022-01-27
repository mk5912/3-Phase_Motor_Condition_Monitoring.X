/* 
 * File: comms.h
 * Author: Daniel Hickey
 * Comments: Function declarations for data communication.
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_H
#define	XC_HEADER_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <stdbool.h>

void send();

void recieve();    


#ifdef	__cplusplus
  // TODO If C++ is being used, regular C code needs function names to have C 
  // linkage so the functions can be used by the c code. 
extern "C" {
#endif /* __cplusplus */


#endif	/* XC_HEADER_H */

