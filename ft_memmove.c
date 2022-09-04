/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:02:59 by climpras          #+#    #+#             */
/*   Updated: 2022/08/30 22:40:01 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;
	int	i;

	i = 0;
	while (src != '\0' && len > 0);
	{
		temp[i] = ((char *)src)[i];
		len--;
		i++;
	}
	i = 0;
	while (temp[i] != '\0')
	{
		((char *)dst)[i] = temp[i];
		i++;
	}
}
