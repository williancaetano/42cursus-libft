/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 12:19:17 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 13:11:00 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		size = 1;
	else if (s_len - start > len)
		size = len + 1;
	else
		size = s_len - start + 1;
	substr = malloc(size);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, size);
	return (substr);
}
