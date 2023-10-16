#include "main.h"

/**
 * _puts - output of characters and strings
 * @str : the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	char *i = str;

	for ( ; (*i) != '\0' ; i++)
	{
		_putchar((*i));
	}
}
