/*
 * Timer_FPWM_Driver.c
 *
 * Created: 9/27/2020 12:46:59 AM
 * Author : monad
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000
int main(void)
{
	DDRC  |=(1<<2)|(1<<7);
	DDRB  |=(1<<3); 
	OCR0=200;
	TCCR0 |=(1<<CS00)|(1<<CS02)|(1<<WGM00)|(1<<WGM01)|(1<<COM01); //prescaling 1024
	//TIMSK |=(1<<OCIE0);
	sei();
    /* Replace with your application code */
    while (1) 
    {
		
	}
		
}
ISR (TIMER0_OVF_vect)
{
	
}
ISR (TIMER0_COMP_vect)
{

}

