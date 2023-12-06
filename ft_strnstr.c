/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:48:21 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/02 19:37:24 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *) needle;
	i = 0;
	if (!*needle)
		return ((char *) haystack);
	if ((size_t)ft_strlen(ptr) > (size_t)ft_strlen((char *)haystack)
		|| (size_t)ft_strlen(ptr) > len)
		return (0);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (ptr[j] == haystack[i + j] && i + j < len)
		{
			j++;
			if (j == (size_t)ft_strlen(ptr))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
