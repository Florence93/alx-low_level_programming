#include <stdio.h>

/**
 * main - program to print lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	char letr;

	for (letr = 'a'; letr <= 'z'; letr++)
	{
		putchar(letr);
	}
	for (letr = 'A'; letr <= 'Z'; letr++)
	{
		putchar(letr);
	}
	putchar('\n');

	return (0);
}
