/**
 * Author:Ajaogu Chiwendu Tessy
 * Program: Winmingle Community C Training
 * Description: Print a qoute to standard error using write()
 */

#include<unistd.h>


int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);

}
