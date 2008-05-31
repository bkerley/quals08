#include <stdio.h>
#include <string.h>

#define MMAP_HOME 0x00100420

int main() {
	char* fart;
	char* flat;
	int count;
	void* map;
	FILE* prick;
	fart = strdup("asdf");
	flat = strdup("zdddasdfasdfzzzz");
	// prick = fopen("prick.txt", "a+");
	// 	map = mmap(MMAP_HOME, 8, PROT_READ | PROT_WRITE, NULL, fdof(prick));
	// 	
	printf("\nit begins\nfart %p %s\nflat %p %s\n",fart, fart, flat, flat);
	
	__asm__(
	"dhoom: \n"
	"	nop \n"
	"	call poopie \n"
	"	jmp anus \n"
	"poopie: \n"
	"	call	sub_16                \n"
	"	mov	%eax,%edi                   \n"
	"	xor	%eax,%eax                   \n"
	"	or	$0xffffffff, %ecx            \n"
	"	repne/scasb         \n"
	"	neg	%ecx                        \n"
	"	mov	%ecx,%edx                   \n"
	"	ret \n"
	"sub_16: \n"
	"	xor	%eax,%eax                   \n"
	"	push	%ebx                      \n"
//	"	push	%eax	\n"
	"	mov	$0x00000001, %ebx            \n"
	"here: \n"
	"	lock/cmpxchg	%ebx,	-44(%esp)   \n"
	"	jne	here                  \n"
//	"	pop	%ebx	\n"
	"	pop	%ebx                        \n"
	"	ret                              \n"
	"	lock/movb	$0x00,	-44(%esp)      \n"
	"	ret                              \n"
	"	.byte	0,0,0,0,0,0                \n"
	"anus: \n"
	"	nop \n"
//	"	jmp dhoom\n"
	);
	
	printf("\nwell done\n");
	return 0;
}