#define MAX_pin_Num                       50
#define MAX_port_Num                      4

// pin masks in CRL AND CRH



#define _pin0_Configuration_mask          0xFFFFFFF0
#define _pin1_Configuration_mask          0xFFFFFF0F
#define _pin2_Configuration_mask          0xFFFFF0FF
#define _pin3_Configuration_mask          0xFFFF0FFF
#define _pin4_Configuration_mask          0xFFF0FFFF
#define _pin5_Configuration_mask          0xFF0FFFFF
#define _pin6_Configuration_mask          0xF0FFFFFF
#define _pin7_Configuration_mask          0x0FFFFFFF

#define _pin8_Configuration_mask          0xFFFFFFF0
#define _pin9_Configuration_mask          0xFFFFFF0F
#define _pin10_Configuration_mask         0xFFFFF0FF
#define _pin11_Configuration_mask         0xFFFF0FFF
#define _pin12_Configuration_mask         0xFFF0FFFF
#define _pin13_Configuration_mask         0xFF0FFFFF
#define _pin14_Configuration_mask         0xF0FFFFFF
#define _pin15_Configuration_mask         0x0FFFFFFF

#define GPIO_u8_GP_Output_pp_10MHZ            0b0001
#define GPIO_u8_GP_Output_pp_2MHZ             0b0010
#define GPIO_u8_GP_Output_pp_50MHZ            0b0011

#define GPIO_u8_GP_Output_OD_10MHZ            0b0101
#define GPIO_u8_GP_Output_OD_2MHZ             0b0110
#define GPIO_u8_GP_Output_OD_50MHZ            0b0111

#define GPIO_u8_AF_Output_pp_10MHZ            0b1001
#define GPIO_u8_AF_Output_pp_2MHZ             0b1010
#define GPIO_u8_AF_Output_pp_50MHZ            0b1011

#define GPIO_u8_AF_Output_OD_10MHZ            0b1101
#define GPIO_u8_AF_Output_OD_2MHZ             0b1110
#define GPIO_u8_AF_Output_OD_50MHZ            0b1111
//input configurations
#define GPIO_u8_Input_Analog                         0b0000
#define GPIO_u8_Input_floating                       0b0100
#define GPIO_u8_Input_PullDown                       0b1000
#define GPIO_u8_Input_PullUp                         0b1000
