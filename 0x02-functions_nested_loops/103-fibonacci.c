#include "main.h"
#include <stdlib.h>

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle community c training
 * Description: Writing Fibonacci numbers to 4,000,000
 */

int main(void) 
{
	int a =1, b = 2, next;
	int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 ==0)
		
		sum +=b;

		next = a + b;
		a = b;
		b = next;

	} 

	print_number(sum);
	_putchar('\n');
	return 0;


}
