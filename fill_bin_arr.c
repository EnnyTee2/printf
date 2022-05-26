#include "main.h"

/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *bin, long int int_in, int isneg, int limit)
{
	int j;

	for (j = 0; j < limit; j++)
		bin[j] = '0';
	bin[limit] = '\0';
	for (j = limit - 1; int_in > 1; j--)
	{
		if (int_in == 2)
			bin[j] = '0';
		else
			bin[j] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		bin[j] = '1';
	if (isneg)
	{
		for (j = 0; bin[j]; j++)
			if (bin[j] == '0')
				bin[j] = '1';
			else
				bin[j] = '0';
	}
	return (bin);
}
