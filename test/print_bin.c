#include "main.h"

/**
 * print_bin - prints decimal in binary
 * @arguments: input string
 * @buffer: buffer pointer
 * @ibuffer: index for buffer pointer
 * Return: number of chars printed.
 */
int print_bin(va_list arguments, char *buffer, unsigned int ibuffer)
{
	int int_input, counter, i, first_one, isnegative;
	char *bin;

	int_input = va_arg(arguments, int);
	isnegative = 0;
	if (int_input == 0)
	{
		ibuffer = buffer_handler(buffer, '0', ibuffer);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}
	bin = malloc(sizeof(char) * (32 + 1));
	bin = fill_bin_arr(bin, int_input, isnegative, 32);
	first_one = 0;
	for (counter = i = 0; bin[i]; i++)
	{
		if (first_one == 0 && bin[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuffer = buffer_handler(buffer, bin[i], ibuffer);
			counter++;
		}
	}
	free(bin);
	return (counter);
}
