/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:29:46 by climpras          #+#    #+#             */
/*   Updated: 2022/08/23 23:21:45 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


void	*ft_memset(void *s, int c, size_t n)
{
	while (*(char*)s != '\0' && n > 0)
	{
		*(char*)s = c;
		s = (char*)s + 1;
		n--;
	}
	return (0);
}


int	main(void)
{
	char	s1[] = "12345678";
	memset(s1, '1', 10);
	printf("%s\n", s1);

	char	s2[] = "12345678";
	ft_memset(s2, '1', 10 );
	printf("%s\n", s2);
}
	
