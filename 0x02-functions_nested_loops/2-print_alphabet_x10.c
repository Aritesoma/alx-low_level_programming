#include "main.h"
/**
 * print_alphabet_x10 - Pritns alpha 10x
 * Description: printing alpha
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c++;


	}

}
