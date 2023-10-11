#include "main.h"

/**
 * _abs - computes the abslute value of number
 * @n : takes the number to computes it
 * Return: it the return the abs value of int
*/
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}
