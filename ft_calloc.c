/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:53:39 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/14 19:47:40 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*p;
	size_t	total;

	p = NULL;
	total = nelem * elsize;
	if (!total)
		return (malloc(0));
	if (nelem && ((total / nelem) != elsize))
		return (NULL);
	p = (void *)malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return ((void *)p);
}
