
#include <stdio.h>

/**
 * jack_bauer - print the mins in the day
 * Reutrn : void
*/
void jack_bauer(void)
{
	int x = 0;
	int a = 0, b = 0, c = 0, d = 0;

	for (; x < 1440; x++)
	{
		putchar(a + '0');
		putchar(b + '0');
		putchar(':');
		putchar(c + '0');
		putchar(d + '0');
		putchar('\n');

		d++;
		if (d > 9)
		{
			d = 0;
			c++;
		}
		if (c > 5)
		{
			c = 0;
			b++;
		}
		if (b > 9)
		{
			b = 0;
			a++;
		}
	}
}
