/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: write the numbers of base 16
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	char x = 'a';

	while(n < 10){
		putchar('0' + n);
		n++;
		}
	while(x <= 'f'){
		putchar(x);
		x++;
	}
	putchar('\n');
	return 0;
}
