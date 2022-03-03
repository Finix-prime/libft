/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:54:02 by pmethira          #+#    #+#             */
/*   Updated: 2022/02/26 15:25:58 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	putnbr(int n, int fd)
{
	int	i;
	int	c;

	i = 1000000000;
	c = n;
	if (n == 0)
	{
		write (fd, "0", 1);
		return ;
	}
	while ((n / i) == 0)
		i = i / 10;
	while (i >= 1)
	{
		c = ((n / i) % 10) + '0';
		write (fd, &c, 1);
		i = i / 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		n = n * (-1);
		write (fd, "-", 1);
		putnbr(n, fd);
	}
	else
		putnbr(n, fd);
}
