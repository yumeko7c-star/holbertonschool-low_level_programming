#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int repetition;
	int number;

	for (repetition = 0; repetition < 10; repetition++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
			    _putchar('0' + number / 10);
			}
			_putchar('0' + number % 10);
		}
		_putchar('\n');
	}
}
