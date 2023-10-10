#include "main.h"

/**
 *_islower - perform a check if the char is lowecase or not
 * @c : the char to check
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
