/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define ETH_SCK_Pin GPIO_PIN_2
#define ETH_SCK_GPIO_Port GPIOE
#define ETH_RST_Pin GPIO_PIN_3
#define ETH_RST_GPIO_Port GPIOE
#define ETH_CS_Pin GPIO_PIN_4
#define ETH_CS_GPIO_Port GPIOE
#define ETH_INT_Pin GPIO_PIN_13
#define ETH_INT_GPIO_Port GPIOC
#define EM_STOP_PIN_Pin GPIO_PIN_1
#define EM_STOP_PIN_GPIO_Port GPIOA
#define BUZZ_EN_Pin GPIO_PIN_2
#define BUZZ_EN_GPIO_Port GPIOA
#define LOOP_IN_2_Pin GPIO_PIN_6
#define LOOP_IN_2_GPIO_Port GPIOA
#define LOOP_IN_1_Pin GPIO_PIN_7
#define LOOP_IN_1_GPIO_Port GPIOA
#define LOOP_IN_0_Pin GPIO_PIN_4
#define LOOP_IN_0_GPIO_Port GPIOC
#define VIN_SENSE_PIN_Pin GPIO_PIN_5
#define VIN_SENSE_PIN_GPIO_Port GPIOC
#define CURR_SENSE_PIN_Pin GPIO_PIN_0
#define CURR_SENSE_PIN_GPIO_Port GPIOB
#define CON_Rx_Pin GPIO_PIN_7
#define CON_Rx_GPIO_Port GPIOE
#define CON_TX_Pin GPIO_PIN_8
#define CON_TX_GPIO_Port GPIOE
#define ENC_A_Pin GPIO_PIN_9
#define ENC_A_GPIO_Port GPIOE
#define ENC_B_Pin GPIO_PIN_11
#define ENC_B_GPIO_Port GPIOE
#define ADC_CS_Pin GPIO_PIN_12
#define ADC_CS_GPIO_Port GPIOB
#define FLAH_WP_Pin GPIO_PIN_8
#define FLAH_WP_GPIO_Port GPIOD
#define FLASH_CS_Pin GPIO_PIN_9
#define FLASH_CS_GPIO_Port GPIOD
#define OC_0_Pin GPIO_PIN_10
#define OC_0_GPIO_Port GPIOD
#define OC_1_Pin GPIO_PIN_11
#define OC_1_GPIO_Port GPIOD
#define OC_2_Pin GPIO_PIN_12
#define OC_2_GPIO_Port GPIOD
#define OC_3_Pin GPIO_PIN_13
#define OC_3_GPIO_Port GPIOD
#define OC_4_Pin GPIO_PIN_14
#define OC_4_GPIO_Port GPIOD
#define OC_5_Pin GPIO_PIN_15
#define OC_5_GPIO_Port GPIOD
#define OC_6_Pin GPIO_PIN_6
#define OC_6_GPIO_Port GPIOC
#define EXT_MCU_CS_5_Pin GPIO_PIN_7
#define EXT_MCU_CS_5_GPIO_Port GPIOC
#define EXT_MCU_CS_4_Pin GPIO_PIN_8
#define EXT_MCU_CS_4_GPIO_Port GPIOC
#define EXT_MCU_CS_3_Pin GPIO_PIN_9
#define EXT_MCU_CS_3_GPIO_Port GPIOC
#define EXT_MCU_CS_2_Pin GPIO_PIN_8
#define EXT_MCU_CS_2_GPIO_Port GPIOA
#define EXT_MCU_SYNC_Pin GPIO_PIN_15
#define EXT_MCU_SYNC_GPIO_Port GPIOA
#define EXT_MCU_SCK_Pin GPIO_PIN_10
#define EXT_MCU_SCK_GPIO_Port GPIOC
#define EXT_MCU_MISO_Pin GPIO_PIN_11
#define EXT_MCU_MISO_GPIO_Port GPIOC
#define EXT_MCU_MOSI_Pin GPIO_PIN_12
#define EXT_MCU_MOSI_GPIO_Port GPIOC
#define EXT_MCU_STOP_Pin GPIO_PIN_1
#define EXT_MCU_STOP_GPIO_Port GPIOD
#define EXT_MCU_CS_1_Pin GPIO_PIN_2
#define EXT_MCU_CS_1_GPIO_Port GPIOD
#define EXT_MCU_CS_0_Pin GPIO_PIN_3
#define EXT_MCU_CS_0_GPIO_Port GPIOD
#define LOAD_EN_Pin GPIO_PIN_3
#define LOAD_EN_GPIO_Port GPIOB
#define USB_1_ON_Pin GPIO_PIN_4
#define USB_1_ON_GPIO_Port GPIOB
#define USB_1_OC_Pin GPIO_PIN_5
#define USB_1_OC_GPIO_Port GPIOB
#define RS_485_TX_Pin GPIO_PIN_6
#define RS_485_TX_GPIO_Port GPIOB
#define RS_485_RX_Pin GPIO_PIN_7
#define RS_485_RX_GPIO_Port GPIOB
#define RS_485_DERE_Pin GPIO_PIN_8
#define RS_485_DERE_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
