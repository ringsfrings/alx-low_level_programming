#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int bil, vil;
	char *p;

	bil = 0;
	while (s[bil] != '\0')
	{
		vil = 0;
		while (accept[vil] != '\0')
		{
			if (accept[vil] == s[bil])
			{
				p = &s[bil];
				return (p);
			}
			vil++;
		}
		bil++;
	}

	return (0);
}
