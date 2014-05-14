#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
	int c = (~0u) >> 1;
	int b = (~0) >> 1;
	printf("c = %d\n", c);
	printf("b = %d\n", b);
}


