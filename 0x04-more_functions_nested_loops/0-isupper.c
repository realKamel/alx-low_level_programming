#include "main.h"
/**
 * _isupper - checks if the char is uppercase
 * @c : the char to check
 * Return: 1 if is upper otherwise return 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
