/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 06:20:29 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 06:34:33 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	words_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && is_charset(*s, c))
			s++;
		if (*s && !is_charset(*s, c))
		{
			count++;
			while (*s && !is_charset(*s, c))
				s++;
		}
	}
	return (count);
}

char	*malloc_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && !is_charset(s[i], c))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && !is_charset(s[i], c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		words;
	int		x;

	words = words_count(s, c);
	dest = malloc(sizeof(char *) * (words + 1));
	if (!dest)
		return (NULL);
	x = 0;
	while (*s)
	{
		while (*s && is_charset(*s, c))
			s++;
		if (*s && !is_charset(*s, c))
		{
			dest[x] = malloc_word(s, c);
			x++;
			while (*s && !is_charset(*s, c))
				s++;
		}
	}
	dest[x] = NULL;
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	char const *s = "ooo coucou soundousooooooo";
	char c = 'o';

	char **dest = ft_split(s, c);

	int i = 0;
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		i++;
	}
	//printf("%s\n", dest[i]);
}
*/