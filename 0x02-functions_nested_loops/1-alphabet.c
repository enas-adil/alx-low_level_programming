#include "main.h"
/**
 * print_alphabet - print letters
 * Return: always 0
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
