/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:36:47 by aahsan            #+#    #+#             */
/*   Updated: 2022/07/12 17:24:04 by aahsan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_isalpha(int alpha);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_toascii(int ch);
int		ft_strlen(char *str);
char	*ft_strchr(char *str, int num);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char	*ft_strrchr(char *str, int num);
void	*ft_memset(void *str, int ch, unsigned int n);

#endif