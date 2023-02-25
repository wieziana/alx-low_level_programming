#include <stdio.h>
/**
 * main - print lowercase alphabeth in reverse
 * using only the putchar functions ASCII
 * Return: 0 (success)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
