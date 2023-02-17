#include <stdio.h>
/**
 * main - Entry point 
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0 (success)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
