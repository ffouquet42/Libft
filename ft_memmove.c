/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:35:48 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 11:52:45 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*src_tmp;
	char		*dst_tmp;

	src_tmp = src;
	dst_tmp = dest;
	if (!n)
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	src_tmp += n;
	dst_tmp += n;
	while (n--)
		*--dst_tmp = *--src_tmp;
	return (dest);
}
