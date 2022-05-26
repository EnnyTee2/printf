#include "main.h"

/**
 * print_int - prints an integer
 * @arguments: input string
 * @buffer: buffer pointer
 * @ibuffer: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list arguments, char *buffer, unsigned int ibuffer)
{
	int int_input;
	unsigned int int_in, int_temp, i, div, isneg;

	int_input = va_arg(arguments, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuffer = buffer_handler(buffer, '-', ibuffer);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuffer = buffer_handler(buffer, ((int_in / div) % 10) + '0', ibuffer);
	}
	return (i + isneg);
}
