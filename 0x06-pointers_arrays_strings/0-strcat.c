#include "main.h"
/**
 * _strcat - copy or catenate a string
 * @src: pointer to the source char array
 * @dest: pointer to the destnation array
 *
 * Return: pointer to the dest char array afer catenate
*/
char *_strcat(char *dest, char *src)
{
	int dest_size, i;

	for (dest_size = 0; dest[dest_size] != '\0'; dest_size++)
		;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_size + i] = src[i];
	dest[dest_size + i + 1] = '\0';
	return (dest);
}
