#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 always if successful
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	if (number == 57)
	{
		break;
	}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
