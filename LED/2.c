#include <mega32.h>
#include <delay.h>

void main(void)
{

DDRA = 0x00;
PORTA = 0xFF;
DDRB = 0xFF;
PORTB = 0x00;

   
   
while (1)
      {
          if(PINA.0==0)
          {
               while(PINA.1==1)
               {
               PORTB = 0b00000001;
               delay_ms(100);
               PORTB = 0b00000010;
               delay_ms(100);  
               PORTB = 0b00000100;
               delay_ms(100); 
               PORTB = 0b00001000;
               delay_ms(100); 
               PORTB = 0b00010000;
               delay_ms(100);
               PORTB = 0b00100000;
               delay_ms(100);  
               PORTB = 0b01000000;
               delay_ms(100); 
               PORTB = 0b10000000;
               delay_ms(100);  
               PORTB = 0b01000000;
               delay_ms(100);
               PORTB = 0b00100000;
               delay_ms(100);
               PORTB = 0b00010000;
               delay_ms(100);  
               PORTB = 0b00001000;
               delay_ms(100);
               PORTB = 0b00000100;
               delay_ms(100); 
               PORTB = 0b00000010;
               delay_ms(100);     
               PORTB = 0b00000001;
               delay_ms(100);
               
               } 
               
              
          } 
          
          
          
          

      }
}
