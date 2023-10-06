#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int comma;
	int space;

	i = 48;
	comma = 44;
	space = 32;
	while (i < 58)
	{
		putchar((char)i);
		if (i != 57)
		{
			putchar((char)comma);
			putchar((char)space);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
