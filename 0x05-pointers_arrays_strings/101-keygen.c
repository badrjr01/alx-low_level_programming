#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-cracktime
 * Return: zero
*/

int main(void)
{
	int num;
	char c;

	srand(time(null));
	while (sum <= 2645)
	{
		c = rand() & 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
