#include <unistd.h>

/**
 * _putchar - whrites characters c to stdout
 * @c: char to be printed
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
