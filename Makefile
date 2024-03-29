NAME = libasm.a

SRCS = ./srcs/ft_read.s \
       ./srcs/ft_strcmp.s \
       ./srcs/ft_strcpy.s \
       ./srcs/ft_strdup.s \
       ./srcs/ft_strlen.s \
       ./srcs/ft_write.s

NASM = nasm

NASM_FLAG = -f macho64

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME): $(OBJS)
    $(AR) $(NAME) $?
    @ranlib $(NAME)
    @$(CC) $(CFLAGS) main.c -L. -lasm $(NAME) -o test

%.o: %.s
    $(NASM) $(NASM_FLAG) $< -o $@

clean:
    @rm -f $(OBJS)

fclean: clean
    @rm -f $(NAME)
    @rm -f ./test

re: fclean all
