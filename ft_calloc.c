/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:35:19 by climpras          #+#    #+#             */
/*   Updated: 2022/09/17 04:50:12 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(size * count);
	if (!dest)
		return (0);
	i = 0;
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
