/*
 * ivme.h
 *
 *  Created on: Jul 15, 2025
 *      Author: aliya
 */

#ifndef INC_VERILER_H_
#define INC_VERILER_H_

#include "driver_as5600.h"


typedef struct {

	float acisal_hiz;
	float onceki_aci;
	uint32_t onceki_zaman;
	float acisal_ivme;
	as5600_handle_t *sensor;

}acisal_ivmehiz_t;


uint8_t as5600_ivmehiz_takip(acisal_ivmehiz_t *a, uint32_t mevcut_zaman);


#endif /* INC_VERILER_H_ */


