#include <unistd>

/**
 * _putchar - this prints the data in stdout
 * @c: the argument to be displayed
 *
 * Return: 1 always successful
 * unless not successful, return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
