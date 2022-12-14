/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:47:11 by climpras          #+#    #+#             */
/*   Updated: 2022/10/17 14:16:25 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (n > 0)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
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
