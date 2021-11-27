global  _ft_strlen

section .text
_ft_strlen:
    mov rcx, 0
    jmp loop
loop:
    cmp byte[rdi + rcx], 0
    je  return
    inc rcx
    jmp loop

return:
mov rax, rcx
ret