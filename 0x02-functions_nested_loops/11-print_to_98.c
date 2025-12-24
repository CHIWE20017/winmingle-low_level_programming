#include "main.h"

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Descrition: Write from 0 - 98
 */

void print_to_98(int n) 
{
	int  i;

	if (n <= 98) 
	{

	
	       for (i = n; i <= 98; i++) 
	    {
		    print_number(i);
		   
		
		    if (i != 98) 
		  {
			_putchar(',');
			_putchar(' ');
		   }
	     }
	}



	else
	{
		for (i = n; i >= 98; i--) 
		{
			print_number(i);
			

			if (i != 98) 
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		
	
	}
	
	_putchar('\n');
}
