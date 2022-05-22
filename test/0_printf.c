#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char* itoa(int value, char* result, int base) {
        // check that the base if valid
        if (base < 2 || base > 36) { *result = '\0'; return result; }

        char* ptr = result, *ptr1 = result, tmp_char;
        int tmp_value;

        do 
        {
                tmp_value = value;
                value /= base;
                *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
        } while ( value );

        // Apply negative sign
        if (tmp_value < 0) 
                
                *ptr++ = '-';
        }
        *ptr-- = '\0';
        while(ptr1 < ptr) {
                tmp_char = *ptr;
                *ptr--= *ptr1;
                *ptr1++ = tmp_char;
        }
        return result;
        }

int _printf(const char *format, ...)
{
        va_list vl;
	int i = 0, j=0;
	char buff[100]={0}, tmp[20];
	va_start( vl, format ); 
	while (format && format[i])
        {
                if(format[i] == '%')
		{
                        i++;
 		        switch (format[i]) 
 		        {
                                case 'c': 
	 		        {
	 		                buff[j] = (char)va_arg( vl, int );
	 		                j++;
	 		                break;
	 		        }
	 		        case 'd': 
	 		        {
	 		                itoa(va_arg( vl, int ), tmp, 10);
	 		                strcpy(&buff[j], tmp);
	 		                j += strlen(tmp);
		                        break;
		                }
                                case 's':
                                {
                                        char strings[] = (char[])va_arg( vl, char[]);
                                        strcpy(&buff[j], strings);
	 		                j += strlen(strings);
		                        break;
				}                
                                case 'x': 
		                {
		                        itoa(va_arg( vl, int ), tmp, 16);
		                        strcpy(&buff[j], tmp);
		                        j += strlen(tmp);
		                        break;
		                }
        	        }
     	        }
                
     	        else 
	        {
	       	        buff[j] =format[i];
	       	        j++;
	        }
	        i++;
        }
    fwrite(buff, j, 1, stdout); 
    va_end(vl);
    return j;
 }
