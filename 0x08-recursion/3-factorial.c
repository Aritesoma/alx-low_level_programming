#include "main.h"

/**
 * factorial - Of a given number
 * @n: The given number
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}

	if (n == 0)
	{
		return(1);
	}

	return (n * factorial(n - 1));

}
