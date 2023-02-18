#include <stdio.h>

/**
* main - Entry point
*
* Description: print 0-9 using putchar
*              while using int variable
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		/*convert digit to ASCII representation*/
		putchar(counter + '0');
		++counter;
	}
	putchar('\n');
	return (0);
}
