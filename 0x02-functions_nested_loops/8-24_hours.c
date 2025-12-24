#include "main.h"

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: Weiting a function that prints the day of Jack Bauer
 */

void jack_bauer(void) 
{
	int hour, minutie;

	for (hour = 0; hour < 24; hour++) 
	{
		for (minutie = 0; minutie < 60; minutie++)
		{
			if (hour == 24 && minutie < 59)
				break;


			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((minutie / 10) + '0');
			_putchar ((minutie % 10) + '0');
			_putchar ('\n');
		}
		
	}
		
}
