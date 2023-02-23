#include "main.h"
/**
*print_line - prints a line
*@n: Argument of the function
*Return: returns nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
