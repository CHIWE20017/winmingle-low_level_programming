/**
 * Authur: Ajaogu Chiwendu Tessu
 * Program: Winmingle Community C Training
 *Description: Write a combination of three-digit
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	int i;
	int x;

	while(n <= 7){
	    
	    i = n +1;
	    
	    while(i <= 8){
	        
		x = i + 1;
	        
		while(x <= 9){
		
			putchar('0' + n);
			putchar('0' + i);
			putchar('0' + x);


			if(!(n == 7 && i == 8 && x == 9))
			{
				putchar(',');
			        putchar(' ');
			}
		
		x++;
	
		}
	    i++;
	   
	    }
	n++;
	
	
	}
	putchar('\n');
	return 0;
}
