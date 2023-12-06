/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:27:13 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/05 17:02:01 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i + 1] == c && s[i] != c)
			j++;
		i++;
	}
	if (s[i -1] != c)
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ptr;

	i = 0;
	k = 0;
	ptr = malloc (sizeof(char *) * (cont_word(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c)
				j++;
			ptr[k] = ft_substr(s, i, j);
			k++;
			i += j;
		}
		else
			i++;
	}
	ptr[k] = 0;
	return (ptr);
}
