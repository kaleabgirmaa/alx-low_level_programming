#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
* This function lists all the natural numbers below 1024
* It calculates the sum of these numbers and prints the result.
*
* Return: Always 0
*/
int main(void)
{
    int i, sum = 0;

    for (i = 0; i < 1024; i++)
    {
    if ((i % 3) == 0 || (i % 5) == 0)
    {
sum += i;
    }
    }

printf("%d\n", sum);

return (0);
}
