/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:42:07 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/21 13:10:11 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 255 || c == EOF)
		return (c);
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		return ((unsigned char) c + 'A' - 'a');
	return ((unsigned char) c);
}
