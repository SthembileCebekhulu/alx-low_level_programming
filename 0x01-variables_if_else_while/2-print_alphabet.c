#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 for success
 *
*/
int main(void)
{
	char alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
		putchar('\n');
		return (0);
}
