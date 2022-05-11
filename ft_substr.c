/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 05:04:05 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/11 10:00:36 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> // delete

/* STRLEN */
size_t	word_length(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	//printf("%zu\n", i);
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;
	size_t	size;
	size_t word_size;

	word_size = word_length(s);
	i = (size_t)start;
	size = len;

	/* SECURITE */
	if (s == NULL)
		return (NULL);

	/* MALLOC */
	if (i > word_size)
		size = 0;
	if (len > word_size)
		size = word_size;
	if (len > word_size && (i + len) > word_size)
		size = len - i;
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);

	/* SECURITE */
	i = 0;
	while (s[i] != '\0')
		i++;
	if (start + 1 > (unsigned int)i)
	{
		dest[0] = '\0';
		return (dest);
	}

	/* COPIE */
	i = (size_t)start;
	j = 0;
	while ((j < len) && s[i] != '\0')
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_substr("tripouille", 5, 5));
}
*/