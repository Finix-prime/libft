/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:18:47 by pmethira          #+#    #+#             */
/*   Updated: 2022/02/28 13:24:24 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cp_dst;
	unsigned char	*cp_src;
	size_t			i;

	if (!dst && ! src)
		return (0);
	i = 0;
	cp_dst = (unsigned char *)dst;
	cp_src = (unsigned char *)src;
	if (cp_dst > cp_src)
	{
		while (len-- > 0)
			cp_dst[len] = cp_src[len];
	}
	else
	{
		while (i < len)
		{
			cp_dst[i] = cp_src[i];
			i++;
		}
	}
	return (dst);
}
