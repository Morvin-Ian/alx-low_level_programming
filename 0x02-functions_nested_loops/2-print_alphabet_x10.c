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

/**
 * main - Entry point
 *
 * Description: Calls the alphabets function 10 times
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		print_alphabets();
		counter++;
	}
	return (0);
}
