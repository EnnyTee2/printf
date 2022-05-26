#include "main.h"

/**
 * print_revr - writes the str in reverse
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_revr(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llin)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = buffer_handler(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = buffer_handler(buf, str[j], ibuf);
	}
	return (i);
}
