/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: Write all lowercase alphabet except e && q
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x = 'a';
		while (x <= 'z'){
		     if	(x != 'e' && x != 'q'){
			putchar(x);
			
		}
		x++;
		}
		putchar('\n');
		return 0;

}
