#include "libft.h"

int main ()
{
    char src[] = "Hello, world!";
    char dest[50];
    ft_strlcpy(dest ,"XXXXXXXXXXXXX", 18);
printf("Destination: %s\n", dest);
    void *result = ft_memcpy(dest, src, sizeof(src));
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Returned pointer points to: %s\n", (char *)result);
    return 0;
}
