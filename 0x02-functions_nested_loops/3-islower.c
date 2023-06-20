#include "main.h"
/**
 * _islower - Check lowercase character
 * @c: The character to check
 * Return: 1 for lowercase character 0 for other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
