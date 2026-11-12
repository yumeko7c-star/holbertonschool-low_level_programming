#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		capitalize = (str[i] == ' ' || str[i] == '\t' ||
			      str[i] == '\n' || str[i] == ',' ||
			      str[i] == ';' || str[i] == '.' ||
			      str[i] == '!' || str[i] == '?' ||
			      str[i] == '"' || str[i] == '(' ||
			      str[i] == ')' || str[i] == '{' ||
			      str[i] == '}');
		i++;
	}
	return (str);
}
