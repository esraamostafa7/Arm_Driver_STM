//#ifndef RCC_private.h
//#define RCC_private.h

#define Base_address                (0x40021000)
//-----------------------------------------------------------------------
#define RCC_CR                      ((u32_Register*)(Base_address+0x00))
#define RCC_CFGR                    ((u32_Register*)(Base_address+0x04))
#define RCC_CIR                     ((u32_Register*)(Base_address+0x08))
#define RCC_APB2RSTR                ((u32_Register*)(Base_address+0x0C))
#define RCC_APB1RSTR                ((u32_Register*)(Base_address+0x10))
#define RCC_AHBENR                  ((u32_Register*)(Base_address+0x14))
#define RCC_APB2ENR                 ((u32_Register*)(Base_address+0x18))
#define RCC_APB1ENR                 ((u32_Register*)(Base_address+0x1C))
#define RCC_BDCR                    ((u32_Register*)(Base_address+0x20))
#define RCC_CSR                     ((u32_Register*)(Base_address+0x24))

#define PWR_CR                      ((u32_Register*)(0x40007000))




//#endif
