#include <stdio.h>
/**
 * main - Print alphabeth in lower case using the putchar function
 * Return: 0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}