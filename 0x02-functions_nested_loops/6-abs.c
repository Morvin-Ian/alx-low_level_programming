#include "main.h"

/**
 * _abs - function to check if
 *       a value is not abs and turns it to abs
 *
 * @n Data type as : Argument of the function
 *
 * Return: AN basolute value or arg int
*/

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n + (n * 2));
	}
}
