/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 13:10:01 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 16:25:36 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	find_start_end_index(char const *s1, char const *set, int *i, int *j)
{
	int	run;

	run = 1;
	while (*i <= *j && run)
	{
		run = 0;
		if (ft_strchr(set, s1[*i]))
			run = ++(*i);
		if (ft_strrchr(set, s1[*j]))
			run = (*j)--;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		run;
	int		size;
	char	*buffer;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	run = 1;
	j = ft_strlen(s1);
	find_start_end_index(s1, set, &i, &j);
	size = j - i + 1;
	if (size <= 0)
		return (ft_strdup(""));
	buffer = ft_substr(s1, i, size);
	if (!buffer)
		return (NULL);
	return (buffer);
}
