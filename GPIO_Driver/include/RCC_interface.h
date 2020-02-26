//============================================================================================
// interfacing functions prototype

void void_SetprephralState (u8 copy_u8_prephral_name , u8 copy_u8_state );
void void_RSTprephral      (u8 copy_u8_prephral_name);
void void_SYSCLKselect     (u8 copy_u8_clkname );
void void_SetHSEstate      (u8 copy_u8_HSESRC , u8 copy_u8_state);
void void_SetLSEstate      (u8 copy_u8_LSESRC , u8 copy_u8_state);
void void_SETHSIstate      (u8 copy_u8_state);
void void_SETLSIstate      (u8 copy_u8_state);
void void_SETPLLstate      (u8 copy_u8_state);
void void_SetPLLSRC        (u8 copy_u8_PLLSRC);
void void_PLL_mul_factor   (u8 copy_u8_factor);
//lazm n7dd el speed bta3t el usb abl m 23ml enable leeh
void void_USB_SPEED        (u8 copy_u8_speed);

void void_setADCPrescallerVal (u8 copy_u8_preValue);

void void_setAHBdivfactor     (u8 copy_u8_divfactor);

void void_setAPB1divfactor    (u8 copy_u8_divfactor);
void void_setAPB2divfactor    (u8 copy_u8_divfactor);

void void_RStBackupDomain     (void);
void void_EnableRTC           (void);
void void_RTCSrcSelect        (u8 copy_u8_RTCSrc);
// deh 3yza at2akked enha sh8ala kwys XD

void u8_getStatus              (u8 copy_u8_statusName , u8* copy_Pu8_state);
void void_RMVRSTflag          (void);

void void_setCSSstate         (u8 copy_u8_state);
void void_clrCSSflag          (void);
// deh msh sh8alaaaaaa
void void_enableMCOpin        (u8 copy_u8_clkVal);

void void_setClk_INTstate     (u8 copy_u8_clkName, u8 copy_u8_state);
// deh 3yza at2akked enha sh8ala kwys XD
void void_getINTflag           (u8 copy_u8_INTname,u8*copy_pu8_state);
//=============================================================================================
#define prephral_enable               1
#define prephral_disable              0

#define CLK_enable                    1
#define CLK_disable                   0

#define Enable                        1
#define disbale                       0

#define TIM11     1
#define TIM10     2
#define TIM9      3
#define ADC3      4
#define USART1    5
#define TIM8      6
#define SPI1      7
#define TIM1      8
#define ADC2      9
#define ADC1      10
#define portG     11
#define portF     12
#define portE     13
#define portD     14
#define portC     15
#define portB     16
#define portA     17
#define AFIO      18

#define DAC       19
#define PWR       20
#define BkP       21
#define CAN       22
#define USB       23
#define I2C2      24
#define I2C1      25
#define UART5     26
#define UART4     27
#define USART3    28
#define USART2    29
#define SPI3      30
#define SPI2      31
#define WWDG      32
#define TIM14     33
#define TIM13     34
#define TIM12     35
#define TIM7      36
#define TIM6      37
#define TIM5      38
#define TIM4      39
#define TIM3      40
#define TIM2      41

#define SDIO      42
#define FSMC      43
#define CRC       44
#define FLIT      45
#define SRAM      46
#define DMA2      47
#define DMA1      48

#define PLL_CLK   0
#define HSI_CLK   1
#define HSE_CLK   2

#define HSI_PLLSRC              1
#define HSE_PLLSRC              2


#define __HSE_not_divide        1
#define __HSE_divby2            2

#define HSE_RC_CT               1
#define HSE_bypass_CT           2

#define LSE_RC_CT               1
#define LSE_bypass_CT           2

#define PLL_MULby2                1
#define PLL_MULby3                2
#define PLL_MULby4                3
#define PLL_MULby5                4
#define PLL_MULby6                5
#define PLL_MULby7                6
#define PLL_MULby8                7
#define PLL_MULby9                8
#define PLL_MULby10               9
#define PLL_MULby11               10
#define PLL_MULby12               11
#define PLL_MULby13               12
#define PLL_MULby14               13
#define PLL_MULby15               14
#define PLL_MULby16               15

#define USB_prescaller0           1
#define USB_prescaller3divby2     2

#define __ADCPRE_divby2           1
#define __ADCPRE_divby4           2
#define __ADCPRE_divby6           3
#define __ADCPRE_divby8           4


#define __AHB_notdiv              1
#define __AHB_divby2              2
#define __AHB_divby4              3
#define __AHB_divby8              4
#define __AHB_divby16             5
#define __AHB_divby64             6
#define __AHB_divby128            7
#define __AHB_divby256            8
#define __AHB_divby512            9

#define __APB1_pre_notdiv         1
#define __APB1_pre_divby2         2
#define __APB1_pre_divby4         3
#define __APB1_pre_divby8         4
#define __APB1_pre_divby16        5


#define __APB2_pre_notdiv         1
#define __APB2_pre_divby2         2
#define __APB2_pre_divby4         3
#define __APB2_pre_divby8         4
#define __APB2_pre_divby16        5


#define __RTC_noclk_selected      1
#define __RTC_LSE_selected        2
#define __RTC_LSI_selected        3
#define __RTC_HSE_selected        4


#define __Low_PWR_RST_flag        1
#define __WWDG_RST_flag           2
#define __SW_RST_Flag             3
#define __POR_RST_Flag            4
#define __PIN_RST_Flag            5

#define __MCO_noclk               1
#define __MCO_sysclk_selected     2
#define __MCO_HSI_selected        3
#define __MCO_HSE_selected        4
#define __MCO_pll_dev_by2         5

#define __clear_CSSF_Flag       1

#define __PLL_RDY_INT           2
#define __HSE_RDY_INT           3
#define __HSI_RDY_INT           4
#define __LSE_RDY_INT           5
#define __LSI_RDY_INT           6

#define __PLL_ready_interrupt_flag     1
#define __HSE_ready_interrupt_flag     2
#define __HSI_ready_interrupt_flag     3
#define __LSE_ready_interrupt_flag     4
#define __LSI_ready_interrupt_flag     5




#define ON    1
#define OFF   0

//========================================================================================


