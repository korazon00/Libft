	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 6
	.globl	_ft_putnbr              ## -- Begin function ft_putnbr
	.p2align	4, 0x90
_ft_putnbr:                             ## @ft_putnbr
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movslq	-4(%rbp), %rax
	cmpq	$-2147483648, %rax      ## imm = 0x80000000
	jne	LBB0_2
## %bb.1:
	movl	$1, %edi
	leaq	L_.str(%rip), %rsi
	movl	$11, %edx
	callq	_write
	jmp	LBB0_7
LBB0_2:
	cmpl	$0, -4(%rbp)
	jge	LBB0_4
## %bb.3:
	movl	$1, %edi
	leaq	L_.str.1(%rip), %rsi
	movl	$1, %edx
	callq	_write
	xorl	%ecx, %ecx
	subl	-4(%rbp), %ecx
	movl	%ecx, -4(%rbp)
LBB0_4:
	cmpl	$9, -4(%rbp)
	jle	LBB0_6
## %bb.5:
	movl	-4(%rbp), %eax
	cltd
	movl	$10, %ecx
	idivl	%ecx
	movl	%eax, %edi
	callq	_ft_putnbr
LBB0_6:
	movl	-4(%rbp), %eax
	cltd
	movl	$10, %ecx
	idivl	%ecx
	addl	$48, %edx
                                        ## kill: def $dl killed $dl killed $edx
	movb	%dl, -5(%rbp)
	movl	$1, %edi
	leaq	-5(%rbp), %rsi
	movl	$1, %edx
	callq	_write
LBB0_7:
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movl	$1234, %edi             ## imm = 0x4D2
	callq	_ft_putnbr
	xorl	%eax, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"-2147483648"

L_.str.1:                               ## @.str.1
	.asciz	"-"

.subsections_via_symbols
