#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte,
 * @s: the memory area.
 * @b: the constant byte.
 * @n: bytes to be filled.
 * Return: a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) =  b;

	return (s);

}
