            global    _ft_read
            extern    ___error

            section   .text
_ft_read:                                     ; rdi rsi rdx
            mov       rax, 0x02000003
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
