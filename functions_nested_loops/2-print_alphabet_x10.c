#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet ten times
 *
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int repetition;
	char letter;

	for (repetition = 0; repetition < 10; repetition++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
