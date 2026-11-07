#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: The character to check.
 *
 * Return: 1 if alphabetic, otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
