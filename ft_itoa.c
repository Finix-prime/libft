/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 13:51:00 by pmethira          #+#    #+#             */
/*   Updated: 2022/02/26 14:01:54 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*toa(char *str, int i, long int n)
{
	size_t	div;

	div = 10;
	while ((n / div) != 0)
		div = div * 10;
	div = div / 10;
	while (div != 0)
	{
		str[i++] = (n / div) + '0';
		n = n % div;
		div = div / 10;
		if (!div)
			break ;
	}
	str[i] = '\0';
	return (str);
}

static	size_t	length(long int n)
{
	size_t	div;
	size_t	i;

	div = 1;
	i = 0;
	while ((n / div) != 0)
	{
		i++;
		div = div * 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*str;
	size_t		size;
	size_t		i;
	int			p;

	p = 0;
	i = 0;
	nb = n;
	if (nb < 0)
	{
		p = 1;
		nb = nb * (-1);
	}
	size = length(nb);
	str = malloc(sizeof(char) * (size + p + 1));
	if (!str)
		return (0);
	if (p)
		str[i++] = '-';
	return (toa(str, i, nb));
}
