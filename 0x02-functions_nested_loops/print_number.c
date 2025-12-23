#include "main.h"

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: print_number - it prints an integer using _putchar
 

void print_number(int n) 
{
	unsigned int num;

	if (n < 0) 
	{
		_putchar('-');
		num = -n;
	}

	else
	{
	       num = n;	
	}
*/

void print_number(unsigned long int num) {

	if (num / 10) 
	
	     print_number(num / 10);
         _putchar((num % 10) + '0');
	
}
