#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s : pointer to char array
 * Return: void
*/
void rev_string(char *s)
{
	int i, size = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		size++;
	for (i = 0; i < (size / 2) ; i++)
	{
		tmp = s[i];
		s[i] = s[size - i - 1];
		s[size - i - 1] = tmp;
	}
}
