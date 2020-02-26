

#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "GPIO_interface.h"
#include "GPIO_config.h"
#include "GPIO_private.h"

u8   GPIO_u8SetPinDir    (u8 Copy_u8PinNb, u8 Copy_u8Mode)
{
	u8 local_u8_Error_State  =0 ;
	if (Copy_u8PinNb > MAX_pin_Num)
	{
		local_u8_Error_State=1;
	}

	if (Copy_u8PinNb == GPIO_u8_PIN0)
		{	GPIO_PORTA->CRL.Byte_Access &= _pin0_Configuration_mask;
			switch(Copy_u8Mode)
			{
			case _GPIO_u8_GP_Output_pp_10MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_GP_Output_pp_10MHZ;
			break ;
			case _GPIO_u8_GP_Output_pp_2MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_GP_Output_pp_2MHZ;

			break ;
			case _GPIO_u8_GP_Output_pp_50MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_GP_Output_pp_50MHZ;

			break ;

			case _GPIO_u8_GP_Output_OD_10MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_GP_Output_OD_10MHZ;

			break ;
			case _GPIO_u8_GP_Output_OD_2MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_GP_Output_OD_2MHZ;

			break ;
			case _GPIO_u8_GP_Output_OD_50MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_GP_Output_OD_50MHZ;

			break ;

			case _GPIO_u8_AF_Output_pp_10MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_AF_Output_pp_10MHZ;
			break ;
			case _GPIO_u8_AF_Output_pp_2MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_AF_Output_pp_2MHZ;
			break ;
			case _GPIO_u8_AF_Output_pp_50MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_AF_Output_pp_50MHZ;
			break ;

			case _GPIO_u8_AF_Output_OD_10MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_AF_Output_OD_10MHZ;
			break ;
			case _GPIO_u8_AF_Output_OD_2MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_AF_Output_OD_2MHZ;
			break ;
			case _GPIO_u8_AF_Output_OD_50MHZ :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_AF_Output_OD_50MHZ;
			break ;
			// input pins
			case _GPIO_u8_Input_Analog :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_Input_Analog;

			break ;
			case _GPIO_u8_Input_floating :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_Input_floating;
			break ;
			case _GPIO_u8_Input_PullDown :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_Input_PullDown;
				GPIO_PORTA ->ODR .BIT_ACCESS.Bit0 = 0;

			break ;
			case _GPIO_u8_Input_PullUp :
				GPIO_PORTA->CRL.Byte_Access |= GPIO_u8_Input_PullUp;
				GPIO_PORTA ->ODR .BIT_ACCESS.Bit0 = 1;

			break ;

			}
		}
		if (Copy_u8PinNb == GPIO_u8_PIN1)
				{	GPIO_PORTA->CRL.Byte_Access &= _pin1_Configuration_mask;
					switch(Copy_u8Mode)
					{
					case _GPIO_u8_GP_Output_pp_10MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 4);

					break ;
					case _GPIO_u8_GP_Output_pp_2MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<4);

					break ;
					case _GPIO_u8_GP_Output_pp_50MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<4);

					break ;

					case _GPIO_u8_GP_Output_OD_10MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<4);

					break ;
					case _GPIO_u8_GP_Output_OD_2MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<4 );

					break ;
					case _GPIO_u8_GP_Output_OD_50MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<4 );

					break ;

					case _GPIO_u8_AF_Output_pp_10MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<4 );
					break ;
					case _GPIO_u8_AF_Output_pp_2MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<4 );
					break ;
					case _GPIO_u8_AF_Output_pp_50MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<4 );
					break ;

					case _GPIO_u8_AF_Output_OD_10MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<4 );
					break ;
					case _GPIO_u8_AF_Output_OD_2MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<4 );
					break ;
					case _GPIO_u8_AF_Output_OD_50MHZ :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<4 );
					break ;
					// input pins
					case _GPIO_u8_Input_Analog :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<4 );
					break ;
					case _GPIO_u8_Input_floating :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<4 );
					break ;
					case _GPIO_u8_Input_PullDown :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<4 );
						GPIO_PORTA ->ODR .BIT_ACCESS.Bit1 = 0;

					break ;
					case _GPIO_u8_Input_PullUp :
						GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<4);
						GPIO_PORTA ->ODR .BIT_ACCESS.Bit1 = 1;

					break ;

					}
				}
		if (Copy_u8PinNb == GPIO_u8_PIN2)
						{	GPIO_PORTA->CRL.Byte_Access &= _pin2_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 8);

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<8);

							break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<8);

							break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<8);

							break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<8 );

							break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<8 );

							break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<8 );
							break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<8 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<8 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<8 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<8 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<8 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<8 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<8 );

							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<8 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit2 = 0;

							break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<8);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit2 = 1;
							break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN3)
						{	GPIO_PORTA->CRL.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 12);

							break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<12);

								break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<12);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<12);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<12 );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<12 );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<12 );
							break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<12 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<12 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<12 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<12 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<12 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<12 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<12 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<12 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit3 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<12);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit3 = 1;
								break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN4)
						{	GPIO_PORTA->CRL.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 16);

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<16);

								break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<16);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<16);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<16 );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<16 );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<16 );

								break ;

							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<16 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<16 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<16 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<16 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<16 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<16 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<16 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<16 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit4 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<16);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit4 = 1;
								break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN5)
						{	GPIO_PORTA->CRL.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 20);

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<20);

							break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<20);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<20);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<20 );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<20 );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<20 );

								break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<20 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<20 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<20 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<20 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<20 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<20 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<20 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<20 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit5 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<20);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit5 = 1;
								break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN6)
						{	GPIO_PORTA->CRL.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 24);

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<24);

								break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<24);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<24);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<24 );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<24 );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<24 );

								break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<24 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<24 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<24 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<24 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<24 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<24 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<24 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<24 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit6 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<24);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit6 = 1;
								break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN7)
						{	GPIO_PORTA->CRL.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 28);

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<28);

								break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<28);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<28);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<28 );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<28 );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<28 );
							break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<28 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<28 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<28 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<28 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<28 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<28 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_floating <<28 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<28 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit7 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<28);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit7 = 1;
								break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN8)
						{	GPIO_PORTA->CRH.Byte_Access &= _pin8_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ );

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ );

								break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ  );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ  );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ  );
							break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ  );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ  );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ  );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating  );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown  );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit8 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit8 = 1;
								break ;

							}
						}
		if (Copy_u8PinNb == GPIO_u8_PIN9)
						{	GPIO_PORTA->CRH.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 4);

								break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<4);

								break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<4);

								break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<4);

								break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<4 );

								break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<4 );

								break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<4 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<4 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<4 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<4 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<4 );
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit9 = 0;
								break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<4);
								GPIO_PORTA ->ODR .BIT_ACCESS.Bit9 = 1;
								break ;

							}
						}
				if (Copy_u8PinNb == GPIO_u8_PIN10)
								{	GPIO_PORTA->CRH.Byte_Access &= _pin2_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 8);

										break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<8);

										break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<8);

										break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<8);

										break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<8 );

										break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<8 );

										break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<8 );

										break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<8 );

										break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<8 );

										break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<8 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<8 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<8 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<8 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<8 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<8 );
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit10 = 0;
										break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<8);
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit10 = 1;
										break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN11)
								{	GPIO_PORTA->CRH.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 12);

										break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<12);

										break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<12);

										break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<12);

										break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<12 );

										break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<12 );

										break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<12 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<12 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<12 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<12 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<12 );
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit11 = 0;
										break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<12);
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit11 = 1;
										break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN12)
								{	GPIO_PORTA->CRH.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 16);
										break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<16);

										break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<16);

										break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<16);

										break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<16 );

										break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<16 );

										break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<16 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<16 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<16 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<16 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<16 );
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit12 = 0;
										break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<16);
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit12 = 1;
										break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN13)
								{	GPIO_PORTA->CRH.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 20);

										break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<20);

										break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<20);

										break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<20);

										break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<20 );

										break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<20 );

										break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<20 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<20 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<20 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<20 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<20 );
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit13 = 0;
										break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<20);
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit13 = 1;
										break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN14)
								{	GPIO_PORTA->CRH.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 24);
										break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<24);
										break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<24);
										break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<24);
										break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<24 );
										break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<24 );
										break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<24 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<24 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<24 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<24 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<24 );
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit14 = 0;
										break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<24);
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit14 = 1;
										break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN15)
								{	GPIO_PORTA->CRH.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 28);
										break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<28);
										break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<28);
										break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<28);
										break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<28 );
										break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<28 );
										break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<28 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<28 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<28 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_floating <<28 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<28 );
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit15 = 0;
										break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTA->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<28);
										break ;
										GPIO_PORTA ->ODR .BIT_ACCESS.Bit15 = 1;
									}
								}

		if (Copy_u8PinNb == GPIO_u8_PIN16)
				{	GPIO_PORTB->CRL.Byte_Access &= _pin0_Configuration_mask;
					switch(Copy_u8Mode)
					{
					case _GPIO_u8_GP_Output_pp_10MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_GP_Output_pp_10MHZ;
					break ;
					case _GPIO_u8_GP_Output_pp_2MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_GP_Output_pp_2MHZ;
					break ;
					case _GPIO_u8_GP_Output_pp_50MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_GP_Output_pp_50MHZ;
					break ;

					case _GPIO_u8_GP_Output_OD_10MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_GP_Output_OD_10MHZ;
					break ;
					case _GPIO_u8_GP_Output_OD_2MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_GP_Output_OD_2MHZ;
					break ;
					case _GPIO_u8_GP_Output_OD_50MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_GP_Output_OD_50MHZ;
					break ;

					case _GPIO_u8_AF_Output_pp_10MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_AF_Output_pp_10MHZ;
					break ;
					case _GPIO_u8_AF_Output_pp_2MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_AF_Output_pp_2MHZ;
					break ;
					case _GPIO_u8_AF_Output_pp_50MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_AF_Output_pp_50MHZ;
					break ;

					case _GPIO_u8_AF_Output_OD_10MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_AF_Output_OD_10MHZ;
					break ;
					case _GPIO_u8_AF_Output_OD_2MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_AF_Output_OD_2MHZ;
					break ;
					case _GPIO_u8_AF_Output_OD_50MHZ :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_AF_Output_OD_50MHZ;
					break ;
					// input pins
					case _GPIO_u8_Input_Analog :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_Input_Analog;
					break ;
					case _GPIO_u8_Input_floating :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_Input_floating;
					break ;
					case _GPIO_u8_Input_PullDown :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_Input_PullDown;
						GPIO_PORTB ->ODR .BIT_ACCESS.Bit0 = 0;
					break ;
					case _GPIO_u8_Input_PullUp :
						GPIO_PORTB->CRL.Byte_Access |= GPIO_u8_Input_PullUp;
						GPIO_PORTB ->ODR .BIT_ACCESS.Bit0 = 1;
					break ;

					}
				}
				if (Copy_u8PinNb == GPIO_u8_PIN17)
						{	GPIO_PORTB->CRL.Byte_Access &= _pin1_Configuration_mask;
							switch(Copy_u8Mode)
							{
							case _GPIO_u8_GP_Output_pp_10MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 4);
							break ;
							case _GPIO_u8_GP_Output_pp_2MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<4);
							break ;
							case _GPIO_u8_GP_Output_pp_50MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<4);
							break ;

							case _GPIO_u8_GP_Output_OD_10MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<4);
							break ;
							case _GPIO_u8_GP_Output_OD_2MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<4 );
							break ;
							case _GPIO_u8_GP_Output_OD_50MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<4 );
							break ;

							case _GPIO_u8_AF_Output_pp_10MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_pp_2MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_pp_50MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<4 );
							break ;

							case _GPIO_u8_AF_Output_OD_10MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_OD_2MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<4 );
							break ;
							case _GPIO_u8_AF_Output_OD_50MHZ :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<4 );
							break ;
							// input pins
							case _GPIO_u8_Input_Analog :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<4 );
							break ;
							case _GPIO_u8_Input_floating :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<4 );
							break ;
							case _GPIO_u8_Input_PullDown :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<4 );
								GPIO_PORTB ->ODR .BIT_ACCESS.Bit1 = 0;
							break ;
							case _GPIO_u8_Input_PullUp :
								GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<4);
								GPIO_PORTB ->ODR .BIT_ACCESS.Bit1 = 1;
							break ;

							}
						}
				if (Copy_u8PinNb == GPIO_u8_PIN18)
								{	GPIO_PORTB->CRL.Byte_Access &= _pin2_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 8);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<8);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<8);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<8);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<8 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<8 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<8 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<8 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<8 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<8 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<8 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<8 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<8 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<8 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<8 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit2 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<8);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit2 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN19)
								{	GPIO_PORTB->CRL.Byte_Access &= _pin1_Configuration_mask;

									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 12);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<12);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<12);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<12);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<12 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<12 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<12 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<12 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<12 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<12 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<12 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<12 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit3 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<12);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit3 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN20)
								{	GPIO_PORTB->CRL.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 16);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<16);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<16);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<16);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<16 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<16 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<16 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<16 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<16 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<16 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<16 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<16 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit4 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<16);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit4 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN21)
								{	GPIO_PORTB->CRL.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 20);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<20);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<20);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<20);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<20 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<20 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<20 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<20 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<20 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<20 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<20 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<20 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit5 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<20);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit5 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN22)
								{	GPIO_PORTB->CRL.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 24);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<24);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<24);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<24);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<24 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<24 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<24 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<24 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<24 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<24 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<24 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<24 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit6 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<24);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit6 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN23)
								{	GPIO_PORTB->CRL.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 28);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<28);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<28);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<28);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<28 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<28 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<28 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<28 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<28 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_Analog<<28 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_floating <<28 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<28 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit7 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<28);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit7 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN24)
								{	GPIO_PORTB->CRH.Byte_Access &= _pin8_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ );
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ );
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ);
									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ  );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ  );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ  );

									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ  );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ  );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ  );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating  );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown  );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit8 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit8 = 1;
									break ;

									}
								}
				if (Copy_u8PinNb == GPIO_u8_PIN25)
								{	GPIO_PORTB->CRH.Byte_Access &= _pin1_Configuration_mask;
									switch(Copy_u8Mode)
									{
									case _GPIO_u8_GP_Output_pp_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 4);
									break ;
									case _GPIO_u8_GP_Output_pp_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<4);
									break ;
									case _GPIO_u8_GP_Output_pp_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<4);
									break ;

									case _GPIO_u8_GP_Output_OD_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<4);									break ;
									case _GPIO_u8_GP_Output_OD_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<4 );
									break ;
									case _GPIO_u8_GP_Output_OD_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<4 );
									break ;

									case _GPIO_u8_AF_Output_pp_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<4 );
									break ;
									case _GPIO_u8_AF_Output_pp_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<4 );
									break ;
									case _GPIO_u8_AF_Output_pp_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<4 );
									break ;

									case _GPIO_u8_AF_Output_OD_10MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<4 );
									break ;
									case _GPIO_u8_AF_Output_OD_2MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<4 );
									break ;
									case _GPIO_u8_AF_Output_OD_50MHZ :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<4 );
									break ;
									// input pins
									case _GPIO_u8_Input_Analog :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<4 );
									break ;
									case _GPIO_u8_Input_floating :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<4 );
									break ;
									case _GPIO_u8_Input_PullDown :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<4 );
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit9 = 0;
									break ;
									case _GPIO_u8_Input_PullUp :
										GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<4);
										GPIO_PORTB ->ODR .BIT_ACCESS.Bit9 = 1;
									break ;

									}
								}
						if (Copy_u8PinNb == GPIO_u8_PIN26)
										{	GPIO_PORTB->CRH.Byte_Access &= _pin2_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 8);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<8);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<8);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<8);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<8 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<8 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<8 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<8 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<8 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<8 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<8 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<8 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<8 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<8 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<8 );
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit10 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<8);
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit10 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN27)
										{	GPIO_PORTB->CRH.Byte_Access &= _pin1_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 12);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<12);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<12);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<12);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<12 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<12 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<12 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<12 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<12 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<12 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<12 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<12 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<12 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<12 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<12 );
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit11 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<12);
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit11 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN28)
										{	GPIO_PORTB->CRH.Byte_Access &= _pin1_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 16);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<16);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<16);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<16);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<16 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<16 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<16 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<16 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<16 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<16 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<16 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<16 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<16 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<16 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<16 );
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit12 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<16);
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit12 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN29)
										{	GPIO_PORTB->CRH.Byte_Access &= _pin1_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 20);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<20);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<20);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<20);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<20 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<20 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<20 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<20 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<20 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<20 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<20 );
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit13 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<20);
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit13 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN30)
										{	GPIO_PORTB->CRH.Byte_Access &= _pin1_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 24);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<24);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<24);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<24);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<24 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<24 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<24 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<24 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<24 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<24 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<24 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<24 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<24 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<24 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<24 );
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit14 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<24);
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit14 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN31)
										{	GPIO_PORTB->CRH.Byte_Access &= _pin1_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 28);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<28);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<28);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<28);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<28 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<28 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<28 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<28 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<28 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<28 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<28 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<28 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<28 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_floating <<28 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<28 );
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit15 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTB->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<28);
												GPIO_PORTB ->ODR .BIT_ACCESS.Bit15 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN32)
										{	GPIO_PORTC->CRH.Byte_Access &= _pin13_Configuration_mask;
											switch(Copy_u8Mode)
											{
											case _GPIO_u8_GP_Output_pp_10MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 20);
											break ;
											case _GPIO_u8_GP_Output_pp_2MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<20);
											break ;
											case _GPIO_u8_GP_Output_pp_50MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<20);
											break ;

											case _GPIO_u8_GP_Output_OD_10MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<20);
											break ;
											case _GPIO_u8_GP_Output_OD_2MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<20 );
											break ;
											case _GPIO_u8_GP_Output_OD_50MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<20 );
											break ;

											case _GPIO_u8_AF_Output_pp_10MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_pp_2MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_pp_50MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<20 );
											break ;

											case _GPIO_u8_AF_Output_OD_10MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_OD_2MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<20 );
											break ;
											case _GPIO_u8_AF_Output_OD_50MHZ :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<20 );
											break ;
											// input pins
											case _GPIO_u8_Input_Analog :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<20 );
											break ;
											case _GPIO_u8_Input_floating :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_floating <<20 );
											break ;
											case _GPIO_u8_Input_PullDown :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<20 );
												GPIO_PORTC ->ODR .BIT_ACCESS.Bit13 = 0;
											break ;
											case _GPIO_u8_Input_PullUp :
												GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<20);
												GPIO_PORTC ->ODR .BIT_ACCESS.Bit13 = 1;
											break ;

											}
										}
						if (Copy_u8PinNb == GPIO_u8_PIN33)
							{	GPIO_PORTC->CRH.Byte_Access &= _pin14_Configuration_mask;
								switch(Copy_u8Mode)
								{
								case _GPIO_u8_GP_Output_pp_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 24);
								break ;
								case _GPIO_u8_GP_Output_pp_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<24);
								break ;
								case _GPIO_u8_GP_Output_pp_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<24);
								break ;

								case _GPIO_u8_GP_Output_OD_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<24);
								break ;
								case _GPIO_u8_GP_Output_OD_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<24 );
								break ;
								case _GPIO_u8_GP_Output_OD_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<24 );
								break ;

								case _GPIO_u8_AF_Output_pp_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<24 );
								break ;
								case _GPIO_u8_AF_Output_pp_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<24 );
								break ;
								case _GPIO_u8_AF_Output_pp_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<24 );
								break ;

								case _GPIO_u8_AF_Output_OD_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<24 );
								break ;
								case _GPIO_u8_AF_Output_OD_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<24 );
								break ;
								case _GPIO_u8_AF_Output_OD_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<24 );
								break ;
								// input pins
								case _GPIO_u8_Input_Analog :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<24 );
								break ;
								case _GPIO_u8_Input_floating :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_floating <<24 );
								break ;
								case _GPIO_u8_Input_PullDown :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<24 );
									GPIO_PORTC ->ODR .BIT_ACCESS.Bit14 = 0;
								break ;
								case _GPIO_u8_Input_PullUp :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<24);
									GPIO_PORTC ->ODR .BIT_ACCESS.Bit14 = 1;
								break ;

								}
							}
						if (Copy_u8PinNb == GPIO_u8_PIN34)
							{	GPIO_PORTC->CRH.Byte_Access &= _pin15_Configuration_mask;
								switch(Copy_u8Mode)
								{
								case _GPIO_u8_GP_Output_pp_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ << 28);
								break ;
								case _GPIO_u8_GP_Output_pp_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<28);
								break ;
								case _GPIO_u8_GP_Output_pp_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<28);
								break ;

								case _GPIO_u8_GP_Output_OD_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<28);
								break ;
								case _GPIO_u8_GP_Output_OD_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<28 );
								break ;
								case _GPIO_u8_GP_Output_OD_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ <<28 );
								break ;

								case _GPIO_u8_AF_Output_pp_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<28 );
								break ;
								case _GPIO_u8_AF_Output_pp_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ <<28 );
								break ;
								case _GPIO_u8_AF_Output_pp_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ <<28 );
								break ;

								case _GPIO_u8_AF_Output_OD_10MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<28 );
								break ;
								case _GPIO_u8_AF_Output_OD_2MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<28 );
								break ;
								case _GPIO_u8_AF_Output_OD_50MHZ :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<28 );
								break ;
								// input pins
								case _GPIO_u8_Input_Analog :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_Analog<<28 );
								break ;
								case _GPIO_u8_Input_floating :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_floating <<28 );
								break ;
								case _GPIO_u8_Input_PullDown :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_PullDown <<28 );
									GPIO_PORTC ->ODR .BIT_ACCESS.Bit15 = 0;
								break ;
								case _GPIO_u8_Input_PullUp :
									GPIO_PORTC->CRH.Byte_Access |= (GPIO_u8_Input_PullUp <<28);
									GPIO_PORTC ->ODR .BIT_ACCESS.Bit15 = 1;
								break ;

								}
							}

						if (Copy_u8PinNb == GPIO_u8_PIN35)
							{	GPIO_PORTD->CRL.Byte_Access &= _pin0_Configuration_mask;
								switch(Copy_u8Mode)
								{
								case _GPIO_u8_GP_Output_pp_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ );
								break ;
								case _GPIO_u8_GP_Output_pp_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ );
								break ;
								case _GPIO_u8_GP_Output_pp_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ );
								break ;

								case _GPIO_u8_GP_Output_OD_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ );
								break ;
								case _GPIO_u8_GP_Output_OD_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ );
								break ;
								case _GPIO_u8_GP_Output_OD_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ );
								break ;

								case _GPIO_u8_AF_Output_pp_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ );
								break ;
								case _GPIO_u8_AF_Output_pp_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ  );
								break ;
								case _GPIO_u8_AF_Output_pp_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ  );
								break ;

								case _GPIO_u8_AF_Output_OD_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ  );
								break ;
								case _GPIO_u8_AF_Output_OD_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ );
								break ;
								case _GPIO_u8_AF_Output_OD_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ  );
								break ;
								// input pins
								case _GPIO_u8_Input_Analog :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_Analog );
								break ;
								case _GPIO_u8_Input_floating :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_floating  );
								break ;
								case _GPIO_u8_Input_PullDown :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_PullDown  );
									GPIO_PORTD ->ODR .BIT_ACCESS.Bit0 = 0;
								break ;
								case _GPIO_u8_Input_PullUp :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_PullUp );
									GPIO_PORTD ->ODR .BIT_ACCESS.Bit0 = 1;
								break ;

								}
							}
						if (Copy_u8PinNb == GPIO_u8_PIN36)
							{	GPIO_PORTD->CRL.Byte_Access &= _pin1_Configuration_mask;
								switch(Copy_u8Mode)
								{
								case _GPIO_u8_GP_Output_pp_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_10MHZ <<4 );
								break ;
								case _GPIO_u8_GP_Output_pp_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_2MHZ <<4 );
								break ;
								case _GPIO_u8_GP_Output_pp_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_pp_50MHZ <<4 );
								break ;

								case _GPIO_u8_GP_Output_OD_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_10MHZ <<4 );
								break ;
								case _GPIO_u8_GP_Output_OD_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_2MHZ <<4 );
								break ;
								case _GPIO_u8_GP_Output_OD_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_GP_Output_OD_50MHZ  <<4 );
								break ;

								case _GPIO_u8_AF_Output_pp_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_10MHZ <<4 );
								break ;
								case _GPIO_u8_AF_Output_pp_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_2MHZ  <<4 );
								break ;
								case _GPIO_u8_AF_Output_pp_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_pp_50MHZ  <<4 );
								break ;

								case _GPIO_u8_AF_Output_OD_10MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_10MHZ <<4  );
								break ;
								case _GPIO_u8_AF_Output_OD_2MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_2MHZ <<4  );
								break ;
								case _GPIO_u8_AF_Output_OD_50MHZ :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_AF_Output_OD_50MHZ <<4 );
								break ;
								// input pins
								case _GPIO_u8_Input_Analog :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_Analog <<4 );
								break ;
								case _GPIO_u8_Input_floating :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_floating  <<4 );
								break ;
								case _GPIO_u8_Input_PullDown :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_PullDown <<4  );
									GPIO_PORTD ->ODR .BIT_ACCESS.Bit1 = 0;
								break ;
								case _GPIO_u8_Input_PullUp :
									GPIO_PORTD->CRL.Byte_Access |= (GPIO_u8_Input_PullUp <<4 );
									GPIO_PORTD ->ODR .BIT_ACCESS.Bit1 = 1;
								break ;

								}
							}
	return local_u8_Error_State ;
}
u8   GPIO_u8GetPinValue  (u8 Copy_u8PinNb, u8* Copy_u8Value)
{

		u8 Local_u8Result = 0;
		u8 Local_u8ActualPrt  = Copy_u8PinNb / 16;
		u8 Local_u8ActualPin  = Copy_u8PinNb % 16;
			switch(Local_u8ActualPrt)
			{
			case GPIO_u8_PORTA:
				*Copy_u8Value = GET_BIT(GPIO_PORTA->IDR.Byte_Access,Local_u8ActualPin);
				break ;
			case GPIO_u8_PORTB:
				*Copy_u8Value = GET_BIT(GPIO_PORTB->IDR.Byte_Access,Local_u8ActualPin);
				break;
			case GPIO_u8_PORTC:
				*Copy_u8Value = GET_BIT(GPIO_PORTC->IDR.Byte_Access,Local_u8ActualPin);
				break;
			case GPIO_u8_PORTD:
				*Copy_u8Value = GET_BIT(GPIO_PORTD->IDR.Byte_Access,Local_u8ActualPin);
				break;
			default : 	Local_u8Result=1;break;
	        }
			return Local_u8Result;

}
u8   GPIO_u8SetPortValue (u8 Copy_u8PortNb, u8 Copy_u8PORTValue)
{
	u8 local_u8_Error_State  =0 ;
	if (Copy_u8PortNb >= MAX_port_Num)
	{
		local_u8_Error_State=1;
	}
	switch (Copy_u8PortNb)
	{
	case GPIO_u8_PORTA:
		if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_10M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_GP_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_GP_Output_pp_10MHZ);
		}
		else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_2M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_GP_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_GP_Output_pp_2MHZ);
		}
		else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_50M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_GP_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_GP_Output_pp_50MHZ);

		}
		else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_10M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_GP_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_GP_Output_OD_10MHZ);
		}
		else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_2M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_GP_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_GP_Output_OD_2MHZ);
		}
		else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_50M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_GP_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_GP_Output_OD_50MHZ);
		}
		else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_10M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_AF_Output_pp_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_AF_Output_pp_10MHZ);
		}
		else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_2M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_AF_Output_pp_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_AF_Output_pp_2MHZ);
		}
		else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_50M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_AF_Output_pp_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_AF_Output_pp_50MHZ);
		}
		else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_10M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_AF_Output_OD_10MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_AF_Output_OD_10MHZ);
		}
		else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_2M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_AF_Output_OD_2MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_AF_Output_OD_2MHZ);
		}
		else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_50M)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_AF_Output_OD_50MHZ);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_AF_Output_OD_50MHZ);
		}

		else if (Copy_u8PORTValue == INPUT_Analog_PORT)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_Input_Analog);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_Input_Analog);

		}
		else if (Copy_u8PORTValue == INPUT_Floating_PORT)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_Input_floating);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_Input_floating);
		}
		else if (Copy_u8PORTValue == INPUT_PullDown_PORT)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_Input_PullDown);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_Input_PullDown);
		}
		else if (Copy_u8PORTValue == INPUT_PullUP_PORT)
		{
			GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN3,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN4,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN5,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN6,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN7,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN8,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN9,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN11,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN12,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN13,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN14,_GPIO_u8_Input_PullUp);
			GPIO_u8SetPinDir(GPIO_u8_PIN15,_GPIO_u8_Input_PullUp);
		}

		break ;
	case GPIO_u8_PORTB:

		if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_GP_Output_pp_10MHZ);
				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_GP_Output_pp_2MHZ);
				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_GP_Output_pp_50MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_GP_Output_OD_10MHZ);
				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_GP_Output_OD_2MHZ);
				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_GP_Output_OD_50MHZ);
				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_AF_Output_pp_10MHZ);
				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_AF_Output_pp_2MHZ);
				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_AF_Output_pp_50MHZ);
				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_AF_Output_OD_10MHZ);
				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_AF_Output_OD_2MHZ);
				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_AF_Output_OD_50MHZ);
				}

				else if (Copy_u8PORTValue == INPUT_Analog_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_Input_Analog);

				}
				else if (Copy_u8PORTValue == INPUT_Floating_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_Input_floating);
				}
				else if (Copy_u8PORTValue == INPUT_PullDown_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_Input_PullDown);
				}
				else if (Copy_u8PORTValue == INPUT_PullUP_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN16,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN17,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN18,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN19,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN20,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN21,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN22,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN23,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN24,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN25,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN26,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN27,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN28,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN29,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN30,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN31,_GPIO_u8_Input_PullUp);
				}
		break ;
	case GPIO_u8_PORTC :

		if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_GP_Output_pp_10MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_GP_Output_pp_2MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_GP_Output_pp_50MHZ);


				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_GP_Output_OD_10MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_GP_Output_OD_2MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_GP_Output_OD_50MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_AF_Output_pp_10MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_AF_Output_pp_2MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_AF_Output_pp_50MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_AF_Output_OD_10MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_AF_Output_OD_2MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_AF_Output_OD_50MHZ);

				}

				else if (Copy_u8PORTValue == INPUT_Analog_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_Input_Analog);
				}
				else if (Copy_u8PORTValue == INPUT_Floating_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_Input_floating);

				}
				else if (Copy_u8PORTValue == INPUT_PullDown_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_Input_PullDown);

				}
				else if (Copy_u8PORTValue == INPUT_PullUP_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN32,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN33,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN34,_GPIO_u8_Input_PullUp);
				}
		break ;
	case GPIO_u8_PORTD :

		if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_GP_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_GP_Output_pp_10MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_GP_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_GP_Output_pp_2MHZ);
				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_pp_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_GP_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_GP_Output_pp_50MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_GP_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_GP_Output_OD_10MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_GP_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_GP_Output_OD_2MHZ);

				}
				else if (Copy_u8PORTValue == GP_OUTPUT_PORT_OD_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_GP_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_GP_Output_OD_50MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_AF_Output_pp_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_AF_Output_pp_10MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_AF_Output_pp_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_AF_Output_pp_2MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_pp_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_AF_Output_pp_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_AF_Output_pp_50MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_10M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_AF_Output_OD_10MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_AF_Output_OD_10MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_2M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_AF_Output_OD_2MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_AF_Output_OD_2MHZ);

				}
				else if (Copy_u8PORTValue == AF_OUTPUT_PORT_OD_50M)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_AF_Output_OD_50MHZ);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_AF_Output_OD_50MHZ);

				}

				else if (Copy_u8PORTValue == INPUT_Analog_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_Input_Analog);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_Input_Analog);
				}
				else if (Copy_u8PORTValue == INPUT_Floating_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_Input_floating);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_Input_floating);

				}
				else if (Copy_u8PORTValue == INPUT_PullDown_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_Input_PullDown);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_Input_PullDown);

				}
				else if (Copy_u8PORTValue == INPUT_PullUP_PORT)
				{
					GPIO_u8SetPinDir(GPIO_u8_PIN35,_GPIO_u8_Input_PullUp);
					GPIO_u8SetPinDir(GPIO_u8_PIN36,_GPIO_u8_Input_PullUp);
				}
		break ;
	}
return local_u8_Error_State ;
}
u8   GPIO_u8SetPinValue  (u8 Copy_u8PinNb, u8 Copy_u8Value)
{
	u8 local_u8_errorr_state =0 ;
	u8 LOC_u8ActualPort = Copy_u8PinNb / 16;
	u8 LOC_u8ActualPin  = Copy_u8PinNb % 16;

	if (Copy_u8PinNb > MAX_pin_Num)
	{
		local_u8_errorr_state =1;
	}
    if (Copy_u8Value == LOW)
    {
    	switch(LOC_u8ActualPort)
    	{
    	case GPIO_u8_PORTA: GPIO_PORTA->BRR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTB: GPIO_PORTB->BRR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTC: GPIO_PORTC->BRR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTD: GPIO_PORTD->BRR.Byte_Access |= (1 << LOC_u8ActualPin);break;

    	default: local_u8_errorr_state = 1;
    	}
    }
    else if (Copy_u8Value ==HIGH)
    {
    	switch(LOC_u8ActualPort)
    	{
    	case GPIO_u8_PORTA: GPIO_PORTA->BSRR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTB: GPIO_PORTB->BSRR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTC: GPIO_PORTC->BSRR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTD: GPIO_PORTD->BSRR.Byte_Access |= (1 << LOC_u8ActualPin);break;

    	default: local_u8_errorr_state = 1;
    	}
    }
	return local_u8_errorr_state ;

}
void void_GPIO_u8_LOCK_BIT   (u8 Copy_u8PinNb )
{
		u8 LOC_u8ActualPort = Copy_u8PinNb / 16;
		u8 LOC_u8ActualPin  = Copy_u8PinNb % 16;

    	switch(LOC_u8ActualPort)
    	{
    	case GPIO_u8_PORTA: GPIO_PORTA->LCKR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTB: GPIO_PORTB->LCKR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTC: GPIO_PORTC->LCKR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	case GPIO_u8_PORTD: GPIO_PORTD->LCKR.Byte_Access |= (1 << LOC_u8ActualPin);break;
    	}
}

void void_GPIO_u8_LOCK_PORT(u8 Copy_u8_PORT_NP )
{
	switch(Copy_u8_PORT_NP)
	{
	case GPIO_u8_PORTA:
		GPIO_PORTA->LCKR.Byte_Access |= (1 << 16);
		GPIO_PORTA->LCKR.Byte_Access &= (0 << 16);
		GPIO_PORTA->LCKR.Byte_Access |= (1 << 16);

	break;
	case GPIO_u8_PORTB:
		GPIO_PORTB->LCKR.Byte_Access |= (1 << 16);
		GPIO_PORTB->LCKR.Byte_Access &= (0 << 16);
		GPIO_PORTB->LCKR.Byte_Access |= (1 << 16);

		break;
	case GPIO_u8_PORTC: GPIO_PORTC->LCKR.Byte_Access |= (1 << 16);
	GPIO_PORTC->LCKR.Byte_Access &= (0 << 16);
	GPIO_PORTC->LCKR.Byte_Access |= (1 << 16);
	break;
	case GPIO_u8_PORTD: GPIO_PORTD->LCKR.Byte_Access |= (1 << 16);
	GPIO_PORTD->LCKR.Byte_Access &= (0 << 16);
	GPIO_PORTD->LCKR.Byte_Access |= (1 << 16);
	break;
	}
}
