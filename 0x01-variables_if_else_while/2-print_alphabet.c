#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 97; lower <= 122; lower++)
		putchar(lower);

	putchar ('\n');

	return (0);
}

