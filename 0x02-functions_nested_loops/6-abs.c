#include "main.h"
/**
 * _abs - Function of an integer
 * @a: The number to be computed
 * Return: -a or a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
