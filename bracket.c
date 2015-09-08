/* bracket.c -- bracket marray */
#include <stdio.h>

int main (void)
{
	char ch;
	int brackets_l = 0;
	int brackets_r = 0;

	while ((ch = getchar ()) && ch != EOF)
	{
		if (ch == '{') brackets_l++;
		if (ch == '}') brackets_r++;
	}
	printf ("%s\n", (brackets_l == brackets_r) ? "Marray" : "Not marray");
	return 0;
}
