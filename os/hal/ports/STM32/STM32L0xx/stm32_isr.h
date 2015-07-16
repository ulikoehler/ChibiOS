/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    STM32F0xx/stm32_isr.h
 * @brief   ISR remapper driver header.
 *
 * @addtogroup STM32F0xx_ISR
 * @{
 */

#ifndef _STM32_ISR_H_
#define _STM32_ISR_H_

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    ISR names and numbers remapping
 * @{
 */

/*
 * I2C units.
 */
#define STM32_I2C1_GLOBAL_HANDLER   Vector9C
#define STM32_I2C1_GLOBAL_NUMBER    23

#define STM32_I2C2_GLOBAL_HANDLER   VectorA0
#define STM32_I2C2_GLOBAL_NUMBER    24

/*
 * TIM units.
 */
#define STM32_TIM2_HANDLER          Vector7C
#define STM32_TIM6_HANDLER          Vector84
#define STM32_TIM21_HANDLER         Vector90
#define STM32_TIM22_HANDLER         Vector98

#define STM32_TIM2_NUMBER           15
#define STM32_TIM6_NUMBER           17
#define STM32_TIM21_NUMBER          20
#define STM32_TIM22_NUMBER          22

/*
 * USART units.
 */
#define STM32_USART1_HANDLER        VectorAC
#define STM32_USART2_HANDLER        VectorB0

#define STM32_USART1_NUMBER         27
#define STM32_USART2_NUMBER         28

/*
 * USB units.
 */
#define STM32_USB1_LP_HANDLER       VectorBC
#define STM32_USB1_LP_NUMBER        31
#define STM32_USB1_HP_HANDLER       VectorBC
#define STM32_USB1_HP_NUMBER        31
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#endif /* _STM32_ISR_H_ */

/** @} */
