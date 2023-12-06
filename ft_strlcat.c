/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 14:41:46 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/30 18:12:40 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	ldst = i;
	lsrc = (size_t)ft_strlen(src);
	if ((dstsize == 0) || (dstsize <= ldst))
		return (lsrc + dstsize);
	while (src[j] && (j < (dstsize - 1 - ldst)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lsrc + ldst);
}
