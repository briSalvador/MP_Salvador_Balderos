section .data
msg db "Hello World", 13,10,0
conv dq 255.0
ans dq 0

section .text
bits 64
default rel

extern printf

global testFun
global imgCvtGrayIntToDouble

testFun:
    sub rsp, 8*5 ; caller
    lea rcx, [msg]
    call printf
    add rsp, 8*5
    ret

imgCvtGrayIntToDouble:
    cvtsi2sd xmm1, rcx
    divsd xmm1, [conv]
    movsd xmm0, xmm1
    ret
