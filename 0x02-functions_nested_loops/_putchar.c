#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the chracter c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1.
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
