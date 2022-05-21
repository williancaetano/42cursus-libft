/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:09:10 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 17:52:24 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			buf[50];
	unsigned int	tmp;
	int				i;

	i = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
	{
		tmp = -n;
		write(fd, "-", 1);
	}
	else
		tmp = n;
	while (tmp)
	{
		buf[i++] = (tmp % 10) + '0';
		tmp /= 10;
	}
	while (i--)
		write(fd, buf + i, 1);
}
