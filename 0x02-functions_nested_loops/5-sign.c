#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check the sign of
 *
 * Description:
 * This function prints the sign of a number (+, 0, or -).
 * If the number is greater than 0, it prints "+", returns 1.
 * If the number is 0, it prints "0", returns 0.
 * If the number is less than 0, it prints "-", returns -1.
 *
 * Return: The sign of the number
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
}
