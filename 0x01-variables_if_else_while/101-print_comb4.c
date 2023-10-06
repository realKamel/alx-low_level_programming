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
	int k;
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
			k = j + 1;
			while (k < 58 && k > j)
			{
				putchar((char)i);
				putchar((char)j);
				putchar((char)k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar((char)comma);
					putchar((char)space);
				}
				k++;
			}
		j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
