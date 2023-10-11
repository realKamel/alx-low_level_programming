#include "main.h"

/**
 * print_sign - return intger based on it's sign
 * @n : the parameter to test
 * Return: 1 if the number enter is positve -1 if negative 0 if zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
