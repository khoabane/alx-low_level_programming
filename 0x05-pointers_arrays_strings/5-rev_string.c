#include "main.h"
#include <string.h>

/**
*rev_string - reverses a string.
*@s: string to reverse
*/

void rev_string(char *s)
{
int i = 0;
int j = (strlen(s) - 1);
char t;

while (i < j)
{
t = s[i];
s[i] = s[j];
s[j] = t;
i++, j--;
}
}
