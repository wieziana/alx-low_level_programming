#include <stdio.h>
/**
 * main - print single digit numbers with
 * commas and a space in-between. Using
 * only putchar function.
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
