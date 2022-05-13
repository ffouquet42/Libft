/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:19:56 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/13 15:05:03 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_len(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] && is_charset(s1[i], set))
	{
		len++;
		i++;
	}
	i = ft_strlen(s1) - 1;
	while (s1[i] && is_charset(s1[i], set))
	{
		len++;
		i--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		len;
	int		i;
	int		j;

	len = ft_strlen(s1) - ft_len(s1, set);
	if (len < 0)
		len = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i] && is_charset(s1[i], set))
		i++;
	j = 0;
	while (j < len)
	{
		dest[j] = s1[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
