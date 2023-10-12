#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f, s;

	f = '0';

	while (f <= '9')
	{
		s = '0';

		while (s <= '9')
			if (f != s)
			{
				putchar(f + '0');
				putchar(s + '0');
				putchar(',');
				putchar(' ');
			}
		s++;
	}
	f++;
	putchar('\n');

	return (0);
}
