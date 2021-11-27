global  _ft_strcmp

section .text
_ft_strcmp:
    mov rcx, 0
    jmp loop
loop:
    xor rbx, rbx
     xor rax, rax
   mov al, byte[rdi + rcx]
   mov bl, byte[rsi + rcx]
   cmp rax, rbx
       jg return2
       jl return1
   cmp al, 0
        je return
  inc rcx
    jmp loop
return:
    mov rax, 0
    ret
return1:
    mov rax, -1
    ret
return2:
    mov rax, 1
    ret