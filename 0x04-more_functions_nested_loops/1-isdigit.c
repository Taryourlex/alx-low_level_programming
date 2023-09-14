#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: The parameter to be checked
 * Return: 1 for digit or 0 of anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
