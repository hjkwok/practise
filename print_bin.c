#include <stdio.h>
#include <stdlib.h>
#include "common.h"

void main(int argc, char *argv[])
{
	int num = 1000;
	unsigned char r;
	unsigned char c = 'b';
	int i = 0;
	for(i = sizeof(int) * 8 - 1; i >= 0; --i){
		printf("%d", num >> i & 0x1);
	}
	puts("");
	r = BYTE_ORDER_SWAP(c);
	printf("before %x, after %x", c, r);


}


