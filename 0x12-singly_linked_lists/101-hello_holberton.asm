section .data
    message db "Hello, Holberton", 0x0a, 0

section .text
    global main

    extern printf

main:
    sub rsp, 8   ; align stack to 16 bytes
    mov rdi, message
    xor eax, eax
    call printf
    add rsp, 8   ; restore stack alignment
    xor eax, eax
    ret
