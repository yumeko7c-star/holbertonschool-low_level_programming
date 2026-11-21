#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to copy from s2
 *
 * Return: pointer to the new string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1 = 0, len2 = 0, copy_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	copy_len = (len2 < n) ? len2 : n;
	result = malloc(len1 + copy_len + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < copy_len; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';

	return (result);
}
