/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
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
#define EXT_MCU_STOP_Pin GPIO_PIN_3
#define EXT_MCU_STOP_GPIO_Port GPIOE
#define EXT_MCU_SYNC_Pin GPIO_PIN_4
#define EXT_MCU_SYNC_GPIO_Port GPIOE
#define EXT_MCU_COCK_Pin GPIO_PIN_5
#define EXT_MCU_COCK_GPIO_Port GPIOE
#define IO_0_Pin GPIO_PIN_2
#define IO_0_GPIO_Port GPIOA
#define IO_1_Pin GPIO_PIN_3
#define IO_1_GPIO_Port GPIOA
#define IO_2_Pin GPIO_PIN_4
#define IO_2_GPIO_Port GPIOA
#define IO_3_Pin GPIO_PIN_4
#define IO_3_GPIO_Port GPIOC
#define BUZZ_PWM_Pin GPIO_PIN_0
#define BUZZ_PWM_GPIO_Port GPIOB
#define LED_G_Pin GPIO_PIN_1
#define LED_G_GPIO_Port GPIOB
#define MODBUS_DERE_Pin GPIO_PIN_10
#define MODBUS_DERE_GPIO_Port GPIOD
#define OC_3_Pin GPIO_PIN_12
#define OC_3_GPIO_Port GPIOD
#define OC_2_Pin GPIO_PIN_13
#define OC_2_GPIO_Port GPIOD
#define OC_1_Pin GPIO_PIN_14
#define OC_1_GPIO_Port GPIOD
#define OC_0_Pin GPIO_PIN_15
#define OC_0_GPIO_Port GPIOD
#define EM_STOP_PIN_Pin GPIO_PIN_12
#define EM_STOP_PIN_GPIO_Port GPIOA
#define FLASH_CS_Pin GPIO_PIN_15
#define FLASH_CS_GPIO_Port GPIOA
#define FLASH_SCK_Pin GPIO_PIN_10
#define FLASH_SCK_GPIO_Port GPIOC
#define FLASH_MISO_Pin GPIO_PIN_11
#define FLASH_MISO_GPIO_Port GPIOC
#define FLASH_MOSI_Pin GPIO_PIN_12
#define FLASH_MOSI_GPIO_Port GPIOC
#define FLASH_WP_Pin GPIO_PIN_0
#define FLASH_WP_GPIO_Port GPIOD
#define LED_R_Pin GPIO_PIN_4
#define LED_R_GPIO_Port GPIOB
#define LED_B_Pin GPIO_PIN_5
#define LED_B_GPIO_Port GPIOB
#define USR_BTN_Pin GPIO_PIN_7
#define USR_BTN_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
