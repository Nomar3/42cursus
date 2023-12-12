/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:09:47 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/12/12 15:36:50 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_node;
	void	*n_cont;

	n_lst = NULL;
	while (lst)
	{
		n_cont = f(lst->content);
		if (!n_cont)
		{
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		n_node = ft_lstnew(n_cont);
		if (!n_node)
		{
			del(n_cont);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_node);
		n_node->next = NULL;
		lst = lst->next;
	}
	return (n_lst);
}
