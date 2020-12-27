
#include <mega16.h>
#include <delay.h>
#include <stdio.h>
#include <lcd.h> 

#asm
   .equ __lcd_port=0x1B ;PORTA
#endasm

unsigned long int timer0_ov;
unsigned long int in_freq;
unsigned char lcd_buff[20];

interrupt [TIM0_OVF] void timer0_ovf_isr(void)
{
timer0_ov ++;
}

void main(void)
{

TCNT0=0x00;
OCR0=0x00;
TCCR0=0x00;

TIMSK=0x01;


lcd_init(16);

while (1)
{
      TCCR0=0x06;     
      #asm("sei")     
      delay_ms(1000);
      #asm("cli");   
      in_freq = timer0_ov * 256 + TCNT0;
      sprintf(lcd_buff,"Freqency=%d",in_freq);
      lcd_clear();
      lcd_puts(lcd_buff);
      TCCR0=0x00;    
      timer0_ov=0;   
      TCNT0=0;       
      };
}
