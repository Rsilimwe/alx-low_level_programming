#include "main.h"

/**
 * add - Adds two integers.
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of a and b
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 10;
int num2 = 20;
int sum;
sum = add(num1, num2);
printf("The sum of %d and %d is: %d\n", num1, num2, sum);
return (0);
}
