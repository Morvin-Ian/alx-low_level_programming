#include "main.h"


/**
 * print_to_98 - a function that prints every value to 98
 *
 * @n: an  Argument of the function
 *
 * Return: void
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n => 98)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
			n--;
		}
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
			n++;
		}

	}
	else
	{
		_putchar(n + '0');
	}



}

