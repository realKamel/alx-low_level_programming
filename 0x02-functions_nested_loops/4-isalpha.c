#include "main.h"

/**
 * _isalpha - perform a check if the char is it from alphapets or not
 * @c : the char to check
 * Return: 1 if it belongs to alphapets
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
