/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:15:08 by climpras          #+#    #+#             */
/*   Updated: 2022/08/24 21:28:40 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') 
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int	main(void)
{
	printf("%d\n", isalnum('#'));
	printf("%d\n", ft_isalnum('#'));
}
