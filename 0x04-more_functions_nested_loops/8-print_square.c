#include "main.h"

/**
 * print_square - printing a nice squ
 * @size: the size of square
 *
 * Return: valued 0
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
