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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	t;

	t = nmemb * size;
	if (nmemb > 0 && size > 0)
	{
		if (t / size != nmemb)
			return (NULL);
		p = malloc(t);
		if (p == NULL)
			return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		p = malloc(1);
		ft_bzero(p, 1);
		return (p);
	}
	ft_bzero(p, t);
	return (p);
}
