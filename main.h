#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - data structure for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int printt_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list arguments, char *buffer, unsigned int ibuffer)
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buffer, unsigned int ibuffer);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unsnt(va_list arguments, char *buf, unsigned int ibuf);
int print_octa(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_revr(va_list arguments, char *buf, unsigned int ibuf);
int print_srot(va_list arguments, char *buf, unsigned int ibuf);
int prinlnint(va_list arguments, char *buf, unsigned int ibuf);
int prinluntt(va_list arguments, char *buf, unsigned int ibuf);
int prinlocta(va_list arguments, char *buf, unsigned int ibuf);
int prinlhex(va_list arguments, char *buf, unsigned int ibuf);
int printlupx(va_list arguments, char *buf, unsigned int ibuf);
int prinshint(va_list arguments, char *buf, unsigned int ibuf);
int prinshunt(va_list arguments, char *buf, unsigned int ibuf);
int prinhocta(va_list arguments, char *buf, unsigned int ibuf);
int prinhhexa(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int printpints(va_list arguments, char *buf, unsigned int ibuf);
int prinnocta(va_list arguments, char *buf, unsigned int ibuf);
int prinnhexa(va_list arguments, char *buf, unsigned int ibuf);
int prinnuphx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buffer, char s, unsigned int ibuffer);
int print_buf(char *buf, unsigned int nbuf);
char *fill_bin_arr(char *bin, long int int_in, int isneg, int limit);
char *fill_oct_arr(char *bin, char *oct);
char *fill_long_oct_arr(char *bin, char *oct);
char *fill_short_oct_arr(char *bin, char *oct);
char *fill_hex_arr(char *bin, char *hex, int isupper, int size);

#endif
