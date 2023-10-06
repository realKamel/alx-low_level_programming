#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	char j;

	i = 48;
	j = 'a';
	while (i < 58)
	{
		putchar((char)i);
		i++;
	}
	while (j < 'g')
	{
		putchar((char)j);
		j++;
	}
	putchar('\n');
	return (0);
}
