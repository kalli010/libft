#include "libft.h"
#include <fcntl.h>

void tpr(unsigned int i, char *c)
{
	while(c[i] != '\0')
	{
	     	if (c[i] >= 'a' && c[i] <= 'z')
        		c[i] = c[i] - 32;
		i++;
	}
}

int main ()
{
	char k = '\0';
	t_list *s = ft_lstnew(0);
	if (s == NULL)
		return 0;
	if (*(char  *)s->content == 0)
		printf("1");
	else
		printf("-1");	
	if (s->next == NULL)
		printf("\n2");
	else
		printf("-2");
	free(s);
}
