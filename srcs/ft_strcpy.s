            global    _ft_strcpy

            section   .text
_ft_strcpy:                                   ; rdi rsi
            xor       rcx, rcx
while:
            mov       r9b, byte [rsi + rcx]
            mov       byte [rdi + rcx], r9b
            cmp       r9b, 0
            je        return
            inc       rcx
            jmp       while
return:
            mov       rax, rdi
            ret
