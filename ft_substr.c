/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 07:22:28 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/04 14:52:57 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			s_size;

	if (!s)
		return (NULL);
	s_size = ft_strlen(s);
	if (s_size < start)
		return (ft_strdup(""));
	if (len == s_size)
		str = (char *) malloc(sizeof(char) * (s_size - start + 1));
	else if (len < s_size)
		str = (char *) malloc(sizeof(char) * (len + 1));
	else
		str = (char *) malloc(sizeof(char) * (s_size + 1));
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
