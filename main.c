/* Name: main.c
 * Author: <Scott Dean>
 * Copyright: <insert your copyright message here>
 * License: <insert your license reference here>
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	/* insert your hardware initialization here */
	DDRB |= ((1 << DDB5));//make the led pin an output ????
	while (1) {
	PORTB = ((0 << PB5));
	_delay_ms(1000L);
	PORTB = ((1<< PB5));
	_delay_ms(1000L);
	}
	return 0;
}
