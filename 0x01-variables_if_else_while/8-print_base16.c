#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the entire alphabit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; ++i)
	{
		putchar(i + '0');
	}

	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
