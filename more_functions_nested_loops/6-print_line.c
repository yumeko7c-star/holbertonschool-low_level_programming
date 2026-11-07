#include "main.h"

/**
 * print_line - draws a line using underscores
 * @n: The number of underscores to print.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
