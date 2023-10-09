#include <stdio.h>

/**
* main - Entry point
* Description: Prints all possible combinations of two two-digit numbers.
* Numbers should range from 0 to 99, and each combination is separated by a comma and space.
* All numbers are printed with two digits, e.g., 1 is printed as 01.
* Combinations are printed in ascending order.
* 00 01 and 01 00 are considered the same combination of the numbers 0 and 1.
* Return: Always 0 (Success)
*/
int main(void)
{
int n1, n2;

for (n1 = 0; n1 < 100; n1++)
{
for (n2 = n1 + 1; n2 < 100; n2++)
{
putchar((n1 / 10) + '0');
putchar((n1 % 10) + '0');
putchar(' ');
putchar((n2 / 10) + '0');
putchar((n2 % 10) + '0');

if (n1 != 98 || n2 != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}

