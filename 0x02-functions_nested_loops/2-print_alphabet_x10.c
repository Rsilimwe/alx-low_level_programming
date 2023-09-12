#include "main.h"

/**
 * print_alphabet_x10 -  this prints the alphabet in lowercase ten times.
 * Return: return 0
 */
void print_alphabet_x10(void)
{

char letter;
int i;
for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
