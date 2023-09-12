#include "main.h"
/**
 * is_alpha - function to check if 
 *            charachter is a letter
 * @c: checks input of function
 * Returns : returns 1 if 'c' is a letter
 *           otherwise always 0 (Success)
*/
int _isalpha(int c)
{
	if (c >=65 && c<= 122)
		return (1);
	return (0);
}
