/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 07:22:58 by aahsan            #+#    #+#             */
/*   Updated: 2022/08/09 08:31:38 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* *** REOMOVEEE *** */
#include <stdio.h>

static int	ft_word_count(char const *s, char c)
{
	int		i;
	int		word_count;

	i = -1;
	word_count = 0;
	while (s[++i])
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			word_count++;
	return (word_count);
}

static char	*ft_cpytill(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	word = (char *)malloc(sizeof(char) * i + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s, i);
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		word_count;
	int		i;

	i = -1;
	word_count = ft_word_count(s, c);
	words = (char **)malloc(sizeof(char *) * word_count + 1);
	if (!words)
		return (NULL);
	while (++i < word_count)
	{
		while (*s == c)
			s++;
		words[i] = ft_cpytill(s, c);
		if (!words[i])
		{
			while (i)
				free(words[i--]);
			return (NULL);
		}
		s += ft_strlen(words[i]);
	}
	words[i] = '\0';
	return (words);
}
