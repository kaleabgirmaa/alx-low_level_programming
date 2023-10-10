#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description:
 * This function prints the sign of a number.
 * If the number is greater than 0, it prints '+' and returns 1.
 * If the number is 0, it prints '0' and returns 0.
 * If the number is less than 0, it prints '-' and returns -1.
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
