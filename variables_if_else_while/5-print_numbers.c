#include <stdio.h>

/**
 * main - prints the digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
