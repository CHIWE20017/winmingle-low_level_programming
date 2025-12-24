#include "main.h"
#include <stdlib.h>

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle community c training
 * Description: Write fibonacci numbers from 1 too 98
 */
int main(void) 
{
	unsigned long int a = 1, b = 2, next;
        int i;

	print_number(a);
	_putchar(',');
	_putchar(' ');

	print_number(b);

	for (i = 3; i <= 98; i++) 
	{
		next = a + b;

		_putchar(',');
		_putchar(' ');
		print_number(next);
                a = b;
		b = next;

	}
	_putchar('\n');
	return 0;
}
