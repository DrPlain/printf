#include "main.h"
#include <stdarg.h>

/**
 * _printf - A function that is similar to standard printf function
 *
 * @format: Character string
 *
 * @...: Other arguments
 *
 * Return: Returns the number of characters printed
 */

int _printf(const char * const format, ...)
{
	va_list arg;
	int i, k = 0, var, displayed = 0;
	char *str;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			displayed++;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(arg, int));
					displayed++;
					break;
				case 's':
					str = va_arg(arg, char *);
					displayed = displayed + print_str(str);
					break;
				case '%':
					_putchar('%');
					displayed++;
					break;
			}
		}
	}
	va_end(arg);
	return (displayed);
}
