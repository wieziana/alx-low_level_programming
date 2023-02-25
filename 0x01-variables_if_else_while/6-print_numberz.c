#include <stdio.h>
/**
 * main - print out numbers in base 10
 * using the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
