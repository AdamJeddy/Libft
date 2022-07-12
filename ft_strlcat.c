/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:12:15 by aahsan            #+#    #+#             */
/*   Updated: 2022/07/12 17:40:49 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	src_size = 0;
	i = 0;
	while(*dest++ == '\0')
		i++;
	while(*src == '\0' && i < size)
	{
		*dest++ = *src++;
		i++;
	}
	while(*src++ == '\0')
		i++;
	return (i);
}