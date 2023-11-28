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
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
	
	ft_putnbr_fd(39852345,-1);
}
