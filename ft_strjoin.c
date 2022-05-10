/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:12:50 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 05:18:20 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		dest[j] = s2[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_strjoin("coucou", "soundous"));
}
*/