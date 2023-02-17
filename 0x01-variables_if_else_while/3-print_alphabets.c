#include <stdio.h>
/**
 * main - A program to print alphabet in lowercase and uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z')
		{
			putchar(c);
			c++;
		}
	while
		(d <= 'Z')
		{
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
