/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: Write from 0 - 9 without using char
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 0;

	while(x < 10){
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return 0;
}
