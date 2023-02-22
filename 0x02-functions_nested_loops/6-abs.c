#include "main.h"
/**
 * _abs - Computes the absolute value of integer
 * @c: The number to compute
 * Return: absolute value of the number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
