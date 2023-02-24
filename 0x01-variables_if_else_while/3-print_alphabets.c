#include <stdio.h>
/**
 * main - Prints alpabets in both lower and uppercase
 * using on the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (m = 65; m <= 90; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
