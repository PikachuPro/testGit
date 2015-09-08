#include <stdio.h>

int bitcount (unsigned);

int main (void)
{
	int c = 0xf;
	printf ("%d\n??)\n", bitcount (c));
	return 0;
}

int bitcount (unsigned x)
{
	int b;
	for (b = 0; x != 0; x &= (x - 1))
		b++;
	return b;
}
