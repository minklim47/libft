/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:31:09 by climpras          #+#    #+#             */
/*   Updated: 2022/09/17 04:30:32 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
//	printf("%d", j);
	if (!dst || !src)
		return (ft_strlen(dst) + ft_strlen(src));
	while (dst[j] && i < dstsize - ft_strlen(dst) - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst) + dstsize);
}
/*
int	main(void)
{
	char	dst[100] = "Hello";
	char	const char src[100] = "HI";
	size_t	dstsize = 7;
	ft_strlcat(dst, src, dstsize);
}*/
