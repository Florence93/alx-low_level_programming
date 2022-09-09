#include <stdio.h>

/**
 * main - print alphabet in reverse order
 *
 * Description: print the alphabets in reverse
 * chronological order
 *
 * Return: 0
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev <= 'a'; rev--)
		putchar(rev);

	putchar('\n');

	return (0);
}
