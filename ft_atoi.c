/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:52:06 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/09 14:10:40 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	long	num;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] != '\0')
	{
		if (sign == -1 && i == 20 && str[i] >= '8')
			return (0);
		if (sign == 1 && i == 19 && str[i] >= '7')
			return (-1);
		if (str[i] >= '0' && str[i] <= '9')
			num = (num * 10) + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (sign * num);
}
