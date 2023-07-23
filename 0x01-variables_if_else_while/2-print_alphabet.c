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

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	printf("\n");

	return (0);
}
