#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Function generates a random number and determines whether it is
 * positive, zero, or negative. It then prints the results.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d positive\n", n);
}
else if (n == 0)
{
printf("%d zero\n", n);
}
else
{
printf("%d negative\n", n);
}
return (0);
}
