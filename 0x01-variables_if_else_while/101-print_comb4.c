#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n1, n2, n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				if (n1 != n2 && n2 != n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 != '7' || n2 != '8' || n3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++;
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
