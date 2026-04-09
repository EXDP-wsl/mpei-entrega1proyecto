/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define recibe_datos_Pin GPIO_PIN_0
#define recibe_datos_GPIO_Port GPIOA
#define envia_datos_Pin GPIO_PIN_1
#define envia_datos_GPIO_Port GPIOA
#define ADC_Pin GPIO_PIN_2
#define ADC_GPIO_Port GPIOA
#define DO_infrarrojo_Pin GPIO_PIN_4
#define DO_infrarrojo_GPIO_Port GPIOA
#define DA_infrarrojo_Pin GPIO_PIN_5
#define DA_infrarrojo_GPIO_Port GPIOA
#define echo_ultrasonic_Pin GPIO_PIN_6
#define echo_ultrasonic_GPIO_Port GPIOA
#define trig_ultras_nico_Pin GPIO_PIN_7
#define trig_ultras_nico_GPIO_Port GPIOA
#define distancia_1_Pin GPIO_PIN_0
#define distancia_1_GPIO_Port GPIOB
#define distancia_2_Pin GPIO_PIN_1
#define distancia_2_GPIO_Port GPIOB
#define do_vibracion_Pin GPIO_PIN_2
#define do_vibracion_GPIO_Port GPIOB
#define da_vibraci_n_Pin GPIO_PIN_10
#define da_vibraci_n_GPIO_Port GPIOB
#define sg90_Pin GPIO_PIN_11
#define sg90_GPIO_Port GPIOB
#define ena_Pin GPIO_PIN_12
#define ena_GPIO_Port GPIOB
#define in1_Pin GPIO_PIN_13
#define in1_GPIO_Port GPIOB
#define in2_Pin GPIO_PIN_14
#define in2_GPIO_Port GPIOB
#define enb_Pin GPIO_PIN_15
#define enb_GPIO_Port GPIOB
#define in3_Pin GPIO_PIN_8
#define in3_GPIO_Port GPIOA
#define in4_Pin GPIO_PIN_9
#define in4_GPIO_Port GPIOA
#define scl_Pin GPIO_PIN_10
#define scl_GPIO_Port GPIOA
#define sda_Pin GPIO_PIN_11
#define sda_GPIO_Port GPIOA
#define PWM_Pin GPIO_PIN_4
#define PWM_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
