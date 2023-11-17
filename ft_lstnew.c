/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:33:28 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/17 14:50:09 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *a;

	a = malloc(sizeof(t_list));
	if(!a)
		return (NULL);

	a->content = content;
	a->next = '\0';
	return (a);	
}
