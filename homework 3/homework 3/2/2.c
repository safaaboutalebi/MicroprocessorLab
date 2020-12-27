#include <mega16.h>  
#include <alcd.h>     
#include <delay.h>    
 
void main(void)
{
 

lcd_init(16);    
 
while (1)         
      {
      lcd_clear();       
      lcd_gotoxy(0,0);  
      lcd_putsf("ABCDEFGHIJKLMNOPQRST");    
      delay_ms(2000);    
         
      lcd_gotoxy(0,1);   
      lcd_putsf("UVWXYZ");    
      
      delay_ms(2000);    
              
      }