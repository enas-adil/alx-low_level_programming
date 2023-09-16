#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c = 'A';
	char s = 'a';

	while (s <= 'z')
	{
		putchar(s);
		s++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
