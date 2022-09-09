#include <stdio.h>

/**
 * main - combination of single-digit numbers
 *
 * Description: program to print the
 * combination of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		if (num != 57)
		{
			putchar (',');
			putchar (' ');
		}
	}

	putchar ('\n');
	return (0);
}
