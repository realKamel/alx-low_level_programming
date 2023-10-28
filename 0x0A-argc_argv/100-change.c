#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int res, count, i;
	char *end;
	int cents[4] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	res = strtol(argv[1], &end, 10);
	count = 0;

	if (!*end)
	{
		while (res > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if  (res >= cents[i])
				{
					count += res / cents[i];
					res = res % cents[i];
				}
			}
		}
		if (res == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
