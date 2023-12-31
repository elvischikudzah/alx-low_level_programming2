#include "main.h"

/**
* _isalpha - checks for alphabetic character
* @c: the character to check
*
* Description: This function checks if a character is an alphabetic character,
* either lowercase or uppercase.
*
* Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}

/**
* main - Entry point
*
* Description: Entry point of the program that tests the _isalpha function.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}

