#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly alloctaed
 *space in memory which contains a copy of the string
 *passed.
 *@str: pointer to string being duplicated.
 *
 *Return: NULL if str is NULL.
 *pointer to duplicated string on success.
 *NULL if memory was insufficient.
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	s[len] = '\0';

	return (s);
}
