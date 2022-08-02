/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 07:22:28 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/02 15:05:28 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;
	size_t			s_size;

	i = 0;
	s_size = ft_strlen(s);
	if (len < s_size)
		str = (char *) malloc(sizeof(char) * (len + 1));
	else
		str = (char *) malloc(sizeof(char) * (s_size + 1));
	if (!str)
		return (NULL);
	while (i < len && i < s_size && start < s_size)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
