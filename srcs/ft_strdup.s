            global    _ft_strdup
            extern    _ft_strlen
            extern    _malloc
            extern    _ft_strcpy

            section   .text
_ft_strdup:                                   ; rdi
            push      rdi
            call      _ft_strlen
            call      _malloc
            cmp       rax, 0
            jz        return
            mov       rdi, rax
            pop       rsi
            call      _ft_strcpy
return:
            ret
