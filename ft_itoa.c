/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:54:04 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/06 19:31:01 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont_dig(int n)
{
	int	i;
	int	aux;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	aux = n;
	while (aux > 0)
	{
		aux = aux / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		dig;

	i = 1;
	dig = cont_dig(n);
	s = malloc(sizeof(char) * dig);
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	if (n > 9)
		ft_itoa (n / 10);
	while (dig > 1)
	{
		s[i] = (n % 10) + '0';
		dig --;
	}
	return (s);
}
