#include "headers.h"
#include <string.h>

/**
* main - Entry point
* Description: 'Basic Uses of If else statements'
* Return: Always 0 (Success)
*/
int main(void)
{
	char printed_string[] = "_putchar";
	int counter = 0;

	while (counter <= 8)
	{
		_putchar(printed_string[counter]);
		counter++;
	}
	_putchar('\n');
	return (0);
}
