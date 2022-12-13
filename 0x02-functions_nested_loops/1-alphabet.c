#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
		_putchar(le);
	_putchar('\n');
}
