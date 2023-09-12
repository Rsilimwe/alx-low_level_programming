#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
int main(void)
{
    // Calling _putchar to print each character of "_putchar" and a newline
    _putchar('_');  // Print '_'
    _putchar('p');  // Print 'p'
    _putchar('u');  // Print 'u'
    _putchar('t');  // Print 't'
    _putchar('c');  // Print 'c'
    _putchar('h');  // Print 'h'
    _putchar('a');  // Print 'a'
    _putchar('r');  // Print 'r'
    _putchar('\n'); // Print a newline character '\n'

    return 0; // Return 0 to indicate successful execution
}

