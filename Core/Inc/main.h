/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/* USER CODE BEGIN Private defines */
#define ADCVin_Pin GPIO_PIN_0
#define ADCVin_GPIO_Port GPIOA
#define ADCIin_Pin GPIO_PIN_1
#define ADCIin_GPIO_Port GPIOA
#define ADCVout_Pin GPIO_PIN_2
#define ADCVout_GPIO_Port GPIOA
#define ADCIout_Pin GPIO_PIN_3
#define ADCIout_GPIO_Port GPIOA
#define ADCVadj_Pin GPIO_PIN_4
#define ADCVadj_GPIO_Port GPIOA
#define LED_G_Pin GPIO_PIN_0
#define LED_G_GPIO_Port GPIOB
#define LED_Y_Pin GPIO_PIN_1
#define LED_Y_GPIO_Port GPIOB
#define LED_R_Pin GPIO_PIN_2
#define LED_R_GPIO_Port GPIOB
#define KEY_1_Pin GPIO_PIN_3
#define KEY_1_GPIO_Port GPIOB
#define KEY_2_Pin GPIO_PIN_4
#define KEY_2_GPIO_Port GPIOB
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
