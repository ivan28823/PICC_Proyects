#include <12f629.h>

#FUSES NOWDT                 
#FUSES INTRC_IO               
#FUSES NOPUT                    
#FUSES NOMCLR                 
#FUSES NOBROWNOUT              
#FUSES NOPROTECT                
#FUSES NOCPD                     

#use delay(clock=4000000)
#use fast_io(a)

void main()
{
   set_tris_a(0b11111000);
   output_a(0);
   while(true)
   {
      if(input(pin_a5)==1)
      {
         output_toggle(pin_a0);
         delay_ms(300);
         while(input(pin_a5));
      }
      if(input(pin_a4)==1)
      {
         output_toggle(pin_a1);
         delay_ms(300);
         while(input(pin_a4));
      }
      if(input(pin_a3)==1)
      {
         output_toggle(pin_a2);
         delay_ms(300);
         while(input(pin_a3));
      }
   }
}
