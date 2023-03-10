#include <stdio.h>

/**
 * main - The main function
 * @argc:array counter
 * @argv: The pointer arrays
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
