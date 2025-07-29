/*
 * motorFonk.h
 *
 *  Created on: Jul 21, 2025
 *      Author: aliya
 */

#ifndef INC_MOTORFONK_H_
#define INC_MOTORFONK_H_

#include "main.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "stm32f4xx_hal.h"


#include "tanimlama.h"

#define hedefAci 180.0f						// Hedef açı (derece)
#define Kp 2.0f								// Proportional kazanç
#define Ki 0.5f                             // İntegral. PID kontrolünde hata birikimini sağlar                  
#define Kd 0.1f                             // Türev . PID kontrolünde "salınımla" ilgilneir

#define maxpwm 1600
#define minpwm 1400
#define midpwm 1500


typedef struct{

    float toplamhata; 
    float sonhata;
    float ilkhata;
                                        // tüm değişkenler
    float dt;
    uint32_t Sonzaman; 
    uint32_t Ilkzaman; 

}veriM_t;


int motor_kontrol(Veri_T veri);








#endif /* INC_MOTORFONK_H_ */
