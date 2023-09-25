#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int bil;

	for (bil = 0; s[bil] >= '\0'  ; bil++)
	{
		if (s[bil] == c)
		{
			return (s + bil);
		}
	}

	return ('\0');
}
