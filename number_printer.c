#include "main.h"

/**
* print_dec - Prints decimal - Base 10 digits (%d)
* @arr_list: Stores the value of arguments
* Return: Counter print numbers
*/
int print_dec(va_list arr_list)
{
	unsigned int abs_num, aux_num, zero_count, counter;
	int number;

	counter = 0;

	number = va_arg(arr_list, int);

	if (number < 0)
	{
		abs_num = (number * -1);
		counter += _putchar(45);
	}
	else
		abs_num = number;

	aux_num = abs_num
	zero_count = 1;
	while (aux_num > 9)
	{
		aux_num /= 10;
		zero_count *= 10;
	}

	while (zero_count >= 1)
	{
		counter += _putchar(((abs_num / zero_count) % 10) + '0');
		zero_count /= 10;
	}
	return (counter);
}

/**
 * print_int - Prints the integers (%i)
 * @arr_list: Stores the list of numbers
 * Return: Number print
 */

int print_int(va_list arr_list)
{
	return (print_dec(arr_list));
}
