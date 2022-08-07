#include "main.h"

/**
 * print_str - this function prints a stirng
 *
 * @str: the name of string to print
 *
 * Return: number of character Displayed
 */

int print_str(char *str)
{
	int i = 0;
	int displayed = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		displayed++;
	}
	return (displayed);
}
