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
	char *str;

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
				default:
					_putchar(format[i]);
					displayed++;
					break;
			}
		}
		i++;
	}
	va_end(arg);
	return (displayed);
}
