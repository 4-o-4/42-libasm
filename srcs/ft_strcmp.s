            global    _ft_strcmp

            section   .text
_ft_strcmp:                                   ; rdi rsi
            xor       rax, rax
            xor       r9, r9
            xor       rcx, rcx
s1:
            mov       al, [rdi + rcx]
            mov       r9b, [rsi + rcx]
            cmp       al, 0
            jne       s2
            jmp       return
s2:
            cmp       r9b, 0
            je        return
            cmp       rax, r9
            jne       return
            inc       rcx
            jmp       s1
return:
            sub       rax, r9
            ret
