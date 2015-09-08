/* enumtest.c -- test enum plaus */
#include <stdio.h>

typedef enum _Queen {Jack = 2, King, Baron} Queen;

int main (void)
{
	Queen queen = Jack;
	printf ("%d\t", queen);
	printf ("%d\n", queen + 20);
	return 0;
}
