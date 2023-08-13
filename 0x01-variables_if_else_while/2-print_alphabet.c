#include <stdio.h>

/**
 * main - Entry poit
 *
 * Description: print all alphabet letters
 *
 * Return: Alway 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= "z")
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
