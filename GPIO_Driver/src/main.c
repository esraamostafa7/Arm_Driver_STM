#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"
#define pressed         (u8)1
#define notPressed      0
int main(void){
	u8 x =0;
	u8 *ptr = &x ;
	void_SetprephralState(portA,Enable);
	void_SetprephralState(portB,Enable);
	void_SetprephralState(portC,Enable);
	void_SetprephralState(portD,Enable);
	GPIO_u8SetPinDir(GPIO_u8_PIN0,_GPIO_u8_GP_Output_pp_10MHZ);
	GPIO_u8SetPinDir(GPIO_u8_PIN1,_GPIO_u8_GP_Output_pp_10MHZ);
	GPIO_u8SetPinDir(GPIO_u8_PIN2,_GPIO_u8_Input_PullUp);
	GPIO_u8SetPinValue(GPIO_u8_PIN0,LOW);
	GPIO_u8GetPinValue(GPIO_u8_PIN2,ptr);

	while (1)
	{
	GPIO_u8GetPinValue(GPIO_u8_PIN2,ptr);

	if ( *ptr == pressed )
	{
		GPIO_u8SetPinValue(GPIO_u8_PIN1,HIGH);
	}
	else if (*ptr == notPressed)
	{
		GPIO_u8SetPinValue(GPIO_u8_PIN1,LOW);
	}
	}
    return 0;
}


