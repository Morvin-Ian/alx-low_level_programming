#include "main.h"
#include <stdio.h>


/**
 * swap_int - takes a pointer to an int parameter
 *               and updates the value
 *
 * @a: int parameter
 * @b: second arg
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swap_holder;
	swap_holder = *a;
	*a = *b;
	*b = swap_holder;
}
