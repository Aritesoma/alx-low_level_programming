#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: minimum size of array
 * @max: maximum size of array
 *
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

			for (i = 0; min <= max; i++, min++)
			{
				p[i] = min;
			}
	return (p);
}
