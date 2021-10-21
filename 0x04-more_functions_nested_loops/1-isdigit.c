#include "main.h"

/**
*_isdigit - a function that checks for a digit
*
*Discription:  a function that checks for a digit (0 through 9).
*@c: a character to be checked if it is  digit
*Return: Returns 1 if c is a digit ,Returns 0 otherwise
*/

int _isdigit(int c)
{
if (c <= '9')
{
if (c == '0')
{
return (1);
}
}
else
{
return (0);
}
 return (0); 
}
