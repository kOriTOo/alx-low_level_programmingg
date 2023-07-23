#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ln = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d is %d and is greater than 5\n", n, ln);
	}
	if (n < 6)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, ln);
	}
	if (n == 0)
	{
		printf("%d is %d and is 0\n", n, ln);
	}
	return (0);
}
