#include "main.h"

/**
 * print_rev - print char array in reverse order
 * @s: pointer to the index 0 of char array
 * Return:void
*/
void print_rev(char *s)
{;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	for ( ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
