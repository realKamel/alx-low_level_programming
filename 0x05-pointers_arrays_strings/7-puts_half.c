#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str : pointer to char array
 * Return: void
*/
void puts_half(char *str)
{
	int i, j;

	for (j = 0; str[j] != '\0'; j++)
		;

	if (j % 2 != 0)
		i = (j - 1) / 2;

	else
		i = (j / 2);

	for ( ; i <= j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
