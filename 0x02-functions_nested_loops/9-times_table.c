#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return : void
*/
void times_table(void)
{
	int i, j, tmp, tmp2;

	i = 0;
	for (; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			tmp2 = (i * j) % 10;
			tmp = (i * j) / 10;
			_putchar(tmp + '0');
			_putchar(tmp2 + '0');
			if (tmp != 8 && tmp != 1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
