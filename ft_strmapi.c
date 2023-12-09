/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:59:08 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/07 21:01:20 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*res;

	if (!s)
		return (NULL);
	str = malloc((sizeof(char)) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	res = str;
	while (*s)
		*str++ = f(i++, (char) *s++);
	*str = '\0';
	return (res);
}
