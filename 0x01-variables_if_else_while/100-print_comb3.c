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
        int x; 

	while(n <= 8){
	   x = n + 1;
           while(x <= 9){
		putchar('0' + n);
                putchar('0' + x);		
		
	        if(!(n == 8 && x == 9)){ 
	             putchar(',');
	             putchar(' ');
	        }
	
	        x++;
	   }
	   n++;
      }

	putchar('\n');
	return 0;
}
