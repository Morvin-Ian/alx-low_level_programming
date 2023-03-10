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

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}

