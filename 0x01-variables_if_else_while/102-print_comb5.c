/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training 
 * Description: Writing two digits starting from 00 - 99
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	int j;

	while(i <= 9){
		j = 0;

		while(j <= 9){
			putchar('0' + i);
			putchar('0' + j);

			if(!(i == 9 && j == 9)){
				putchar(',');
				putchar(' ');
			
			}
		j++;
		}

		i++;
	}

	putchar('\n');
	return 0;

}
