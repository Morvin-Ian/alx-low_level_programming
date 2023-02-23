#include <stdio.h>

/**
 * main - Where execution starts
 * Return: Always zero
 */

int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if ((counter % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((counter % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (((counter % 3) == 0) && ((counter % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if (counter == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", counter);
		}
	}

	return (0);
}
