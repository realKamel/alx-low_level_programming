#include "main.h"

/**
 * print_last_digit - it prints the last digit
 * @n : the number to print it's last digit
 * Return: the last digit of number
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar (n + '0')
	return (n);
}
