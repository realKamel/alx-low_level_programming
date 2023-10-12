#include "main.h"

/**
 * print_line - to print line
 * @n: the length
 *
 * Return: void
*/
void print_line(int n)
{
	if (n < 0)
		_putchar(10);
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
