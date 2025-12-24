#include "main.h"
#include <stdlib.h>

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: Write the sum of mutiples of 3 && 5 below 1024
 */

int main(void) 
{
	int n;
        int sum = 0;

	for (n = 0;  n < 1024;  n++) 
	{
		if (n % 3 == 0 || n % 5 == 0) 
		{
			sum += n;
		}

	}

	print_number(sum);
	_putchar('\n');
		

	return 0;

}
