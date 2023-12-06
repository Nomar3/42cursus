/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:14:48 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/30 13:34:48 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t		i;
	char		*a;

	i = 0;
	a = (char *) str;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return ((void *) a);
}
