#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 9)
	{
		putchar ('0' + i);
		i++;
	}
	while (c <= 'f')
	{
		putchar (c);
		c++;
	}
	putchar('\n');
	return (0);
}
