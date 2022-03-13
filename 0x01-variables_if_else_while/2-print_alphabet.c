#include <stdio.h>
/**
 * main - main block
 * Description - 'putchar' function for printing alphabet in lowercase.
 * Return: o
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
