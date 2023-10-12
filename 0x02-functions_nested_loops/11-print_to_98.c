#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print the number to 98
 * @n: the parameter to start from
 * Return: void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}

	}
	else if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	else
		printf("98");
	_putchar('\n');
}
