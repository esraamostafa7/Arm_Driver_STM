//#ifndef RCC_config.h
//#define RCC_config.h

//------------------------------------------------------------------------
// configuration of CR features

#define PLL_RDY_flag               25 //pll rdy flag bit number in rcc control register
#define PLL_ON                     1<<24
#define PLL_OFF                    1<<24
/*Set and cleared by software to enable the clock security system. When CSSON is set, the
clock detector is enabled by hardware when the HSE oscillator is ready, and disabled by
hardware if a HSE clock failure is detected.*/
#define CSS_ON                     1<<19
#define CSS_OFF                    1<<19
/*Set and cleared by software to bypass the oscillator with an external clock. The external
clock must be enabled with the HSEON bit set, to be used by the device. The HSEBYP bit
can be written only if the HSE oscillator is disabled.*/
#define HSE_pypass_enable           1<<18

#define HSE_pypass_disable          1<<18

#define HSE_RDYflag                 17
/*Cleared by hardware to stop the HSE oscillator when entering Stop or Standby mode. This
bit cannot be reset if the HSE oscillator is used directly or indirectly as the system clock.*/
#define HSE_ON                     1<<16
#define HSE_OFF                    1<<16

/*Bits 15:8 HSICAL[7:0]: Internal high-speed clock calibration
These bits are initialized automatically at startup.*/

/*Bits 7:3 HSITRIM[4:0]: Internal high-speed clock trimming
These bits provide an additional user-programmable trimming value that is added to the
HSICAL[7:0] bits. It can be programmed to adjust to variations in voltage and temperature
that influence the frequency of the internal HSI RC.
The default value is 16, which, when added to the HSICAL value, should trim the HSI to 8
MHz ± 1%. The trimming step (Fhsitrim) is around 40 kHz between two consecutive HSICAL
steps.*/
#define HSI_RDYflag               1
//8 MHz RC oscillator on
#define HSI_ON                    1<<0
//8 MHz RC oscillator OFF
#define HSI_OFF                   1<<0
//--------------------------------------------------------------------------------------------
// configuration of RCC_CFGR register
/*Bits 26:24 MCO: Microcontroller clock output
Set and cleared by software.
0xx: No clock
100: System clock (SYSCLK) selected
101: HSI clock selected
110: HSE clock selected
111: PLL clock divided by 2 selected*/
#define MCO_noclk               0b000<<24
#define MCO_sysclk_selected     4<<24
#define MCO_HSI_selected        5<<24
#define MCO_HSE_selected        6<<24
#define MCO_pll_dev_by2         7<<24
/*Set and cleared by software to generate 48 MHz USB clock. This bit must be valid before
enabling the USB clock in the RCC_APB1ENR register. This bit can’t be reset if the USB
clock is enabled.
0: PLL clock is divided by 1.5
1: PLL clock is not divided*/
#define USBpre_Devby3over2        0<<22
#define USBpre_Devby0             1<<22
// pll multiblication factor
#define PLL_MUL_by2               0b0000<<18
#define PLL_MUL_by3               0b0001<<18
#define PLL_MUL_by4               0b0010<<18
#define PLL_MUL_by5               0b0011<<18
#define PLL_MUL_by6               0b0100<<18
#define PLL_MUL_by7               0b0101<<18
#define PLL_MUL_by8               0b0110<<18
#define PLL_MUL_by9               0b0111<<18
#define PLL_MUL_by10              0b1000<<18
#define PLL_MUL_by11              0b1001<<18
#define PLL_MUL_by12              0b1010<<18
#define PLL_MUL_by13              0b1011<<18
#define PLL_MUL_by14              0b1100<<18
#define PLL_MUL_by15              0b1101<<18
#define PLL_MUL_by16              0b1110<<18
//#define PLL_MUL_by16              0b1111<<18

/*PLLXTPRE: HSE divider for PLL entry
Set and cleared by software to divide HSE before PLL entry. This bit can be written only
when PLL is disabled.
0: HSE clock not divided
1: HSE clock divided by 2*/

#define PLLXTPRE_HSEnotdevided   0<<17
#define PLLXTPRE_HSEdevidedby2   1<<17

/*PLLSRC: PLL entry clock source
Set and cleared by software to select PLL clock source. This bit can be written only when
PLL is disabled.
0: HSI oscillator clock / 2 selected as PLL input clock
1: HSE oscillator clock selected as PLL input clock*/
#define HSIdevby2_PLL_src        0<<16
#define HSE_PLL_src              1<<16


/*ADCPRE: ADC prescaler
Set and cleared by software to select the frequency of the clock to the ADCs.
00: PCLK2 divided by 2
01: PCLK2 divided by 4
10: PCLK2 divided by 6
11: PCLK2 divided by 8*/
#define ADCPRE_divby2             0b00<<14
#define ADCPRE_divby4             0b01<<14
#define ADCPRE_divby6             0b10<<14
#define ADCPRE_divby8             0b11<<14
 /*PPRE2: APB high-speed prescaler (APB2)
Set and cleared by software to control the division factor of the APB high-speed clock
(PCLK2).
0xx: HCLK not divided
100: HCLK divided by 2
101: HCLK divided by 4
110: HCLK divided by 8
111: HCLK divided by 16*/

#define APB2_pre_notdiv             0b000<<11
#define APB2_pre_divby2             0b100<<11
#define APB2_pre_divby4             0b101<<11
#define APB2_pre_divby8             0b110<<11
#define APB2_pre_divby16            0b111<<11

/*PPRE1: APB low-speed prescaler (APB1)
Set and cleared by software to control the division factor of the APB low-speed clock
(PCLK1).
Warning: the software has to set correctly these bits to not exceed 36 MHz on this domain.
0xx: HCLK not divided
100: HCLK divided by 2
101: HCLK divided by 4
110: HCLK divided by 8
111: HCLK divided by 16*/
#define APB1_pre_notdiv             0b000<<8
#define APB1_pre_divby2             0b100<<8
#define APB1_pre_divby4             0b101<<8
#define APB1_pre_divby8             0b110<<8
#define APB1_pre_divby16            0b111<<8

/*HPRE: AHB prescaler
Set and cleared by software to control the division factor of the AHB clock.
0xxx: SYSCLK not divided
1000: SYSCLK divided by 2
1001: SYSCLK divided by 4
1010: SYSCLK divided by 8
1011: SYSCLK divided by 16
1100: SYSCLK divided by 64
1101: SYSCLK divided by 128
1110: SYSCLK divided by 256
1111: SYSCLK divided by 512*/

#define AHB_notdiv                  0b0000<<4
#define AHB_divby2                  0b1000<<4
#define AHB_divby4                  0b1001<<4
#define AHB_divby8                  0b1010<<4
#define AHB_divby16                 0b1011<<4
#define AHB_divby64                 0b1100<<4
#define AHB_divby128                0b1101<<4
#define AHB_divby256                0b1110<<4
#define AHB_divby512                0b1111<<4

/*SWS: System clock switch status
Set and cleared by hardware to indicate which clock source is used as system clock.
00: HSI oscillator used as system clock
01: HSE oscillator used as system clock
10: PLL used as system clock
11: not applicable*/

#define HSI_used_as_sysclk         0b00
#define HSE_used_as_sysclk         0b01
#define PLL_used_as_sysclk         0b10
/*SW: System clock switch
Set and cleared by software to select SYSCLK source.
Set by hardware to force HSI selection when leaving Stop and Standby mode or in case of
failure of the HSE oscillator used directly or indirectly as system clock (if the Clock Security
System is enabled).
00: HSI selected as system clock
01: HSE selected as system clock
10: PLL selected as system clock
11: not allowed*/

#define HSI_selected_as_sysclk         0
#define HSE_selected_as_sysclk         1
#define PLL_selected_as_sysclk         2

//--------------------------------------------------------------------------------------------
// configuration of RCC_CIR register
/*CSSC: Clock security system interrupt clear
This bit is set by software to clear the CSSF flag.
0: No effect
1: Clear CSSF flag*/
#define clear_CSSF_Flag           1<<23

#define PLL_RDY_INT_DIS              1<<20
#define HSE_RDY_INT_DIS              1<<19
#define HSI_RDY_INT_DIS              1<<18
#define LSE_RDY_INT_DIS              1<<17
#define LSI_RDY_INT_DIS              1<<16

#define PLL_RDY_INT_enable           1<<12
#define HSE_RDY_INT_enable           1<<11
#define HSI_RDY_INT_enable           1<<10
#define LSE_RDY_INT_enable           1<<9
#define LSI_RDY_INT_enable           1<<8

/*CSSF: Clock security system interrupt flag
Set by hardware when a failure is detected in the external 4-16 MHz oscillator.
Cleared by software setting the CSSC bit.
0: No clock security interrupt caused by HSE clock failure
1: Clock security interrupt caused by HSE clock failure*/

#define CSSF_interrupt_flag          7
/*PLLRDYF: PLL ready interrupt flag
Set by hardware when the PLL locks and PLLRDYDIE is set.
Cleared by software setting the PLLRDYC bit.
0: No clock ready interrupt caused by PLL lock
1: Clock ready interrupt caused by PLL lock*/

#define PLL_ready_interrupt_flag     4
#define HSE_ready_interrupt_flag     3
#define HSI_ready_interrupt_flag     2
#define LSE_ready_interrupt_flag     1
#define LSI_ready_interrupt_flag     0

//-------------------------------------------------------------------------------------------
//configuration of RCC_APB2RSTR register

#define RST_TIM11                    1<<21
#define RST_TIM10                    1<<20
#define RST_TIM9                     1<<19

#define RST_ADC3                     1<<15
#define RST_USART1                   1<<14
#define RST_TIM8                     1<<13
#define RST_SPI1                     1<<12
#define RST_TIM1                     1<<11
#define RST_ADC2                     1<<10
#define RST_ADC1                     1<<9
#define RST_portG                    1<<8
#define RST_portF                    1<<7
#define RST_portE                    1<<6
#define RST_portD                    1<<5
#define RST_portC                    1<<4
#define RST_portB                    1<<3
#define RST_portA                    1<<2
#define RST_AFIO                     1<<0

//-------------------------------------------------------------------------------------------
//configuration of RCC_APB1RSTR register

#define RST_DAC                      1<<29
#define RST_PWR                      1<<28
// pkb packup interface
#define RST_BkP                      1<<27
#define RST_CAN                      1<<25
#define RST_USB                      1<<23
#define RST_I2C2                     1<<22
#define RST_I2C1                     1<<21
#define RST_UART5                    1<<20
#define RST_UART4                    1<<19
#define RST_USART3                   1<<18
#define RST_USART2                   1<<17
#define RST_SPI3                     1<<15
#define RST_SPI2                     1<<14
#define RST_WWDG                     1<<11
#define RST_TIM14                    1<<8
#define RST_TIM13                    1<<7
#define RST_TIM12                    1<<6
#define RST_TIM7                     1<<5
#define RST_TIM6                     1<<4
#define RST_TIM5                     1<<3
#define RST_TIM4                     1<<2
#define RST_TIM3                     1<<1
#define RST_TIM2                     1<<0

//-------------------------------------------------------------------------------------------
//configuration of RCC_AHBENR register

#define SDIO_enable                 1<<10
#define FSMC_enable                 1<<8
#define CRC_enable                  1<<6
/*FLITFEN: FLITF clock enable
Set and cleared by software to disable/enable FLITF clock during Sleep mode.
0: FLITF clock disabled during Sleep mode
1: FLITF clock enabled during Sleep mode*/
#define FLITF_enable                1<<4
/*SRAMEN: SRAM interface clock enable
Set and cleared by software to disable/enable SRAM interface clock during Sleep mode.
0: SRAM interface clock disabled during Sleep mode.
1: SRAM interface clock enabled during Sleep mode*/
#define SRAM_enable                 1<<2
#define DMA2_enable                 1<<1
#define DMA1_enable                 1<<0

#define SDIO_disable                 1<<10
#define FSMC_disable                 1<<8
#define CRC_disable                  1<<6
/*FLITFEN: FLITF clock disable
Set and cleared by software to disable/disable FLITF clock during Sleep mode.
0: FLITF clock disabled during Sleep mode
1: FLITF clock disabled during Sleep mode*/
#define FLITF_disable                1<<4
/*SRAMEN: SRAM interface clock disable
Set and cleared by software to disable/disable SRAM interface clock during Sleep mode.
0: SRAM interface clock disabled during Sleep mode.
1: SRAM interface clock disabled during Sleep mode*/
#define SRAM_disable                 1<<2
#define DMA2_disable                 1<<1
#define DMA1_disable                 1<<0



//-------------------------------------------------------------------------------------------
//configuration of RCC_APB2ENR register

#define enable_TIM11                    1<<21
#define enable_TIM10                    1<<20
#define enable_TIM9                     1<<19

#define enable_ADC3                     1<<15
#define enable_USART1                   1<<14
#define enable_TIM8                     1<<13
#define enable_SPI1                     1<<12
#define enable_TIM1                     1<<11
#define enable_ADC2                     1<<10
#define enable_ADC1                     1<<9
#define enable_portG                    1<<8
#define enable_portF                    1<<7
#define enable_portE                    1<<6
#define enable_portD                    1<<5
#define enable_portC                    1<<4
#define enable_portB                    1<<3
#define enable_portA                    1<<2
#define enable_AFIO                     1<<0


#define disable_TIM11                    1<<21
#define disable_TIM10                    1<<20
#define disable_TIM9                     1<<19

#define disable_ADC3                     1<<15
#define disable_USART1                   1<<14
#define disable_TIM8                     1<<13
#define disable_SPI1                     1<<12
#define disable_TIM1                     1<<11
#define disable_ADC2                     1<<10
#define disable_ADC1                     1<<9
#define disable_portG                    1<<8
#define disable_portF                    1<<7
#define disable_portE                    1<<6
#define disable_portD                    1<<5
#define disable_portC                    1<<4
#define disable_portB                    1<<3
#define disable_portA                    1<<2
#define disable_AFIO                     1<<0


//-------------------------------------------------------------------------------------------
//configuration of RCC_APB1ENR register

#define enable_DAC                      1<<29
#define enable_PWR                      1<<28
// pkb packup interface
#define enable_BkP                      1<<27
#define enable_CAN                      1<<25
#define enable_USB                      1<<23
#define enable_I2C2                     1<<22
#define enable_I2C1                     1<<21
#define enable_UART5                    1<<20
#define enable_UART4                    1<<19
#define enable_USART3                   1<<18
#define enable_USART2                   1<<17
#define enable_SPI3                     1<<15
#define enable_SPI2                     1<<14
#define enable_WWDG                     1<<11
#define enable_TIM14                    1<<8
#define enable_TIM13                    1<<7
#define enable_TIM12                    1<<6
#define enable_TIM7                     1<<5
#define enable_TIM6                     1<<4
#define enable_TIM5                     1<<3
#define enable_TIM4                     1<<2
#define enable_TIM3                     1<<1
#define enable_TIM2                     1<<0


#define disable_DAC                      1<<29
#define disable_PWR                      1<<28
#define disable_BkP                      1<<27
#define disable_CAN                      1<<25
#define disable_USB                      1<<23
#define disable_I2C2                     1<<22
#define disable_I2C1                     1<<21
#define disable_UART5                    1<<20
#define disable_UART4                    1<<19
#define disable_USART3                   1<<18
#define disable_USART2                   1<<17
#define disable_SPI3                     1<<15
#define disable_SPI2                     1<<14
#define disable_WWDG                     1<<11
#define disable_TIM14                    1<<8
#define disable_TIM13                    1<<7
#define disable_TIM12                    1<<6
#define disable_TIM7                     1<<5
#define disable_TIM6                     1<<4
#define disable_TIM5                     1<<3
#define disable_TIM4                     1<<2
#define disable_TIM3                     1<<1
#define disable_TIM2                     1<<0
//-------------------------------------------------------------------------------------------
//configuration of Backup domain control register (RCC_BDCR)

// Backup domain software reset
#define RST_Backup_domain        1<<16
// RTC clock enable
#define enable_RTC               1<<15
// RTC clock source selection
/*et by software to select the clock source for the RTC. Once the RTC clock source has been
selected, it cannot be changed anymore unless the Backup domain is reset. The BDRST bit
can be used to reset them.
00: No clock
01: LSE oscillator clock used as RTC clock
10: LSI oscillator clock used as RTC clock
11: HSE oscillator clock divided by 128 used as RTC clock*/
#define RTC_noclk_selected       0b00<<8
#define RTC_LSE_selected         0b01<<8
#define RTC_LSI_selected         0b10<<8
#define RTC_HSE_selected         0b11<<8

#define LSE_pypass_enable        4//1<<2
#define LSE_pypass_dis           4//1<<2

#define LSE_RDY_flag             1
#define LSE_ON                   1<<0
#define LSE_OFF                  1<<0


//-------------------------------------------------------------------------------------------
// configuration of Control/status register (RCC_CSR)

#define Low_PWR_RST_flag        31
#define WWDG_RST_flag           30
/*SFTRSTF: Software reset flag
Set by hardware when a software reset occurs.
Cleared by writing to the RMVF bit.
0: No software reset occurred
1: Software reset occurred*/

#define SW_RST_Flag             29
#define POR_RST_Flag            28
#define PIN_RST_Flag            27
#define Remove_RST_flag         1<<24

#define LSI_RDY_flag            1
#define LSI_ON                  1<<0
#define LSI_OFF                 1<<0

//=========================================================================================

#define __pllHSESRC_selector    __HSE_not_divide

#define __LSE_SRC              LSE_RC_CT

#define __HSE_SRC              HSE_RC_CT

#define __sysCLKmask           (u32)0xfffffff0
#define __RTCCLKmask           (u32)0xfffffCff

#define __PLL_MUL_FACTORmask   (u32)0xFFC3FFFF

#define __ADC_MUL_FACTORmask   (u32)0xFFFF3FFF

#define __AHB_DIV_FACTORmask   (u32)0xFFFFFF0F
#define __APB1_DIV_FACTORmask  (u32)0xFFFF8FFF
#define __APB2_DIV_FACTORmask  (u32)0xFFFFC7FF
#define __MCO_SRC_MASK         (u32)0xF8FFFFFF


//#endif
