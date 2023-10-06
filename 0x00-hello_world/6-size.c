#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int ch;
	int lnum;
	int ll;
	int f;

	num = sizeof(int);
	ch = sizeof(char);
	lnum = sizeof(long int);
	ll = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %d byte(s)\n", ch);
	printf("Size of a int: %d byte(s)\n", num);
	printf("Size of a long int: %d byte(s)\n", lnum);
	printf("Size of a long long int: %d byte(s)\n", ll);
	printf("Size of a float: %d byte(s)\n", f);
	return (0);
}
