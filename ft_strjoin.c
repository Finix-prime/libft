/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:13:43 by pmethira          #+#    #+#             */
/*   Updated: 2022/02/18 17:19:22 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (i + j) + 1);
	if (!s3)
		return (0);
	while (*s1)
	{
		*s3 = *s1;
		s3++;
		s1++;
	}
	while (*s2)
	{
		*s3 = *s2;
		s3++;
		s2++;
	}
	*s3 = '\0';
	return (s3 - i - j);
}
