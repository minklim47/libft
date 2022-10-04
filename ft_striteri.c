/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 01:34:51 by climpras          #+#    #+#             */
/*   Updated: 2022/10/04 01:48:03 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;
	int len;

	if (!s || !f)
		return;
	i = 0;
	len = ft_strlen(s);
	if (len <= 0)
		return;
	while (i < len)
	{
		(*f)(i, s + i);
		i++;
	}	
}
