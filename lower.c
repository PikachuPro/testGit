/* lower.c -- lower function. */
#include <stdio.h>

int lower (int c)
{
	return (c >= 'A' && c <= 'Z') ? 'a' + (c - 'A') : c;
}

int main (void)
{
	int c;
	while ((c = getchar ()) != EOF)
	{
		printf ("%c", lower (c));
	}
	return 0;
}
