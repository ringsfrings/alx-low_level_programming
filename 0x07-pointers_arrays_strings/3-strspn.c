#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bil, vil;

	for (bil = 0; s[bil] != '\0'; bil++)
	{
		for (vil = 0; accept[vil] != s[bil]; vil++)
		{
			if (accept[vil] == '\0')
				return (bil);
		}
	}
	return (bil);
}
