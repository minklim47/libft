/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:47:11 by climpras          #+#    #+#             */
/*   Updated: 2022/08/27 19:58:13 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (n > 0)
	{
		*((char *)dst+ i) = *((char *)src + i);
		i++;
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[] = "Geeks";
	char	src[] = "Quiz";

	printf("%s\n", memcpy(dst, src, sizeof(src)));
	printf("%s\n", ft_memcpy(dst, src, sizeof(src)));	
}
*/
