#include <mega32.h>
#include <delay.h>
#include <alcd.h> 
void main (void){
lcd_init(20);
lcd_clear(); 
lcd_putsf("Hello Word ");  }