/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:47:58 by pmethira          #+#    #+#             */
/*   Updated: 2022/02/25 14:03:45 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	totalsize;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	totalsize = lendst + lensrc;
	i = 0;
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	while (src[i] && lendst < dstsize - 1)
	{
		dst[lendst] = src[i];
		i++;
		lendst++;
	}
	dst[lendst] = '\0';
	return (totalsize);
}
