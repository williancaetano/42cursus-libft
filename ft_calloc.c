/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:47:35 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 15:09:12 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if ((total_size / nmemb) != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
