#include "main.h"
/**
*print_most_numbers - function that prints 0-9 except 2 and 4
*/

void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if ((i != 50) || (i != 52))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
