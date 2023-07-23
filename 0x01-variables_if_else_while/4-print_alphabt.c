#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the entire alphabit without 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	printf("\n");

	return (0);
}
