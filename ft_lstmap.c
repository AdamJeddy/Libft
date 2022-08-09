/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:37:33 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/09 08:32:07 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp_node;

	new_lst = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		temp_node = ft_lstnew(f(lst-> content));
		if (!temp_node)
		{
			ft_lstclear(&temp_node, del);
			return (new_lst);
		}
		ft_lstadd_back(&new_lst, temp_node);
		lst = lst-> next;
	}
	return (new_lst);
}
