/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 08:21:01 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/02 13:51:41 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_digit_len(int num)
{
	size_t	i;

	i = 1;
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*str;
	int			num;

	if (n == -2147483648)
		return (ft_strjoin("", "-2147483648"));
	len = get_str_digit_len(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		len++;
	}
	str = (char *) malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	str[--len] = num % 10 + '0';
	while (num)
	{
		num /= 10;
		str[--len] = num % 10 + '0';
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
