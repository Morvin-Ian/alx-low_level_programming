#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - prints buffer in hexa
 * @c: Arg 2
 * @size:Arg 1
 *
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
