#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: The char it checks
 * Return: 1 if c is an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
