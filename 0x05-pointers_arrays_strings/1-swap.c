#include "main.h"

/**
*swap_int - swaps the values of two integers.
*@a: The variable to swap with b
*@b: The variable to swap with a
*Description:a function that swaps the values of two integers.
*Return: no return value
*/


void swap_int(int *a, int *b)
{
int p;

 p = *a;
 *a = *b;
 *b = p;
}
