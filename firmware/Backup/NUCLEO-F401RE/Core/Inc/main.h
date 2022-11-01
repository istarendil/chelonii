/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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
#define MB_1_Pin GPIO_PIN_0
#define MB_1_GPIO_Port GPIOC
#define MB_2_Pin GPIO_PIN_1
#define MB_2_GPIO_Port GPIOC
#define MA_1_Pin GPIO_PIN_2
#define MA_1_GPIO_Port GPIOC
#define MA_2_Pin GPIO_PIN_3
#define MA_2_GPIO_Port GPIOC
#define Enable_A_Pin GPIO_PIN_0
#define Enable_A_GPIO_Port GPIOA
#define Enable_B_Pin GPIO_PIN_1
#define Enable_B_GPIO_Port GPIOA
#define Encoder_A_Chan_1_Pin GPIO_PIN_6
#define Encoder_A_Chan_1_GPIO_Port GPIOA
#define Encoder_A_Chan_2_Pin GPIO_PIN_7
#define Encoder_A_Chan_2_GPIO_Port GPIOA
#define Encoder_B_Chan_1_Pin GPIO_PIN_15
#define Encoder_B_Chan_1_GPIO_Port GPIOA
#define Encoder_B_Chan_2_Pin GPIO_PIN_3
#define Encoder_B_Chan_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
