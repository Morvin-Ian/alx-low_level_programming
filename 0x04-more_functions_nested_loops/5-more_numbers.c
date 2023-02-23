#include "main.h"
/**
*more_numbers - function that prints 0-9 except 2 and 4
*/

void more_numbers(void)
{
	int x = 0;
	int y;

	while (x <= 10)
	{
		y = 0;
		while (y <= 14)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');

			y++;
		}
		_putchar('\n');
		x++;
	}

}
