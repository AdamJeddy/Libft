/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:36:55 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/03 14:41:17 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*temp;

	if (!*lst)
		return ;
	temp = *lst;
	while (*lst)
	{
		*lst = (*lst)-> next;
		ft_lstdelone(temp, del);
		temp = *lst;
	}
	temp = NULL;
}
