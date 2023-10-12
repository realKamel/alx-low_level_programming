#include "main.h"


/**
 * print_most_numbers - print all digits without 2 and 4
 *
 * Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		if (i == (48 + 2) || i == (48 + 4))
			i++;
		_putchar(i);
	}
}
