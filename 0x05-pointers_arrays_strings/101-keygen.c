#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates random valid passwords for the program
 *
 *Return: Always 0 if successful
 */
int main(void)
{
	char a[100];
	int x, y, z;

	y = 0;
	z = 0;
	srand(time(NULL));
	while (y < 2645)
	{
		x = rand() % 122;
		if (x > 32)
		{
			a[z++] = x;
			y += x;
		}
	}
	a[z++] = (2772 - y);
	a[z] = '\0';
	printf("%s", a);
	return (0);
}
