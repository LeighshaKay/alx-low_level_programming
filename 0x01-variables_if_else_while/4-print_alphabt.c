#include <stdio.h>
/**
 * main -Entry menu
 *
 * Return: 0 always if successful
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
		continue;

		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
