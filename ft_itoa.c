/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 20:03:00 by wcaetano          #+#    #+#             */
/*   Updated: 2022/06/04 11:49:44 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_buffer_size(int n)
{
	int				size;
	unsigned int	tmp;

	size = 1;
	if (n <= 0)
	{
		tmp = -n;
		size++;
	}
	else
		tmp = n;
	while (tmp)
	{
		size++;
		tmp /= 10;
	}
	return (size);
}

static unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char			*buffer;
	int				buffer_size;

	buffer_size = get_buffer_size(n);
	buffer = malloc(buffer_size);
	if (!buffer)
		return (NULL);
	ft_memset(buffer, '0', buffer_size);
	buffer[--buffer_size] = '\0';
	if (n < 0)
		buffer[0] = '-';
	while (n)
	{
		buffer[--buffer_size] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	return (buffer);
}
