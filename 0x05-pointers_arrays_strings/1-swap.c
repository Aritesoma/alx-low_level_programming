#include "main.h"

/**
 * swap_int - to interchange integers
 * @a: first int
 * @b: second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;


	c = 0;
	c = *a;
	*a = *b;
	*b = c;


}
