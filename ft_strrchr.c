/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:41:07 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/30 14:02:16 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*p;
	char	*p2;

	p = (char *)str;
	p2 = p;
	while (*p != '\0')
	{
		if (*p == (char)c)
			p2 = p;
		p++;
	}
	if ((char)c == '\0')
	{
		p2 = p;
		return (p2);
	}
	if (*p2 == (char)c)
		return (p2);
	return (0);
}
