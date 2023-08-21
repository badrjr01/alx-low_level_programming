#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: String parameter input
 *
 * Retrun: Lenght of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
