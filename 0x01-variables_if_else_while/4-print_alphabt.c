#include <stdio.h>
/**
 * main - Prints alpabeths in lowercass except
 * of the q and e characters using the
 * putchar functions only.
 * Return: 0 (success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
