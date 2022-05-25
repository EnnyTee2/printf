#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/** 
 * struct defin - defines the operation
 * @tr: argument
 * @func: function
 */

typedef struct defin
{
        char *tr;
        int (*func)(va_list);
} defin_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arr_list);
int (*get_funct(char s))(va_list arr_list);
int print_str(va_list arr_list);
int print_dec(va_list arr_list);
int print_int(va_list arr_list);
int print_bin(va_list bin_list);
int print_uns(va_list arr_list);
int print_oct(va_list arr_list);
int print_hex(va_list arr_list);
int print_X(va_list arr_list);

#endif
