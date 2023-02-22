#include "main.h"
/**
 * print_sign - Prints the sign of number
 * @n: The number to check
 * Return: 1 for positive, -1 for negative 0 for others
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
