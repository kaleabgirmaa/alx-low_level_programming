#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Description:
 * This function computes the absolute value of an integer.
 * If the integer is positive or zero, it returns the integer itself.
 * If the integer is negative, it returns the negation of the integer.
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
