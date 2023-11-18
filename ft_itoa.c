/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelkalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:45:43 by zelkalai          #+#    #+#             */
/*   Updated: 2023/11/17 22:35:19 by zelkalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check(long num, char *str, int len)
{
	int	i;

	i = 0;
	if (num == 0)
		str[0] = '0';
	else if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	i = len - 1;
	while (num != 0)
	{
		str[i] = (num % 10) + '0';
		i--;
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	int		len;
	long	temp;

	num = n;
	temp = num;
	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	ft_check(num, str, len);
	return (str);
}
