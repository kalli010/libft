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
	
}
