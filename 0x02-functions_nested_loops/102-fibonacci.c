#include "main.h"

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle community c training
 * Description: Writing Fibonacci numbers starting from 1 && 2 too 50
 */

int main(void) 
{
	unsigned long int a = 1, b = 2, next;
	int i;

	print_number(a);
	_putchar(',');
	_putchar(' ');

	print_number(b);


	for (i = 3; i <= 50; i++) 
	{
		next = a + b;

		print_number(next);
		_putchar(',');
		_putchar(' ');
		a = b;
		b = next;
	}

	_putchar('\n');

	return 0;
}
