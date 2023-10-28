#include <stdio.h>

/**
 * main - Entery point
 * @argc: count of arguments
 * @argv: array of char pointer
 *
 * Return: 0 if success
*/
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc-1);
	return (0);
}
