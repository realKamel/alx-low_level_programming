#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return : void
*/
void times_table(void)
{
	int i, j, tens;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if ((j * i) < 10)
			{
				_putchar((j * i) + '0');
				if (j < 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				}
				else
				{
					_putchar(((i * j) / 10) + '0');
					tens = (i * j) % 10;
					_putchar(tens + '0');
					if (j < 9)
					{
						_putchar(44);
						_putchar(32);
					}
			}
		}
		_putchar('\n');
	}
}
