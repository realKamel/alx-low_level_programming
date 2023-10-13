#include "main.h"
#include <unistd.h>
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: void
*/
void more_numbers(void)
{
	int j, i, digit, c = '\n';

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				digit = i % 10;
				_putchar(digit + '0');
			}
			else
				_putchar(i + '0');
		}
		write(1, &c, 1);
	}
}
