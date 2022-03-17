#include "main.h"

/**
 * more_numbers - multiple num
 *
 * Description: prints multiple lines
 *
 * Return: valued 0
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{

			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');

		}
		_putchar('\n');

	}





}
