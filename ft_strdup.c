/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 03:09:42 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 03:13:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*tmp;
	char	*dest;

	tmp = (char *)s;
	i = 0;
	while (tmp[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (tmp[i])
	{
		dest[i] = tmp[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
