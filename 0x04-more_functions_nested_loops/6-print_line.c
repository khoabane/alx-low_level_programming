#include "main.h"

/**
*print_line -  draws a straight line in the terminal.
*
*Description:a function that draws a straight line in the terminal.
*@n:is the number of times the character _ should be printed
*Return: no return value
*/

void print_line(int n)
{
int m;
for (m = 0; m < n; m++)
{
if (n > 0)
{
_putchar('_');
}
}
_putchar('\n');
}

