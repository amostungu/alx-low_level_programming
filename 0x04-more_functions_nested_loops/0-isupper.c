#include "main.h"

/**
 * _isupper - check upper letter.
 * @x: char to be checked
 * Return: 1 for upper else 0
 */
int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	return (0);
}
