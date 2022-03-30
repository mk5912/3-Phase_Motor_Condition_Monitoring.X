/* 
 * File: comms.h
 * Author: Daniel Hickey
 * Comments: Function implementations for data communication.
 */


#include "comms.h"

void send(unsigned char channel, double data) {
    
    EUSART1_Write(channel);

    EUSART1_Write(data);
}
