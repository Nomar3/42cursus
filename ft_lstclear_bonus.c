/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 21:26:40 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/11 22:16:11 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ls1;
	t_list	*ls2;

	ls1 = *lst;
	if (lst)
	{
		while (ls1)
		{
			ls2 = ls1->next;
			del(ls1->content);
			free(ls1);
			ls1 = ls2;
		}
		*lst = NULL;
	}
}
