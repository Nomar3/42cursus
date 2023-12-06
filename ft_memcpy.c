/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:50:03 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/29 15:14:13 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*cdst;
	char	*csrc;

	i = 0;
	if (dst != NULL || src != NULL)
	{
		cdst = (char *)dst;
		csrc = (char *)src;
		while (n > 0)
		{
			cdst[i] = csrc[i];
			i++;
			n--;
		}
	}
	return (dst);
}
