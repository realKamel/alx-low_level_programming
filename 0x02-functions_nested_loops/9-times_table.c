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
				putchar((j * i) + '0');
				if (j < 9)
				{
					putchar(44);
					putchar(32);
					putchar(32);
				}
				}
				else
				{
					putchar(((i * j) / 10) + '0');
					tens = (i * j) % 10;
					putchar(tens + '0');
					if (j < 9)
					{
						putchar(44);
						putchar(32);
					}
			}
		}
		putchar('\n');
	}
}
