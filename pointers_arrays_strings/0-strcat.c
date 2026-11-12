#include "main.h"
/**
 * _strcat - appends src to the end of dest
 * @dest: the destination string
 * @src: the string to append
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
