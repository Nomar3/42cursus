/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:27:13 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/09 14:50:12 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont_word(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s[i])
		return (0);
	while (s[i])
	{
		if ((s[i + 1] == '\0' || s[i + 1] == c) && s[i] != c)
			j++;
		i++;
	}
	return (j);
}

int	ft_free(const char *sub_s, char **ptr, char c, int *k)
{
	int	j;

	j = 0;
	while (sub_s[j] != c && sub_s[j])
		j++;
	ptr[*k] = ft_substr(sub_s, 0, j);
	if (!ptr[*k])
	{
		while (*k >= 0)
			free(ptr[(*k)--]);
		free(ptr);
		return (-1);
	}
	(*k)++;
	return (*k);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**ptr;

	i = -1;
	k = 0;
	ptr = malloc (sizeof(char *) * (cont_word(s, c) + 1));
	if (!ptr)
		return (NULL);
	while (s[++i])
	{
		j = 0;
		if (s[i] != c)
		{
			while (s[i + j] != c && s[i + j])
				j++;
			k = ft_free(&s[i], ptr, c, &k);
			if (k == -1)
				return (NULL);
			i += j -1;
		}
	}
	ptr[k] = 0;
	return (ptr);
}
