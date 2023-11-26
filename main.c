#include "libft.h"

int main ()
{
	char s[] = "hello world";
	char d[10];
	size_t f = ft_strlcpy(s,s,sizeof(s));
	printf("%lu\n%s",f,d);
}
