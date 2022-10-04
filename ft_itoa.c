/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:37:46 by climpras          #+#    #+#             */
/*   Updated: 2022/10/04 13:18:06 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	findsize(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	power(int n)
{
	int pow;

	pow = 1;
	while (n > 1)
	{
		pow *= 10;
		n--;
	}
	return (pow);
}

char	*ft_itoa(int n)
{
	int	size;
	char	*str;
	int	j;
	char	*p;

	size = findsize(n);
	str = malloc(size + 1);
	if (!str)
		return (0);
	p = str;
	if (n < 0)
	{
		j = power(size - 1);
		n *= -1;
		*str++ = '-';
	}
	else
		j = power(size);
	while (j >= 1)
	{
		*str++ = (n / j) + '0'; 
		n %= j;
		j /= 10;
	}
	*str = '\0';
	return (p);
}

int	main(void)
{
	printf("%s\n",ft_itoa(-123456));
}
