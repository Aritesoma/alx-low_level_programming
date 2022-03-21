#include "main.h"

/**
 * _strlen - prints string length
 * @s: the string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);





}
