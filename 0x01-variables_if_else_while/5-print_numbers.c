#include <stdio.h>
/**
 * main - print single digits of base 10
 * Return: 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
