#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: prints 1,2,3,4,5,6,7,8,9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
