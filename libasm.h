#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>

char        *ft_strcpy(char * dst, const char *src);
char        *ft_strdup(const char *s1);

int         ft_strcmp(const char *s1, const char *s2);

size_t      ft_strlen(const char *s);

ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);

#endif
