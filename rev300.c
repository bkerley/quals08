#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* fart;
	char* flat;
	void* count;
	void* map;
	FILE* prick;
	fart = strdup("asdf");
	flat = strdup("zdddasdfasdfzzzz");
	prick = fopen("reversing300.bin", "r");
	map = calloc(1,512);
	memset(map, 0x90, 512);
	fread(map + 16, 1, 57, prick);
	printf("\nit begins\nfart %p %s\nflat %p %s\n",fart, fart, flat, flat);
	
	printf("map at: %p\n",map);
	
	//fixup the address for 0x80002e:	lock cmpxchg %ebx,0x800048
	*(int*)(map+16+0x22) = (int)(map + 16 + 0x38);
	count = map + 4;
	__asm__("nop	\ncall	*%eax\n");
	
	printf("\nwell done\n");
	return 0;
}
