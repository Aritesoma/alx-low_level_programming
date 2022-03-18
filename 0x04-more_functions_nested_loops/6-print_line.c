#include "main.h"

/**
 * print_line - printing a line
 * @n: n is a number
 *
 * Description: To print a line
 *
 * Return: Valued 0
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
