/*
 * CALC_BIT.h
 *
 *  Created on: Feb 13, 2019
 *      Author: Esraa
 */

//#ifndef BIT_CALC.h
//#define BIT_CALC.h


#define CONC_8BIT(b0,b1,b2,b3,b4,b5,b6,b7) 		CONC_Helper(b0,b1,b2,b3,b4,b5,b6,b7)
#define CONC_Helper(b0,b1,b2,b3,b4,b5,b6,b7)	 0b##b7##b6##b5##b4##b3##b2##b1##b0



#define SET_BIT(var,bitNo) var=(1<<bitNo)|var

#define CLR_BIT(var,bitNo) var=~(1<<bitNo)&var

#define TOG_BIT(var,bitNo) var=(1<<bitNo)^var

#define GET_BIT(var,bitNo)   ((var>>bitNo)&1)


//#define ASSIGN_BIT(var,bitNo,value) if(value==1)var=(1<<bitNo)|var;else if(value==0) var=~(1<<bitNo)&var;
#define ASSIGN_BIT(var,bitNo,value) (var=(var&~(1<<bitNo))|(value<<bitNo))



//#endif /* CALC_BIT_H_ */
