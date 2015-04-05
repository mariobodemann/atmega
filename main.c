#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
   DDRB = 0xFF; //set up pin 0 on port B
   int value = 1;
   while (1) //loop forever
   {
        PORTB = value <<= 1;
	value = value % 0xFF;
	_delay_ms(100);
   }
   return 0;
}
