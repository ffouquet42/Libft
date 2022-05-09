/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:35:48 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/09 21:59:43 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;
	unsigned char	*tmp;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dst_tmp = (unsigned char *)dest;
	src_tmp = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = src_tmp[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst_tmp[i] = tmp[i];
		i++;
	}
	// dst_tmp[i] = '\0';
	return (dst_tmp);
}
