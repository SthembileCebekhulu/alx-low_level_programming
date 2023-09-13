#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: 0 for success
 *
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	putchar(x);

	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
