/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:06 by pmethira          #+#    #+#             */
/*   Updated: 2022/03/02 13:42:34 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	inset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	while (inset(set, s1[i]) == 1 && s1[i] != 0)
		i++;
	j = ft_strlen(s1) - 1;
	while (inset(set, s1[j]) == 1 && s1[j] != 0)
		j--;
	size = j - i;
	if ((int)size < 0)
		size = 0;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	j = 0;
	while (j <= size)
	{
		str[j++] = s1[i++];
	}
	str[j] = '\0';
	return (str);
}
