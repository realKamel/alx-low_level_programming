#include "main.h"

/**
 * print_last_digit - it prints the last digit
 * @n : the number to print it's last digit
 * Return: the last digit of number
*/
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = n * -1;
	_putchar (n + '0');
	return (n);
}
