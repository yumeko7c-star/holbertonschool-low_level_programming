#include "main.h"

/**
 * _strncat - appends at most n bytes from src to dest
 * @dest: the destination string
 * @src: the string to append
 * @n: maximum number of bytes to append
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}