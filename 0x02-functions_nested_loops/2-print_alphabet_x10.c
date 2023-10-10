#include "main.h"
/**
 * print_alphabet_x1 - print the alphapets 10 times
 *
 * Return: it returns nothing
*/
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
