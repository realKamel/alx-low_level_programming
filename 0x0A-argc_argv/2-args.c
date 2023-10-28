#include <stdio.h>

/**
 * main - Entery point
 * @argc: count of arguments
 * @argv: array of char pointer
 *
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
