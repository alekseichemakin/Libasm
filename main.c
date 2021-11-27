#include "libasm.h"

int     main()
{
   char *str1;
   char *str2;

    printf("\n===========ft_strlen===============\n");
    str1 = "1234567";
    str2 = "123\0 456789qwertyui";
    printf("ft_strlen : str1 - %zu, str2 - %zu \n   strlen : str1 - %lu, str2 - %lu \n", ft_strlen(str1), ft_strlen(str2), strlen(str1), strlen(str2));
    printf("===================================\n\n");

    printf("===========ft_strcpy===============\n");
    char str3[1024] = "Hello, world!";
    char str4[1024] = "";
    printf("str1: %s -- str2: %s\n", str3, str4);
    ft_strcpy(str4, str3);
    printf("ft_strcpy : str1: %s -- str2: %s\n", str3, str4);
    strcpy(str4, str3);
    printf("   strcpy : str1: %s -- str2: %s\n", str3, str4);
    printf("===================================\n\n");

    printf("===========ft_strcmp===============\n");
    str1 = "123";
    str2 = "123";
    printf("ft_strcmp : str1: %s -- str2: %s == %d\n", str3, str4, ft_strcmp(str1, str2));
    printf("   strcmp : str1: %s -- str2: %s == %d\n", str3, str4, strcmp(str1, str2));
    str1 = "123 45";
    str2 = "123";
    printf("ft_strcmp : str1: %s -- str2: %s == %d\n", str3, str4, ft_strcmp(str1, str2));
    printf("   strcmp : str1: %s -- str2: %s == %d\n", str3, str4, strcmp(str1, str2));
    str1 = "123";
    str2 = "123qwe";
    printf("ft_strcmp : str1: %s -- str2: %s == %d\n", str3, str4, ft_strcmp(str1, str2));
    printf("   strcmp : str1: %s -- str2: %s == %d\n", str3, str4, strcmp(str1, str2));
    printf("===================================\n\n");

    printf("===========ft_write================\n");
    write(1, "ft_write: ", 10);
    str1 = "Hello, world\n";
    ft_write(1, str1, 13);
    write(1, "   write: ", 10);
    write(1, str1, 13);
    printf("===================================\n\n");

    printf("===========ft_read=================\n");
    void *buf = malloc(13);
    int fd = open("./txt.txt", O_RDONLY);
    ft_read(fd, buf, 13);
    printf("ft_read : %s\n", buf);
    read(fd, buf, 13);
    printf("   read : %s\n", buf);
    free(buf);
    printf("===================================\n\n");
    return 0;
}