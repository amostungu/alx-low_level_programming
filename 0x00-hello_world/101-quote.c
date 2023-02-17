#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that print a line to the standard error using fput function
 * Return: 1 if success else 0 on error
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
