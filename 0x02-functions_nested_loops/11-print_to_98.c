#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line
 * @n: The starting number
 *
 * Description:
 * This function prints all natural numbers from n to 98, followed by a new line.
 * If n is greater than or equal to 98, it will count down.
 * If n is less than 98, it will count up.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
