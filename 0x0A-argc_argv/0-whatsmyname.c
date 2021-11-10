#include<stdlib.h>
#include<stdio.h>
/**
*main - program that prints its name, followed by a new line
*Description: If you rename the program, it will print the new name,
*without having to compile it again
*You should not remove the path before the name of the program
*@argc:a count of the arguments supplied to the program
*@argv:an array of pointers to the strings which are those arguments
*Return: Always 0 for  success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf(" %s\n", argv[0]);

return (0);
}
