#include "main.h"
#include <stdio.h>

/**
*Authur: Ajaogu Chiwendu Tessy
*Program Winmingle Community C training
*Description: Writing lowercase alphabrt 10 times.
*/

void print_alphabet_x10(void) 
{
	int i;
        char x;


        for (i = 0; i < 10; i++)
	{
	for(x = 'a'; x <= 'z'; x++) 
        {
            _putchar(x);
    }
	
        _putchar('\n');

	}

}
