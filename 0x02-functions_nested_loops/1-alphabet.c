#include "headers.h"
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

/**
 * main - Entry point
 *
 * Description: Calls the alphabets function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	print_alphabets();
	return (0);
}
