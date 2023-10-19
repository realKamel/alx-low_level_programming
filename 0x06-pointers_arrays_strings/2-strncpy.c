#include "main.h"

/**
 * _strncpy - copy a strig
 * @src: pointer to the source char array
 * @dest: pointer to the destnation array
 * @n: the amount of chars to copy
 * Return: pointer to the dest char array afer catenate
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
