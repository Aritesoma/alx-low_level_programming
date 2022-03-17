#include "main.h"

/**
 * print_most_numbers - prints no Except 2 num
 *
 * Description: print most num but some
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');


}
