//#ifndef STD_TYPES.h
//#define STD_TYPES.h

/*==== unsigned decimal values with 8 bits ,16 bits , 32 bits =======*/

typedef unsigned char u8 ;

typedef unsigned short int u16 ;

typedef unsigned long int u32;

/*===================================================================*/

/*======= signed decimal values with 8 bits ,16 bits , 32 bits ======*/

typedef signed char s8 ;

typedef signed short int s16 ;

typedef signed long int s32;

/*===================================================================*/

/*============= float  values with 32 bits , 64 bits ================*/

typedef float f32;

typedef double f64;

typedef union
{
	struct
	{
		u8 Bit0:1;
		u8 Bit1:1;
		u8 Bit2:1;
		u8 Bit3:1;
		u8 Bit4:1;
		u8 Bit5:1;
		u8 Bit6:1;
		u8 Bit7:1;
	}BIT_ACCESS;
	u8 Byte_Access ;
}u8_Register;


typedef union
{
	struct
	{
		u16 Bit0:1;
		u16 Bit1:1;
		u16 Bit2:1;
		u16 Bit3:1;
		u16 Bit4:1;
		u16 Bit5:1;
		u16 Bit6:1;
		u16 Bit7:1;
		u16 Bit8:1;
		u16 Bit9:1;
		u16 Bit10:1;
		u16 Bit11:1;
		u16 Bit12:1;
		u16 Bit13:1;
		u16 Bit14:1;
		u16 Bit15:1;

	}BIT_ACCESS;
	u16 Byte_Access ;
}u16_Register;

typedef union
{
	struct
	{
		u32 Bit0:1;
		u32 Bit1:1;
		u32 Bit2:1;
		u32 Bit3:1;
		u32 Bit4:1;
		u32 Bit5:1;
		u32 Bit6:1;
		u32 Bit7:1;
		u32 Bit8:1;
		u32 Bit9:1;
		u32 Bit10:1;
		u32 Bit11:1;
		u32 Bit12:1;
		u32 Bit13:1;
		u32 Bit14:1;
		u32 Bit15:1;
		u32 Bit16:1;
		u32 Bit17:1;
		u32 Bit18:1;
		u32 Bit19:1;
		u32 Bit20:1;
		u32 Bit21:1;
		u32 Bit22:1;
		u32 Bit23:1;
		u32 Bit24:1;
		u32 Bit25:1;
		u32 Bit26:1;
		u32 Bit27:1;
		u32 Bit28:1;
		u32 Bit29:1;
		u32 Bit30:1;
		u32 Bit31:1;
	}BIT_ACCESS;
	u32 Byte_Access ;
}u32_Register;




//#endif
