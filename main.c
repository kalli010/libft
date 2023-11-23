#include "libft.h"

void del (void *s)
{
	s = NULL; 
}

void *f (void *s)
{
	int p = 5;
	s = &p;
}

int main ()
{	
	char a[] = "hello world";
	char l[] = "world";
	char *s = ft_strnstr(a,l,8);
	char *j = strnstr(a,l,8);
	printf("%s\n%s",s,j);
}
