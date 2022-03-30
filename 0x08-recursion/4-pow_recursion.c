#include "main.h"

/**
 * _pow_recursion - returns to the power
 * @x: First integer
 * @y: Second integer
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (_pow_recursion(x, y));

}
