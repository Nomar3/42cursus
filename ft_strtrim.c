/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:24:41 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/04 20:32:39 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	if (!s1[0])
		return (ft_strdup(""));
	while (i <= len && ft_strchr(set, s1[i]))
		i++;
	if (i > len)
		return (ft_strdup(s1 + len + 1));
	while (ft_strchr(set, s1[len]) && len >= 0)
		len--;
	ptr = (char *) malloc(sizeof(char) * (len - i + 2));
	if (!ptr)
		return (NULL);
	s1 += i;
	ft_strlcpy (ptr, s1, len - i + 2);
	return (ptr);
}
