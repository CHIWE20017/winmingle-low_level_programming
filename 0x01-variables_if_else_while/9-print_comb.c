/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: write the numbers from 0 - 9
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;


	while(n < 10){
		putchar('0' + n);
		
		
	if(n != 9){ 
	putchar(',');
	putchar(' ');
	}
	n++;
	}

	putchar('\n');
	return 0;
}
