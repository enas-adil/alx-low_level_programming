#include<stdio.h>
#include <stdlib.h>

/**
 * main - return arguments count
 * @argc : count
 * @argv : vertix
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
