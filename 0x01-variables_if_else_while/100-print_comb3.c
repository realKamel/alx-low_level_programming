#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int space;
	int comma;

	i = 48;
	space = 32;
	comma = 44;
	while (i < 58)
	{
		j = i + 1;
		while (j < 58 && j > i)
		{
			putchar((char)i);
			putchar((char)j);
			if (i != 56 || j != 57)
			{
				putchar((char)comma);
				putchar((char)space);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

