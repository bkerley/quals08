#include <stdio.h>
#include <string.h>

int main() {
	char* fart;
	char* flat;
	int count;
	fart = strdup("asdf");
	flat = strdup("zdddasdfasdf");
	
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
	"	mov	$0x00000001, %ebx            \n"
	"here: \n"
	"	lock/cmpxchg	%ebx,	-44(%esp)   \n"
	"	jnz	here                  \n"
	"	pop	%ebx                        \n"
	"	ret                              \n"
	"	lock/movb	$0x00,	-44(%esp)      \n"
	"	ret                              \n"
	"	.byte	0,0,0,0,0,0                \n"
	"anus: \n"
	"	nop \n"
	);
	
	printf("\nwell done\n");
	return 0;
}