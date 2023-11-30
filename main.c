#include "libft.h"

void ft_del(void *content)
{
	free(content);
}

void *ft_a(void *f)
{
	printf("%s\n",(char *)f);
}

void ft_j(void *y)
{
	char *d = (char *)y;
	d = d + 1;
}

int main ()
{
	t_list *b = ft_lstnew(ft_strdup(" 1 "));
	t_list *f = ft_lstnew(ft_strdup(" 2 "));
	t_list *c = ft_lstnew(ft_strdup(" 3 "));
	t_list *head = NULL;

	ft_lstadd_front(&head, c);
	ft_lstadd_back(&head, b);
	ft_lstadd_front(0, 0);
	return 0;	
	int s = ft_lstsize(head);
	printf("%d\n",s);

	ft_lstdelone(c,ft_del);
	f->next = b;
	
	ft_lstiter(b, ft_j);
	t_list *p = ft_lstmap(head, ft_a,ft_del);

	free(p);
}
