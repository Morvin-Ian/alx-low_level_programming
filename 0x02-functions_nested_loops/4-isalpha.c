#include "main.h"

/**
 * _isalpha - function to check if
 *           character is lowercase, uppercase, or a number
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase, upper or number
 *         otherwise always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 0 && c <= 9 || c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}

