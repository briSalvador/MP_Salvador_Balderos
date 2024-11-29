section .text
bits 64
Default rel

global testFun

testFun:
    mov al, byte [rcx]
    inc al
    mov byte [rcx], al
    ret
