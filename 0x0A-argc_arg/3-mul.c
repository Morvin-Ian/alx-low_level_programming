#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int x = 0;

	for (x = 0; x <= argc; x++)
	{
		if (x == argc)
		{
			if (argc == 3)
			{
				printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
				return (0);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
}
