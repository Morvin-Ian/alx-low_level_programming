#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (a * factorial(a - 1));
		}
	}
	else
	{
		return (-1);
	}
}
