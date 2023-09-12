#include <stdio.h>
/**
 * main - Prints the size of various types on the computer
 * followed by a new line
 * Return : returns 0 for success
*/
int main(void)
{
	int();

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n" sizeof(long));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));

	return (0);
}
