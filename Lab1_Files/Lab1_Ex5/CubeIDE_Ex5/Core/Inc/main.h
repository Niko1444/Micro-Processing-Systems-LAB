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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPIO_PIN_2_Pin GPIO_PIN_2
#define GPIO_PIN_2_GPIO_Port GPIOA
#define GPIO_PIN_3_Pin GPIO_PIN_3
#define GPIO_PIN_3_GPIO_Port GPIOA
#define GPIO_PIN_4_Pin GPIO_PIN_4
#define GPIO_PIN_4_GPIO_Port GPIOA
#define GPIO_PIN_5_Pin GPIO_PIN_5
#define GPIO_PIN_5_GPIO_Port GPIOA
#define GPIO_PIN_6_Pin GPIO_PIN_6
#define GPIO_PIN_6_GPIO_Port GPIOA
#define GPIO_PIN_7_Pin GPIO_PIN_7
#define GPIO_PIN_7_GPIO_Port GPIOA
#define SEG_A_PIN_Pin GPIO_PIN_0
#define SEG_A_PIN_GPIO_Port GPIOB
#define SEG_B_PIN_Pin GPIO_PIN_1
#define SEG_B_PIN_GPIO_Port GPIOB
#define SEG_C_PIN_Pin GPIO_PIN_2
#define SEG_C_PIN_GPIO_Port GPIOB
#define SEG_DD_Pin GPIO_PIN_10
#define SEG_DD_GPIO_Port GPIOB
#define SEG_EE_Pin GPIO_PIN_11
#define SEG_EE_GPIO_Port GPIOB
#define SEG_FF_Pin GPIO_PIN_12
#define SEG_FF_GPIO_Port GPIOB
#define SEG_GG_Pin GPIO_PIN_13
#define SEG_GG_GPIO_Port GPIOB
#define SEG_D_PIN_Pin GPIO_PIN_3
#define SEG_D_PIN_GPIO_Port GPIOB
#define SEG_E_PIN_Pin GPIO_PIN_4
#define SEG_E_PIN_GPIO_Port GPIOB
#define SEG_F_PIN_Pin GPIO_PIN_5
#define SEG_F_PIN_GPIO_Port GPIOB
#define SEG_G_PIN_Pin GPIO_PIN_6
#define SEG_G_PIN_GPIO_Port GPIOB
#define SEG_AA_Pin GPIO_PIN_7
#define SEG_AA_GPIO_Port GPIOB
#define SEG_BB_Pin GPIO_PIN_8
#define SEG_BB_GPIO_Port GPIOB
#define SEG_CC_Pin GPIO_PIN_9
#define SEG_CC_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
