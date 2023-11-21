/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:35:52 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/10 21:52:18 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	if (!big && !len)
		return (NULL);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && little_len <= len - i)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0')
			j++;
		if (little_len == j)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
