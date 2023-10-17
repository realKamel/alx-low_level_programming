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
	for (i = (j / 2); i < j; i++)
	{
		putchar(str[i]);
	}
		putchar('\n');
}
