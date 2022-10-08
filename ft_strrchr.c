/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: climpras <climpras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:44:55 by climpras          #+#    #+#             */
/*   Updated: 2022/10/08 15:04:09 by climpras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*last;

	x = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			last = s;
			x = 1;
		}
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	if (x == 0)
	{
		return (NULL);
	}
	return ((char *)last);
}
/*
int	main(void)
{
	printf("%s\n", strrchr("Helllo", 'l'));
	printf("%s\n", ft_strrchr("Hello", 'l'));
}*/
