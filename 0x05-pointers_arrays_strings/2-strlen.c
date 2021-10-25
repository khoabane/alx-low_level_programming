#include "main.h"

/**
*_strlen - returns the length of a string.
*
*@s: The pointer to string to find length to
*Description: a function that returns the length of a string.
*Return: returns a length of the string
*/

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}
return (count);
}
