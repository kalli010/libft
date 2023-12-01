/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:38:01 by zelkalai          #+#    #+#             */
/*   Updated: 2023/12/01 18:12:59 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

void	use_check(const char *s1, const char *set, size_t *start, size_t *end)
{
	*start = 0;
	*end = ft_strlen(s1);
	while (s1[*start] != '\0' && ft_check(s1[*start], set) == 1)
		(*start)++;
	while (*end > *start && ft_check(s1[*end - 1], set) == 1)
		(*end)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	use_check(s1, set, &start, &end);
	str = (char *)malloc(sizeof(*str) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = '\0';
	return (str);
}
