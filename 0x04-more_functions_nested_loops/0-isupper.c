#include "main.h"
/**
 * _isupper - checks if the char is uppercase
 * @c : the char to check
 * Return: 1 if is upper otherwise return 0
*/
int _isupper(int c)
{
	if ('A' > c && c <= 'A')
		return (1);
	return (0);
}
