#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void void_SetprephralState(u8 copy_u8_prephral_name , u8 copy_u8_state )
{
		if (copy_u8_state == prephral_enable)
		{
			switch(copy_u8_prephral_name)
			{
			case TIM11:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM11));
				RCC_APB2ENR->Byte_Access |= enable_TIM11;
				break ;
			case TIM10:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM10));
				RCC_APB2ENR->Byte_Access |= enable_TIM10;
				break ;
			case TIM9:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM9));
				RCC_APB2ENR->Byte_Access |= enable_TIM9;
				break ;
			case ADC3:
				RCC_APB2ENR->Byte_Access &= (~(disable_ADC3));
				RCC_APB2ENR->Byte_Access |= enable_ADC3;
				break ;
			case USART1:
				RCC_APB2ENR->Byte_Access &= (~(disable_USART1));
				RCC_APB2ENR->Byte_Access |= enable_USART1;
				break ;
			case TIM8:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM8));
				RCC_APB2ENR->Byte_Access |= enable_TIM8;
				break ;
			case SPI1:
				RCC_APB2ENR->Byte_Access &= (~(disable_SPI1));
				RCC_APB2ENR->Byte_Access |= enable_SPI1;
				break ;
			case TIM1:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM1));
				RCC_APB2ENR->Byte_Access |= enable_TIM1;
				break ;
			case ADC2:
				RCC_APB2ENR->Byte_Access &= (~(disable_ADC2));
				RCC_APB2ENR->Byte_Access |= enable_ADC2;
				break ;
			case ADC1:
				RCC_APB2ENR->Byte_Access &= (~(disable_ADC1));
				RCC_APB2ENR->Byte_Access |= enable_ADC1;
				break ;
			case portG:
				RCC_APB2ENR->Byte_Access &= (~(disable_portG));
				RCC_APB2ENR->Byte_Access |= enable_portG;
				break ;
			case portF:
				RCC_APB2ENR->Byte_Access &= (~(disable_portF));
				RCC_APB2ENR->Byte_Access |= enable_portF;
				break ;
			case portE:
				RCC_APB2ENR->Byte_Access &= (~(disable_portE));
				RCC_APB2ENR->Byte_Access |= enable_portE;
				break ;
			case portD:
				RCC_APB2ENR->Byte_Access &= (~(disable_portD));
				RCC_APB2ENR->Byte_Access |= enable_portD;
				break ;
			case portC:
				RCC_APB2ENR->Byte_Access &= (~(disable_portC));
				RCC_APB2ENR->Byte_Access |= enable_portC;
				break ;
			case portB:
				RCC_APB2ENR->Byte_Access &= (~(disable_portB));
				RCC_APB2ENR->Byte_Access |= enable_portB;
				break ;
			case portA:
				RCC_APB2ENR->Byte_Access &= (~(disable_portA));
				RCC_APB2ENR->Byte_Access |= enable_portA;
				break ;
			case AFIO:
				RCC_APB2ENR->Byte_Access &= (~(disable_AFIO));
				RCC_APB2ENR->Byte_Access |= enable_AFIO;
				break ;
//------------------------------------------------------------------------------------
			case DAC:
				RCC_APB1ENR->Byte_Access &= (~(disable_DAC));
				RCC_APB1ENR->Byte_Access |= enable_DAC;
				break ;
			case PWR:
				RCC_APB1ENR->Byte_Access &= (~(disable_PWR));
				RCC_APB1ENR->Byte_Access |= enable_PWR;
				break ;
			case BkP:
				RCC_APB1ENR->Byte_Access &= (~(disable_BkP));
				RCC_APB1ENR->Byte_Access |= enable_BkP;
				break ;
			case CAN:
				RCC_APB1ENR->Byte_Access &= (~(disable_CAN));
				RCC_APB1ENR->Byte_Access |= enable_CAN;
				break ;
			case USB:
				RCC_APB1ENR->Byte_Access &= (~(disable_USB));
				RCC_APB1ENR->Byte_Access |= enable_USB;
				break ;
			case I2C2:
				RCC_APB1ENR->Byte_Access &= (~(disable_I2C2));
				RCC_APB1ENR->Byte_Access |= enable_I2C2;
				break ;
			case I2C1:
				RCC_APB1ENR->Byte_Access &= (~(disable_I2C1));
				RCC_APB1ENR->Byte_Access |= enable_I2C1;
				break ;
			case UART5:
				RCC_APB1ENR->Byte_Access &= (~(disable_UART5));
				RCC_APB1ENR->Byte_Access |= enable_UART5;
				break ;
			case UART4:
				RCC_APB1ENR->Byte_Access &= (~(disable_UART4));
				RCC_APB1ENR->Byte_Access |= enable_UART4;
				break ;
			case USART3:
				RCC_APB1ENR->Byte_Access &= (~(disable_USART3));
				RCC_APB1ENR->Byte_Access |= enable_USART3;
				break ;
			case USART2:
				RCC_APB1ENR->Byte_Access &= (~(disable_USART2));
				RCC_APB1ENR->Byte_Access |= enable_USART2;
				break ;
			case SPI3:
				RCC_APB1ENR->Byte_Access &= (~(disable_SPI3));
				RCC_APB1ENR->Byte_Access |= enable_SPI3;
				break ;
			case SPI2:
				RCC_APB1ENR->Byte_Access &= (~(disable_SPI2));
				RCC_APB1ENR->Byte_Access |= enable_SPI2;
				break ;
			case WWDG:
				RCC_APB1ENR->Byte_Access &= (~(disable_WWDG));
				RCC_APB1ENR->Byte_Access |= enable_WWDG;
				break ;
			case TIM14:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM14));
				RCC_APB1ENR->Byte_Access |= enable_TIM14;
				break ;
			case TIM13:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM13));
				RCC_APB1ENR->Byte_Access |= enable_TIM13;
				break ;
			case TIM12:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM12));
				RCC_APB1ENR->Byte_Access |= enable_TIM12;
				break ;
			case TIM7:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM7));
				RCC_APB1ENR->Byte_Access |= enable_TIM7;
				break ;
			case TIM6:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM11));
				RCC_APB1ENR->Byte_Access |= enable_TIM6;
				break ;
			case TIM5:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM5));
				RCC_APB1ENR->Byte_Access |= enable_TIM5;
				break ;
			case TIM4:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM4));
				RCC_APB1ENR->Byte_Access |= enable_TIM4;
				break ;
			case TIM3:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM3));
				RCC_APB1ENR->Byte_Access |= enable_TIM3;
				break ;
			case TIM2:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM2));
				RCC_APB1ENR->Byte_Access |= enable_TIM2;
				break ;

//--------------------------------------------------------------------------------------
			case SDIO:
				RCC_AHBENR->Byte_Access &= (~(SDIO_disable));
				RCC_AHBENR->Byte_Access |= SDIO_enable;
				break ;
			case FSMC:
				RCC_AHBENR->Byte_Access &= (~(FSMC_disable));
				RCC_AHBENR->Byte_Access |= FSMC_enable;
				break ;
			case CRC:
				RCC_AHBENR->Byte_Access &= (~(CRC_disable));
				RCC_AHBENR->Byte_Access |= CRC_enable;
				break ;
			case FLIT:
				RCC_AHBENR->Byte_Access &= (~(FLITF_disable));
				RCC_AHBENR->Byte_Access |= FLITF_enable;
				break ;
			case SRAM:
				RCC_AHBENR->Byte_Access &= (~(SRAM_disable));
				RCC_AHBENR->Byte_Access |= SRAM_enable;
				break ;
			case DMA2:
				RCC_AHBENR->Byte_Access &= (~(DMA2_disable));
				RCC_AHBENR->Byte_Access |= DMA2_enable;
				break ;
			case DMA1:
				RCC_AHBENR->Byte_Access &= (~(DMA1_disable));
				RCC_AHBENR->Byte_Access |= DMA1_enable;
				break ;
			}
		}
		else if (copy_u8_state == prephral_disable)
		{
			switch(copy_u8_prephral_name)
			{
			case TIM11:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM11));
				break ;
			case TIM10:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM10));
				break ;
			case TIM9:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM9));
				break ;
			case ADC3:
				RCC_APB2ENR->Byte_Access &= (~(disable_ADC3));
				break ;
			case USART1:
				RCC_APB2ENR->Byte_Access &= (~(disable_USART1));
				break ;
			case TIM8:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM8));
				break ;
			case SPI1:
				RCC_APB2ENR->Byte_Access &= (~(disable_SPI1));
				break ;
			case TIM1:
				RCC_APB2ENR->Byte_Access &= (~(disable_TIM1));
				break ;
			case ADC2:
				RCC_APB2ENR->Byte_Access &= (~(disable_ADC2));
				break ;
			case ADC1:
				RCC_APB2ENR->Byte_Access &= (~(disable_ADC1));
				break ;
			case portG:
				RCC_APB2ENR->Byte_Access &= (~(disable_portG));
				break ;
			case portF:
				RCC_APB2ENR->Byte_Access &= (~(disable_portF));
				break ;
			case portE:
				RCC_APB2ENR->Byte_Access &= (~(disable_portE));
				break ;
			case portD:
				RCC_APB2ENR->Byte_Access &= (~(disable_portD));
				break ;
			case portC:
				RCC_APB2ENR->Byte_Access &= (~(disable_portC));
				break ;
			case portB:
				RCC_APB2ENR->Byte_Access &= (~(disable_portB));
				break ;
			case portA:
				RCC_APB2ENR->Byte_Access &= (~(disable_portA));
				break ;
			case AFIO:
				RCC_APB2ENR->Byte_Access &= (~(disable_AFIO));
				break ;
//====================================================================================
			case DAC:
				RCC_APB1ENR->Byte_Access &= (~(disable_DAC));
				break ;
			case PWR:
				RCC_APB1ENR->Byte_Access &= (~(disable_PWR));
				break ;
			case BkP:
				RCC_APB1ENR->Byte_Access &= (~(disable_BkP));
				break ;
			case CAN:
				RCC_APB1ENR->Byte_Access &= (~(disable_CAN));
				break ;
			case USB:
				RCC_APB1ENR->Byte_Access &= (~(disable_USB));
				break ;
			case I2C2:
				RCC_APB1ENR->Byte_Access &= (~(disable_I2C2));
				break ;
			case I2C1:
				RCC_APB1ENR->Byte_Access &= (~(disable_I2C1));
				break ;
			case UART5:
				RCC_APB1ENR->Byte_Access &= (~(disable_UART5));
				break ;
			case UART4:
				RCC_APB1ENR->Byte_Access &= (~(disable_UART4));
				break ;
			case USART3:
				RCC_APB1ENR->Byte_Access &= (~(disable_USART3));
				break ;
			case USART2:
				RCC_APB1ENR->Byte_Access &= (~(disable_USART2));
				break ;
			case SPI3:
				RCC_APB1ENR->Byte_Access &= (~(disable_SPI3));
				break ;
			case SPI2:
				RCC_APB1ENR->Byte_Access &= (~(disable_SPI2));
				break ;
			case WWDG:
				RCC_APB1ENR->Byte_Access &= (~(disable_WWDG));
				break ;
			case TIM14:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM14));
				break ;
			case TIM13:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM13));
				break ;
			case TIM12:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM12));
				break ;
			case TIM7:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM7));
				break ;
			case TIM6:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM6));
				break ;
			case TIM5:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM5));
				break ;
			case TIM4:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM4));
				break ;
			case TIM3:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM3));
				break ;
			case TIM2:
				RCC_APB1ENR->Byte_Access &= (~(disable_TIM2));
				break ;
//-----------------------------------------------------------------------------------------------------------
			case SDIO:
				RCC_AHBENR->Byte_Access &= (~(SDIO_disable));
				break ;
			case FSMC:
				RCC_AHBENR->Byte_Access &= (~(FSMC_disable));
				break ;
			case CRC:
				RCC_AHBENR->Byte_Access &= (~(CRC_disable));
				break ;
			case FLIT:
				RCC_AHBENR->Byte_Access &= (~(FLITF_disable));
				break ;
			case SRAM:
				RCC_AHBENR->Byte_Access &= (~(SRAM_disable));
				break ;
			case DMA2:
				RCC_AHBENR->Byte_Access &= (~(DMA2_disable));
				break ;
			case DMA1:
				RCC_AHBENR->Byte_Access &= (~(DMA1_disable));
				break ;
			}

		}
}
void void_RSTprephral      (u8 copy_u8_prephral_name)
{
	switch(copy_u8_prephral_name)
				{
				case TIM11:
					RCC_APB2RSTR->Byte_Access |= RST_TIM11;
					break ;
				case TIM10:
					RCC_APB2RSTR->Byte_Access |= RST_TIM10;
					break ;
				case TIM9:
					RCC_APB2RSTR->Byte_Access |= RST_TIM9;
					break ;
				case ADC3:
					RCC_APB2RSTR->Byte_Access |= RST_ADC3;
					break ;
				case USART1:
					RCC_APB2RSTR->Byte_Access |= RST_USART1;
					break ;
				case TIM8:
					RCC_APB2RSTR->Byte_Access |= RST_TIM8;
					break ;
				case SPI1:
					RCC_APB2RSTR->Byte_Access |= RST_SPI1;
					break ;
				case TIM1:
					RCC_APB2RSTR->Byte_Access |= RST_TIM1;
					break ;
				case ADC2:
					RCC_APB2RSTR->Byte_Access |= RST_ADC2;
					break ;
				case ADC1:
					RCC_APB2RSTR->Byte_Access |= RST_ADC1;
					break ;
				case portG:
					RCC_APB2RSTR->Byte_Access |= RST_portG;
					break ;
				case portF:
					RCC_APB2RSTR->Byte_Access |= RST_portF;
					break ;
				case portE:
					RCC_APB2RSTR->Byte_Access |= RST_portE;
					break ;
				case portD:
					RCC_APB2RSTR->Byte_Access |= RST_portD;
					break ;
				case portC:
					RCC_APB2RSTR->Byte_Access |= RST_portC;
					break ;
				case portB:
					RCC_APB2RSTR->Byte_Access |= RST_portB;
					break ;
				case portA:
					RCC_APB2RSTR->Byte_Access |= RST_portA;
					break ;
				case AFIO:
					RCC_APB2RSTR->Byte_Access |= RST_AFIO;
					break ;
	//====================================================================================
				case DAC:
					RCC_APB1RSTR->Byte_Access |= RST_DAC;
					break ;
				case PWR:
					RCC_APB1RSTR->Byte_Access |= RST_PWR;
					break ;
				case BkP:
					RCC_APB1RSTR->Byte_Access |= RST_BkP;
					break ;
				case CAN:
					RCC_APB1RSTR->Byte_Access |= RST_CAN;
					break ;
				case USB:
					RCC_APB1RSTR->Byte_Access |= RST_USB;
					break ;
				case I2C2:
					RCC_APB1RSTR->Byte_Access |= RST_I2C2;
					break ;
				case I2C1:
					RCC_APB1RSTR->Byte_Access |= RST_I2C1;
					break ;
				case UART5:
					RCC_APB1RSTR->Byte_Access |= RST_UART5;
					break ;
				case UART4:
					RCC_APB1RSTR->Byte_Access |= RST_UART4;
					break ;
				case USART3:
					RCC_APB1RSTR->Byte_Access |= RST_USART3;
					break ;
				case USART2:
					RCC_APB1RSTR->Byte_Access |= RST_USART2;
					break ;
				case SPI3:
					RCC_APB1RSTR->Byte_Access |= RST_SPI3;
					break ;
				case SPI2:
					RCC_APB1RSTR->Byte_Access |= RST_SPI2;
					break ;
				case WWDG:
					RCC_APB1RSTR->Byte_Access |= RST_WWDG;
					break ;
				case TIM14:
					RCC_APB1RSTR->Byte_Access |= RST_TIM14;
					break ;
				case TIM13:
					RCC_APB1RSTR->Byte_Access |= RST_TIM13;
					break ;
				case TIM12:
					RCC_APB1RSTR->Byte_Access |= RST_TIM12;
					break ;
				case TIM7:
					RCC_APB1RSTR->Byte_Access |= RST_TIM7;
					break ;
				case TIM6:
					RCC_APB1RSTR->Byte_Access |= RST_TIM6;
					break ;
				case TIM5:
					RCC_APB1RSTR->Byte_Access |= RST_TIM5;
					break ;
				case TIM4:
					RCC_APB1RSTR->Byte_Access |= RST_TIM4;
					break ;
				case TIM3:
					RCC_APB1RSTR->Byte_Access |= RST_TIM3;
					break ;
				case TIM2:
					RCC_APB1RSTR->Byte_Access |= RST_TIM2;
					break ;
				}
}
void void_SYSCLKselect(u8 copy_u8_clkname )
{
		switch (copy_u8_clkname)
		{
		case PLL_CLK:

			RCC_CFGR->Byte_Access &= __sysCLKmask;
			RCC_CFGR ->Byte_Access &= (~PLL_selected_as_sysclk);
			RCC_CFGR ->Byte_Access  |= PLL_selected_as_sysclk;

			   break;
		case HSI_CLK:
			RCC_CFGR->Byte_Access &= __sysCLKmask;
			RCC_CFGR ->Byte_Access &= (~HSI_selected_as_sysclk);
			RCC_CFGR ->Byte_Access  |= HSI_selected_as_sysclk;

			break;
		case HSE_CLK:
			RCC_CFGR->Byte_Access &= __sysCLKmask;
			RCC_CFGR ->Byte_Access &= (~HSE_selected_as_sysclk);
			RCC_CFGR ->Byte_Access  |= HSE_selected_as_sysclk;

			   break;
		}
}
// M7TAGA 23ML DEH CONFIGURED 3lshan ana b7ddha abl el ho8l
void void_SetHSEstate(u8 copy_u8_HSESRC , u8 copy_u8_state)
{
	if (copy_u8_state == Enable)
	{
	switch (copy_u8_HSESRC)
	{
	case HSE_RC_CT:
		RCC_CR->Byte_Access&=(~(HSE_OFF));
		RCC_CR->Byte_Access|=HSE_ON;
//		while ((GET_BIT(RCC_CR->Byte_Access,HSE_RDYflag)) == 0 );
		break ;
	case HSE_bypass_CT :
		RCC_CR->Byte_Access&=(~(HSE_pypass_disable));
		RCC_CR->Byte_Access |= HSE_pypass_enable;
//		while ((GET_BIT(RCC_CR->Byte_Access,HSE_RDYflag)) == 0 );
		break ;
	}
	}
	else if (copy_u8_state == disbale)
	{
		switch(copy_u8_HSESRC)
		{
		case HSE_RC_CT:
			RCC_CR->Byte_Access&=(~(HSE_OFF));
			break ;
		case HSE_bypass_CT :
			RCC_CR->Byte_Access&=(~(HSE_pypass_disable));
			break ;
		}

		//while ((GET_BIT(RCC_CR->Byte_Access,HSE_RDYflag)) == 1 );
	}
}
// M7TAGA 23ML DEH CONFIGURED 3lshan ana b7ddha abl el ho8l

void void_SetLSEstate      (u8 copy_u8_LSESRC , u8 copy_u8_state)
{
	// lazm 23ml enable ll power prephral 3lshan yd5ollo clk el awl abl mktb fl reg bgta3to
	  RCC_APB1ENR->BIT_ACCESS.Bit28=1;
	  // 3lshan 23rf aktb 3l backup domain reg lazm bit rkm 8 elly hya esmha DBP fl CR bta3 el pwr prephral tkon b 1
	  PWR_CR->BIT_ACCESS.Bit8=1;
	if (copy_u8_state == Enable)
	{
	switch (copy_u8_LSESRC)
	{
	case LSE_RC_CT:


		RCC_BDCR->Byte_Access&=(~(LSE_OFF));
		RCC_BDCR->Byte_Access|=LSE_ON;
//		while ((GET_BIT(RCC_CR->Byte_Access,HSE_RDYflag)) == 0 );
		break ;
	case LSE_bypass_CT :
		RCC_BDCR->Byte_Access&=(~(LSE_pypass_dis));
		RCC_BDCR->Byte_Access|= LSE_pypass_enable;
//		while ((GET_BIT(RCC_CR->Byte_Access,HSE_RDYflag)) == 0 );
		break ;
	}
	}
	else if (copy_u8_state == disbale)
	{
		switch(copy_u8_LSESRC)
		{
		case LSE_RC_CT:
			RCC_BDCR->Byte_Access&=(~(LSE_OFF));
			break ;
		case LSE_bypass_CT :
			RCC_BDCR->Byte_Access&=(~(LSE_pypass_enable));
			break ;
		}

		//while ((GET_BIT(RCC_CR->Byte_Access,HSE_RDYflag)) == 1 );
	}
}
void void_SETHSIstate(u8 copy_u8_state)
{
	if (copy_u8_state == Enable)
		{
//		RCC_CR->Byte_Access|=HSE_ON;
		RCC_CR->Byte_Access&=(~(HSI_OFF));
		RCC_CR->Byte_Access|=HSI_ON;

//		SET_BIT(RCC_CR->Byte_Access,0);
		}
	else if (copy_u8_state == disbale)
	{
		RCC_CR->Byte_Access&=(~(HSI_OFF));

	}
}
void void_SETLSIstate      (u8 copy_u8_state)
{
	if (copy_u8_state == Enable)
		{
//		RCC_CR->Byte_Access|=HSE_ON;
		RCC_CSR->Byte_Access&=(~(LSI_OFF));
		RCC_CSR->Byte_Access|=LSI_ON;
//	while ((GET_BIT(RCC_CSR->Byte_Access,LSI_RDY_flag)) == 0 );

//		SET_BIT(RCC_CR->Byte_Access,0);
		}
	else if (copy_u8_state == disbale)
	{
		RCC_CSR->Byte_Access&=(~(LSI_OFF));
//	while ((GET_BIT(RCC_CSR->Byte_Access,LSI_RDY_flag)) == 1 );

	}
}
void void_SETPLLstate (u8 copy_u8_state)
{
	if (copy_u8_state == Enable)
	{
		RCC_CR->Byte_Access&=(~(PLL_OFF));
		RCC_CR->Byte_Access|=PLL_ON;
		//RCC_CR->Byte_Access|=PLL_ON;
	//while ((GET_BIT(RCC_CR->Byte_Access,PLL_RDY_flag)) == 0 );
	}
	else 	if (copy_u8_state == disbale)
	{
		RCC_CR->Byte_Access&=(~(PLL_OFF));

//	RCC_CR->Byte_Access|=PLL_OFF;
//	while ((GET_BIT(RCC_CR->Byte_Access,PLL_RDY_flag)) == 1 );
	}
}
void void_SetPLLSRC   (u8 copy_u8_PLLSRC)
{
	switch (copy_u8_PLLSRC)
	{
	case HSE_PLLSRC:
		void_SetHSEstate (HSE_RC_CT , Enable );

        #if __pllHSESRC_selector  ==  __HSE_not_divide
		    RCC_CFGR->Byte_Access|=PLLXTPRE_HSEnotdevided;
        #elif __pllHSESRC_selector  ==  __HSE_divby2
			RCC_CFGR->Byte_Access|=PLLXTPRE_HSEdevidedby2;
        #endif
		RCC_CFGR-> Byte_Access|= HSE_PLL_src;
		break ;
	case HSI_PLLSRC:
		void_SETHSIstate (Enable);
		RCC_CFGR-> Byte_Access|=HSIdevby2_PLL_src;
		break ;
	}
}
void void_PLL_mul_factor(u8 copy_u8_factor)
{
	RCC_CFGR -> Byte_Access  &= __PLL_MUL_FACTORmask;
	switch(copy_u8_factor)
	{
	case PLL_MULby2:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by2;
		break ;
	case PLL_MULby3:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by3;
		break ;
	case PLL_MULby4:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by4;
		break ;
	case PLL_MULby5:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by5;
		break ;
	case PLL_MULby6:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by6;
		break ;
	case PLL_MULby7:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by7;
		break ;
	case PLL_MULby8:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by8;
		break ;
	case PLL_MULby9:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by9;
		break ;
	case PLL_MULby10:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by10;
		break ;
	case PLL_MULby11:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by11;
		break ;
	case PLL_MULby12:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by12;
		break ;
	case PLL_MULby13:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by13;
		break ;
	case PLL_MULby14:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by14;
		break ;
	case PLL_MULby15:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by15;
		break ;
	case PLL_MULby16:
		RCC_CFGR -> Byte_Access |= PLL_MUL_by16;
		break ;
	}
}
void void_USB_SPEED        (u8 copy_u8_speed)
{
	switch(copy_u8_speed)
	{
	case USB_prescaller0:
//		RCC_CFGR -> Byte_Access &= (~(USBpre_Devby0));
		RCC_CFGR -> Byte_Access |= USBpre_Devby0;
		break;
	case USB_prescaller3divby2:
		RCC_CFGR -> Byte_Access &= (~(USBpre_Devby3over2));
		RCC_CFGR -> Byte_Access |= USBpre_Devby3over2;
		break;
	}
}
void void_setADCPrescallerVal (u8 copy_u8_preValue)
{		RCC_CFGR->Byte_Access &= __ADC_MUL_FACTORmask;

	switch(copy_u8_preValue)
	{
	case __ADCPRE_divby2:
		RCC_CFGR->Byte_Access|=ADCPRE_divby2;
		break;
	case __ADCPRE_divby4:
		RCC_CFGR->Byte_Access|=ADCPRE_divby4;
		break;
	case __ADCPRE_divby6:
		RCC_CFGR->Byte_Access|=ADCPRE_divby6;
		break;
	case __ADCPRE_divby8:
		RCC_CFGR->Byte_Access|=ADCPRE_divby8;
		break;
	}
}
void void_setAHBdivfactor     (u8 copy_u8_divfactor)
{     RCC_CFGR->Byte_Access &=  __AHB_DIV_FACTORmask;
	switch(copy_u8_divfactor)
	{
	case __AHB_notdiv:
		RCC_CFGR->Byte_Access |= AHB_notdiv;
		break ;
	case __AHB_divby2:
		RCC_CFGR->Byte_Access |= AHB_divby2;
		break ;
	case __AHB_divby4:
		RCC_CFGR->Byte_Access |= AHB_divby4;
		break ;
	case __AHB_divby8:
		RCC_CFGR->Byte_Access |= AHB_divby8;
		break ;
	case __AHB_divby16:
		RCC_CFGR->Byte_Access |= AHB_divby16;
		break ;
	case __AHB_divby64:
		RCC_CFGR->Byte_Access |= AHB_divby64;
		break ;
	case __AHB_divby128:
		RCC_CFGR->Byte_Access |= AHB_divby128;
		break ;
	case __AHB_divby256:
		RCC_CFGR->Byte_Access |= AHB_divby256;
		break ;
	case __AHB_divby512:
		RCC_CFGR->Byte_Access |= AHB_divby512;
		break ;
	}
}
void void_setAPB1divfactor    (u8 copy_u8_divfactor)
{ RCC_CFGR->Byte_Access  &=__APB1_DIV_FACTORmask;
	switch(copy_u8_divfactor)
	{
	case __APB1_pre_notdiv:
		RCC_CFGR->Byte_Access |= APB1_pre_notdiv;
		break ;
	case __APB1_pre_divby2:
		RCC_CFGR->Byte_Access |= APB1_pre_divby2;
		break ;
	case __APB1_pre_divby4:
		RCC_CFGR->Byte_Access |= APB1_pre_divby4;
		break ;
	case __APB1_pre_divby8:
		RCC_CFGR->Byte_Access |= APB1_pre_divby8;
		break ;
	case __APB1_pre_divby16:
		RCC_CFGR->Byte_Access |= APB1_pre_divby16;
		break ;
	}
}
void void_setAPB2divfactor    (u8 copy_u8_divfactor)
{RCC_CFGR->Byte_Access  &=__APB2_DIV_FACTORmask;
	switch(copy_u8_divfactor)
	{
	case __APB2_pre_notdiv:
		RCC_CFGR->Byte_Access |= APB2_pre_notdiv;
		break ;
	case __APB2_pre_divby2:
		RCC_CFGR->Byte_Access |= APB2_pre_divby2;
		break ;
	case __APB2_pre_divby4:
		RCC_CFGR->Byte_Access |= APB2_pre_divby4;
		break ;
	case __APB2_pre_divby8:
		RCC_CFGR->Byte_Access |= APB2_pre_divby8;
		break ;
	case __APB2_pre_divby16:
		RCC_CFGR->Byte_Access |= APB2_pre_divby16;
		break ;
	}
}
void void_RStBackupDomain     (void)
{
	RCC_BDCR->Byte_Access |= RST_Backup_domain;
}
void void_EnableRTC           (void)
{
	// lazm 23ml enable ll power prephral 3lshan yd5ollo clk el awl abl mktb fl reg bgta3to
	  RCC_APB1ENR->BIT_ACCESS.Bit28=1;
	  // 3lshan 23rf aktb 3l backup domain reg lazm bit rkm 8 elly hya esmha DBP fl CR bta3 el pwr prephral tkon b 1
	  PWR_CR->BIT_ACCESS.Bit8=1;

	RCC_BDCR->Byte_Access |= enable_RTC;
}
void void_RTCSrcSelect        (u8 copy_u8_RTCSrc)
{
//        RCC_BDCR->Byte_Access &= __RTCCLKmask;
        RCC_BDCR->BIT_ACCESS.Bit8=0;
        RCC_BDCR->BIT_ACCESS.Bit9=0;

//        void_EnableRTC    ();
	switch(copy_u8_RTCSrc)
	{
	case __RTC_noclk_selected :
        RCC_BDCR->BIT_ACCESS.Bit8=0;
        RCC_BDCR->BIT_ACCESS.Bit9=0;
		//RCC_BDCR->Byte_Access |= RTC_noclk_selected;
		break ;
	case __RTC_LSE_selected :
        #if   __LSE_SRC     ==    LSE_RC_CT
		void_SetLSEstate ( LSE_RC_CT, Enable) ;
		#elif  __LSE_SRC     ==    LSE_bypass_CT
		void_SetLSEstate ( LSE_bypass_CT, Enable) ;
		#endif
        RCC_BDCR->BIT_ACCESS.Bit8=1;
        RCC_BDCR->BIT_ACCESS.Bit9=0;
//		RCC_BDCR->Byte_Access |= RTC_LSE_selected;
		break ;
	case __RTC_LSI_selected :
		void_SETLSIstate(Enable);
        RCC_BDCR->BIT_ACCESS.Bit8=0;
        RCC_BDCR->BIT_ACCESS.Bit9=1;
//		RCC_BDCR->Byte_Access |= RTC_LSI_selected;
		break ;
	case __RTC_HSE_selected :
		#if   __HSE_SRC     ==    HSE_RC_CT
		void_SetHSEstate ( HSE_RC_CT, Enable) ;
		#elif  __HSE_SRC     ==    HSE_bypass_CT
		void_SetHSEstate ( HSE_bypass_CT, Enable) ;
		#endif
        RCC_BDCR->BIT_ACCESS.Bit8=1;
        RCC_BDCR->BIT_ACCESS.Bit9=1;
		//		RCC_BDCR->Byte_Access |= RTC_HSE_selected;
		break ;
	}
}
void u8_getStatus               (u8 copy_u8_statusName , u8* copy_Pu8_state)
{
	switch (copy_u8_statusName)
	{
	case __Low_PWR_RST_flag:
		*copy_Pu8_state = GET_BIT(RCC_CSR->Byte_Access,Low_PWR_RST_flag);
		break;
	case __WWDG_RST_flag:
		*copy_Pu8_state =GET_BIT(RCC_CSR->Byte_Access,WWDG_RST_flag);
		break ;
	case __SW_RST_Flag:
		*copy_Pu8_state =GET_BIT(RCC_CSR->Byte_Access,SW_RST_Flag);
		break ;
	case __POR_RST_Flag:
		*copy_Pu8_state =GET_BIT(RCC_CSR->Byte_Access,POR_RST_Flag);
		break ;
	case __PIN_RST_Flag:
		*copy_Pu8_state =GET_BIT(RCC_CSR->Byte_Access,PIN_RST_Flag);
		break ;
	}
//	return copy_Pu8_state;
}
void void_RMVRSTflag          ()
{
	RCC_CSR->Byte_Access |= Remove_RST_flag;
//	while ((GET_BIT(RCC_CSR->Byte_Access,SW_RST_Flag))==0);
}
void void_setCSSstate         (u8 copy_u8_state)
{RCC_CR ->Byte_Access &= (~(CSS_OFF));
	switch (copy_u8_state)
	{
	case Enable:
		RCC_CR ->Byte_Access |= CSS_ON;
		break;
	case disbale :
		RCC_CR ->Byte_Access |= CSS_OFF;
		break ;
	}
}
void void_enableMCOpin        (u8 copy_u8_clkVal)
{		RCC_CFGR ->Byte_Access &= __MCO_SRC_MASK;
	switch(copy_u8_clkVal)
	{
	case __MCO_noclk:
		RCC_CFGR ->Byte_Access |= MCO_noclk;
		break ;
	case __MCO_sysclk_selected:
		RCC_CFGR ->Byte_Access |= MCO_sysclk_selected;
		break ;
	case __MCO_HSI_selected:
		RCC_CFGR ->Byte_Access |= MCO_HSI_selected;
		break ;
	case __MCO_HSE_selected:
		RCC_CFGR ->Byte_Access |= MCO_HSE_selected;
		break ;
	case __MCO_pll_dev_by2:
		RCC_CFGR ->Byte_Access |= MCO_pll_dev_by2;
		break ;
	}
}
void void_setClk_INTstate     (u8 copy_u8_clkName, u8 copy_u8_state)
{
	if (copy_u8_state == Enable)
	{
		switch(copy_u8_clkName)
		{
		case __PLL_RDY_INT:
			RCC_CIR->Byte_Access |= PLL_RDY_INT_enable;
			break ;
		case __HSE_RDY_INT:
			RCC_CIR->Byte_Access |= HSE_RDY_INT_enable;
			break ;
		case __HSI_RDY_INT:
			RCC_CIR->Byte_Access |= HSI_RDY_INT_enable;
			break ;
		case __LSE_RDY_INT:
			RCC_CIR->Byte_Access |= LSE_RDY_INT_enable;
			break ;
		case __LSI_RDY_INT:
			RCC_CIR->Byte_Access |= LSI_RDY_INT_enable;
			break ;
		}
	}
	if (copy_u8_state == disbale)
	{
		switch(copy_u8_clkName)
		{
		case __PLL_RDY_INT:
			RCC_CIR->Byte_Access |= PLL_RDY_INT_DIS ;
			break ;
		case __HSE_RDY_INT:
			RCC_CIR->Byte_Access |= HSE_RDY_INT_DIS ;
			break ;
		case __HSI_RDY_INT:
			RCC_CIR->Byte_Access |= HSI_RDY_INT_DIS ;
			break ;
		case __LSE_RDY_INT:
			RCC_CIR->Byte_Access |= LSE_RDY_INT_DIS ;
			break ;
		case __LSI_RDY_INT:
			RCC_CIR->Byte_Access |= LSI_RDY_INT_DIS ;
			break ;
		}
	}
}
void void_getINTflag           (u8 copy_u8_INTname,u8*copy_pu8_state)
{
	switch(copy_u8_INTname)
	{
	case __PLL_ready_interrupt_flag:
		*copy_pu8_state=GET_BIT(RCC_CIR->Byte_Access,PLL_ready_interrupt_flag);
		break;
	case __HSE_ready_interrupt_flag:
		*copy_pu8_state=GET_BIT(RCC_CIR->Byte_Access,HSE_ready_interrupt_flag);
		break;
	case __HSI_ready_interrupt_flag:
		*copy_pu8_state=GET_BIT(RCC_CIR->Byte_Access,HSI_ready_interrupt_flag);
		break;
	case __LSE_ready_interrupt_flag:
		*copy_pu8_state=GET_BIT(RCC_CIR->Byte_Access,LSE_ready_interrupt_flag);
		break;
	case __LSI_ready_interrupt_flag:
		*copy_pu8_state=GET_BIT(RCC_CIR->Byte_Access,LSI_ready_interrupt_flag);
		break;
	}
}
void void_clrCSSflag          (void)
{
	RCC_CIR->Byte_Access |= clear_CSSF_Flag ;
	while ((GET_BIT(RCC_CIR->Byte_Access ,CSSF_interrupt_flag)) ==1);
}
