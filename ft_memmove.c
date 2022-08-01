/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:03:11 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/01 14:00:09 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * len);
	if (!dest && !src)
		return (NULL);
	ft_memcpy(temp, src, len);
	ft_memcpy(dest, temp, len);
	free(temp);
	return (dest);
}
