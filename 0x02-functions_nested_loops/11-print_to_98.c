#include <stdio.h>
#include "main.h"

/**
 * print_to_10 - prints all natural numbers from n to 10,
 * followed by a new line
 * @n: print from this number
 */
void print_to_10(int n)
{
	int i, j;

	if (n <= 10)
	{
		for (i = n; i <= 10; i++)
		{
			if (i != 10)
				printf("%d, ", i);
			else if (i == 10)
				printf("%d\n", i);
		}
	} else if (n >= 10)
	{
		for (j = n; j >= 10; j--)
		{
			if (j != 10)
				printf("%d, ", j);
			else if (j == 10)
				printf("%d\n", j);
		}
	}
}
