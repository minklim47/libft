/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 23:31:09 by climpras          #+#    #+#             */
/*   Updated: 2022/09/04 16:01:28 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int	j;

	j = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (0);
	while (src && i <= size - ft_strlen(dst) - 1)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (ft_strlen(dst));
}

