/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:19:56 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 05:29:09 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char c, char const *set)
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

char	*ft_trim(char *dest, char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_charset(s1[i], set) == 0)
		{
			dest[j] = s1[i];
			j++;
		}
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	while (s1[i])
	{
		if (is_charset(s1[i], set) == 0)
			size++;
		i++;
	}
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	dest = ft_trim(dest, s1, set);
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strtrim("coucou soundous", "os"));
}
*/