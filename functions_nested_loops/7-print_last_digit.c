#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of a number
 * @n: The number to check.
 *
 * Return: The last digit of n as a positive value.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
