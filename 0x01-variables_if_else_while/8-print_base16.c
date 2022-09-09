#include <stdio.h>

/**
 * main - print numbers in base 16
 *
 * Description: print all the numbers in
 * base of 16
 *
 * Return: 0
 */

int main(void)
{
	char val;

	for (val = '0'; val <= '9'; val++)
	{
		putchar(val);
	}

	for (val = 'a'; val <= 'f'; val++)
	{
		putchar(val);
	}

	putchar('\n');

	return (0);
}
