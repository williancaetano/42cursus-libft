/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 10:45:03 by WCAETANO          #+#    #+#             */
/*   Updated: 2022/05/21 13:07:44 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > UCHAR_MAX)
		return (0);
	return (((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		|| ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z'));
}
