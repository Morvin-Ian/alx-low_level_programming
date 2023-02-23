#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int counter, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (counter = 1; counter <= n; ++counter)
		{
			for (space = 1; space <= counter; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
