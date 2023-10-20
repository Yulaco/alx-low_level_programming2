#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
		putchar(lowercase);

	for (uppercase = 65; uppercase <= 90; uppercase++)
		putchar(uppercase);

	putchar('\n');

	return (0);

}
