#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entery point
 * @argc: count of arguments
 * @argv: array of char pointer
 *
 * Return: 0 if success
*/
int main(__attribute__((unused))int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
