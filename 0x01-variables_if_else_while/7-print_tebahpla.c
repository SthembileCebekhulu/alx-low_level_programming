#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 for success
 *
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');

	return (0);
}
