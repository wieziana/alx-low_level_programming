#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: integer 1
 * @b: integer 2
 * Return: Successful
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}

