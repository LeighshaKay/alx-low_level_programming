#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always if successful
 */

int main(void)
{
	char alphabet;

	for (alphabet = 122 ; alphabet >= 97; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
