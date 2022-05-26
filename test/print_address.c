#include "main.h"
#include <stdio.h>
/**
 * print_addr - prints the address of an input variable
 * @arguments: input address.
 * @buffer: buffer pointer.
 * @ibuffer: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_address(va_list arguments, char *buffer, unsigned int ibuffer)
{
	void *addr;
	long int int_input;
	int i, counter, first_digit, isnegative;
	char *hex, *bin;
	char nill[] = "(nil)";

	addr = (va_arg(arguments, void *));
	if (addr == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuffer = buffer_handler(buffer, nill[i], ibuffer);
		return (5);
	}
	int_input = (intptr_t)addr;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	bin = malloc(sizeof(char) * (64 + 1));
	bin = fill_bin_arr(bin, int_input, isnegative, 64);
	hex = malloc(sizeof(char) * (16 + 1));
	hex = fill_hex_arr(bin, hex, 0, 16);
	ibuffer = buffer_handler(buffer, '0', ibuffer);
	ibuffer = buffer_handler(buffer, 'x', ibuffer);
	for (first_digit = i = counter = 0; hex[i]; i++)
	{
		if (hex[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuffer = buffer_handler(buffer, hex[i], ibuffer);
			counter++;
		}
	}
	free(bin);
	free(hex);
	return (counter + 2);
}
