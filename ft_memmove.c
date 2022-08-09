/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:03:11 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/09 11:14:01 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*t_dest;
	char	*t_src;
	size_t	i;

	t_dest = (char *)dest;
	t_src = (char *)src;
	i = -1;
	if (!t_dest && !t_src)
		return (NULL);
	if (t_dest > t_src)
		while ((int)--len >= 0)
			t_dest[len] = t_src[len];
	else
		while (++i < len)
			t_dest[i] = t_src[i];
	return (t_dest);
}
