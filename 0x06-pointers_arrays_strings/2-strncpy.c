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
	int i, src_size;

	for (src_size = 0; src[src_size] != '\0'; src_size++)
		;
	for (i = 0; i < n && i <= src_size; i++)
		dest[i] = src[i];
	return (dest);
}
