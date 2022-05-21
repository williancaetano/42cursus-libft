/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:02:15 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 16:07:45 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char sep)
{
	while (*s && *s == sep)
		s++;
	if (!*s)
		return (0);
	while (*s && *s != sep)
		s++;
	return (1 + count_words(s, sep));
}

static void	*free_tab(char **tab, size_t n)
{
	while (n--)
		free(tab[n]);
	free(tab);
	return (NULL);
}

static size_t	word_len(char const *s, char sep)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != sep)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	tab[words] = NULL;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tab[i] = ft_substr(s, 0, word_len(s, c));
			if (!tab[i++])
				return (free_tab(tab, i));
		}
		s += word_len(s, c);
	}
	return (tab);
}
