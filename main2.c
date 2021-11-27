#include "libasm.h"

int     main(void)
{
    printf("===========ft_strdup===============\n");
    char	*str1;
    char	*str2;
    char    *str = "abcdefg";
    str1 = ft_strdup(str);
    str2 = strdup(str);
    printf("ft_strdup : %s\n", str1);
    printf("   strdup : %s\n", str2);
    printf("===================================\n\n");
    return (0);
}