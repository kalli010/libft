/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:50:42 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/14 17:30:45 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
	size_t	s;
	size_t	d;

	slen = ft_strlen(src);
	if (!dest && dstsize == 0)
		return (slen);
	dlen = ft_strlen(dest);
	d = dlen;
	s = 0;
	if (dstsize == 0 || dstsize <= dlen)
		return (dstsize + slen);
	while (d < dstsize - 1 && src[s] != '\0')
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dlen + slen);
}
