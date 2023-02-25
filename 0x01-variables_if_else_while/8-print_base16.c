#include <stdio.h>
/**
 * main - print out Hexadecimal base 16 mnumbers
 * using only the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
