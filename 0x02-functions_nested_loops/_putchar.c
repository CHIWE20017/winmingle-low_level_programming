#include <unistd.h>

/**
*Authur: Ajaogu Chiwendu Tessy
*Program: Winmingle Community C training
*Descreption: Declaring _putchar
*/


int _putchar(char c)
{
    return write(1, &c, 1);
}
