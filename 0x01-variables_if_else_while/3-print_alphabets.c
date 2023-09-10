#include <stdio.h>

/**
 * main - lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char y;
	char o;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	for (o = 'A'; o <= 'Z'; o++)
	{
		putchar(o);
	}
		putchar('\n');
	return (0);
}
