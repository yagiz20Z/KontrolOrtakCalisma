/*
 *  hiz.h
 *
 *  Created on: Jul 15, 2025
 *      Author: aliya
 */

#ifndef INC_HIZ_H_
#define INC_HIZ_H_

#include "driver_as5600.h"

typedef struct {

	float onceki_aci;
	uint32_t onceki_zaman;
	float acisal_hiz;
	as5600_handle_t *sensor;

}acisal_hiz_t;


uint8_t  as5600_hiz_takip(acisal_hiz_t *v, uint32_t mevcut_zaman);


#endif /* INC_HIZ_H_ */
