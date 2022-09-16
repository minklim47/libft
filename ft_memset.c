/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:29:46 by climpras          #+#    #+#             */
/*   Updated: 2022/09/17 05:12:41 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		*((unsigned char *)b + i) = c;
		i++;
		len -= sizeof(char);
	}
	return ((unsigned char *)b);
}

/*
int	main(void)
{
	char	s1[] = "12345678";
	memset(s1, '1', 10);
	printf("%s\n", s1);

	char	s2[] = "12345678";
	ft_memset(s2, '1', 10);
	printf("%s\n", s2);
}

	*/
