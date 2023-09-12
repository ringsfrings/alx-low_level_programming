#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * return: on success 1
 * on error, -1 is returned , and errno is set appropiately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
