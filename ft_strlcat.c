/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:31:09 by climpras          #+#    #+#             */
/*   Updated: 2022/09/19 10:11:02 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	
	j = ft_strlen(dst);
	i = 0;
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (src[i] && (j < dstsize - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
/*
int	main(void)
{
	char	dst1[100] = "Hello";
	char	dst2[100] = "Hello";
	const	char src[100] = "HI";
	size_t	dstsize = 100;
	printf("real = %lu\n", strlcat(dst1, src, dstsize));
	printf("mine = %lu\n", ft_strlcat(dst2, src, dstsize));
}*/
