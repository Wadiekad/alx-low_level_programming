#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of long int: %zu bytes(s)\n", sizeof(long int));
printf("Size of long long int: %zu bytes(s)\n", sizeof(long long int));
printf("Size of float: %zu bytes(s)\n", sizeof(float));
return (0);
}
