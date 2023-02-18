#include <stdio.h>

/**
* main - prints all lowdercase alphabets in reverse,
* followed by a new line, using putchar
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
