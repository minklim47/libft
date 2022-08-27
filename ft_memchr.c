/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:08:54 by climpras          #+#    #+#             */
/*   Updated: 2022/08/27 19:25:34 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0 && *(char *)s != c)
	{
		s = (char *)s + 1;
		n--;
	}
	if (n == 0)
		return (NULL);
	return ((char *)s);
}
/*
int	main(void)
{
	printf("%s\n", memchr("Hello", 'a', 5));
	printf("%s\n", ft_memchr("Hello", 'a', 5));	
}
*/
