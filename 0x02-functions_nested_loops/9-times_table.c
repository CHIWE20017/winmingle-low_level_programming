#include "main.h"

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Descreption: Write numbers in table from 0 - 9
 */

 void times_table(void) 
{
	int n, x, result;

	for (n = 0; n <= 9; n++) 
	{
		for (x = 0; x <= 9; x++) 
		{
			result = n * x;

			if (x == 0)
			{
				_putchar(result + '0');
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
			
			if (result < 10) 
			{
				_putchar (' ');
			        _putchar (result + '0');
			
			}
			else 
			{
				  _putchar ((result / 10) + '0');
                                  _putchar ((result % 10) + '0');
			}

			}
		}

		_putchar ('\n');
	}
}
