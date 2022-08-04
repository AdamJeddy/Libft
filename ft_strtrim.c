/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:19:42 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/04 17:26:15 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_size;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr((char *)set, *s1))
		s1++;
	str_size = ft_strlen(s1);
	while (str_size && ft_strchr((char *)set, s1[str_size]))
		str_size--;
	str = ft_substr(s1, 0, str_size + 1);
	return (str);
}
