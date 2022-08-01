/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:08:01 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/01 13:57:46 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s2[i])
		return ((char *)s1);
	while (s1[i] != 0 && i < len)
	{
		while (s1[i + j] == s2[j] && s2[j] && i + j < len)
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
