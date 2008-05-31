#include <stdio.h>

int main() {
	printf("\nit begins\n");
	
	__asm__(
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
	"	lock/cmpxchgl	%ebx,	sphincter   \n"
	"	jnz	here                  \n"
	"	popl	%ebx                        \n"
	"	ret                              \n"
	"	lock/movb	$0x00,	sphincter      \n"
	"	ret                              \n"
	"	.byte	0,0,0,0,0                  \n"
	"sphincter: \n"
	"	.byte	0\n"
	"anus: \n"
	"	nop \n"
	);
	
	printf("\nwell done\n");
	return 0;
}