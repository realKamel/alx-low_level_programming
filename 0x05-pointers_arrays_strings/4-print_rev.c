#include "main.h"

/**
 * print_rev - print char array in reverse order
 * @s: pointer to the index 0 of char array
 * Return:void
*/
void print_rev(char *s)
{
	char *runner = s;
	int i = 0;

	for ( ; (*runner) != '\0'; runner++)
		i++;
	for ( ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
