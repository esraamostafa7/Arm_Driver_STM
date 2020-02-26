


#define KBD_Activation_Type              KBD_Active_Row
#define KBD_Connection_type              KBD_pull_down

#define KBD_COL_NUM                      3
#define KBD_ROWS_NUM                     3

#define KBD_COL0_PIN                     GPIO_u8_PIN0
#define KBD_COL1_PIN                     GPIO_u8_PIN1
#define KBD_COL2_PIN                     GPIO_u8_PIN2

#define KBD_ROW0_PIN                     GPIO_u8_PIN3
#define KBD_ROW1_PIN                     GPIO_u8_PIN4
#define KBD_ROW2_PIN                     GPIO_u8_PIN5

u8 KBD_Au8RowsPins[KBD_ROWS_NUM] ={
		KBD_ROW0_PIN,
		KBD_ROW1_PIN,
		KBD_ROW2_PIN
};
u8 KBD_Au8ColsPins[KBD_COL_NUM] ={
		KBD_COL0_PIN,
		KBD_COL1_PIN,
		KBD_COL2_PIN
};



