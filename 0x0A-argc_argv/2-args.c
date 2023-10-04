#include<stdio.h>
/**
 * main - return arguments count
 * @argc : count
 * @argv : vertix
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
