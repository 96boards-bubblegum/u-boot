/*
 * Copyright (c) 2015 Actions Semi Co., Ltd.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */


#ifndef __ASM_ARM_ARCH_PERIPH_H__
#define __ASM_ARM_ARCH_PERIPH_H__

/*
 * Peripherals required for pin mfp configuration.
 * Serial number of each device is sequentially increasing
  */
enum periph_id {
	PERIPH_ID_UART0,
	PERIPH_ID_UART1,
	PERIPH_ID_UART2,
	PERIPH_ID_UART3,
	PERIPH_ID_UART4,
	PERIPH_ID_UART5,
	PERIPH_ID_UART6,
	PERIPH_ID_UART7,

	PERIPH_ID_I2C0,
	PERIPH_ID_I2C1,
	PERIPH_ID_I2C2,
	PERIPH_ID_I2C3,
	PERIPH_ID_I2C4,
	PERIPH_ID_I2C5,

	PERIPH_ID_SPI0,
	PERIPH_ID_SPI1,
	PERIPH_ID_SPI2,
	PERIPH_ID_SPI3,
	PERIPH_ID_SPI4,

	PERIPH_ID_SDMMC0,
	PERIPH_ID_SDMMC1,
	PERIPH_ID_SDMMC2,
	PERIPH_ID_SDMMC3,

	PERIPH_ID_PWM0,
	PERIPH_ID_PWM1,
	PERIPH_ID_PWM2,
	PERIPH_ID_PWM3,
	PERIPH_ID_PWM4,
	PERIPH_ID_PWM5,
	PERIPH_ID_PWM6,
	PERIPH_ID_PWM7,

	PERIPH_ID_NONE = -1,

};

#endif /* __ASM_ARM_ARCH_PERIPH_H__ */