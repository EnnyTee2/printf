#include "main.h"

/**
 * print_char - Print characters (%c)
 * @arr_list: Store the a list of characters
 * Return: num of parameters printed
 */
int print_char(va_list arr_list)
{
	int c = va_arg(arr_list, int);

	return (_putchar(c));
}

/**
* print_str - print string (%s)
* @arr_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_str(va_list arr_list)
{
	int i, counter = 0;
	char *str;

	str = va_arg(arr_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		counter += _putchar(str[i]);

	return (counter);
}
