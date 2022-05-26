#include "main.h"
#include <stdio.h>

/**
 * print_char - writes the character s to standard output
 * @arguments: input char
 * @buffer: buffer pointer
 * @ibuffer: index for buffer pointer
 * Return: On success 1.
 */

int print_chr(va_list arguments, char *buffer, unsigned int ibuffer)
{
	char s;

	s = va_arg(arguments, int);
	buffer_handler(buffer, s, ibuffer);

	return (1);
}
