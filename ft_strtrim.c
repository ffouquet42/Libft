/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:19:56 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/11 14:13:13 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char const *set, char c)
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

size_t	ft_countset(char const *str, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_isset(set, str[i]) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*trim;

	len = ft_countset(s1, set);
	trim = (char *)malloc(sizeof(char) * (len + 1));
	if (!trim)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		if (ft_isset(set, s1[i]) == 0)
			trim[j++] = s1[i];
	trim[j] = '\0';
	return (trim);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("ooocoucouooo", "o")); // coucou 
}
*/