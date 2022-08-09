/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:03:19 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/09 11:29:20 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*hld;

	i = -1;
	if (!s)
		return (NULL);
	hld = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!hld)
		return (NULL);
	while (s[++i])
		hld[i] = f(i, s[i]);
	hld[i] = '\0';
	return (hld);
}
