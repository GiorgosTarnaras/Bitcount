#include <stdio.h>

int bitcount(unsigned x);

int main(int argc, char const *argv[])
{
	int ex = 3;/*00000011*/
	int ex2 = 1;/*00000001*/
	printf("%d\n%d\n", bitcount(ex), bitcount(ex2));
	return 0;
}

int bitcount(unsigned x)
{
	int b;
	for(b = 0; x != 0; x &= (x - 1))
		b++;
	return b;
}