/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: Write numbers from 0 - 9
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	while(n <= 9){
		putchar('0' + n);
		n++;
	
	}
	putchar('\n');
	return 0;
}
