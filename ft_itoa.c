/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 06:35:40 by fllanet           #+#    #+#             */
/*   Updated: 2022/05/10 06:45:39 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
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

	i = ft_nbrlen(n);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	i--;
	if (n < 0)
	{
		dest[0] = '-';
		n *= -1;
	}
	if (n == 0)
	{
		dest[0] = '0';
		return (dest);
	}
	while (n > 0)
	{
		dest[i--] = '0' + (n % 10);
		n /= 10;
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