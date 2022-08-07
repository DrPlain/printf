#include "main.h"
#include <stdarg.h>

/**
 * _printf - A function that works like standard printf function
 * @format: String to print
 * @...: Other arguments
 * Return: Number of characters displayed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, displayed = 0;

	va_start(arg, format);

	while  (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			displayed++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(arg, int));
				displayed++, i++;
			}
			else if (format[i + 1] == 's')
			{
				displayed += print_str(va_arg(arg, char *));
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar(format[i]);
				displayed++, i++;
			}
		}
		i++;
	}
	va_end(arg);
	return (displayed);
}
