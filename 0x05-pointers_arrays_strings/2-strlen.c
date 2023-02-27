#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen() - takes a pointer to an int parameter
 *               and updates the value
 *
 * @s: char parameter
 *
 * Return: An integer
 */

int _strlen(char *s)
{
	int len = strlen(*s);

	return (len);
}
