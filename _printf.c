#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int j = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buff;

	va_start(arguments, format), buff = malloc(sizeof(char) * 1024);
	if (!format || !buff || (format[j] == '%' && !format[j + 1]))
		return (-1);
	if (!format[j])
		return (0);
	for (j = 0; format && format[j]; i++)
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '\0')
			{	print_buf(buff, ibuf), free(buff), va_end(arguments);
				return (-1);
			}
			else
			{	function = get_print_func(format, j + 1);
				if (function == NULL)
				{
					if (format[j + 1] == ' ' && !format[j + 2])
						return (-1);
					handl_buf(buff, format[j], ibuf), len++, j--;
				}
				else
				{
					len += function(arguments, buff, ibuf);
					j += ev_print_func(format, j + 1);
				}
			} j++;
		}
		else
			handl_buf(buff, format[j], ibuf), len++;
		for (ibuf = len; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_buf(buff, ibuf), free(buff), va_end(arguments);
	return (len);
}
