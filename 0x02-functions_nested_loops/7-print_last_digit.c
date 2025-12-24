#include "main.h"

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: write a code that print the last digit
 */

 int print_last_digit(int r) 
{
	int last;
	last = r % 10;
	if (last < 0) 
		
		last = -last;

	_putchar (last + '0');
		
	return (last);

}
