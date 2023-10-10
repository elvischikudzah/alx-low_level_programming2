#include "main.h"
/**
* main - Entry point
*
* Description: Entry point of the program that tests the _islower function.
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
