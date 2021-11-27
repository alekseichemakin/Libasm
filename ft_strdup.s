extern ___error
extern  _malloc
extern _ft_strlen
extern _ft_strcpy
global  _ft_strdup

_ft_strdup:
    mov r15, rdi
    call _ft_strlen
    inc rax
    mov rdi, rax
    push rdi
    call _malloc
    pop rdi
    cmp rax, 0
    je error
    mov rsi, rax
    mov rdi, r15
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
    mov rax, rdi
    ret

error:
     mov r15, rax
        push -1
        call ___error
        mov qword [rax], r15
        pop rax
        ret