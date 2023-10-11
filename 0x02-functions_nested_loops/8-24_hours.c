
#include <stdio.h>

/**
 * jack_bauer - print the mins in the day
 * Reutrn : void
*/
void jack_bauer(void)
{
	int bM = 0, sM = 0, bH = 0, sH = 0;

	for (sM; sM < 10 ; sM++)
	{
		putchar(bH + '0');
		putchar(sH + '0');
		putchar(':');
		putchar(bM + '0');
		putchar(sM + '0');
		putchar('\n');
		if (sM == 9 && bM < 5)
		{
			bM++;
			sM = -1;
		}
		if (bM == 5 && sM == 9 && sH < 3)
		{
			bM = 0;
			sM = -1;
			sH++;
		}
		if (sH == 3 && bM == 5 && sM == 9 && bH < 2)
		{
			bH++;
			sH = 0;
			bM = 0;
			sM = -1;
		}
	}
}
