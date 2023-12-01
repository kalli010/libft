/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 13:00:26 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/18 23:36:44 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;
	t_list	*n;

	if (lst == NULL || del == NULL)
		return ;
	c = *lst;
	while (c != NULL)
	{
		n = c->next;
		del(c->content);
		free(c);
		c = n;
	}
	*lst = NULL;
}
