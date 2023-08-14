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
	char ch = 'a'
	char CH = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(ch);
		ch++;
	}
		putchar('\n');

		return (0);
}
