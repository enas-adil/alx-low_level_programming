#include<stdio.h>
/**
 * main - return program name
 * @argc : count
 * @argv : vertix
 * Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void) argv[argc];

	printf("%d\n", argc-1);
	return (0);
}
