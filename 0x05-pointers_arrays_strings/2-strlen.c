#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s : char array to count
 *
 * Return: length of the string
*/
int _strlen(char *s)
{
	char *i;
	int length = 0;

	for (i = s; (*i) != '\0'; i++)
		length++;
	return (length);
}
