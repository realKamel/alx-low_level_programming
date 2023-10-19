#include "main.h"

/**
 * _strncat - copy a strig
 * @src: pointer to the source char array
 * @dest: pointer to the destnation array
 *
 * Return: pointer to the dest char array afer catenate
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_size, i;

	for (dest_size = 0; dest[dest_size] != '\0'; dest_size++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_size + i] = src[i];
	dest[dest_size + i + 1] = '\0';
	return (dest);
}
