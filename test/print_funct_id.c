#include "main.h"

/**
 * print_funct_id - returns the amount of identifiers.
 * @s: argument id
 * @index: index of argument id
 * Return: amount of identifiers.
 */
int print_funct_id(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_strn}, {"i", print_int},
		{"d", print_int}, {"b", print_bin}, {"u", print_unsnt},
		{"o", print_octa}, {"x", print_hex}, {"X", print_uphx},
		{"S", print_ustr}, {"p", print_address}, {"li", prinlnint},
		{"ld", prinlnint}, {"lu", prinluntt}, {"lo", prinlocta},
		{"lx", prinlhex}, {"lX", printlupx}, {"hi", prinshint},
		{"hd", prinshint}, {"hu", prinshunt}, {"ho", prinhocta},
		{"hx", prinhhexa}, {"hX", printshupx}, {"#o", prinnocta},
		{"#x", prinnhexa}, {"#X", prinnuphx}, {"#i", print_int},
		{"#d", print_int}, {"#u", print_unsnt}, {"+i", prinspint},
		{"+d", prinpints}, {"+u", print_unsnt}, {"+o", print_octa},
		{"+x", print_hex}, {"+X", print_uphx}, {" i", prinspint},
		{" d", prinspint}, {" u", print_unsnt}, {" o", print_octa},
		{" x", print_hex}, {" X", print_uphx}, {"R", print_srot},
		{"r", print_revr}, {"%", printt_prg}, {"l", printt_prg},
		{"h", printt_prg}, {" +i", prinpints}, {" +d", prinpints},
		{"+ i", prinpints}, {"+ d", prinpints}, {" %", printt_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
