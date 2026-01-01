#include "main.h"


/**
 * Authur: Ajaogu Chiwendu Tessy
 * Program: Winmingle community c training
 * Description: Learning out how to debug code
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    return (largest);
}

