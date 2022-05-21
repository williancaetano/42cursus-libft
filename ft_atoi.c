/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:48:20 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 13:07:49 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ' );
}

int	ft_atoi(const char *nptr)
{
	int				signal;
	long long		result;

	signal = 1;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		signal = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result *= 10;
		result += *nptr - '0';
		nptr++;
	}
	return (result * signal);
}
