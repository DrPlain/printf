#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

/**
 * struct Cspecs - structure defining format specifiers
 * and function to print them
 * @cs: Format type
 * @f: Function pointer
 */

typedef struct Cspecs
{
		char cs;
		void (*f)();
} cs_t;

void _putchar_c(char c);
void _putchar(va_list a);
void print_str(va_list a);
int _printf(const char *format, ...);

#endif
