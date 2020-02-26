
#include "STD_TYPES.h"

void Delay_ms(u16 Value){

	for(u16 j=0; j<Value;j++ )
	{
	for(u16 i=0;i<419;i++)
	{
		asm("NOP");
	}
	}
}
