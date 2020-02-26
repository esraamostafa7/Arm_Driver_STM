
#define GPIO_u8_PIN0         0
#define GPIO_u8_PIN1         1
#define GPIO_u8_PIN2         2
#define GPIO_u8_PIN3         3
#define GPIO_u8_PIN4         4
#define GPIO_u8_PIN5         5
#define GPIO_u8_PIN6         6
#define GPIO_u8_PIN7         7
#define GPIO_u8_PIN8         8
#define GPIO_u8_PIN9         9
#define GPIO_u8_PIN10        10
#define GPIO_u8_PIN11        11
#define GPIO_u8_PIN12        12
#define GPIO_u8_PIN13        13
#define GPIO_u8_PIN14        14
#define GPIO_u8_PIN15        15

#define GPIO_u8_PIN16        16
#define GPIO_u8_PIN17        17
#define GPIO_u8_PIN18        18
#define GPIO_u8_PIN19        19
#define GPIO_u8_PIN20        20
#define GPIO_u8_PIN21        21
#define GPIO_u8_PIN22        22
#define GPIO_u8_PIN23        23
#define GPIO_u8_PIN24        24
#define GPIO_u8_PIN25        25
#define GPIO_u8_PIN26         26
#define GPIO_u8_PIN27         27
#define GPIO_u8_PIN28         28
#define GPIO_u8_PIN29         29
#define GPIO_u8_PIN30         30
#define GPIO_u8_PIN31         31


#define GPIO_u8_PIN32         45
#define GPIO_u8_PIN33         46
#define GPIO_u8_PIN34         47

#define GPIO_u8_PIN35         48
#define GPIO_u8_PIN36         49

#define GPIO_u8_PORTA	     0
#define GPIO_u8_PORTB	     1
#define GPIO_u8_PORTC	     2
#define GPIO_u8_PORTD	     3


#define GP_OUTPUT_PORT_pp_10M   1
#define GP_OUTPUT_PORT_pp_2M    2
#define GP_OUTPUT_PORT_pp_50M   3

#define GP_OUTPUT_PORT_OD_10M   4
#define GP_OUTPUT_PORT_OD_2M    5
#define GP_OUTPUT_PORT_OD_50M   6

#define AF_OUTPUT_PORT_pp_10M   7
#define AF_OUTPUT_PORT_pp_2M    8
#define AF_OUTPUT_PORT_pp_50M   9

#define AF_OUTPUT_PORT_OD_10M   10
#define AF_OUTPUT_PORT_OD_2M    11
#define AF_OUTPUT_PORT_OD_50M   12

#define INPUT_Analog_PORT                        13
#define INPUT_Floating_PORT                      14
#define INPUT_PullDown_PORT                      15
#define INPUT_PullUP_PORT                        16

//CNF1 CNF0 MODE1 MODE0
//output configurations

#define _GPIO_u8_GP_Output_pp_10MHZ            1
#define _GPIO_u8_GP_Output_pp_2MHZ             2
#define _GPIO_u8_GP_Output_pp_50MHZ            3

#define _GPIO_u8_GP_Output_OD_10MHZ            4
#define _GPIO_u8_GP_Output_OD_2MHZ             5
#define _GPIO_u8_GP_Output_OD_50MHZ            6

#define _GPIO_u8_AF_Output_pp_10MHZ            7
#define _GPIO_u8_AF_Output_pp_2MHZ             8
#define _GPIO_u8_AF_Output_pp_50MHZ            9

#define _GPIO_u8_AF_Output_OD_10MHZ            10
#define _GPIO_u8_AF_Output_OD_2MHZ             11
#define _GPIO_u8_AF_Output_OD_50MHZ            12
//input configurations
#define _GPIO_u8_Input_Analog                         13
#define _GPIO_u8_Input_floating                       14
#define _GPIO_u8_Input_PullDown                       15
#define _GPIO_u8_Input_PullUp                         16

#define HIGH                                    1
#define LOW                                     0

// functions prototybe
//void GPIO_voidInitialize (void);
u8   GPIO_u8SetPinValue    (u8 Copy_u8PinNb, u8 Copy_u8Value);
u8   GPIO_u8SetPortValue   (u8 Copy_u8PortNb, u8 Copy_u8PORTValue); //u16 3shan howa 16 pin for each port
u8   GPIO_u8GetPinValue    (u8 Copy_u8PinNb, u8* Copy_u8Value);
u8   GPIO_u8SetPinDir      (u8 Copy_u8PinNb, u8 Copy_u8Mode);
void void_GPIO_u8_LOCK_BIT (u8 Copy_u8PinNb );
void void_GPIO_u8_LOCK_PORT(u8 Copy_u8_PORT_NP );


