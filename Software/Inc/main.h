/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#include "stm32l4xx_hal.h"

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
#define WKUP_Pin GPIO_PIN_0
#define WKUP_GPIO_Port GPIOA
#define WKUP_EXTI_IRQn EXTI0_IRQn
#define V_BAT_Pin GPIO_PIN_1
#define V_BAT_GPIO_Port GPIOA
#define LCD_CE_Pin GPIO_PIN_4
#define LCD_CE_GPIO_Port GPIOA
#define LCD_CLK_Pin GPIO_PIN_5
#define LCD_CLK_GPIO_Port GPIOA
#define LCD_DC_Pin GPIO_PIN_6
#define LCD_DC_GPIO_Port GPIOA
#define LCD_DIN_Pin GPIO_PIN_7
#define LCD_DIN_GPIO_Port GPIOA
#define LCD_RST_Pin GPIO_PIN_0
#define LCD_RST_GPIO_Port GPIOB
#define LCD_LIGHT_Pin GPIO_PIN_1
#define LCD_LIGHT_GPIO_Port GPIOB
#define SCREEN_Pin GPIO_PIN_8
#define SCREEN_GPIO_Port GPIOA
#define SI7021_CSL_Pin GPIO_PIN_9
#define SI7021_CSL_GPIO_Port GPIOA
#define SI7021_SDA_Pin GPIO_PIN_10
#define SI7021_SDA_GPIO_Port GPIOA
#define BAT_MEAS_EN_Pin GPIO_PIN_6
#define BAT_MEAS_EN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
