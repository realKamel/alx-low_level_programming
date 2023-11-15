#include "main.h"

/**
 * factorial- returns the factorial of a number.
 * @n: the Given number to get factorial of
 *
 * Return: returns the factorial of a given number
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
