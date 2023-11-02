#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: pointer to string to copy
 *
 * Return:pointer to the copy of the passed string if success
*/
char *_strdup(char *str)
{
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		i++;
	{
		char *ptr = (char *)malloc(i * sizeof(char));

		if (ptr == NULL)
			return (NULL);
		for (i = 0; str[i] != '\0'; i++)
			ptr[i] = str[i];
		ptr[i] = '\0';
		return (ptr);
	}
}
