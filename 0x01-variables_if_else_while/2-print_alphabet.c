#include <stdio.h>

/**
	* main - Entry point
	* Description: 'Basic Uses of While loop'
	* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n')
}
