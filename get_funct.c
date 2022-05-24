#include "main.h"

/**
* get_funct - search and return the correct function
* @s: array to search in
* Return: return a function if correctly addressed
**/
int (*get_funct(char s))(va_list)
{
	defin_t actv[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{"b", print_bin},
		{NULL, NULL}
	};

	int j;

	for (j = 0; actv[j].tr != NULL; i++)
	{
		if (*actv[j].tr == s)
			return (actv[j].func);
	}
	return (NULL);
}
