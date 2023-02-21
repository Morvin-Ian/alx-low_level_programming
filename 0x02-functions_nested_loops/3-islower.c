#include "main.h"

/**
 * Checks if a character is lower
 *
*/

int _islower(int c)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
