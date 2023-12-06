/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:41:06 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/30 20:18:07 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		n;
	int		i;
	char	*ptr;
	char	*aux;

	aux = (char *)s1;
	i = 0;
	n = ft_strlen(aux) + 1;
	if (!s1)
		return (0);
	ptr = (char *)malloc(sizeof (char) * n);
	if (!ptr)
		return (0);
	while (aux[i])
	{
		ptr[i] = aux[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
