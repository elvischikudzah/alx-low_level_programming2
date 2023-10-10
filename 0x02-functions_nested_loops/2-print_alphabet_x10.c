#include <unistd.h>

/**
* main - Entry point
*
* Description: Prints "_putchar" followed by a new line
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
char letter = 'a';
int i;

for (i = 0; i < 10; i++)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
letter = 'a';
_putchar('\n');
}
}
