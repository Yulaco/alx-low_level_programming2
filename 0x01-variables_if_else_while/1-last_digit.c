#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	num = n % 10;

	if (num > 5)
		printf("The last digit of %d is %d and is greater than 5", n, num);
	if (num == 0)
		printf("The last digit of %d is %d and is 0", n, num);
	if (num < 6 && num != 0)
		printf("The last digit of %d is %d
			and less than 6 and not 0", n, num);

	printf("\n");

	return (0);
}

