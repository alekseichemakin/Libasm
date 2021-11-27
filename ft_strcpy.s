global  _ft_strcpy

section .text
_ft_strcpy:
    jmp loop

loop:
        cmp byte[rsi], 0
        je  return
        mov al, byte[rsi]
        mov byte[rdi], al
        inc rsi
        inc rdi
        jmp loop
return:
    mov al, 0
    mov byte[rdi], al
    mov rax, rdi
    ret