#include <stdio.h>

/**
 * main - The main function
 * @argc:array counter
 * @argv: The pointer arrays
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int x = 0;

	for (x = 0; x <= argc; x++)
	{
		if (x == argc)
		{
			printf("%d\n", x - 1);
		}
	}

	return (0);
}
