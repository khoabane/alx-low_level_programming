#include "main.h"
  /**
*_strlen - returns the length of a string.
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



/**
*_strcat - concatenates two strings.
*Description: function appends the src string to the dest string,
*overwriting the terminating null byte (\0) at the end of dest,
*and then adds a terminating null byte
*@dest:destination pointer
*@src: pointer to a string
*Return:  returns concatinated string
*/

char *_strcat(char *dest, char *src)
{
char *cat = dest +  _strlen(dest);
int l =  _strlen(dest) + _strlen(src);

while (*src)
{
*cat += *src;
src++;
cat++;
}
*cat += '\0';
cat -= l;
*dest = *cat;
return (cat);
}
