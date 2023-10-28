#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entery point
 * @argc: count of arguments
 * @argv: array of char pointer
 *
 * Return: 0 if success
*/
int main(int argc, char *argv[])
{

	int res = 0, i, num;
	char *end;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &end, 10);
			if (!*end)
				res += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", res);
	return (0);
}
