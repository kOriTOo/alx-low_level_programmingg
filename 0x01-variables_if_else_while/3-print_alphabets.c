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
	char b;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	for (b = 'A'; b <= 'Z'; ++b)
		putchar(b);
	printf("\n");

	return (0);
}
