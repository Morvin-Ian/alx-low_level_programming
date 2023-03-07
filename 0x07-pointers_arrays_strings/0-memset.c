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

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);

}
