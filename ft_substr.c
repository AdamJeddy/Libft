/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 07:22:28 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/02 07:44:46 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	i = -1;
	str = (char *) malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (++i < len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
