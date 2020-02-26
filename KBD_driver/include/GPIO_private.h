

//#define GPIOA_BaseAddress       (0x40010800)
//#define GPIOB_BaseAddress       (0x40010C00)
//#define GPIOC_BaseAddress       (0x40011000)
//#define GPIOD_BaseAddress       (0x40011400)
//
//
//#define GPIOA_CRL              ((u32_Register*)(GPIOA_BaseAddress+0x00))
//#define GPIOA_CRH              ((u32_Register*)(GPIOA_BaseAddress+0x04))
//#define GPIOA_IDR              ((u32_Register*)(GPIOA_BaseAddress+0x08))
//#define GPIOA_ODR              ((u32_Register*)(GPIOA_BaseAddress+0x0C))
//#define GPIOA_BSR              ((u32_Register*)(GPIOA_BaseAddress+0x10))
//#define GPIOA_BRR              ((u32_Register*)(GPIOA_BaseAddress+0x14))
//#define GPIOA_LCK              ((u32_Register*)(GPIOA_BaseAddress+0x18))
//
//#define GPIOB_CRL              ((u32_Register*)(GPIOB_BaseAddress+0x00))
//#define GPIOB_CRH              ((u32_Register*)(GPIOB_BaseAddress+0x04))
//#define GPIOB_IDR              ((u32_Register*)(GPIOB_BaseAddress+0x08))
//#define GPIOB_ODR              ((u32_Register*)(GPIOB_BaseAddress+0x0C))
//#define GPIOB_BSR              ((u32_Register*)(GPIOB_BaseAddress+0x10))
//#define GPIOB_BRR              ((u32_Register*)(GPIOB_BaseAddress+0x14))
//#define GPIOB_LCK              ((u32_Register*)(GPIOB_BaseAddress+0x18))
//
//#define GPIOC_CRL              ((u32_Register*)(GPIOC_BaseAddress+0x00))
//#define GPIOC_CRH              ((u32_Register*)(GPIOC_BaseAddress+0x04))
//#define GPIOC_IDR              ((u32_Register*)(GPIOC_BaseAddress+0x08))
//#define GPIOC_ODR              ((u32_Register*)(GPIOC_BaseAddress+0x0C))
//#define GPIOC_BSR              ((u32_Register*)(GPIOC_BaseAddress+0x10))
//#define GPIOC_BRR              ((u32_Register*)(GPIOC_BaseAddress+0x14))
//#define GPIOC_LCK              ((u32_Register*)(GPIOC_BaseAddress+0x18))
//
//#define GPIOD_CRL              ((u32_Register*)(GPIOD_BaseAddress+0x00))
//#define GPIOD_CRH              ((u32_Register*)(GPIOD_BaseAddress+0x04))
//#define GPIOD_IDR              ((u32_Register*)(GPIOD_BaseAddress+0x08))
//#define GPIOD_ODR              ((u32_Register*)(GPIOD_BaseAddress+0x0C))
//#define GPIOD_BSR              ((u32_Register*)(GPIOD_BaseAddress+0x10))
//#define GPIOD_BRR              ((u32_Register*)(GPIOD_BaseAddress+0x14))
//#define GPIOD_LCK              ((u32_Register*)(GPIOD_BaseAddress+0x18))
//

typedef struct
{

	u32_Register	CRL;
	u32_Register	CRH;
	u32_Register	IDR;
	u32_Register	ODR;
	u32_Register	BSRR;
	u32_Register	BRR;
	u32_Register	LCKR;

}GPIO;

#define GPIO_PORTA	((GPIO*) 0x40010800) //pointer to struct
#define GPIO_PORTB	((GPIO*) 0x40010C00)
#define GPIO_PORTC	((GPIO*) 0x40011000)
#define GPIO_PORTD	((GPIO*) 0x40011400)
