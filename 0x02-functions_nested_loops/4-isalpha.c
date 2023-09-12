#include "main.h"

/**
 *_isalpha - Checks for alphabetic character.
 * @d: The character to be checked
 *
 * Return: 1 if d is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int d)
{
if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
return (1);
else
return (0);
}
