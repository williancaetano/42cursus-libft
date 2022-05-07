/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:01:01 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/07 17:35:21 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *s, int c)
{
	while(*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if(!c)
		return ((char *) s);
	return(NULL);
}
