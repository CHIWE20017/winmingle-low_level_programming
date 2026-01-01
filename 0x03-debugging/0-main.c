#include "main.h"
#include <stdio.h>

/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle community c training
 * Description: Learning out how to debug positive or negetive code
 */


int main(void)
{
    int i;
 
    
    printf ("Enter Number:  ");
    scanf ("%d", &i);


    if (i > 0) 
	 printf("Positive\n");
    
    else if (i == 0) 
	 printf("Zero\n");
    
    else     
	 printf("Negative\n");
    

    return (0);
}

