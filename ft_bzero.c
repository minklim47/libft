/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:12:10 by climpras          #+#    #+#             */
/*   Updated: 2022/10/08 22:15:32 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
/*
int     main(void)
{
        char    s1[] = "123456";
        bzero(s1+3, 2);
        printf("%s\n", s1);

        char    s2[] = "123456";
        ft_bzero(s2+3, 2);
        printf("%s\n", s2);
}
*/
