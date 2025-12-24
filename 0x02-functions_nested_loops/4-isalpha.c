#include "main.h"


/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Descreption: Writing alphabet in character
 */

int _isalpha(int c) 
{
	if(c >= 'a' && c <= 'z') {
	
		return 1;
	}

	else if(c >= 'A' && c <= 'Z') 
	{
		return 1;
	}

	else {
		
	          return 0;
	}

}
