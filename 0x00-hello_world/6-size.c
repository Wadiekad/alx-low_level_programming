#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (success)
 */
int main(void)
{
	char;
	int;
	long int:
	long long int;
	float;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %zu bytes(s)\n", (unsigned long) sizeof(long int));
printf("Size of long long int: %zu bytes(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float: %zu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
