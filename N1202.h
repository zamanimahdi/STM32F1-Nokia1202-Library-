
#ifndef N1202_H_INCLUDED
#define N1202_H_INCLUDED


#define CS_PIN   			GPIO_Pin_12
#define CS_Port 			GPIOA
#define CS_Mode 	    	GPIO_Mode_Out_PP

#define RES_PIN   			GPIO_Pin_11
#define RES_Port 			GPIOA
#define RES_Mode 	    	GPIO_Mode_Out_PP

#define SCL_PIN   			GPIO_Pin_5
#define SCL_Port 			GPIOB
#define SCL_Mode 	    	GPIO_Mode_Out_PP

#define SDA_PIN   			GPIO_Pin_4
#define SDA_Port 			GPIOB
#define SDA_Mode 	    	GPIO_Mode_Out_PP

#define BL_PIN   			GPIO_Pin_10
#define BL_Port 			GPIOB
#define BL_Mode 	    	GPIO_Mode_Out_PP

#define lcd_x_pix 96
#define lcd_y_pix 68


#define cbi(port, bit)									(port) &= ~(1 << (bit))
#define sbi(port, bit)									(port) |= (1 << (bit))
#define inv_bit(port,bit)                               (port) ^=(1 << (bit))






void N1202_CS (uint8_t status);
void N1202_RES(uint8_t status);
void N1202_SCL(uint8_t status);
void N1202_SDA(uint8_t status);
void N1202_BL (uint8_t status);

uint8_t bi_to_by (uint8_t byte,uint8_t select);
void N1202_Write(uint8_t DC,uint16_t c);
void N1202_clear(void);
void N1202_Init(void);
void N1202_Contrast(uint8_t cont);
void N1202_Update(void);
void N1202_GotoXY(unsigned char x, unsigned char y);
void N1202_Draw_pixel(uint8_t x,uint8_t y,uint8_t color);
void N1202_write_y(uint8_t x,uint8_t y,uint8_t data[7]);
void  N1202_WriteChar(uint8_t x, uint8_t y,char c,uint8_t color);
void N1202_Xline_len(uint8_t x,uint8_t y,uint8_t len,uint8_t color);
void N1202_Draw_FillRect(uint8_t x,uint8_t y,uint8_t width,uint8_t height,uint8_t color);
void N1202_text(uint8_t x,uint8_t y,char * message,uint8_t color);
uint8_t N1202_show_pic (uint8_t *pic,uint8_t xpos ,uint8_t ypos,uint8_t color);
void N1202_Show_Chart(uint16_t values[10]);

#endif /* N1202_H_INCLUDED */
