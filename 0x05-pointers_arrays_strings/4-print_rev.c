#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
*
*@s:a string to reverse
*Description:a function that prints a string, in reverse,
* followed by a new line.
*Return: no return value
*/

void print_rev(char *s)
{
int len = 0;
int i;

while (*s != '\0')
{
len++;
++s;
}

s--;

for (i = len; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
