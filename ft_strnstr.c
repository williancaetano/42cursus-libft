/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:23:22 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 13:11:00 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(needle);
	if (!l_len)
		return ((char *)haystack);
	if (len <= 0 || !ft_strlen(haystack) || ft_strlen(haystack) < l_len)
		return (NULL);
	while (i < len - l_len + 1)
	{
		j = 0;
		while (j < l_len)
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (j == l_len)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
