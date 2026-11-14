#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: allowed characters
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (s[count] != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		count++;
	}

	return (count);
}
