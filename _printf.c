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

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int displayed;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		_putchar(format[i]);
		displayed += 1;
		i++;
	}

	va_end(arg);
	return (displayed);
}
