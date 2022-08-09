/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 08:21:01 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/09 12:45:28 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_str_digit_len(int num)
{
	int	i;

	i = 0;
	if (num <= 0)
	{
		num *= -1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long		num;

	if (n == -2147483648)
		return (ft_strjoin("", "-2147483648"));
	if (n == 0)
		return (ft_strjoin("", "0"));
	len = ft_get_str_digit_len(n);
	num = n;
	str = (char *) malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
