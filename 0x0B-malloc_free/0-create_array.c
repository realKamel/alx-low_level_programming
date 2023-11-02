#include "main.h"
#include<stdlib.h>
/**
 * create_array - a function that creates an array of char.
 * @size:size of array
 * @c:and initializer character
 *
 * Return:a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size < 1)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
