#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char reverse_lower;

	for (reverse_lower = 'z'; reverse_lower >= 'a'; reverse_lower--)
		putchar(reverse_lower);

	putchar('\n');
	return (0);
}
