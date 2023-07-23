#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the last number
 *
 * Return: Always 
 */
int main(void)
{
	int n;
	int lstn = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d is %d and is greater than 5", n, lstn);
	}
	if (n < 5)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, lstn);
	}
	if (n == 0)
	{
		printf("%d is %d and is 0\n", n, lstn);
	}
	return (0);
}
