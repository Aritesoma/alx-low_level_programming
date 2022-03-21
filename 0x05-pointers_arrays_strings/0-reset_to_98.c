#include "main.h"

/**
 * reset_to_98 - changint the value of an integer
 * @n: A pointer
 *
 * Return: Void
 */

void reset_to_98(int *n)
{
	int x;
	x = 4;
	n = &x;
	*n = 98;
	_putchar(*n);



}
