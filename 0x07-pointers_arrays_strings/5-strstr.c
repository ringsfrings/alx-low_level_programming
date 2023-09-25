#include "main.h"
#include <stdio.h>
/**
 * *_strstr - description
 * @haystack: string
 * @needle: pointer
 * Return: pointer
 */


char *_strstr(char *haystack, char *needle)
{
int bil, vil;

for (bil = 0; haystack[bil] > '\0'; bil++)
{
	for (vil = bil; haystack[vil] > '\0' && needle[vil - bil] > '\0'; vil++)
	{
		if (haystack[vil] != needle[vil - bil])
		{
			break;
		}
	}
	if (needle[vil - bil] == '\0')
	{
		return (haystack + bil);
	}
}
return (0);
}
