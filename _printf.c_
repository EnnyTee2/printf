#include "main.h"
/**
* _printf - main function to print in combination.
* @format: array to print and to check type.
* Return: count of character printed out.
**/
int _printf(const char *format, ...)
{
	int counter = -1;

	if (format != NULL)
	{
		int i;
		va_list arr_list;
		int (*o)(va_list);

		va_start(arr_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		counter = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					counter += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					o = get_funct(format[i + 1]);
					counter += (o ? o(arr_list) : _putchar(format[i]) + _putchar(format[i + 1]));
					i++;
				}
			}
			else
				counter += _putchar(format[i]);
		}
		va_end(arr_list);
	}

	return (counter);
}
