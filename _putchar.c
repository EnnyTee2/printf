#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 * @c: The character to print
 * Return: 1 on SUCCESS,
 *	   -1 on error and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
