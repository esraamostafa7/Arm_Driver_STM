#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "KBD_interface.h"
#include "KBD_config.h"

u8 KBD_u8GetKeypadState(u8 Copy_Au8keysState[KBD_u8_KEYS_NB])
{
	u8 local_u8_col_iteration ;
	u8 local_u8_row_iteration;
	u8 LOC_u8CurrentPinValue;
	u8 LOC_u8KeyIndex ;
	void_SetprephralState(portA,Enable);
	#if KBD_Activation_Type == KBD_Active_COL
	    for (local_u8_col_iteration=0;local_u8_col_iteration<KBD_COL_NUM;local_u8_col_iteration++)
	    {
	    	GPIO_u8SetPinDir(KBD_Au8ColsPins[local_u8_col_iteration],_GPIO_u8_GP_Output_pp_2MHZ);
			#if KBD_Connection_type == KBD_pull_up
	    	for (local_u8_row_iteration=0;local_u8_row_iteration<KBD_ROWS_NUM;local_u8_row_iteration++)
	    	{
		    	GPIO_u8SetPinDir(KBD_Au8RowsPins[local_u8_row_iteration],_GPIO_u8_Input_PullUp);
	    	}
	    		GPIO_u8SetPinValue(KBD_Au8ColsPins[local_u8_col_iteration],LOW);
            #elif KBD_Connection_type == KBD_pull_down
		    	for (local_u8_row_iteration=0;local_u8_row_iteration<KBD_ROWS_NUM;local_u8_row_iteration++)
		    	{
			    	GPIO_u8SetPinDir(KBD_Au8RowsPins[local_u8_row_iteration],_GPIO_u8_Input_PullDown);
		    	}
	    		GPIO_u8SetPinValue(KBD_Au8ColsPins[local_u8_col_iteration],HIGH);
            #endif
		    	for (local_u8_row_iteration=0;local_u8_row_iteration<KBD_ROWS_NUM;local_u8_row_iteration++)
		    	{
		    		GPIO_u8GetPinValue(KBD_Au8RowsPins[local_u8_row_iteration],&LOC_u8CurrentPinValue);
					LOC_u8KeyIndex =local_u8_col_iteration + (local_u8_row_iteration * KBD_COL_NUM);
					if (LOC_u8CurrentPinValue == HIGH)
					{
 						#if KBD_Connection_type == KBD_pull_up
						// key not pressed
						Copy_Au8keysState[LOC_u8KeyIndex]=KBD_u8_NotPressed ;
						#elif KBD_Connection_type == KBD_pull_down
						Copy_Au8keysState[LOC_u8KeyIndex]=KBD_u8_Pressed ;
						#endif
					}
					else if (LOC_u8CurrentPinValue == LOW)
					{
 						#if KBD_Connection_type == KBD_pull_up
						// key not pressed
						Copy_Au8keysState[LOC_u8KeyIndex]=KBD_u8_Pressed ;
						#elif KBD_Connection_type == KBD_pull_down
						Copy_Au8keysState[LOC_u8KeyIndex]=KBD_u8_NotPressed ;
						#endif
					}
		    	}
				//Deactivate Current Col//
				#if KBD_Connection_type == KBD_pull_up
		    	GPIO_u8SetPinValue(KBD_Au8ColsPins[local_u8_col_iteration],HIGH);
				#elif KBD_Connection_type == KBD_pull_down
		    	GPIO_u8SetPinValue(KBD_Au8ColsPins[local_u8_col_iteration],LOW);
				#endif
	    }
	 #elif KBD_Activation_Type == KBD_Active_Row
	    for (local_u8_row_iteration=0;local_u8_row_iteration<KBD_ROWS_NUM;local_u8_row_iteration++)
	      {
	    	GPIO_u8SetPinDir(KBD_Au8RowsPins[local_u8_row_iteration],_GPIO_u8_GP_Output_pp_2MHZ);
				#if KBD_Connection_type == KBD_pull_up
					for (local_u8_col_iteration=0;local_u8_col_iteration<KBD_COL_NUM;local_u8_col_iteration++)
					  {
						GPIO_u8SetPinDir(KBD_Au8ColsPins[local_u8_col_iteration],_GPIO_u8_Input_PullUp);
					  }
	    	      // activevate row with 0
					GPIO_u8SetPinValue(KBD_Au8RowsPins[local_u8_row_iteration],LOW);
                #elif KBD_Connection_type == KBD_pull_down
					for (local_u8_col_iteration=0;local_u8_col_iteration<KBD_COL_NUM;local_u8_col_iteration++)
					  {
						GPIO_u8SetPinDir(KBD_Au8ColsPins[local_u8_col_iteration],_GPIO_u8_Input_PullDown);
					  }
	    	      // activevate row with 1
					GPIO_u8SetPinValue(KBD_Au8RowsPins[local_u8_row_iteration],HIGH);
			    #endif
   	     }
    	for (local_u8_col_iteration=0;local_u8_col_iteration<KBD_COL_NUM;local_u8_col_iteration++)
    	{
    		GPIO_u8GetPinValue(KBD_Au8ColsPins[local_u8_col_iteration],&LOC_u8CurrentPinValue);
    		LOC_u8KeyIndex=local_u8_row_iteration+(local_u8_col_iteration*KBD_ROWS_NUM);
			if (LOC_u8CurrentPinValue == HIGH)
			{
				#if  KBD_Connection_type == KBD_pull_up
				Copy_Au8keysState[LOC_u8KeyIndex] = KBD_u8_NotPressed;
				#elif KBD_Connection_type == KBD_pull_down
				Copy_Au8keysState[LOC_u8KeyIndex] = KBD_u8_Pressed;
				#endif
			}
			else if (LOC_u8CurrentPinValue == LOW)
			{
				#if  KBD_Connection_type == KBD_pull_up
				Copy_Au8keysState[LOC_u8KeyIndex] = KBD_u8_Pressed;
				#elif KBD_Connection_type == KBD_pull_down
				Copy_Au8keysState[LOC_u8KeyIndex] = KBD_u8_NotPressed;
				#endif
			}
    	}
		//Deactivate Current row//
		#if KBD_Connection_type == KBD_pull_up
    	GPIO_u8SetPinValue(KBD_Au8RowsPins[local_u8_row_iteration],HIGH);
		#elif KBD_Connection_type == KBD_pull_down
    	GPIO_u8SetPinValue(KBD_Au8RowsPins[local_u8_row_iteration],LOW);
		#endif
     #endif
	return 0;
}
