#include <stdio.h>

int main() {
	int count;
	printf("\nit begins\n");
	
	__asm__(
	"	lea	fart,%eax	\n"
	"	lea flat,%ebx	\n"
	"	call poopie \n"
	"	jmp anus \n"
	"poopie: \n"
	"	call	sub_16                \n"
	"	movl	%eax,%edi                   \n"
	"	xorl	%eax,%eax                   \n"
	"	orl	$0xffffffff, %ecx            \n"
	"	repne/scasb         \n"
	"	negl	%ecx                        \n"
	"	movl	%ecx,%edx                   \n"
	"	ret \n"
	"sub_16: \n"
	"	xorl	%eax,%eax                   \n"
	"	pushl	%ebx                      \n"
	"	movl	$0x00000001, %ebx            \n"
	"here: \n"
	"	lock/cmpxchgl	%ebx,	-44(%esp)   \n"
	"	jnz	here                  \n"
	"	popl	%ebx                        \n"
	"	ret                              \n"
	"	lock/movb	$0x00,	-44(%esp)      \n"
	"	ret                              \n"
	"	.byte	0,0,0,0,0                  \n"
	"sphincter: \n"
	"	.quad	0\n"
	"fart: \n"
	"	.asciz \"fartknocker\" \n"
	"flat: \n"
	"	.asciz \"fartface\" \n"
	"anus: \n"
	"	nop \n"
	);
	
	printf("\nwell done\n");
	return 0;
}