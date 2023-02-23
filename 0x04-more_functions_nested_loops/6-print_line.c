#include "main.h"
/**
*print_line - prints a line
*@n: Argument of the function
*Return: returns nothing
*/

void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 1; counter <= n; counter++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
