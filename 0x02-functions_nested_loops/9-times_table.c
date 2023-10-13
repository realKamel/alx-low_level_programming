#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return : void
*/
void times_table(void)
{
	int i, j, digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) < 10)
			{
				putchar((i * j) + '0');
			}
			else
			{
				putchar(((i * j) / 10) + '0');
				digit = (i * j) % 10;
				putchar(digit + '0');
			}
			if (j < 9)
			{
				putchar(',');
				putchar('.');
				if  ((i * (j + 1)) <= 9)
					putchar('.');
			}
		}
		putchar(10);
	}
}
