/*
 * Copyright (c) 2018 Henrik Brix Andersen <henrik@brixandersen.dk>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* LED on PA17 */
#define LED0_GPIO_PORT	CONFIG_GPIO_SAM0_PORTA_LABEL
#define LED0_GPIO_PIN	17

#define CONFIG_UART_SAM0_SERCOM0_PADS \
	(SERCOM_USART_CTRLA_RXPO(3) | SERCOM_USART_CTRLA_TXPO(1))

#define CONFIG_SPI_SAM0_SERCOM4_PADS \
	(SERCOM_SPI_CTRLA_DIPO(0) | SERCOM_SPI_CTRLA_DOPO(1))

#endif /* __INC_BOARD_H */
