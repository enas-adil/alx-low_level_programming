#include "main.h"
/**
 * _islower - checks for lower
 * @c: ascii cod
 * Return: send 1 for lower
 * 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
