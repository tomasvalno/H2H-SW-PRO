/**
  ******************************************************************************
  * File Name          : main.hpp
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define FG_GPOUT_Pin GPIO_PIN_2
#define FG_GPOUT_GPIO_Port GPIOE
#define FG_GPOUT_EXTI_IRQn EXTI2_IRQn
#define CHRG_JACK_DET_Pin GPIO_PIN_3
#define CHRG_JACK_DET_GPIO_Port GPIOE
#define CHRG_PG_Pin GPIO_PIN_4
#define CHRG_PG_GPIO_Port GPIOE
#define CHRG_PG_EXTI_IRQn EXTI4_IRQn
#define CHRG_CHG_Pin GPIO_PIN_6
#define CHRG_CHG_GPIO_Port GPIOE
#define CHRG_CHG_EXTI_IRQn EXTI9_5_IRQn
#define OSC32_IN_Pin GPIO_PIN_14
#define OSC32_IN_GPIO_Port GPIOC
#define OSC32_OUT_Pin GPIO_PIN_15
#define OSC32_OUT_GPIO_Port GPIOC
#define OSC_IN_Pin GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOH
#define OSC_OUT_Pin GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOH
#define VDD_AFE_D_EN_Pin GPIO_PIN_2
#define VDD_AFE_D_EN_GPIO_Port GPIOC
#define VDD_AFE_A_EN_Pin GPIO_PIN_3
#define VDD_AFE_A_EN_GPIO_Port GPIOC
#define WAKEUP_Pin GPIO_PIN_0
#define WAKEUP_GPIO_Port GPIOA
#define WAKEUP_EXTI_IRQn EXTI0_IRQn
#define AFE_DRDY_Pin GPIO_PIN_1
#define AFE_DRDY_GPIO_Port GPIOA
#define AFE_DRDY_EXTI_IRQn EXTI1_IRQn
#define AFE_RESET_Pin GPIO_PIN_2
#define AFE_RESET_GPIO_Port GPIOA
#define AFE_START_Pin GPIO_PIN_3
#define AFE_START_GPIO_Port GPIOA
#define AFE_CS_Pin GPIO_PIN_4
#define AFE_CS_GPIO_Port GPIOA
#define AFE_SCLK_Pin GPIO_PIN_5
#define AFE_SCLK_GPIO_Port GPIOA
#define AFE_DOUT_Pin GPIO_PIN_6
#define AFE_DOUT_GPIO_Port GPIOA
#define AFE_DIN_Pin GPIO_PIN_7
#define AFE_DIN_GPIO_Port GPIOA
#define VDD_SCREEN_EN_Pin GPIO_PIN_5
#define VDD_SCREEN_EN_GPIO_Port GPIOC
#define UI_BUZZER_Pin GPIO_PIN_0
#define UI_BUZZER_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define TP_BUSY_Pin GPIO_PIN_10
#define TP_BUSY_GPIO_Port GPIOB
#define TP_PEN_Pin GPIO_PIN_11
#define TP_PEN_GPIO_Port GPIOB
#define TP_PEN_EXTI_IRQn EXTI15_10_IRQn
#define TP_CS_Pin GPIO_PIN_12
#define TP_CS_GPIO_Port GPIOB
#define TP_SCLK_Pin GPIO_PIN_13
#define TP_SCLK_GPIO_Port GPIOB
#define TP_MISO_Pin GPIO_PIN_14
#define TP_MISO_GPIO_Port GPIOB
#define TP_MOSI_Pin GPIO_PIN_15
#define TP_MOSI_GPIO_Port GPIOB
#define UI_BACKLIGHT_Pin GPIO_PIN_12
#define UI_BACKLIGHT_GPIO_Port GPIOD
#define VDD_RF_PW_EN_Pin GPIO_PIN_6
#define VDD_RF_PW_EN_GPIO_Port GPIOC
#define VDD_RF_IO_EN_Pin GPIO_PIN_7
#define VDD_RF_IO_EN_GPIO_Port GPIOC
#define BT_nSHUTD_Pin GPIO_PIN_9
#define BT_nSHUTD_GPIO_Port GPIOC
#define BT_SLOW_CLK_Pin GPIO_PIN_8
#define BT_SLOW_CLK_GPIO_Port GPIOA
#define BT_HCI_RX_Pin GPIO_PIN_9
#define BT_HCI_RX_GPIO_Port GPIOA
#define BT_HCI_TX_Pin GPIO_PIN_10
#define BT_HCI_TX_GPIO_Port GPIOA
#define BT_HCI_RTS_Pin GPIO_PIN_11
#define BT_HCI_RTS_GPIO_Port GPIOA
#define BT_HCI_CTS_Pin GPIO_PIN_12
#define BT_HCI_CTS_GPIO_Port GPIOA
#define UI_LED_R_Pin GPIO_PIN_10
#define UI_LED_R_GPIO_Port GPIOC
#define UI_LED_G_Pin GPIO_PIN_11
#define UI_LED_G_GPIO_Port GPIOC
#define UI_LED_B_Pin GPIO_PIN_12
#define UI_LED_B_GPIO_Port GPIOC
#define FG_SCL_Pin GPIO_PIN_6
#define FG_SCL_GPIO_Port GPIOB
#define FG_SDA_Pin GPIO_PIN_7
#define FG_SDA_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
