#include "main.h"
/**
 * is_prime_number - Determine if number is prime or not
 * @n: the number to check
 * Return: 1 if prime 0 otherwise.
*/
int is_prime_number(int n)
{
	int i, prime = 0;

	if (n > 1)
	{
		for (i = 2; i <= (n / 2); i++)
		{
			if (n % i == 0)
				prime++;
		}
		if (prime == 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
