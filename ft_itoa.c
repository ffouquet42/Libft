/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 06:35:40 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/13 12:26:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dest;
	long	nb;

	nb = n;
	i = ft_nbrlen(nb);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[i--] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		dest[0] = '0';
	while (nb > 0)
	{
		dest[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (dest);
}

/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(0));
}
*/