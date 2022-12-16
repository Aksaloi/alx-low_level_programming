#include "main.h"
/**
 * print_square - prints a square.
 * @size:size of both width and length
 * Return:square made of '#'
 */
void print_square(int size)
{
	int c, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (b = 2; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
