#include "libasm.h"

int main(void)
{
    // ft_strlen
    printf("+---------------------------------------+\n");
    printf("   strlen: %zu\n", strlen("0123456789"));
    printf("ft_strlen: %zu\n", ft_strlen("0123456789"));

    printf("   strlen: %zu\n", strlen(""));
    printf("ft_strlen: %zu\n", ft_strlen(""));


    // ft_strcpy
    printf("\n+---------------------------------------+\n");
    char cpy1[1024];
    char cpy2[1024];
    printf("   strcpy: %s\n", strcpy(cpy1, "Hello World"));
    printf("ft_strcpy: %s\n", ft_strcpy(cpy2, "Hello World"));


    // ft_strcmp
    printf("\n+---------------------------------------+\n");
    char *cmp1 = "a";
    char *cmp2 = "l";
    printf("   strcmp: %d | ", strcmp(cmp1, cmp2));
    strcmp(cmp1, cmp2) == 0 ? puts("Строки идентичны") : puts("Строки отличаются");
    printf("ft_strcmp: %d | ", ft_strcmp(cmp1, cmp2));
    ft_strcmp(cmp1, cmp2) == 0 ? puts("Строки идентичны") : puts("Строки отличаются");

    char *cmp3 = "123";
    char *cmp4 = "123";
    printf("   strcmp: %d | ", strcmp(cmp3, cmp4));
    strcmp(cmp3, cmp4) == 0 ? puts("Строки идентичны") : puts("Строки отличаются");
    printf("ft_strcmp: %d | ", ft_strcmp(cmp3, cmp4));
    ft_strcmp(cmp3, cmp4) == 0 ? puts("Строки идентичны") : puts("Строки отличаются");

    printf("   strcmp: %d | ", strcmp("", ""));
    strcmp(cmp3, cmp4) == 0 ? puts("Строки идентичны") : puts("Строки отличаются");
    printf("ft_strcmp: %d | ", ft_strcmp("", ""));
    ft_strcmp(cmp3, cmp4) == 0 ? puts("Строки идентичны") : puts("Строки отличаются");


    // ft_write
    printf("\n+---------------------------------------+\n");
    char *str = "Hello World";
    write(1, "   write: ", strlen("   write: "));
    printf(" | %zu\n", write(1, str, strlen(str)));
    printf("   errno %d\n", errno);
    write(1, "ft_write: ", strlen("ft_write: "));
    printf(" | %zu\n", ft_write(1, str, strlen(str)));
    printf("   errno %d\n", errno);


    // ft_read
    printf("\n+---------------------------------------+\n");
    char buf[1024];
    printf("   read = %zd\n", read(0, buf, 1024));
    printf("   errno %d\n", errno);
    printf("ft_read = %zd\n", ft_read(0 , buf, 1024));
    printf("   errno %d\n", errno);


    // ft_strdup
    printf("\n+---------------------------------------+\n");
    char *dup1;
    char *dup2;
    dup1 = strdup("Hello World");
    printf("   strdup: %s\n", dup1);
    dup2 = ft_strdup("Hello World");
    printf("ft_strdup: %s\n", dup2);

    dup1 = strdup("");
    printf("   strdup: %s\n", dup1);
    dup2 = ft_strdup("");
    printf("ft_strdup: %s\n", dup2);

    return (0);
}
