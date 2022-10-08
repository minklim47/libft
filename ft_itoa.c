/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:37:46 by climpras          #+#    #+#             */
/*   Updated: 2022/10/08 15:16:45 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	findsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	power(long n2)
{
	int	pow;

	pow = 1;
	if (n2 < 0)
		n2 *= -1;
	while (n2 > 9)
	{
		pow *= 10;
		n2 /= 10;
	}
	return (pow);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	j;
	char	*p;
	long	n2;

	n2 = (long)n;
	str = malloc(findsize(n2) + 1);
	if (!str)
		return (0);
	p = str;
	j = power(n2);
	if (n2 < 0)
	{
		n2 *= -1;
		*str++ = '-';
	}
	while (j >= 1)
	{
		*str++ = (n2 / j) + '0';
		n2 %= j;
		j /= 10;
	}
	*str = '\0';
	return (p);
}
/*
int	main(void)
{
	printf("%s**\n",ft_itoa(-623));
}
*/
