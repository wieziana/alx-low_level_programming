#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: The number that needs to be printed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		_putchar(-m);
		return (-m);
	}
	else
	{
		_putchar(m);
		return (m);
	}
}
