/* 
 * File: comms.h
 * Author: Daniel Hickey
 * Comments: Function implementations for data communication.
 */


#include "comms.h"

void send(adc_channel_t channel, uint16_t data) {
    
    if (EUSART1_is_tx_ready()){
        while (!EUSART1_is_tx_done()){
            EUSART1_Write("%channel");
        }
    }

    if (EUSART1_is_tx_ready()){
        while (!EUSART1_is_tx_done()){
            EUSART1_Write(data);
        }
    }
}

void update(){
    char mod, var = NULL;
    double data;
    if (EUSART1_is_rx_ready()){
        mod = EUSART1_Read();
    }
    if (EUSART1_is_rx_ready() && mod != NULL){
        var = EUSART1_Read();
    }
    if (EUSART1_is_rx_ready() && var != NULL){
        data = EUSART1_Read();
    }
    if (data){
        if (var == "mapOutMin"){
            if (mod == "HALL_1"){
                HALL_1.mapOutMin = data;
            }
            else if (mod == "HALL_2"){
                HALL_2.mapOutMin = data;
            }
            else if (mod == "TEMP_1"){
                TEMP_1.mapOutMin = data;
            }
            else if (mod == "HALL_2"){
                TEMP_2.mapOutMin = data;
            }
            else if (mod == "VIB"){
                VIB.mapOutMin = data;
            }
            else if (mod == "NOISE"){
                NOISE.mapOutMin = data;
            }
        }
        else if (var == "mapOutMax"){
            if (mod == "HALL_1"){
                HALL_1.mapOutMax = data;
            }
            else if (mod == "HALL_2"){
                HALL_2.mapOutMax = data;
            }
            else if (mod == "TEMP_1"){
                TEMP_1.mapOutMax = data;
            }
            else if (mod == "HALL_2"){
                TEMP_2.mapOutMax = data;
            }
            else if (mod == "VIB"){
                VIB.mapOutMax = data;
            }
            else if (mod == "NOISE"){
                NOISE.mapOutMax = data;
            }
        }
    }
}