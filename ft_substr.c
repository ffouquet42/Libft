/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:04:05 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 05:10:55 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	if (start + 1 > (unsigned int)i)
	{
		dest[0] = '\0';
		return (dest);
	}
	i = (size_t)start;
	j = 0;
	while (j < len)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_substr("soundous", 0, 7));
}
*/