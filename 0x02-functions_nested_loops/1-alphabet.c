#include "main.h"
/**
 * print_alphabets - Function to be called
 *
 * Description: prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
*/

void print_alphabets(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

}
