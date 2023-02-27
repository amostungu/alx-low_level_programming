#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: The first integer to swap
 * @b: The second integer to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
