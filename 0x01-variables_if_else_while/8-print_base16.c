#include <stdio.h>

/**
 * main - prints numbers and alphabets b 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	char z;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (z = 'a'; z <= 'f'; z++)
	{
		putchar(z);
	}
		putchar('\n');
	return (0);
}
