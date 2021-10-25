#include "main.h"

/**
*_puts - prints a string, followed by a new line, to stdout.
*
*Description:function that prints a string,
* followed by a new line, to stdout.
*@str:a string to print
*Return: no return value
*/

void _puts(char *str)
{
while (*str++)
{
_putchar(*str);
}
_putchar('\n');
}
