#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from
 * 'n' to 98
 * @n: the number
 * Return: successful
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);

}
