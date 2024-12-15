/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "adc.h"
#include "dac.h"
#include "dma.h"
#include "i2c.h"
#include "spi.h"
#include "tim.h"
#include "usart.h"
#include "usb_otg.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "string.h"
#include "stdio.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

#define DS3231M_ADDR 0xD0
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
	uint8_t RxStr[50] = {0};
	__IO uint16_t uhADCxConvertedValue = 0;
	uint16_t adcVal[5] = {0};
<<<<<<< Updated upstream
=======
	uint8_t AD7799RxTx[4] = {0xff, 0xff, 0xff, 0xff};
	
	uint16_t ad7799_ch1_val_watch;
	
	char str[100];
	
	struct microsPeriod terminalTxPeriod, currentReadPeriod;
>>>>>>> Stashed changes
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
	
void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef* hadc)
{
  /* Set variable to report analog watchdog out of window status to main      */
  /* program.                                                                 */
	HAL_GPIO_WritePin(LOAD_EN_GPIO_Port, LOAD_EN_Pin, GPIO_PIN_RESET);
}	

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI4_Init();
  MX_USART1_UART_Init();
  MX_USB_OTG_FS_HCD_Init();
  MX_ADC1_Init();
  MX_DAC_Init();
  MX_I2C2_Init();
  MX_SPI2_Init();
  MX_SPI3_Init();
  MX_TIM1_Init();
  MX_TIM2_Init();
  MX_TIM4_Init();
  MX_UART7_Init();
  MX_DMA_Init();
  MX_UART8_Init();
  MX_TIM5_Init();
  MX_TIM3_Init();
  MX_ADC2_Init();
  /* USER CODE BEGIN 2 */
	
<<<<<<< Updated upstream
=======
//		{
//			uint8_t secs=0, mins=16, hours=22;
//			uint8_t RTCrequest[3];
//			RTCrequest[0] = secs%10|((secs/10)<<4);
//			RTCrequest[1] = mins%10|((mins/10)<<4);
//			RTCrequest[2] = hours%10|((hours/10)<<4);
//			
//			
//			HAL_I2C_Mem_Write(&hi2c2, DS3231M_ADDR, 0, I2C_MEMADD_SIZE_8BIT, RTCrequest, 3, 100);
//		}		
	
		microsInit(&htim5, 84000000);
	
>>>>>>> Stashed changes
		HAL_UART_Receive_DMA(&huart8,RxStr,sizeof(RxStr));
	
	
		HAL_ADC_Start(&hadc1);
		hadc1.Instance->HTR = 3500;
		hadc1.Instance->LTR = 2728; // I = 0 A -> 3070 -> 2.473 В;
																// 2.473 В - 5 A * 0.055 В/А = 2.198 В -> 2728
		
		
		HAL_ADC_Start(&hadc2);
		HAL_ADC_Start_DMA(&hadc2, (uint32_t*) adcVal, 4);
		
		HAL_UART_Transmit_DMA(&huart8,(uint8_t *) "\n\n", 2);
<<<<<<< Updated upstream
		HAL_GPIO_WritePin(RS_485_DERE_GPIO_Port, RS_485_DERE_Pin, GPIO_PIN_SET);
		HAL_UART_Transmit(&huart1,(uint8_t *) "\n\n", 2,100);
		
=======
		
		HAL_GPIO_WritePin(RS_485_DERE_GPIO_Port, RS_485_DERE_Pin, GPIO_PIN_SET);
		HAL_UART_Transmit(&huart1,(uint8_t *) "\n\n", 2,100);
>>>>>>> Stashed changes
		
		HAL_GPIO_WritePin(LOAD_EN_GPIO_Port, LOAD_EN_Pin, GPIO_PIN_SET);

		
<<<<<<< Updated upstream
//		{
//			uint8_t secs=0, mins=58, hours=0;
//			uint8_t RTCrequest[3];
//			RTCrequest[0] = secs%10|((secs/10)<<4);
//			RTCrequest[1] = mins%10|((mins/10)<<4);
//			RTCrequest[2] = hours%10|((hours/10)<<4);
//			
//			
//			HAL_I2C_Mem_Write(&hi2c2, DS3231M_ADDR, 0, I2C_MEMADD_SIZE_8BIT, RTCrequest, 3, 100);
//		}	
<<<<<<< Updated upstream
		{
			uint8_t AD7799TX[3] = {0x08,0x10, 0x00};
=======
			HAL_Delay(300);
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
			HAL_SPI_Transmit(&hspi2,AD7799TX,4,100);			
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_SET);
			HAL_Delay(300);

			AD7799TX[0] = 0x08; AD7799TX[1] = 0x10; AD7799TX[2] = 0x0; AD7799TX[3] = 0x0; 
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
			HAL_SPI_Transmit(&hspi2,AD7799TX,3,100);			
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_SET);
			HAL_Delay(300);			
>>>>>>> Stashed changes
			
			HAL_SPI_Transmit(&hspi2,AD7799TX,3,100);
		}		
=======
			
			// сбрасываю чип
			HAL_Delay(300);
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
			HAL_SPI_Transmit(&hspi2,AD7799RxTx,4,100);			
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_SET);
			HAL_Delay(1);

			// пишу в mode регистр
			AD7799RxTx[0] = 0x08; AD7799RxTx[1] = 0x10; AD7799RxTx[2] = 0x09; AD7799RxTx[3] = 0x0; 
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
			HAL_SPI_Transmit(&hspi2,AD7799RxTx,3,100);			
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_SET);
			HAL_Delay(1);			
			
			// читаю id регистр
			AD7799RxTx[0] = 0x60; AD7799RxTx[1] = 0x0; AD7799RxTx[2] = 0x0; AD7799RxTx[3] = 0x0; 
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
			HAL_SPI_TransmitReceive(&hspi2,AD7799RxTx,AD7799RxTx,2,100);			
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_SET);	
			HAL_Delay(1);
			// вывожу id регистр в консоль
			sprintf(str, "ADC id: 0x%02x\n\r",AD7799RxTx[1]);
			HAL_UART_Transmit(&huart8,(uint8_t *) str, strlen(str), 100);
			
			// пишу в configuretion регистр
			AD7799RxTx[0] = 0x10; AD7799RxTx[1] = 0x07; AD7799RxTx[2] = 0x10; AD7799RxTx[3] = 0x0; 
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
			HAL_SPI_TransmitReceive(&hspi2,AD7799RxTx,AD7799RxTx,3,100);			
			HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_SET);
			HAL_Delay(1);

>>>>>>> Stashed changes
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
<<<<<<< Updated upstream
  while (1)
  {
		static char str[100];
		static uint8_t RTCresponse[8];
		uint8_t secs, mins, hours, days, date, month, year;
		
		HAL_Delay(500);
		
		HAL_I2C_Mem_Read(&hi2c2, DS3231M_ADDR, 0, I2C_MEMADD_SIZE_8BIT, RTCresponse, 7, 100);
		
		
		secs = (RTCresponse[0]>>4)*10 + (0x0F&RTCresponse[0]);
		mins = (RTCresponse[1]>>4)*10 + (0x0F&RTCresponse[1]);
		hours = (0x02&(RTCresponse[2]>>4))*10 + (0x0F&RTCresponse[2]);
		
		adcVal[4] = HAL_ADC_GetValue(&hadc1);		
		sprintf(str, "%4d\t%4d\t%4d\t%4d\t%4d\t%02d:%02d:%02d\r",\
		adcVal[0], adcVal[1], adcVal[2], adcVal[3], adcVal[4],\
		hours, mins, secs);
		HAL_UART_Transmit_DMA(&huart8,(uint8_t *) str, strlen(str));
		HAL_UART_Transmit(&huart1,(uint8_t *) str, strlen(str),100);

=======
	
	microsStart(&terminalTxPeriod, 500000);
	microsStart(&currentReadPeriod, 1000);
	
	// запускаю последовательное чтение
	AD7799RxTx[0] = 0x5C;
	HAL_GPIO_WritePin(ADC_CS_GPIO_Port, ADC_CS_Pin, GPIO_PIN_RESET);
	HAL_SPI_Transmit(&hspi2,AD7799RxTx,1,100);
	HAL_Delay(1);		


  while (1)
  {
		static uint16_t currentArray[62];
		
		uint8_t RTCresponse[8];
		
		uint8_t secs, mins, hours, days, date, month, year;
		
		if ( microsIsReady(&currentReadPeriod, true) ){
			static uint8_t currentArrayCnt = 0;
			currentArray[currentArrayCnt] = HAL_ADC_GetValue(&hadc1);
			currentArrayCnt++;
			if ( currentArrayCnt == 62 )
					currentArrayCnt = 0;
		}
		
		if ( microsIsReady(&terminalTxPeriod, true) ) {
			int32_t ad7799_ch1_val;
			uint32_t cuddentAverage = 0;
			static float forceSensorVal = 0;
			
			for (uint8_t i = 0; i < 62; i++){
				cuddentAverage = cuddentAverage + currentArray[i];
			}
			adcVal[4] = (uint32_t) cuddentAverage / 62;
			
			AD7799RxTx[0] = 0x00; AD7799RxTx[1] = 0x0; AD7799RxTx[2] = 0x0; AD7799RxTx[3] = 0x0;
			HAL_SPI_TransmitReceive(&hspi2,AD7799RxTx, AD7799RxTx, 3,100);
			ad7799_ch1_val = 0;
			ad7799_ch1_val = AD7799RxTx[0] << 24 | AD7799RxTx[1] << 16 | AD7799RxTx[0] << 8;
			if(ad7799_ch1_val != 0xffffff00) {
				ad7799_ch1_val_watch = ad7799_ch1_val >> 16;
				ad7799_ch1_val -= 0x80000000;
				forceSensorVal = (float) ad7799_ch1_val/10000;
			}
			
			HAL_I2C_Mem_Read(&hi2c2, DS3231M_ADDR, 0, I2C_MEMADD_SIZE_8BIT, RTCresponse, 7, 100);
			
			secs = (RTCresponse[0]>>4)*10 + (0x0F&RTCresponse[0]);
			mins = (RTCresponse[1]>>4)*10 + (0x0F&RTCresponse[1]);
			hours = (0x03&(RTCresponse[2]>>4))*10 + (0x0F&RTCresponse[2]);
			
			sprintf(str, "%4d\t%4d\t%4d\t%4d\t%4d\t%02d:%02d:%02d %06.0f\r",\
			adcVal[0], adcVal[1], adcVal[2], adcVal[3], adcVal[4],\
			hours, mins, secs, forceSensorVal);
			HAL_UART_Transmit_DMA(&huart8,(uint8_t *) str, strlen(str));
			HAL_UART_Transmit(&huart1,(uint8_t *) str, strlen(str),100);
		}
>>>>>>> Stashed changes
	
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
