#include<stdio.h>
/**
 * main - return arguments count
 * @argc : count
 * @argv : vertix
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc > 1)
	{
		result = argv[1] * argv[2];
		printf("%d", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
