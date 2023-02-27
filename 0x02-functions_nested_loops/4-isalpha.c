#include "main.h"

/**
 * _isalpha - function that ckecks for alphabetic
 * characters.
 * @c: The character
 * Return: 1 if character is letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'C' && c <= 'Z'))
		return (1);
	else
		return (0);
}
