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

	for (num = '0'; num <= '9'; num++)
	{
		putchar(' ');
		putchar(num);
		putchar(',');
	}
i
	return (0);
}
