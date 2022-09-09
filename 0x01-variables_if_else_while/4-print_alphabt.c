#include <stdio.h>

/**
 * main - print letters without e and q
 *
 * Return: 0
 */

int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		if (lett != 'e' && lett != 'q')
	{
		putchar (lett);
	}

	}

	putchar ('\n');
}
