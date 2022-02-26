/* 
 * File: comms.h
 * Author: Daniel Hickey
 * Comments: Function implementations for data communication.
 */


#include "comms.h"

void send(adcc_channel_t channel, uint16_t data) {
    
    if (UART1_is_tx_ready()){
        while (!UART1_is_tx_done()){
            UART1_Write("%channel");
        }
    }

    if (UART1_is_tx_ready()){
        while (!UART1_is_tx_done()){
            UART1_Write(data);
        }
    }
}

void update(){
    char mod, var = NULL;
    double data;
    if (UART1_is_rx_ready()){
        mod = UART1_Read();
    }
    if (UART1_is_rx_ready() && mod != NULL){
        var = UART1_Read();
    }
    if (UART1_is_rx_ready() && var != NULL){
        data = UART1_Read();
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