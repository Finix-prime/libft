/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:06:19 by pmethira          #+#    #+#             */
/*   Updated: 2022/03/01 14:51:14 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*p;

	if (!s)
		return (0);
	i = 0;
	p = (char *)s;
	while (i < n)
	{
		if (p[i] == (char)c)
		{
			return (&p[i]);
		}
			i++;
	}
	return (0);
}
