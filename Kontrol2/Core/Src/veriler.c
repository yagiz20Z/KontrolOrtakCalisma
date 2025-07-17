/*
 * veriler.c
 *
 * hiz ve ivme verilerini olcer
 * 
 *  Created on: Jul 15, 2025
 *      Author: aliya
 */

#include "veriler.h"



uint8_t  as5600_ivmehiz_takip(acisal_ivmehiz_t *a, uint32_t mevcut_zaman){

    if (a == NULL || a->sensor == NULL) {
        return 1;
    }
    float aci=0;
    uint16_t ham;
    if (as5600_read(a->sensor, &ham, &aci) !=0){
        return 1;
    }
	  uint8_t reg_addr = AS5600_REG_RAW_ANGLE;


	      raw_angle = (uint16_t)(i2c_rx_buffer[0] << 8) | i2c_rx_buffer[1];
	      onceki_aci = (float)raw_angle * 360.0f / 4096.0f;
	      HAL_Delay(200);
	      raw_angle = (uint16_t)(i2c_rx_buffer[0] << 8) | i2c_rx_buffer[1];
	      aci = (float)raw_angle * 360.0f / 4096.0f;















    uint32_t delta_t = mevcut_zaman - a->onceki_zaman;                      // 
        if (delta_t == 0) {
        return 1;
    }

    float delta_aci = aci - a-> onceki_aci;
    if (delta_aci > 180.0f) {
        delta_aci -= 360.0f;
    } else if (delta_aci < -180.0f) {
        delta_aci += 360.0f;
    }

    a->acisal_hiz = delta_aci / ((float)delta_t / 1000.0f); // derece/saniye  AÇISAL HIZ
    // a->acisal_ivme = delta_aci / (delta_t*delta_t / 1000.0f);// derece/saniye^2  AÇISAL IVME
    a->onceki_aci = aci; 
    a->onceki_zaman = mevcut_zaman;
    

    return 0;
    









}
