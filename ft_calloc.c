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
	void	*array;
	size_t	a;

	a = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (a / size != nmemb)
		return (NULL);
	array = malloc(a);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, a);
	return (array);
}
