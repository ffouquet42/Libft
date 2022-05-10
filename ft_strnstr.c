/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 01:57:30 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 02:37:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && k < len)
	{
		while (big[i] && big[i] == little[j] && (k + i) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i - j);
			j++;
			i++;
		}
		i = 0;
		j = 0;
		big++;
		k++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("%s\n", ft_strnstr("aaabcabcd", "a", 1));
	printf("%s\n", strnstr("aaabcabcd", "a", 1));
}
*/