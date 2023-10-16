#include "main.h"

/**
 * swap_int - swap two intgers with pointer
 * @a : pointer to the first parameter
 * @b : pointer to the second parameter
 *
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int *tmp = a;

	a = b;
	b = tmp;
}
