#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	do {
		putchar((char)i);
		i++;
	} while (i < 59);
	putchar('\n');
	return (0);
}
