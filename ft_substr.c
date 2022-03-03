/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:26:55 by pmethira          #+#    #+#             */
/*   Updated: 2022/02/28 14:41:42 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	i = 0;
	while (i < len && s[start] && start < ft_strlen(s))
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
