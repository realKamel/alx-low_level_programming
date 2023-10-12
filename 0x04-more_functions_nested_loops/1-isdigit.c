#include "main.h"

/**
 * _isdigit - check is the input is digit or not
 * @c: the parameter
 *
 * Return: 1 if is digit 0 otherwise 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
