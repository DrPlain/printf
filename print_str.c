#include "main.h"

/**
 * print_str - A function that prints strings
 * @str: String to print
 * Return: Number of characters displayed
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

