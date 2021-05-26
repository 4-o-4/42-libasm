            global    _ft_strlen              ; tuttlem.github.io/2013/01/08/strlen-implementation-in-nasm.html

            section   .text
_ft_strlen:                                   ; rdi
            xor       rax, rax                ; (i = 0)
while:
            cmp       byte [rdi + rax], 0     ; compare - сравниваем текущий символ с нулём (str[i] == '\0')
            je        return
            inc       rax                     ; инкрементируем rax (i++)
            jmp       while
return:
            ret                               ; (return)
