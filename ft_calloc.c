/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:35:19 by climpras          #+#    #+#             */
/*   Updated: 2022/10/13 15:57:34 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;

	if (size > 9223372036854775807 || count > 9223372036854775807)
		return (0);
	dest = (void *)malloc(size * count);
	if (!dest)
		return (0);
	ft_bzero(dest, count * size);
	return (dest);
}
