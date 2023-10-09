#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints the alphabet in lowercase, followed by uppercase,
* and then a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
char lower = 'a';
char upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower++;
}

while (upper <= 'Z')
{
putchar(upper);
upper++;
}

putchar('\n');

return (0);
}

