#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */

int factorial(int n)
{
	if (a >= 0)
	{
		if (a == 0)
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
