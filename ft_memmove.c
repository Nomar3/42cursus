/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:50:22 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/30 13:24:55 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	if (!cdst && !csrc && len)
		return (dst);
	if (cdst < csrc)
	{
		while (len--)
			*cdst++ = *csrc++;
	}
	else
	{
		cdst += len -1;
		csrc += len -1;
		while (len--)
			*cdst-- = *csrc--;
	}
	return (dst);
}
