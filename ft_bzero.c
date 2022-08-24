/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:12:10 by climpras          #+#    #+#             */
/*   Updated: 2022/08/24 21:12:22 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void    ft_bzero(void *s, size_t n)
{
        if (n > 0)
        {
                *(char*)s = '\0';
        }
}

int     main(void)
{
        char    s1[] = "123456";
        bzero(s1+3, 3);
        printf("%s\n", s1);

        char    s2[] = "123456";
        bzero(s2+3, 3);
        printf("%s\n", s2);
}
