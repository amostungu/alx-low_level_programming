#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints string in reverse
 * @s: String to print
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int k;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (k = len; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
