#include <stdio.h>
/**
  *main - Writing a C line that prints size of computers,
  * Return: 0
  *
  */
int main(void)
{
		char a;
		int b;
		long int c;
		long long int d;
		float y;

	printf("size of a char: %lu byte(s)\n", (unsigned)sizeof(a));
	printf("size of a int: %lu byte(s)\n", (unsigned)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned)sizeof(y));
	return (0);
}
