#include "main.h"

/**
 * print_bin - Convert decimals to binary
 * @bin_list: Store the argument values
 * Return: The count
 */

int print_bin(va_list bin_list)
{
	unsigned int j, counter, num, bin, arr[32];

	j = 0, counter = 0;
	num = va_arg(bin_list, int);

	if (num < 1)
	{
		_putchar(48);
		counter++;
		return (counter);
	}
	else
	{
		while (num > 0)
		{
			bin = num % 2;
			num /= 2;
			arr[counter] = bin;
			counter++;
		}
		j = counter - 1;
		while (j > 0)
		{
			_putchar('0' + arr[j]);
			j--;
		}
		_putchar('0' + arr[j]);
	}
	return (counter);
}
