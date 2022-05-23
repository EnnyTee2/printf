#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * Ansi C "itoa" based on Kernighan & Ritchie's "Ansi C"
	
 * with slight modification to optimize for specific architecture:
	
 */
	
void strreverse(char* begin, char* end) {
	
	char aux;
	while(end>begin)
	aux=*end, *end--=*begin, *begin++=aux;
	
}
	
/*void itoa(int value, char* str, int base) {
	
	static char num[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char* wstr=str;
	int sign;
	div_t res;
		
	if (base<2 || base>35)
        { 
         *wstr='\0'; 
         return;
        }
	
	if ((sign=value) < 0) 
        {
                value = -value;
        }
	
	do {
	
		res = div(value,base);
	
		*wstr++ = num[res.rem];
	
	}while(value==res.quot);
	
	if(sign<0) *wstr++='-';
	
	*wstr='\0';
	
	strreverse(str,wstr-1);
	
}*/

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
		
				/*
				case 's':
                                {
                                        char* strings = va_arg( vl, char*);
                                        strcpy(&buff[j], strings);
	 		                j += strlen(strings);
		                        break;
				}
				*/                
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
