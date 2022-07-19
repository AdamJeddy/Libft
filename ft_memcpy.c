/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:13:36 by aahsan            #+#    #+#             */
/*   Updated: 2022/07/19 12:28:17 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = -1;
	if (dest == NULL && src == NULL)
		return (0);
	while (++i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
