/*
 * Author: Daniel Hickey
 * Device: PIC18F04Q40 
 */

#include "mcc_generated_files/mcc.h"
#include "Functions/comms.h"
#include "Functions/values.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();

    while (1)
    {
        // Transmit the values of the two temperature probes.
        send("t1",getTemperature(adc_TEMP1));
        send("t2",getTemperature(adc_TEMP2));
        
        // Transmit the values of the two hall effect sensors.
        send("h1",);
        
        // Transmit the recorded decibel level.
        
        // Transmit the recorded vibration value.
    }
}
/**
 End of File
*/