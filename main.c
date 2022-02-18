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
        send("t1", getTemperature(adc_TEMP1));
        send("t2", getTemperature(adc_TEMP2));
        
        // Transmit the values of the two hall effect sensors.
        send("h1", getHall(adc_HALL1));
        send("h2", getHall(adc_HALL2));
        
        // Transmit the recorded decibel level.
        send("vib", getVibration());
        
        // Transmit the recorded vibration value.
        send("noise", getNoise());
    }
}
/**
 End of File
*/