#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "KBD_interface.h"
#include "delay.h"

void main (void)
{
	u8 local_Au8keypad_state[KBD_u8_KEYS_NB];
	u8 local_u8_KBD_SIZE = 9 ;
	u8 local_u8_iteration ;
	void_SetprephralState(portA,Enable);
	GPIO_u8SetPinDir(GPIO_u8_PIN10,_GPIO_u8_AF_Output_OD_2MHZ);

while(1)
{
	KBD_u8GetKeypadState(local_Au8keypad_state);
	Delay_ms(10);
	for(local_u8_iteration=0;local_u8_iteration<local_u8_KBD_SIZE;local_u8_iteration++)
	{
		if (local_Au8keypad_state[local_u8_iteration]==KBD_u8_Pressed)
		{
			GPIO_u8SetPinValue(GPIO_u8_PIN10,HIGH);
		}
		else
		{
			GPIO_u8SetPinValue(GPIO_u8_PIN10,LOW);
		}
	}
}
}
