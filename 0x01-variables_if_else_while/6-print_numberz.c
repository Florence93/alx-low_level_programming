#include <stdio.h>

/**
 * main - print number from base 10
 *
 * Decription: print number from base 10
 * using putchar only
 *
 * Return: 0
 */

int main(void)
{
	int numm;

	for (numm = 0; numm < 10; numm++)
		putchar((numm % 10) + '0');

	putchar('\n');

	return (0);
}
