/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:42:48 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/11 21:47:48 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		p;

	p = c;
	str = s;
	while (n != 0)
	{
		if (*str == p)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
