#include "main.h"

/**
*reverse_array - reverses the content of an array of integers.
*Description: reverses the content of an array of integers.
*@a:The array of integers to bereversed
*@n:is the number of elements of the array
*Return:no return value
*/

void reverse_array(int *a, int n)
{
int t,index;

for (index = n - 1; index >= n/2; index--)
{
t = a[n - 1- index];
a[n - 1 - index] = a[index];
a[index] = t;
}
}

