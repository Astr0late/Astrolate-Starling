/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MUX5_Pin GPIO_PIN_0
#define MUX5_GPIO_Port GPIOA
#define MUX4_Pin GPIO_PIN_1
#define MUX4_GPIO_Port GPIOA
#define MUX3_Pin GPIO_PIN_2
#define MUX3_GPIO_Port GPIOA
#define MUX2_Pin GPIO_PIN_3
#define MUX2_GPIO_Port GPIOA
#define MUX1_Pin GPIO_PIN_4
#define MUX1_GPIO_Port GPIOA
#define MUX0_Pin GPIO_PIN_5
#define MUX0_GPIO_Port GPIOA
#define ENC_CLK_Pin GPIO_PIN_6
#define ENC_CLK_GPIO_Port GPIOA
#define ENC_DT_Pin GPIO_PIN_7
#define ENC_DT_GPIO_Port GPIOA
#define SELECT3_Pin GPIO_PIN_12
#define SELECT3_GPIO_Port GPIOB
#define SELECT2_Pin GPIO_PIN_13
#define SELECT2_GPIO_Port GPIOB
#define SELECT1_Pin GPIO_PIN_14
#define SELECT1_GPIO_Port GPIOB
#define SELECT0_Pin GPIO_PIN_15
#define SELECT0_GPIO_Port GPIOB
#define ENC_SW_Pin GPIO_PIN_8
#define ENC_SW_GPIO_Port GPIOA
#define ARGB_Pin GPIO_PIN_9
#define ARGB_GPIO_Port GPIOA
#define SCL_Pin GPIO_PIN_6
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_7
#define SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
