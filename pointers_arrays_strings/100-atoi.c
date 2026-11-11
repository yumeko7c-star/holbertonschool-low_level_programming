#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int value;
	int digit;
	int limit;
	int multmin;

	i = 0;
	sign = 1;
	value = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	if (s[i] == '\0')
		return (0);

	if (sign < 0)
		limit = INT_MIN;
	else
		limit = -INT_MAX;

	multmin = limit / 10;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (value < multmin)
			return (sign < 0 ? INT_MIN : INT_MAX);

		value = value * 10;

		if (value < limit + digit)
			return (sign < 0 ? INT_MIN : INT_MAX);

		value = value - digit;
		i++;
	}

	if (sign < 0)
		return (value);

	return (-value);
}