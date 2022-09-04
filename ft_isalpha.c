/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:35:11 by climpras          #+#    #+#             */
/*   Updated: 2022/08/30 22:46:15 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d\n", isalpha(4));
	printf("%d\n", ft_isalpha(4));
}*/



