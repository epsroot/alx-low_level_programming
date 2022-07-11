#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the value of two integers
 * @a: the integer to be swapped
 * @b: the integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int swapped;

	swapped = *a;
	*a = *b;
	*b = swapped;
}
