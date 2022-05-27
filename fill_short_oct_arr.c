#include "main.h"

/**
 * fill_short_oct_arr - generates a short octal number
 *
 * @bin: array where is the binary data is stored
 * @oct: array where the the octal data is stored.
 *
 * Return: binary array.
 */
char *fill_short_oct_arr(char *bin, char *oct)
{
	int ops, i, j, ioct, size;

	oct[6] = '\0';
	for (i = 15, ioct = 5; i >= 0; i--, ioct--)
	{
		if (i > 0)
			size = 4;
		else
			size = 1;
		for (ops = 0, j = 1; j <= size; j *= 2, i--)
			ops = ((bin[i] - '0') * j) + ops;
		i++;
		oct[ioct] = ops + '0';
	}
	return (oct);
}
