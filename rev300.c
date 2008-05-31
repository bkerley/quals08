#include <stdio.h>

int main() {
	printf("\nit begins\n");
	
	__asm__(
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"	calll	sub_16                \n"
	"	movl	%eax,%edi                   \n"
	"	xorl	%eax,%eax                   \n"
	"	orl	$0xffffffff, %ecx            \n"
	"	repne/scasb         \n"
	"	negl	%ecx                        \n"
	"	movl	%ecx,%edx                   \n"
	"	ret                              \n"
	"sub_16:	xorl	%eax,%eax                   \n"
	"	pushl	%ebx                      \n"
	"	movl	$0x00000001, %ebx            \n"
	"	lock/cmpxchgl	%ebx,0x00000038   \n"
	"	jne	0x00001f9e                  \n"
	"	popl	%ebx                        \n"
	"	ret                              \n"
	"	lock/movb	$0x00,0x00000038      \n"
	"	ret                              \n"
	"	addb	%al,(%eax)                  \n"
	"	addb	%al,(%eax)                  \n"
	"	addb	%al,(%eax)                  \n"

	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop \n"
	"nop"
	);
	
	printf("\nall done\n");
	return 0;
}