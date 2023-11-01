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
	if (size < 1)
		return (NULL);
	
	char *arr = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < (sizeof(char) * size); i++)
		arr[i] = c;
	return (arr);
}
