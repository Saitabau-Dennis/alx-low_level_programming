#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	putchar(r);
	putchar('\n');
	return (0);
}


