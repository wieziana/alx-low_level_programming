#include "main.h"

/**
 * print_alphabet_x10 - Print all alphabeth 10 times
 * but in lower case
 */

void print_alphabet_x10(void)
{
	int n;
	char m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
