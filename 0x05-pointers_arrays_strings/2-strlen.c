#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s : char array to count
 *
 * Return: length of the string
*/
int _strlen(char *s)
{
	int length;

	for (; (*s) != '\0'; s++)
	{
		length++;
	}
	return (length);
}
