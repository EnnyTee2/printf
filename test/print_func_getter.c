#include "main.h"
/**
 * print_func_getter - selects the correct function to perform the operation.
 * @c: argument id
 * @index: index for argument id
 * Return: pointer to a function.
 */
int (*print_func_getter(const char *c, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_strn},
		{"i", print_int}, {"d", print_int},
		{"b", print_bin}, {"u", print_ut},
		{"o", print_octa}, {"x", print_hex},
		{"X", print_uphx}, {"S", print_usr},
		{"p", print_address}, {"li", prinlint},
		{"ld", prinlnint}, {"lu", prinluntt},
		{"lo", prinlocta}, {"lx", prinlhex},
		{"lX", printlupx}, {"hi", prinshint},
		{"hd", prinshint}, {"hu", prinshunt},
		{"ho", prinhocta}, {"hx", prinhhexa},
		{"hX", prinshupx}, {"#o", prinnocta},
		{"#x", prinnhexa}, {"#X", prinnuphx},
		{"#i", print_int}, {"#d", print_int},
		{"#u", print_unsnt}, {"+i", prinpint},
		{"+d", printpints}, {"+u", print_unt},
		{"+o", print_oct}, {"+x", print_hex},
		{"+X", print_upx}, {" i", prinsint},
		{" d", prinsint}, {" u", print_unt},
		{" o", print_oct}, {" x", print_hex},
		{" X", print_upx}, {"R", print_srot},
		{"r", print_revr}, {"%", printt_prg},
		{"l", printt_prg}, {"h", printt_prg},
		{" +i", prinspint}, {" +d", prinspint},
		{"+ i", prinspint}, {"+ d", prinspint},
		{" %", printt_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (c[index] == pr[i].type_arg[j])
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
	return (pr[i].f);
}
