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
		s = f + 1;

		while (s <= '9')
		{

			if (f != s)
			{
				putchar(f);
				putchar(s);
				if (f != '8' || s != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		s++;
		}

	f++;
	}
	putchar('\n');

	return (0);
}
