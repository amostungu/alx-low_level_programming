#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if number is positive, zero or negative
 * Return: Always (success)
 */
int main(void)
{
	int y;

	srand(time(0));
	y = rand() - RAND_MAX / 2;

	if (y > 0)
	{
		printf("%d is positive\n", y);
	}
	else if (y == 0)
	{
		printf("%d is zero\n", y);
	}
	else
	{
		printf("%d is negative\n", y);
	}
	return (0);
}
