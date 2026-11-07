#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle
 * @size: The height of the triangle.
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (space = 0; space < size - row - 1; space++)
		{
			_putchar(' ');
		}
		for (hash = 0; hash <= row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
