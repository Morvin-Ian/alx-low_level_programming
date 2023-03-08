#include "main.h"

/**
 * real_prime - detrmines if an input number is a prime number.
 * @n: input digit.
 * @c:The  iterator.
 * Return: 1 if n is a prime number. else zero.
 */
int real_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + real_prime(n, c + 1));
}
/**
 * is_prime_number - determines a prime no
 * @n: input number.
 * Return: 1 if n is a prime number else zero.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (real_prime(n, 2));
}
