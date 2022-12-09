#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
README.md int n;

README.md srand(time(0));
README.md n = rand() - RAND_MAX / 2;
README.md if (n < 0)
README.md {
README.md README.md printf("%d is negative\n", n);
README.md } else if (n == 0)
README.md {
README.md README.md printf("%d is zero\n", n);
README.md } else
README.md {
README.md README.md printf("%d is positive\n", n);
README.md }
README.md return (0);
}

