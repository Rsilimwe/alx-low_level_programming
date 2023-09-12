#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

