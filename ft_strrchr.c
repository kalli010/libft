/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:12:53 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/09 11:53:47 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*r;

	r = NULL;
	while (*str)
	{
		if (*str == (char)c)
			r = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)r);
}
