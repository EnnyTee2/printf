#include "main.h"
#include <stdio.h>

/**
 * printt_prg - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int printt_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	buffer_handler(buf, '%', i);

	return (1);
}
