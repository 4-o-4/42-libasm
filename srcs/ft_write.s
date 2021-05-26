            global    _ft_write
            extern    ___error

            section   .text
_ft_write:                                    ; rdi rsi rdx
            mov       rax, 0x02000004
            syscall
            jc        error
            ret
error:
            push      rax
            call      ___error
            pop       rcx
            mov       [rax], rcx
            mov       rax, -1
            ret
