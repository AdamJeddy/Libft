/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:30:32 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/02 14:21:29 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int num)
{
	char	*temp;

	temp = 0;
	while (*str)
	{	
		if (*str == (char) num)
			temp = str;
		str++;
	}
	if (temp != 0)
		return (temp);
	if (*str == '\0' && num == '\0')
		return (str);
	return (0);
}
